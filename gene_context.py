import os
import sys

# --- CONFIGURACIÓN ---
# Añade aquí los nombres de las carpetas que quieres ignorar.
# El script ignorará cualquier carpeta que contenga estas cadenas en su ruta.
IGNORE_DIRS = [
    "build",
    "external",
    "vendor",
    ".git",
    ".vscode",
    ".idea",
    "__pycache__"
]

# Tipos de archivo a incluir (archivos de texto/código)
INCLUDE_EXTENSIONS = [
    ".c", ".h", ".cpp", ".hpp", ".py", ".sh", ".yml", ".yaml",
    ".md", ".txt", ".json", ".xml", ".ini", ".cfg", ".conf",
    "Makefile", "Doxyfile", ".gitignore", ".gitmodules", ".clang-format"
]

# Archivos específicos a ignorar por su nombre exacto
IGNORE_FILES = [
    "gene_context.py"
]

# Tamaño máximo de archivo en bytes (para evitar incluir archivos muy grandes)
MAX_FILE_SIZE = 1024 * 1024  # 1 MB
# ---------------------

def is_binary(filepath):
    """
    Intenta detectar si un archivo es binario.
    Devuelve True si el archivo parece ser binario, False en caso contrario.
    """
    try:
        with open(filepath, 'rb') as f:
            chunk = f.read(1024)
        return b'\0' in chunk
    except IOError:
        return True

def should_ignore(path):
    """
    Comprueba si una ruta (archivo o directorio) debe ser ignorada.
    """
    # Ignorar directorios de la lista IGNORE_DIRS
    for ignored_dir in IGNORE_DIRS:
        # Usamos separadores para evitar coincidencias parciales (ej. 'src' en 'mysrc')
        # y os.path.normpath para manejar tanto / como \
        normalized_path = os.path.normpath(path)
        normalized_ignore = os.path.normpath(ignored_dir)
        if f'{os.sep}{normalized_ignore}{os.sep}' in normalized_path or \
           normalized_path.endswith(f'{os.sep}{normalized_ignore}'):
            return True
            
    # Ignorar archivos específicos
    if os.path.basename(path) in IGNORE_FILES:
        return True
        
    return False

def get_project_structure(root_dir):
    """
    Genera una representación del árbol de directorios.
    """
    structure = []
    # Normalizar root_dir para la comparación
    root_dir_norm = os.path.normpath(root_dir)
    
    for root, dirs, files in os.walk(root_dir, topdown=True):
        root_norm = os.path.normpath(root)
        
        # Filtra los directorios a ignorar para no descender en ellos
        dirs[:] = [d for d in dirs if not should_ignore(os.path.join(root_norm, d))]
        
        # Ignorar la raíz del directorio a ignorar
        if should_ignore(root_norm):
            continue

        # Calcula el nivel de indentación
        if root_norm == root_dir_norm:
            level = 0
            structure.append(f"{os.path.basename(root_dir)}/")
        else:
            relative_path = os.path.relpath(root_norm, root_dir_norm)
            level = relative_path.count(os.sep) + 1
            indent = ' ' * 4 * (level -1)
            structure.append(f"{indent}{os.path.basename(root)}/")

        
        sub_indent = ' ' * 4 * (level)
        for f in sorted(files):
            file_path = os.path.join(root_norm, f)
            if not should_ignore(file_path):
                structure.append(f"{sub_indent}{f}")
                
    return "\n".join(structure)

def get_file_contents(root_dir):
    """
    Recopila el contenido de todos los archivos relevantes.
    """
    all_contents = []
    root_dir_norm = os.path.normpath(root_dir)
    
    for root, dirs, files in os.walk(root_dir, topdown=True):
        root_norm = os.path.normpath(root)
        # Filtra los directorios a ignorar
        dirs[:] = [d for d in dirs if not should_ignore(os.path.join(root_norm, d))]
        
        if should_ignore(root_norm):
            continue

        for f in sorted(files):
            file_path = os.path.join(root_norm, f)
            file_path_rel = os.path.relpath(file_path, root_dir_norm).replace(os.sep, '/')

            # Comprobar si el archivo debe ser incluido por su extensión o nombre
            should_include = any(f.endswith(ext) for ext in INCLUDE_EXTENSIONS) or \
                             any(f == name for name in INCLUDE_EXTENSIONS if not name.startswith('.'))
            
            if should_ignore(file_path) or not should_include:
                continue

            # Comprobar si es binario o demasiado grande
            try:
                if os.path.getsize(file_path) > MAX_FILE_SIZE or is_binary(file_path):
                    all_contents.append(f"- **Archivo Omitido (Binario/Ejecutable):** `{file_path_rel}`")
                    continue
            except OSError:
                 all_contents.append(f"- **Archivo Omitido (Enlace simbólico o inaccesible):** `{file_path_rel}`")
                 continue
            
            try:
                with open(file_path, 'r', encoding='utf-8', errors='ignore') as file_content:
                    content = file_content.read()
                    # Determinar el tipo de lenguaje para el bloque de código
                    lang = ""
                    file_ext = os.path.splitext(f)[1]
                    if file_ext in [".c", ".h"]: lang = "c"
                    elif file_ext in [".cpp", ".hpp"]: lang = "cpp"
                    elif file_ext == ".py": lang = "python"
                    elif file_ext in [".yml", ".yaml"]: lang = "yaml"
                    elif file_ext == ".json": lang = "json"
                    elif file_ext == ".sh" or "Makefile" in f: lang = "bash"
                    
                    all_contents.append(f"---")
                    all_contents.append(f"### Archivo: `{file_path_rel}`")
                    all_contents.append(f"\n```{lang}")
                    all_contents.append(content)
                    all_contents.append("```")
                    all_contents.append("\n")

            except Exception as e:
                all_contents.append(f"- **Error al leer archivo:** `{file_path_rel}` ({e})")

    return "\n".join(all_contents)

def main(project_name=None):
    """
    Función principal que genera el contexto completo del proyecto.
    """
    root_dir = "."  # Directorio actual
    if project_name is None:
        project_name = os.path.basename(os.getcwd())
    
    output_filename = f"resumen_completo_proyecto.md"
    
    print(f"Generando resumen del proyecto '{project_name}'...")
    
    with open(output_filename, "w", encoding="utf-8") as f:
        f.write(f"# Contenido del Proyecto: {project_name}\n\n")
        
        f.write("## Estructura del Proyecto\n\n")
        f.write("```\n")
        # Pasamos os.getcwd() para tener un nombre base bonito en la estructura
        f.write(get_project_structure(root_dir))
        f.write("\n```\n\n")
        
        f.write("---\n\n")
        f.write("## Contenido de los Archivos\n\n")
        f.write(get_file_contents(root_dir))

    print(f"Resumen guardado en: {output_filename}")

if __name__ == "__main__":
    project_name_arg = sys.argv[1] if len(sys.argv) > 1 else None
    main(project_name_arg)