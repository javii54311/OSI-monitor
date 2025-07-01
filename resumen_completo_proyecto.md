# Contenido del Proyecto: so-i-24-javii54311

## Estructura del Proyecto

```
./
.clang-format
.gitignore
.gitmodules
CMakeLists.txt
Doxyfile
INSTALL.md
LICENSE
README.md
resumen_completo_proyecto.md
build/
    CMakeCache.txt
    CPackConfig.cmake
    CPackSourceConfig.cmake
    Makefile
    cmake_install.cmake
    CMakeFiles/
        CMakeConfigureLog.yaml
        CMakeDirectoryInformation.cmake
        Makefile.cmake
        Makefile2
        TargetDirectories.txt
        cmake.check_cache
        progress.marks
        3.28.3/
            CMakeCCompiler.cmake
            CMakeDetermineCompilerABI_C.bin
            CMakeSystem.cmake
            CompilerIdC/
                CMakeCCompilerId.c
                a.out
                tmp/
        CMakeScratch/
        pkgRedirects/
        monitor.dir/
            DependInfo.cmake
            build.make
            cmake_clean.cmake
            compiler_depend.make
            compiler_depend.ts
            depend.make
            flags.make
            link.txt
            progress.make
            src/
include/
    constants.h
    metric_exposer.h
    metrics.h
.github/
    .keep
    actions/
        building/
            action.yml
        documentation/
            action.yml
        style/
            action.yml
    workflows/
        QAWorkflow.yml
external/
    prometheus-client-c/
        .clang-format
        .gitignore
        CODEOWNERS
        Doxyfile
        LICENSE
        Makefile
        README.md
        VERSION
        auto
        example/
            Makefile
            README.md
            bar.c
            bar.h
            foo.c
            foo.h
            main.c
        docker/
            Makefile
        prom/
            CMakeLists.txt
            include/
                prom.h
                prom_alloc.h
                prom_collector.h
                prom_collector_registry.h
                prom_counter.h
                prom_gauge.h
                prom_histogram.h
                prom_histogram_buckets.h
                prom_linked_list.h
                prom_map.h
                prom_metric.h
                prom_metric_sample.h
                prom_metric_sample_histogram.h
            test/
                CMakeLists.txt
                prom_collector_registry_test.c
                prom_collector_test.c
                prom_counter_test.c
                prom_gauge_test.c
                prom_histogram_buckets_test.c
                prom_histogram_test.c
                prom_linked_list_test.c
                prom_map_test.c
                prom_metric_formatter_test.c
                prom_metric_sample_test.c
                prom_metric_test.c
                prom_process_limits_test.c
                prom_procfs_test.c
                prom_string_builder_test.c
                prom_test_helpers.c
                prom_test_helpers.h
                fixtures/
                    limits
                    stat
            src/
                prom_assert.h
                prom_collector.c
                prom_collector_registry.c
                prom_collector_registry_i.h
                prom_collector_registry_t.h
                prom_collector_t.h
                prom_counter.c
                prom_errors.h
                prom_gauge.c
                prom_histogram.c
                prom_histogram_buckets.c
                prom_linked_list.c
                prom_linked_list_i.h
                prom_linked_list_t.h
                prom_log.h
                prom_map.c
                prom_map_i.h
                prom_map_t.h
                prom_metric.c
                prom_metric_formatter.c
                prom_metric_formatter_i.h
                prom_metric_formatter_t.h
                prom_metric_i.h
                prom_metric_sample.c
                prom_metric_sample_histogram.c
                prom_metric_sample_histogram_i.h
                prom_metric_sample_histogram_t.h
                prom_metric_sample_i.h
                prom_metric_sample_t.h
                prom_metric_t.h
                prom_process_fds.c
                prom_process_fds_i.h
                prom_process_fds_t.h
                prom_process_limits.c
                prom_process_limits_i.h
                prom_process_limits_t.h
                prom_process_stat.c
                prom_process_stat_i.h
                prom_process_stat_t.h
                prom_procfs.c
                prom_procfs_i.h
                prom_procfs_t.h
                prom_string_builder.c
                prom_string_builder_i.h
                prom_string_builder_t.h
        docs/
            annotated.html
            bc_s.png
            bdwn.png
            classes.html
            closed.png
            dir_000003_000000.html
            dir_21619567660c3332e6a61228c76007f9.html
            dir_21619567660c3332e6a61228c76007f9_dep.dot
            dir_21619567660c3332e6a61228c76007f9_dep.map
            dir_21619567660c3332e6a61228c76007f9_dep.md5
            dir_21619567660c3332e6a61228c76007f9_dep.png
            dir_2c63f04010e7ff462eba5e344f58cd21.html
            dir_83821d63a26a6eb889c4977bd95ca990.html
            dir_8d140c3a8bac3cd45205c9ea74fd211f.html
            dir_8d140c3a8bac3cd45205c9ea74fd211f_dep.dot
            dir_8d140c3a8bac3cd45205c9ea74fd211f_dep.map
            dir_8d140c3a8bac3cd45205c9ea74fd211f_dep.md5
            dir_8d140c3a8bac3cd45205c9ea74fd211f_dep.png
            doc.png
            doxygen.css
            doxygen.png
            dynsections.js
            files.html
            folderclosed.png
            folderopen.png
            functions.html
            functions_vars.html
            globals.html
            globals_defs.html
            globals_enum.html
            globals_eval.html
            globals_func.html
            globals_type.html
            globals_vars.html
            graph_legend.dot
            graph_legend.html
            graph_legend.md5
            graph_legend.png
            index.html
            jquery.js
            menu.js
            menudata.js
            nav_f.png
            nav_g.png
            nav_h.png
            open.png
            pages.html
            prom_8h.html
            prom_8h__dep__incl.dot
            prom_8h__dep__incl.map
            prom_8h__dep__incl.md5
            prom_8h__dep__incl.png
            prom_8h__incl.dot
            prom_8h__incl.map
            prom_8h__incl.md5
            prom_8h__incl.png
            prom_8h_source.html
            prom__alloc_8h.html
            prom__alloc_8h__dep__incl.map
            prom__alloc_8h__dep__incl.md5
            prom__alloc_8h__dep__incl.png
            prom__alloc_8h__incl.map
            prom__alloc_8h__incl.md5
            prom__alloc_8h__incl.png
            prom__alloc_8h_source.html
            prom__collector_8h.html
            prom__collector_8h__dep__incl.dot
            prom__collector_8h__dep__incl.map
            prom__collector_8h__dep__incl.md5
            prom__collector_8h__dep__incl.png
            prom__collector_8h__incl.dot
            prom__collector_8h__incl.map
            prom__collector_8h__incl.md5
            prom__collector_8h__incl.png
            prom__collector_8h_source.html
            prom__collector__registry_8h.html
            prom__collector__registry_8h__dep__incl.dot
            prom__collector__registry_8h__dep__incl.map
            prom__collector__registry_8h__dep__incl.md5
            prom__collector__registry_8h__dep__incl.png
            prom__collector__registry_8h__incl.dot
            prom__collector__registry_8h__incl.map
            prom__collector__registry_8h__incl.md5
            prom__collector__registry_8h__incl.png
            prom__collector__registry_8h_source.html
            prom__counter_8h.html
            prom__counter_8h__dep__incl.dot
            prom__counter_8h__dep__incl.map
            prom__counter_8h__dep__incl.md5
            prom__counter_8h__dep__incl.png
            prom__counter_8h__incl.dot
            prom__counter_8h__incl.map
            prom__counter_8h__incl.md5
            prom__counter_8h__incl.png
            prom__counter_8h_source.html
            prom__errors_8h.html
            prom__errors_8h__dep__incl.dot
            prom__errors_8h__dep__incl.map
            prom__errors_8h__dep__incl.md5
            prom__errors_8h__dep__incl.png
            prom__errors_8h_source.html
            prom__gauge_8h.html
            prom__gauge_8h__dep__incl.dot
            prom__gauge_8h__dep__incl.map
            prom__gauge_8h__dep__incl.md5
            prom__gauge_8h__dep__incl.png
            prom__gauge_8h__incl.dot
            prom__gauge_8h__incl.map
            prom__gauge_8h__incl.md5
            prom__gauge_8h__incl.png
            prom__gauge_8h_source.html
            prom__histogram_8h.html
            prom__histogram_8h__dep__incl.dot
            prom__histogram_8h__dep__incl.map
            prom__histogram_8h__dep__incl.md5
            prom__histogram_8h__dep__incl.png
            prom__histogram_8h__incl.dot
            prom__histogram_8h__incl.map
            prom__histogram_8h__incl.md5
            prom__histogram_8h__incl.png
            prom__histogram_8h_source.html
            prom__histogram__buckets_8h.html
            prom__histogram__buckets_8h__dep__incl.dot
            prom__histogram__buckets_8h__dep__incl.map
            prom__histogram__buckets_8h__dep__incl.md5
            prom__histogram__buckets_8h__dep__incl.png
            prom__histogram__buckets_8h__incl.map
            prom__histogram__buckets_8h__incl.md5
            prom__histogram__buckets_8h__incl.png
            prom__histogram__buckets_8h_source.html
            prom__linked__list_8h_source.html
            prom__map_8h_source.html
            prom__metric_8h.html
            prom__metric_8h__dep__incl.dot
            prom__metric_8h__dep__incl.map
            prom__metric_8h__dep__incl.md5
            prom__metric_8h__dep__incl.png
            prom__metric_8h__incl.dot
            prom__metric_8h__incl.map
            prom__metric_8h__incl.md5
            prom__metric_8h__incl.png
            prom__metric_8h_source.html
            prom__metric__sample_8h.html
            prom__metric__sample_8h__dep__incl.dot
            prom__metric__sample_8h__dep__incl.map
            prom__metric__sample_8h__dep__incl.md5
            prom__metric__sample_8h__dep__incl.png
            prom__metric__sample_8h__incl.dot
            prom__metric__sample_8h__incl.map
            prom__metric__sample_8h__incl.md5
            prom__metric__sample_8h__incl.png
            prom__metric__sample_8h_source.html
            prom__metric__sample__histogram_8h.html
            prom__metric__sample__histogram_8h__dep__incl.dot
            prom__metric__sample__histogram_8h__dep__incl.map
            prom__metric__sample__histogram_8h__dep__incl.md5
            prom__metric__sample__histogram_8h__dep__incl.png
            prom__metric__sample__histogram_8h__incl.dot
            prom__metric__sample__histogram_8h__incl.map
            prom__metric__sample__histogram_8h__incl.md5
            prom__metric__sample__histogram_8h__incl.png
            prom__metric__sample__histogram_8h_source.html
            promhttp_8h.html
            promhttp_8h__incl.dot
            promhttp_8h__incl.map
            promhttp_8h__incl.md5
            promhttp_8h__incl.png
            promhttp_8h_source.html
            splitbar.png
            structprom__histogram__buckets-members.html
            structprom__histogram__buckets.html
            sync_off.png
            sync_on.png
            tab_a.png
            tab_b.png
            tab_h.png
            tab_s.png
            tabs.css
            todo.html
            search/
                all_0.html
                all_0.js
                all_1.html
                all_1.js
                all_2.html
                all_2.js
                all_3.html
                all_3.js
                all_4.html
                all_4.js
                classes_0.html
                classes_0.js
                close.png
                defines_0.html
                defines_0.js
                enums_0.html
                enums_0.js
                enumvalues_0.html
                enumvalues_0.js
                files_0.html
                files_0.js
                functions_0.html
                functions_0.js
                mag_sel.png
                nomatches.html
                pages_0.html
                pages_0.js
                pages_1.html
                pages_1.js
                search.css
                search.js
                search_l.png
                search_m.png
                search_r.png
                searchdata.js
                typedefs_0.html
                typedefs_0.js
                variables_0.html
                variables_0.js
                variables_1.html
                variables_1.js
                variables_2.html
                variables_2.js
        autolib/
            autolib.sh
            build.sh
            docker.sh
            env.sh
            output.sh
            test.sh
            cmd/
                clean
                dev
                docs
                format
                package
                smoke
                test
        .github/
            workflows/
                ci.yaml
        promhttp/
            CMakeLists.txt
            include/
                promhttp.h
            src/
                promhttp.c
        promtest/
            CMakeLists.txt
            test/
                promtest.c
                promtest_counter.c
                promtest_counter.h
                promtest_gauge.c
                promtest_gauge.h
                promtest_helpers.c
                promtest_helpers.h
                promtest_histogram.c
                promtest_histogram.h
src/
    main.c
    metric_exposer.c
    metrics.c
.git/
    COMMIT_EDITMSG
    FETCH_HEAD
    HEAD
    ORIG_HEAD
    config
    description
    index
    packed-refs
    modules/
        prometheus-client-c/
            FETCH_HEAD
            HEAD
            config
            description
            index
            packed-refs
            info/
                exclude
            logs/
                HEAD
                refs/
                    remotes/
                        origin/
                            HEAD
                    heads/
                        master
            refs/
                remotes/
                    origin/
                        HEAD
                tags/
                heads/
                    master
            hooks/
                applypatch-msg.sample
                commit-msg.sample
                fsmonitor-watchman.sample
                post-update.sample
                pre-applypatch.sample
                pre-commit.sample
                pre-merge-commit.sample
                pre-push.sample
                pre-rebase.sample
                pre-receive.sample
                prepare-commit-msg.sample
                push-to-checkout.sample
                sendemail-validate.sample
                update.sample
            branches/
            objects/
                info/
                pack/
                    pack-9d2f03ae5de95eebba711cbd0b2573626c397cb9.idx
                    pack-9d2f03ae5de95eebba711cbd0b2573626c397cb9.pack
                    pack-9d2f03ae5de95eebba711cbd0b2573626c397cb9.rev
    info/
        exclude
    logs/
        HEAD
        refs/
            remotes/
                origin/
                    HEAD
                    develop
            heads/
                develop
                master
    refs/
        remotes/
            origin/
                HEAD
                develop
        tags/
        heads/
            develop
            master
    hooks/
        applypatch-msg.sample
        commit-msg.sample
        fsmonitor-watchman.sample
        post-update.sample
        pre-applypatch.sample
        pre-commit.sample
        pre-merge-commit.sample
        pre-push.sample
        pre-rebase.sample
        pre-receive.sample
        prepare-commit-msg.sample
        push-to-checkout.sample
        sendemail-validate.sample
        update.sample
    branches/
    objects/
        ad/
            071019e3d1de72a7180e5f92af5ca78a580604
            1c435ed176370a8d60f095c24e40c4e31b86c9
            6f8dbb99fe29872ead99d26094eae6bb3d6887
        48/
            689a9a90a7d0e94927ac1c1cccb3b3ca333164
            fbb53e2e946d26ea6c2bda1b6fc100bc2825d7
        d3/
            a149dcddd3353cd3ae1ae1c2545f7947023704
        f5/
            29a573005de7389c3a53d7e526f55a6c823678
            6a918ada5e871b4cb3c723b32ce1801a536dd7
        e5/
            9b89697818f0d2098b7a56c0f99ac0c9e46588
        06/
            10556a870f7b93fab2c39c85068b0e3289c51c
            cf98223bef7d23d80be4f126482ad0d2891d58
        37/
            6d1ceaf099e3f003e3567c7e4518fc7d143ece
        82/
            d9afb52c370c25f3e695614f9d4666f9eca67a
        9d/
            12e876b737989c5577844bd57cc01b230c4b0e
        53/
            570de7df91dc0458991dd4265379c640d8badb
        info/
        a4/
            c03ce6bc7874fc612014d0034f616d832601cf
        63/
            1a309dd2d7e7cf29d27d7c9602ba7e01d908e0
            a947f35d0a5fecc87699766fdbbd5da5c6e3eb
        6c/
            bf02223cbf749e46df331bc57fd70aab985201
        e1/
            5d82703cd30b94b496d6e0df388dcbab1a777e
        c3/
            30e597f860d05c6797819e5c107c3cad9a8bec
        b9/
            53da98485ba07bef9d4d83f9b4a801d9d1c240
        9c/
            09c8a997da0de506a4a4b023dc6c24081fa5ad
            4d667aa0febac88944e43a14fbf7b3f1c37600
            a820df187d1ad332580679b8cb363694574b2b
        0e/
            d3e7616c0c676e93583e5e9364f9b16d0e447b
        62/
            80894728bfcbf21ebae99b18ae12f19f0a2467
        af/
            1e6eecd333f4db7ad0151f6995c704635d53c1
        c9/
            46fed59960f7c24f49634ac70bc6df21077825
            4f7d79f0b91b1efc741bc892ad0c3aeee3ef60
            5007aa621f4103754b55730fb7de372ab5d722
        4a/
            d4a8ae813e2d0b891ca41589668496453ef3cb
        bc/
            5747ac4394f7ffb4a01af8e3945c067f2e3c73
        7b/
            1517e10dada9aadbe6fa7c8301b20492bae188
        99/
            0d1accca4d16cce3c47fe98ed4b330b78a70b9
            5eabd67c44bd865adfa873e25af3b6191f8592
        1f/
            b1ac89a5e7f347a07e035f3bce873959befc09
        e8/
            1b0fba2d8e5089563bce86f239047b3f7925d5
        5d/
            8efd15fb9f8a66ee6726490d2f659ddc857bbd
        40/
            3c120fd6ad6c8c3dbd3da65cd5fd4a25fdfcb0
        c1/
            c7d445fc06cca9b66f9d117d06cce71bd7c67d
        ac/
            323160281d11b4ada7cae9fca759cda2399f55
            6722e27647b82c561a80e887bdf315d68e617e
        cc/
            8795020315ce34358ad2156c4cb4ea45efdd19
            d38ac197b47377761fa3e73151d4f7631b0cfd
        56/
            97458325679d08926122b727fea7bec9cf05a6
        25/
            c9d53f3bbcd8cbef8442d5656aec0e783a8247
        a7/
            69c73a49a62533146bef6b8b1edf8db1a019d7
        be/
            cbb303fcf2c269654a0569d33d595a529f0db9
        7c/
            8829937255078f5361701f63213d8a912c4482
        89/
            619df19efe6a396639ea85d945c64c18a59ef2
        69/
            8b0ee944f5e4a07e603ecfa1810829ea834bc7
            90aaa48f4ae0319710899927656b80f65019b1
        60/
            3167c088f94f09fc8f8f4b2a2615b4de60b31b
        b6/
            cf444b31708e04d211a0e6be01b94ab14904e5
        21/
            4a5f6d94c55121384348e5a6294b772373dab5
            90bd317f91e5821bb28ac56b1fdd33fd3453b6
        bf/
            bb018bbda5824d5a5ef57ffedd86c25861196a
        12/
            d36619a35c0c3505d871ee2a14f7835083c49c
        38/
            9fc4db1ca47dd49a2dc5004b1a71d5e5ddf786
        f0/
            9e2a905dadb99cb1e8d465291c6b9d5ca526b8
        c6/
            0975ebb8f70865df453c1bfe9342781482a8e4
            b8edf5ffaed939ddf41e7cd42301d3bf113b15
        d5/
            008c0ce5f2d4b729a7916d25cb2074a3045e35
            c9f5e2c864f61c0b1ed79392d004124702a6af
        aa/
            2cb00adc8e627c5a370c28a0d22eada424a319
        26/
            0187792677af95d52b530755967eae3d9c65fc
            ec237602738a1f86ef475558602d9d0edc562f
        57/
            09f235efe6c14a56819dbceaffc12c597e5bb4
        7a/
            a3820ca859f351d3bfce0b5a81bc60e15b7f76
        a6/
            5e20c2bfd0be18bdfbc2761538078740213cf0
        77/
            0a58cdb1dbb89b38e1a57f035046005123f487
        ab/
            2801e6081192b67ec17eb3d264d06daf1c7e52
        e2/
            59f2e987b717641730ece407d49c99a047685a
            8b810559f146079138d46d2ac19926bb26dabf
        73/
            9fe944dafd7ec8ee910c7d6bf27af869f22e5c
        49/
            1b90082f6a7320f3479861f0468669dfe7c171
            965369f97c742ebec28ac15036f5499db95c21
            fdcc13177948580b4a92c3f21d54751f95326b
        10/
            d2104a15f9de3d1f80b544587c69b3d1edcf34
        ba/
            c06a9aebf2496554c17bfc4cfe543677137c85
        05/
            1d3895b0f09e6a54b93ab48f5d10b836e7bd89
        3a/
            77c875173fc7cdfde782323d2479c56fc3afc0
        fa/
            c195d1c080a975faaf61827901845fe2dde2e7
        33/
            0b64ef45b37996469209a2c0d9dc774dfcafaa
            a6304bad3bb741e53e1d516916cc4aab2101ac
        50/
            187a8a5f763ca8340ba289c9654e181c3f0c03
        71/
            4e2da3fcf198988c451e9aae1bfbe19a8537cb
        93/
            dfba2b3912d0db91d1e8252519e246db0435f8
            e78944a31d7841100cd8723728c21848754f27
        1c/
            63ce5f1dac19f2d9a3ff94ff6b4b4d16ae12de
            7f56543e78a67711e898c5fec2e03b1190e804
        2a/
            6aff68f01e047b0f269561ecff6e454cd17df1
            f685a65bd3a913b555de4bb4ac815d8163780a
        d7/
            014ed1c8fa21c33750d4c60bb1a324f77469c6
        23/
            2bb952c0ee7a4609b8acec3c6a7a36b1d5af59
        pack/
            pack-de18e24a356d85544dccbf77419b65c954f312d6.idx
            pack-de18e24a356d85544dccbf77419b65c954f312d6.pack
            pack-de18e24a356d85544dccbf77419b65c954f312d6.rev
        81/
            202b7b1ef3669e67eb7cc6b9a2ccd68bd4f2a8
            c308090500030573d49bde1d015edfb8978f74
        32/
            d38542891cbe0f4d1e0333b10daf6103e01323
        df/
            9cd93a1f53066c70642171e91bbbc2ac7beca5
        a2/
            28a8a3a8bfd9c565d6e484ede14134b5764379
            e2778834ba1d8db54e70638233bff109a203fc
            f7ba6afa7a9ce2853670424f12093fb8b97942
        07/
            9b38a1a7f700749a519043ab8182e20727de9d
        d6/
            d0f6634c93c5c3e76bb1a7a82b4b89bb5fa0c6
        42/
            6491f1cecc30c364d09d836f60ff2147030d21
        79/
            cc5de0575ed02b3ac602eb0dffa80054a4626d
            d76df7826fa471d94da86f7c2a594fec06ff4a
        e6/
            e13653dd6c26ca5d9676642fa4c627c4d9f301
        55/
            09b99c31cb539656eec25a3a9329197df36c38
            28584ed882da3787185a5aa5f8f49e8baf6357
            2bf785767e739c26a8d7c6675b6c04904a204b
        6e/
            2bded8026924bf2704b4a298c6df8c6b1ad641
            683237c9943235e972b48cb6d2190ea75c1fee
        3b/
            dc5f436806fe592320fa587d4686b8b4a895d5
        7d/
            83a4fe921dd48e4277cfe45763d1b3cd49b4b3
        78/
            39f96bfbd22ab2af6796487e6be226912ff9da
            c45a533539eaac643fc94900465414f5f3b2f8
        88/
            a0cc61688b35a2c6e9414ec8bba52880f14466
        6d/
            f55a76fbf74bc4c0e6ec63bae1f15160ca5dc2
        ed/
            f10da09ec72af9cd01998e028de8f952671e7e
        47/
            c7c1edaae059de4166fff904b52cd88419edfe
            d9a480a85ce167bd4a577991a0030aed48d514
        bb/
            68259d28ca4ecc51eddff05042fc88ae37a1ee
            77736af010b572bafa5b10b25b467d6ce7b974
        dc/
            9b9f47d2b014201017c53da238b35b842a7ca1
            e3bb47e2c349130124840fd79f1d9f97e29165
        0f/
            289c357e37b9d2bd1c0664f8e0b51d613528a8
        91/
            f7dbbdf570f2cf3acbe91dc11bbad9386fb868
        2c/
            2d1c58bab28912824f49929d3e3d48d27cadb4
        f3/
            2ddb1086ba98010fa372959b75c5288f09d4f3
            ee8f80632c01f95de0fd5f548f9cacd293ecad
        fc/
            badaa7a3b9c17a9a5af17e8156b5983898c1fe
        ae/
            489a166524126b142079d63d0de046465da2f2
        d4/
            7e521b0e341d98deff9eb57cb9a0432f63d74a
        66/
            3f4b4d3c2afb283117da6fe8edfa28177105da
        00/
            902cf178e0ccd473c6af065d4aca31d128f5ca
        f6/
            c31ff1d52d23b57617be95573c9c3065413a14
        94/
            593e512acbe270fad885b8cdfaa6c3afde617d
            8a725a0a2cca83be34e7e09b0d0abc92f3fb50
        b8/
            3adecb66a42029c64564f4308283c5f9c28253
            b0780cb64540b656139fde59922b7712e0544f
        fd/
            24b9d962c7a1c5807360436ae83ba9ece50c77
        9a/
            c84b3706377c7521406d7fec3737e6f3d91586
        a8/
            b30b396245ddbf88a93a48cf2dd22d74b8aeb6
        c5/
            70b47b39e8b6031211739636a99aaa585a4e75
            dcd298610a44d3e5bf93cfbd1009a646d8fd67
        30/
            5580e9b9f370b2803d195a1d50c72f564228f2
        45/
            de43d8c4a83a2d7bae4cba81da715f345ff6ad
        ef/
            61902302c766338b74eca4bb3fb067ff6db422
        41/
            6b3f1f3b45983b29c26565394f6e467a43bfb7
        a5/
            53828868ee4bb7c16782071a8efaedf319d584
            63760097d468ca782754a066e9f4da15055aeb
        84/
            7485c80a4722f0daa6fb0cd22dd4e5f939ece5
            9d25dd53b15b3e400c8d7832421886df354eb3
        51/
            3f47d1a0e4e75b401883070b148dd9e99827f0
        76/
            cd1d8b1e8521c65b086ea94fd11e43383491c4
        43/
            2cd4bae72172d5b033f8956e329d6b18378a47
        1b/
            6e1013b4fe8c6d628dda54971d18724a0a8370
        f4/
            8eef3781c8dc853e9bf894b6c9e9df63f47521
        36/
            4d0abf6c3267f57ded15c2556e0c8f051972d6
        e3/
            1eed1325b38d7f8f18c67ce8be3886bd7725be
        5e/
            535ab80586a736c7e7ed0d5f145ca4d1fd3470
            6e8778ece556a09104daafe090fe05245dab5e
        17/
            50ea47bb4649258474e509f46d0175707e90e1
        35/
            01b07c0ec5d682a33685cc4c55165879ec763f
        d0/
            c00196a3af7b0daf07ab00a664dc3d31560292
        96/
            bb060f2225af57105e64591942e918b2366675
        2b/
            2986c4246852a6b6037f1f4bd27a78710d980c
        c7/
            39b937791793d0f05ac478ebecc4b2485292c6
            a47dc9a17d18b7bd825ba98ddb283afc12c127
```

---

## Contenido de los Archivos

---
### Archivo: `.clang-format`

```
Language:        Cpp
# BasedOnStyle:  Microsoft
AccessModifierOffset: -2
AlignAfterOpenBracket: Align
AlignArrayOfStructures: None
AlignConsecutiveMacros: None
AlignConsecutiveAssignments: None
AlignConsecutiveBitFields: None
AlignConsecutiveDeclarations: None
AlignEscapedNewlines: Right
AlignOperands:   Align
AlignTrailingComments: true
AllowAllArgumentsOnNextLine: true
AllowAllParametersOfDeclarationOnNextLine: true
AllowShortEnumsOnASingleLine: false
AllowShortBlocksOnASingleLine: Never
AllowShortCaseLabelsOnASingleLine: false
AllowShortFunctionsOnASingleLine: None
AllowShortLambdasOnASingleLine: All
AllowShortIfStatementsOnASingleLine: Never
AllowShortLoopsOnASingleLine: false
AlwaysBreakAfterDefinitionReturnType: None
AlwaysBreakAfterReturnType: None
AlwaysBreakBeforeMultilineStrings: false
AlwaysBreakTemplateDeclarations: MultiLine
AttributeMacros:
  - __capability
BinPackArguments: true
BinPackParameters: true
BraceWrapping:
  AfterCaseLabel:  false
  AfterClass:      true
  AfterControlStatement: Always
  AfterEnum:       true
  AfterFunction:   true
  AfterNamespace:  true
  AfterObjCDeclaration: true
  AfterStruct:     true
  AfterUnion:      false
  AfterExternBlock: true
  BeforeCatch:     true
  BeforeElse:      true
  BeforeLambdaBody: false
  BeforeWhile:     false
  IndentBraces:    false
  SplitEmptyFunction: true
  SplitEmptyRecord: true
  SplitEmptyNamespace: true
BreakBeforeBinaryOperators: None
BreakBeforeConceptDeclarations: true
BreakBeforeBraces: Custom
BreakBeforeInheritanceComma: false
BreakInheritanceList: BeforeColon
BreakBeforeTernaryOperators: true
BreakConstructorInitializersBeforeComma: false
BreakConstructorInitializers: BeforeColon
BreakAfterJavaFieldAnnotations: false
BreakStringLiterals: true
ColumnLimit:     120
CommentPragmas:  '^ IWYU pragma:'
QualifierAlignment: Leave
CompactNamespaces: false
ConstructorInitializerIndentWidth: 4
ContinuationIndentWidth: 4
Cpp11BracedListStyle: true
DisableFormat:   false
EmptyLineAfterAccessModifier: Never
EmptyLineBeforeAccessModifier: LogicalBlock
ExperimentalAutoDetectBinPacking: false
PackConstructorInitializers: BinPack
BasedOnStyle:    ''
ConstructorInitializerAllOnOneLineOrOnePerLine: false
AllowAllConstructorInitializersOnNextLine: true
FixNamespaceComments: true
ForEachMacros:
  - foreach
  - Q_FOREACH
  - BOOST_FOREACH
IfMacros:
  - KJ_IF_MAYBE
IncludeBlocks:   Preserve
IncludeCategories:
  - Regex:           '^"(llvm|llvm-c|clang|clang-c)/'
    Priority:        2
    SortPriority:    0
    CaseSensitive:   false
  - Regex:           '^(<|"(gtest|gmock|isl|json)/)'
    Priority:        3
    SortPriority:    0
    CaseSensitive:   false
  - Regex:           '.*'
    Priority:        1
    SortPriority:    0
    CaseSensitive:   false
IncludeIsMainRegex: '(Test)?$'
IncludeIsMainSourceRegex: ''
IndentAccessModifiers: false
IndentCaseLabels: false
IndentCaseBlocks: false
IndentGotoLabels: true
IndentPPDirectives: None
IndentExternBlock: AfterExternBlock
IndentRequires:  false
IndentWidth:     4
IndentWrappedFunctionNames: false
JavaScriptQuotes: Leave
JavaScriptWrapImports: true
KeepEmptyLinesAtTheStartOfBlocks: true
LambdaBodyIndentation: Signature
MacroBlockBegin: ''
MacroBlockEnd:   ''
MaxEmptyLinesToKeep: 1
NamespaceIndentation: None
ObjCBinPackProtocolList: Auto
ObjCBlockIndentWidth: 2
ObjCBreakBeforeNestedBlockParam: true
ObjCSpaceAfterProperty: false
ObjCSpaceBeforeProtocolList: true
PenaltyBreakAssignment: 2
PenaltyBreakBeforeFirstCallParameter: 19
PenaltyBreakComment: 300
PenaltyBreakFirstLessLess: 120
PenaltyBreakOpenParenthesis: 0
PenaltyBreakString: 1000
PenaltyBreakTemplateDeclaration: 10
PenaltyExcessCharacter: 1000000
PenaltyReturnTypeOnItsOwnLine: 1000
PenaltyIndentedWhitespace: 0
PointerAlignment: Left
PPIndentWidth:   -1
ReferenceAlignment: Pointer
ReflowComments:  true
RemoveBracesLLVM: false
SeparateDefinitionBlocks: Leave
ShortNamespaceLines: 1
SortIncludes:    CaseSensitive
SortJavaStaticImport: Before
SortUsingDeclarations: true
SpaceAfterCStyleCast: false
SpaceAfterLogicalNot: false
SpaceAfterTemplateKeyword: true
SpaceBeforeAssignmentOperators: true
SpaceBeforeCaseColon: false
SpaceBeforeCpp11BracedList: false
SpaceBeforeCtorInitializerColon: true
SpaceBeforeInheritanceColon: true
SpaceBeforeParens: ControlStatements
SpaceBeforeParensOptions:
  AfterControlStatements: true
  AfterForeachMacros: true
  AfterFunctionDefinitionName: false
  AfterFunctionDeclarationName: false
  AfterIfMacros:   true
  AfterOverloadedOperator: false
  BeforeNonEmptyParentheses: false
SpaceAroundPointerQualifiers: Default
SpaceBeforeRangeBasedForLoopColon: true
SpaceInEmptyBlock: false
SpaceInEmptyParentheses: false
SpacesBeforeTrailingComments: 1
SpacesInAngles:  Never
SpacesInConditionalStatement: false
SpacesInContainerLiterals: true
SpacesInCStyleCastParentheses: false
SpacesInLineCommentPrefix:
  Minimum:         1
  Maximum:         -1
SpacesInParentheses: false
SpacesInSquareBrackets: false
SpaceBeforeSquareBrackets: false
BitFieldColonSpacing: Both
Standard:        Latest
StatementAttributeLikeMacros:
  - Q_EMIT
StatementMacros:
  - Q_UNUSED
  - QT_REQUIRE_VERSION
TabWidth:        4
UseCRLF:         false
UseTab:          Never
WhitespaceSensitiveMacros:
  - STRINGIZE
  - PP_STRINGIZE
  - BOOST_PP_STRINGIZE
  - NS_SWIFT_NAME
  - CF_SWIFT_NAME
```


---
### Archivo: `.gitignore`

```
# Archivos de compilación y ejecutables
/build/
*.o
*.a
*.so
*.d
metrics

# Directorios de dependencias (los submódulos se gestionan por separado)
/external/

# Archivos de IDE/Editor
.vscode/
.idea/

# Archivos de caché y logs de herramientas
.cache/
.scannerwork/
*.log
clang-format_errors.txt
dox_errors.txt

# Variables de entorno
.env
```


---
### Archivo: `.gitmodules`

```
[submodule "external/prometheus-client-c"]
	path = external/prometheus-client-c
	url = https://github.com/digitalocean/prometheus-client-c.git

```


---
### Archivo: `CMakeLists.txt`

```
# CMake minimum version requirement
cmake_minimum_required(VERSION 3.14)

# Project name and language
project(SystemMonitor C)

# Set the C standard to C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# --- Submodule Dependencies ---
set(TEST OFF CACHE BOOL "Disable tests for prometheus-client-c")

# Add libprom
add_subdirectory(external/prometheus-client-c/prom)

# Apply a patch to promhttp.c to fix a function signature incompatibility
# with modern libmicrohttpd versions. This replaces "int promhttp_handler"
# with "enum MHD_Result promhttp_handler".
execute_process(
    COMMAND sed -i "s/int promhttp_handler/enum MHD_Result promhttp_handler/" src/promhttp.c
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/external/prometheus-client-c/promhttp
    RESULT_VARIABLE sed_result
)

if(sed_result)
    message(FATAL_ERROR "Failed to patch promhttp.c: ${sed_result}")
endif()

# Add libpromhttp after patching it
add_subdirectory(external/prometheus-client-c/promhttp)


# --- Our Program ---

# Add our project's include directory so the compiler can find our headers.
include_directories(include)

# Define our main executable, named `monitor`.
add_executable(monitor
    src/main.c
    src/metric_exposer.c
    src/metrics.c
)

# Apply strict compiler flags ONLY to our own executable target.
target_compile_options(monitor PRIVATE -Wall -Wextra -Wpedantic -Werror)

# Link our `monitor` executable against the libraries it needs.
target_link_libraries(monitor PRIVATE
    prom
    promhttp
    pthread
    microhttpd
)

# Optional: Define where to install the executable.
install(TARGETS monitor DESTINATION bin)
```


---
### Archivo: `Doxyfile`

```
# Doxyfile 1.10.0

# This file describes the settings to be used by the documentation system
# doxygen (www.doxygen.org) for a project.
#
# All text after a double hash (##) is considered a comment and is placed in
# front of the TAG it is preceding.
#
# All text after a single hash (#) is considered a comment and will be ignored.
# The format is:
# TAG = value [value, ...]
# For lists, items can also be appended using:
# TAG += value [value, ...]
# Values that contain spaces should be placed between quotes (\" \").
#
# Note:
#
# Use doxygen to compare the used configuration file with the template
# configuration file:
# doxygen -x [configFile]
# Use doxygen to compare the used configuration file with the template
# configuration file without replacing the environment variables or CMake type
# replacement variables:
# doxygen -x_noenv [configFile]

#---------------------------------------------------------------------------
# Project related configuration options
#---------------------------------------------------------------------------

# This tag specifies the encoding used for all characters in the configuration
# file that follow. The default is UTF-8 which is also the encoding used for all
# text before the first occurrence of this tag. Doxygen uses libiconv (or the
# iconv built into libc) for the transcoding. See
# https://www.gnu.org/software/libiconv/ for the list of possible encodings.
# The default value is: UTF-8.

DOXYFILE_ENCODING      = UTF-8

# The PROJECT_NAME tag is a single word (or a sequence of words surrounded by
# double-quotes, unless you are using Doxywizard) that should identify the
# project for which the documentation is generated. This name is used in the
# title of most generated pages and in a few other places.
# The default value is: My Project.

PROJECT_NAME           = "ResistanceMonitor" #Replace with project name

# The PROJECT_NUMBER tag can be used to enter a project or revision number. This
# could be handy for archiving the generated documentation or if some version
# control system is used.

PROJECT_NUMBER         = 1.3.0

# Using the PROJECT_BRIEF tag one can provide an optional one line description
# for a project that appears at the top of each page and should give viewer a
# quick idea about the purpose of the project. Keep the description short.

PROJECT_BRIEF          = "Socket and IPC based client-server project"

# With the PROJECT_LOGO tag one can specify a logo or an icon that is included
# in the documentation. The maximum height of the logo should not exceed 55
# pixels and the maximum width should not exceed 200 pixels. Doxygen will copy
# the logo to the output directory.

PROJECT_LOGO           =

# With the PROJECT_ICON tag one can specify an icon that is included in the tabs
# when the HTML document is shown. Doxygen will copy the logo to the output
# directory.

PROJECT_ICON           =

# The OUTPUT_DIRECTORY tag is used to specify the (relative or absolute) path
# into which the generated documentation will be written. If a relative path is
# entered, it will be relative to the location where doxygen was started. If
# left blank the current directory will be used.

OUTPUT_DIRECTORY       = "./build/docs"

# If the CREATE_SUBDIRS tag is set to YES then doxygen will create up to 4096
# sub-directories (in 2 levels) under the output directory of each output format
# and will distribute the generated files over these directories. Enabling this
# option can be useful when feeding doxygen a huge amount of source files, where
# putting all generated files in the same directory would otherwise causes
# performance problems for the file system. Adapt CREATE_SUBDIRS_LEVEL to
# control the number of sub-directories.
# The default value is: NO.

CREATE_SUBDIRS         = NO

# Controls the number of sub-directories that will be created when
# CREATE_SUBDIRS tag is set to YES. Level 0 represents 16 directories, and every
# level increment doubles the number of directories, resulting in 4096
# directories at level 8 which is the default and also the maximum value. The
# sub-directories are organized in 2 levels, the first level always has a fixed
# number of 16 directories.
# Minimum value: 0, maximum value: 8, default value: 8.
# This tag requires that the tag CREATE_SUBDIRS is set to YES.

CREATE_SUBDIRS_LEVEL   = 8

# If the ALLOW_UNICODE_NAMES tag is set to YES, doxygen will allow non-ASCII
# characters to appear in the names of generated files. If set to NO, non-ASCII
# characters will be escaped, for example _xE3_x81_x84 will be used for Unicode
# U+3044.
# The default value is: NO.

ALLOW_UNICODE_NAMES    = YES

# The OUTPUT_LANGUAGE tag is used to specify the language in which all
# documentation generated by doxygen is written. Doxygen will use this
# information to generate all constant output in the proper language.
# Possible values are: Afrikaans, Arabic, Armenian, Brazilian, Bulgarian,
# Catalan, Chinese, Chinese-Traditional, Croatian, Czech, Danish, Dutch, English
# (United States), Esperanto, Farsi (Persian), Finnish, French, German, Greek,
# Hindi, Hungarian, Indonesian, Italian, Japanese, Japanese-en (Japanese with
# English messages), Korean, Korean-en (Korean with English messages), Latvian,
# Lithuanian, Macedonian, Norwegian, Persian (Farsi), Polish, Portuguese,
# Romanian, Russian, Serbian, Serbian-Cyrillic, Slovak, Slovene, Spanish,
# Swedish, Turkish, Ukrainian and Vietnamese.
# The default value is: English.

OUTPUT_LANGUAGE        = English

# If the BRIEF_MEMBER_DESC tag is set to YES, doxygen will include brief member
# descriptions after the members that are listed in the file and class
# documentation (similar to Javadoc). Set to NO to disable this.
# The default value is: YES.

BRIEF_MEMBER_DESC      = YES

# If the REPEAT_BRIEF tag is set to YES, doxygen will prepend the brief
# description of a member or function before the detailed description
#
# Note: If both HIDE_UNDOC_MEMBERS and BRIEF_MEMBER_DESC are set to NO, the
# brief descriptions will be completely suppressed.
# The default value is: YES.

REPEAT_BRIEF           = YES

# This tag implements a quasi-intelligent brief description abbreviator that is
# used to form the text in various listings. Each string in this list, if found
# as the leading text of the brief description, will be stripped from the text
# and the result, after processing the whole list, is used as the annotated
# text. Otherwise, the brief description is used as-is. If left blank, the
# following values are used ($name is automatically replaced with the name of
# the entity):The $name class, The $name widget, The $name file, is, provides,
# specifies, contains, represents, a, an and the.

ABBREVIATE_BRIEF       = "The $name class" \
                         "The $name widget" \
                         "The $name file" \
                         is \
                         provides \
                         specifies \
                         contains \
                         represents \
                         a \
                         an \
                         the

# If the ALWAYS_DETAILED_SEC and REPEAT_BRIEF tags are both set to YES then
# doxygen will generate a detailed section even if there is only a brief
# description.
# The default value is: NO.

ALWAYS_DETAILED_SEC    = NO

# If the INLINE_INHERITED_MEMB tag is set to YES, doxygen will show all
# inherited members of a class in the documentation of that class as if those
# members were ordinary class members. Constructors, destructors and assignment
# operators of the base classes will not be shown.
# The default value is: NO.

INLINE_INHERITED_MEMB  = NO

# If the FULL_PATH_NAMES tag is set to YES, doxygen will prepend the full path
# before files name in the file list and in the header files. If set to NO the
# shortest path that makes the file name unique will be used
# The default value is: YES.

FULL_PATH_NAMES        = YES

# The STRIP_FROM_PATH tag can be used to strip a user-defined part of the path.
# Stripping is only done if one of the specified strings matches the left-hand
# part of the path. The tag can be used to show relative paths in the file list.
# If left blank the directory from which doxygen is run is used as the path to
# strip.
#
# Note that you can specify absolute paths here, but also relative paths, which
# will be relative from the directory where doxygen is started.
# This tag requires that the tag FULL_PATH_NAMES is set to YES.

STRIP_FROM_PATH        =

# The STRIP_FROM_INC_PATH tag can be used to strip a user-defined part of the
# path mentioned in the documentation of a class, which tells the reader which
# header file to include in order to use a class. If left blank only the name of
# the header file containing the class definition is used. Otherwise one should
# specify the list of include paths that are normally passed to the compiler
# using the -I flag.

STRIP_FROM_INC_PATH    =

# If the SHORT_NAMES tag is set to YES, doxygen will generate much shorter (but
# less readable) file names. This can be useful is your file systems doesn't
# support long names like on DOS, Mac, or CD-ROM.
# The default value is: NO.

SHORT_NAMES            = NO

# If the JAVADOC_AUTOBRIEF tag is set to YES then doxygen will interpret the
# first line (until the first dot) of a Javadoc-style comment as the brief
# description. If set to NO, the Javadoc-style will behave just like regular Qt-
# style comments (thus requiring an explicit @brief command for a brief
# description.)
# The default value is: NO.

JAVADOC_AUTOBRIEF      = NO

# If the JAVADOC_BANNER tag is set to YES then doxygen will interpret a line
# such as
# /***************
# as being the beginning of a Javadoc-style comment "banner". If set to NO, the
# Javadoc-style will behave just like regular comments and it will not be
# interpreted by doxygen.
# The default value is: NO.

JAVADOC_BANNER         = NO

# If the QT_AUTOBRIEF tag is set to YES then doxygen will interpret the first
# line (until the first dot) of a Qt-style comment as the brief description. If
# set to NO, the Qt-style will behave just like regular Qt-style comments (thus
# requiring an explicit \brief command for a brief description.)
# The default value is: NO.

QT_AUTOBRIEF           = NO

# The MULTILINE_CPP_IS_BRIEF tag can be set to YES to make doxygen treat a
# multi-line C++ special comment block (i.e. a block of //! or /// comments) as
# a brief description. This used to be the default behavior. The new default is
# to treat a multi-line C++ comment block as a detailed description. Set this
# tag to YES if you prefer the old behavior instead.
#
# Note that setting this tag to YES also means that rational rose comments are
# not recognized any more.
# The default value is: NO.

MULTILINE_CPP_IS_BRIEF = NO

# By default Python docstrings are displayed as preformatted text and doxygen's
# special commands cannot be used. By setting PYTHON_DOCSTRING to NO the
# doxygen's special commands can be used and the contents of the docstring
# documentation blocks is shown as doxygen documentation.
# The default value is: YES.

PYTHON_DOCSTRING       = YES

# If the INHERIT_DOCS tag is set to YES then an undocumented member inherits the
# documentation from any documented member that it re-implements.
# The default value is: YES.

INHERIT_DOCS           = YES

# If the SEPARATE_MEMBER_PAGES tag is set to YES then doxygen will produce a new
# page for each member. If set to NO, the documentation of a member will be part
# of the file/class/namespace that contains it.
# The default value is: NO.

SEPARATE_MEMBER_PAGES  = NO

# The TAB_SIZE tag can be used to set the number of spaces in a tab. Doxygen
# uses this value to replace tabs by spaces in code fragments.
# Minimum value: 1, maximum value: 16, default value: 4.

TAB_SIZE               = 4

# This tag can be used to specify a number of aliases that act as commands in
# the documentation. An alias has the form:
# name=value
# For example adding
# "sideeffect=@par Side Effects:^^"
# will allow you to put the command \sideeffect (or @sideeffect) in the
# documentation, which will result in a user-defined paragraph with heading
# "Side Effects:". Note that you cannot put \n's in the value part of an alias
# to insert newlines (in the resulting output). You can put ^^ in the value part
# of an alias to insert a newline as if a physical newline was in the original
# file. When you need a literal { or } or , in the value part of an alias you
# have to escape them by means of a backslash (\), this can lead to conflicts
# with the commands \{ and \} for these it is advised to use the version @{ and
# @} or use a double escape (\\{ and \\})

ALIASES                =

# Set the OPTIMIZE_OUTPUT_FOR_C tag to YES if your project consists of C sources
# only. Doxygen will then generate output that is more tailored for C. For
# instance, some of the names that are used will be different. The list of all
# members will be omitted, etc.
# The default value is: NO.

OPTIMIZE_OUTPUT_FOR_C  = NO

# Set the OPTIMIZE_OUTPUT_JAVA tag to YES if your project consists of Java or
# Python sources only. Doxygen will then generate output that is more tailored
# for that language. For instance, namespaces will be presented as packages,
# qualified scopes will look different, etc.
# The default value is: NO.

OPTIMIZE_OUTPUT_JAVA   = NO

# Set the OPTIMIZE_FOR_FORTRAN tag to YES if your project consists of Fortran
# sources. Doxygen will then generate output that is tailored for Fortran.
# The default value is: NO.

OPTIMIZE_FOR_FORTRAN   = NO

# Set the OPTIMIZE_OUTPUT_VHDL tag to YES if your project consists of VHDL
# sources. Doxygen will then generate output that is tailored for VHDL.
# The default value is: NO.

OPTIMIZE_OUTPUT_VHDL   = NO

# Set the OPTIMIZE_OUTPUT_SLICE tag to YES if your project consists of Slice
# sources only. Doxygen will then generate output that is more tailored for that
# language. For instance, namespaces will be presented as modules, types will be
# separated into more groups, etc.
# The default value is: NO.

OPTIMIZE_OUTPUT_SLICE  = NO

# Doxygen selects the parser to use depending on the extension of the files it
# parses. With this tag you can assign which parser to use for a given
# extension. Doxygen has a built-in mapping, but you can override or extend it
# using this tag. The format is ext=language, where ext is a file extension, and
# language is one of the parsers supported by doxygen: IDL, Java, JavaScript,
# Csharp (C#), C, C++, Lex, D, PHP, md (Markdown), Objective-C, Python, Slice,
# VHDL, Fortran (fixed format Fortran: FortranFixed, free formatted Fortran:
# FortranFree, unknown formatted Fortran: Fortran. In the later case the parser
# tries to guess whether the code is fixed or free formatted code, this is the
# default for Fortran type files). For instance to make doxygen treat .inc files
# as Fortran files (default is PHP), and .f files as C (default is Fortran),
# use: inc=Fortran f=C.
#
# Note: For files without extension you can use no_extension as a placeholder.
#
# Note that for custom extensions you also need to set FILE_PATTERNS otherwise
# the files are not read by doxygen. When specifying no_extension you should add
# * to the FILE_PATTERNS.
#
# Note see also the list of default file extension mappings.

EXTENSION_MAPPING      =

# If the MARKDOWN_SUPPORT tag is enabled then doxygen pre-processes all comments
# according to the Markdown format, which allows for more readable
# documentation. See https://daringfireball.net/projects/markdown/ for details.
# The output of markdown processing is further processed by doxygen, so you can
# mix doxygen, HTML, and XML commands with Markdown formatting. Disable only in
# case of backward compatibilities issues.
# The default value is: YES.

MARKDOWN_SUPPORT       = YES

# When the TOC_INCLUDE_HEADINGS tag is set to a non-zero value, all headings up
# to that level are automatically included in the table of contents, even if
# they do not have an id attribute.
# Note: This feature currently applies only to Markdown headings.
# Minimum value: 0, maximum value: 99, default value: 5.
# This tag requires that the tag MARKDOWN_SUPPORT is set to YES.

TOC_INCLUDE_HEADINGS   = 5

# The MARKDOWN_ID_STYLE tag can be used to specify the algorithm used to
# generate identifiers for the Markdown headings. Note: Every identifier is
# unique.
# Possible values are: DOXYGEN use a fixed 'autotoc_md' string followed by a
# sequence number starting at 0 and GITHUB use the lower case version of title
# with any whitespace replaced by '-' and punctuation characters removed.
# The default value is: DOXYGEN.
# This tag requires that the tag MARKDOWN_SUPPORT is set to YES.

MARKDOWN_ID_STYLE      = DOXYGEN

# When enabled doxygen tries to link words that correspond to documented
# classes, or namespaces to their corresponding documentation. Such a link can
# be prevented in individual cases by putting a % sign in front of the word or
# globally by setting AUTOLINK_SUPPORT to NO.
# The default value is: YES.

AUTOLINK_SUPPORT       = YES

# If you use STL classes (i.e. std::string, std::vector, etc.) but do not want
# to include (a tag file for) the STL sources as input, then you should set this
# tag to YES in order to let doxygen match functions declarations and
# definitions whose arguments contain STL classes (e.g. func(std::string);
# versus func(std::string) {}). This also make the inheritance and collaboration
# diagrams that involve STL classes more complete and accurate.
# The default value is: NO.

BUILTIN_STL_SUPPORT    = NO

# If you use Microsoft's C++/CLI language, you should set this option to YES to
# enable parsing support.
# The default value is: NO.

CPP_CLI_SUPPORT        = NO

# Set the SIP_SUPPORT tag to YES if your project consists of sip (see:
# https://www.riverbankcomputing.com/software/sip/intro) sources only. Doxygen
# will parse them like normal C++ but will assume all classes use public instead
# of private inheritance when no explicit protection keyword is present.
# The default value is: NO.

SIP_SUPPORT            = NO

# For Microsoft's IDL there are propget and propput attributes to indicate
# getter and setter methods for a property. Setting this option to YES will make
# doxygen to replace the get and set methods by a property in the documentation.
# This will only work if the methods are indeed getting or setting a simple
# type. If this is not the case, or you want to show the methods anyway, you
# should set this option to NO.
# The default value is: YES.

IDL_PROPERTY_SUPPORT   = YES

# If member grouping is used in the documentation and the DISTRIBUTE_GROUP_DOC
# tag is set to YES then doxygen will reuse the documentation of the first
# member in the group (if any) for the other members of the group. By default
# all members of a group must be documented explicitly.
# The default value is: NO.

DISTRIBUTE_GROUP_DOC   = NO

# If one adds a struct or class to a group and this option is enabled, then also
# any nested class or struct is added to the same group. By default this option
# is disabled and one has to add nested compounds explicitly via \ingroup.
# The default value is: NO.

GROUP_NESTED_COMPOUNDS = NO

# Set the SUBGROUPING tag to YES to allow class member groups of the same type
# (for instance a group of public functions) to be put as a subgroup of that
# type (e.g. under the Public Functions section). Set it to NO to prevent
# subgrouping. Alternatively, this can be done per class using the
# \nosubgrouping command.
# The default value is: YES.

SUBGROUPING            = YES

# When the INLINE_GROUPED_CLASSES tag is set to YES, classes, structs and unions
# are shown inside the group in which they are included (e.g. using \ingroup)
# instead of on a separate page (for HTML and Man pages) or section (for LaTeX
# and RTF).
#
# Note that this feature does not work in combination with
# SEPARATE_MEMBER_PAGES.
# The default value is: NO.

INLINE_GROUPED_CLASSES = NO

# When the INLINE_SIMPLE_STRUCTS tag is set to YES, structs, classes, and unions
# with only public data fields or simple typedef fields will be shown inline in
# the documentation of the scope in which they are defined (i.e. file,
# namespace, or group documentation), provided this scope is documented. If set
# to NO, structs, classes, and unions are shown on a separate page (for HTML and
# Man pages) or section (for LaTeX and RTF).
# The default value is: NO.

INLINE_SIMPLE_STRUCTS  = NO

# When TYPEDEF_HIDES_STRUCT tag is enabled, a typedef of a struct, union, or
# enum is documented as struct, union, or enum with the name of the typedef. So
# typedef struct TypeS {} TypeT, will appear in the documentation as a struct
# with name TypeT. When disabled the typedef will appear as a member of a file,
# namespace, or class. And the struct will be named TypeS. This can typically be
# useful for C code in case the coding convention dictates that all compound
# types are typedef'ed and only the typedef is referenced, never the tag name.
# The default value is: NO.

TYPEDEF_HIDES_STRUCT   = NO

# The size of the symbol lookup cache can be set using LOOKUP_CACHE_SIZE. This
# cache is used to resolve symbols given their name and scope. Since this can be
# an expensive process and often the same symbol appears multiple times in the
# code, doxygen keeps a cache of pre-resolved symbols. If the cache is too small
# doxygen will become slower. If the cache is too large, memory is wasted. The
# cache size is given by this formula: 2^(16+LOOKUP_CACHE_SIZE). The valid range
# is 0..9, the default is 0, corresponding to a cache size of 2^16=65536
# symbols. At the end of a run doxygen will report the cache usage and suggest
# the optimal cache size from a speed point of view.
# Minimum value: 0, maximum value: 9, default value: 0.

LOOKUP_CACHE_SIZE      = 0

# The NUM_PROC_THREADS specifies the number of threads doxygen is allowed to use
# during processing. When set to 0 doxygen will based this on the number of
# cores available in the system. You can set it explicitly to a value larger
# than 0 to get more control over the balance between CPU load and processing
# speed. At this moment only the input processing can be done using multiple
# threads. Since this is still an experimental feature the default is set to 1,
# which effectively disables parallel processing. Please report any issues you
# encounter. Generating dot graphs in parallel is controlled by the
# DOT_NUM_THREADS setting.
# Minimum value: 0, maximum value: 32, default value: 1.

NUM_PROC_THREADS       = 1

# If the TIMESTAMP tag is set different from NO then each generated page will
# contain the date or date and time when the page was generated. Setting this to
# NO can help when comparing the output of multiple runs.
# Possible values are: YES, NO, DATETIME and DATE.
# The default value is: NO.

TIMESTAMP              = NO

#---------------------------------------------------------------------------
# Build related configuration options
#---------------------------------------------------------------------------

# If the EXTRACT_ALL tag is set to YES, doxygen will assume all entities in
# documentation are documented, even if no documentation was available. Private
# class members and static file members will be hidden unless the
# EXTRACT_PRIVATE respectively EXTRACT_STATIC tags are set to YES.
# Note: This will also disable the warnings about undocumented members that are
# normally produced when WARNINGS is set to YES.
# The default value is: NO.

EXTRACT_ALL            = YES

# If the EXTRACT_PRIVATE tag is set to YES, all private members of a class will
# be included in the documentation.
# The default value is: NO.

EXTRACT_PRIVATE        = NO

# If the EXTRACT_PRIV_VIRTUAL tag is set to YES, documented private virtual
# methods of a class will be included in the documentation.
# The default value is: NO.

EXTRACT_PRIV_VIRTUAL   = NO

# If the EXTRACT_PACKAGE tag is set to YES, all members with package or internal
# scope will be included in the documentation.
# The default value is: NO.

EXTRACT_PACKAGE        = NO

# If the EXTRACT_STATIC tag is set to YES, all static members of a file will be
# included in the documentation.
# The default value is: NO.

EXTRACT_STATIC         = NO

# If the EXTRACT_LOCAL_CLASSES tag is set to YES, classes (and structs) defined
# locally in source files will be included in the documentation. If set to NO,
# only classes defined in header files are included. Does not have any effect
# for Java sources.
# The default value is: YES.

EXTRACT_LOCAL_CLASSES  = YES

# This flag is only useful for Objective-C code. If set to YES, local methods,
# which are defined in the implementation section but not in the interface are
# included in the documentation. If set to NO, only methods in the interface are
# included.
# The default value is: NO.

EXTRACT_LOCAL_METHODS  = NO

# If this flag is set to YES, the members of anonymous namespaces will be
# extracted and appear in the documentation as a namespace called
# 'anonymous_namespace{file}', where file will be replaced with the base name of
# the file that contains the anonymous namespace. By default anonymous namespace
# are hidden.
# The default value is: NO.

EXTRACT_ANON_NSPACES   = NO

# If this flag is set to YES, the name of an unnamed parameter in a declaration
# will be determined by the corresponding definition. By default unnamed
# parameters remain unnamed in the output.
# The default value is: YES.

RESOLVE_UNNAMED_PARAMS = YES

# If the HIDE_UNDOC_MEMBERS tag is set to YES, doxygen will hide all
# undocumented members inside documented classes or files. If set to NO these
# members will be included in the various overviews, but no documentation
# section is generated. This option has no effect if EXTRACT_ALL is enabled.
# The default value is: NO.

HIDE_UNDOC_MEMBERS     = NO

# If the HIDE_UNDOC_CLASSES tag is set to YES, doxygen will hide all
# undocumented classes that are normally visible in the class hierarchy. If set
# to NO, these classes will be included in the various overviews. This option
# will also hide undocumented C++ concepts if enabled. This option has no effect
# if EXTRACT_ALL is enabled.
# The default value is: NO.

HIDE_UNDOC_CLASSES     = NO

# If the HIDE_FRIEND_COMPOUNDS tag is set to YES, doxygen will hide all friend
# declarations. If set to NO, these declarations will be included in the
# documentation.
# The default value is: NO.

HIDE_FRIEND_COMPOUNDS  = NO

# If the HIDE_IN_BODY_DOCS tag is set to YES, doxygen will hide any
# documentation blocks found inside the body of a function. If set to NO, these
# blocks will be appended to the function's detailed documentation block.
# The default value is: NO.

HIDE_IN_BODY_DOCS      = NO

# The INTERNAL_DOCS tag determines if documentation that is typed after a
# \internal command is included. If the tag is set to NO then the documentation
# will be excluded. Set it to YES to include the internal documentation.
# The default value is: NO.

INTERNAL_DOCS          = NO

# With the correct setting of option CASE_SENSE_NAMES doxygen will better be
# able to match the capabilities of the underlying filesystem. In case the
# filesystem is case sensitive (i.e. it supports files in the same directory
# whose names only differ in casing), the option must be set to YES to properly
# deal with such files in case they appear in the input. For filesystems that
# are not case sensitive the option should be set to NO to properly deal with
# output files written for symbols that only differ in casing, such as for two
# classes, one named CLASS and the other named Class, and to also support
# references to files without having to specify the exact matching casing. On
# Windows (including Cygwin) and MacOS, users should typically set this option
# to NO, whereas on Linux or other Unix flavors it should typically be set to
# YES.
# Possible values are: SYSTEM, NO and YES.
# The default value is: SYSTEM.

CASE_SENSE_NAMES       = SYSTEM

# If the HIDE_SCOPE_NAMES tag is set to NO then doxygen will show members with
# their full class and namespace scopes in the documentation. If set to YES, the
# scope will be hidden.
# The default value is: NO.

HIDE_SCOPE_NAMES       = NO

# If the HIDE_COMPOUND_REFERENCE tag is set to NO (default) then doxygen will
# append additional text to a page's title, such as Class Reference. If set to
# YES the compound reference will be hidden.
# The default value is: NO.

HIDE_COMPOUND_REFERENCE= NO

# If the SHOW_HEADERFILE tag is set to YES then the documentation for a class
# will show which file needs to be included to use the class.
# The default value is: YES.

SHOW_HEADERFILE        = YES

# If the SHOW_INCLUDE_FILES tag is set to YES then doxygen will put a list of
# the files that are included by a file in the documentation of that file.
# The default value is: YES.

SHOW_INCLUDE_FILES     = YES

# If the SHOW_GROUPED_MEMB_INC tag is set to YES then Doxygen will add for each
# grouped member an include statement to the documentation, telling the reader
# which file to include in order to use the member.
# The default value is: NO.

SHOW_GROUPED_MEMB_INC  = NO

# If the FORCE_LOCAL_INCLUDES tag is set to YES then doxygen will list include
# files with double quotes in the documentation rather than with sharp brackets.
# The default value is: NO.

FORCE_LOCAL_INCLUDES   = NO

# If the INLINE_INFO tag is set to YES then a tag [inline] is inserted in the
# documentation for inline members.
# The default value is: YES.

INLINE_INFO            = YES

# If the SORT_MEMBER_DOCS tag is set to YES then doxygen will sort the
# (detailed) documentation of file and class members alphabetically by member
# name. If set to NO, the members will appear in declaration order.
# The default value is: YES.

SORT_MEMBER_DOCS       = YES

# If the SORT_BRIEF_DOCS tag is set to YES then doxygen will sort the brief
# descriptions of file, namespace and class members alphabetically by member
# name. If set to NO, the members will appear in declaration order. Note that
# this will also influence the order of the classes in the class list.
# The default value is: NO.

SORT_BRIEF_DOCS        = NO

# If the SORT_MEMBERS_CTORS_1ST tag is set to YES then doxygen will sort the
# (brief and detailed) documentation of class members so that constructors and
# destructors are listed first. If set to NO the constructors will appear in the
# respective orders defined by SORT_BRIEF_DOCS and SORT_MEMBER_DOCS.
# Note: If SORT_BRIEF_DOCS is set to NO this option is ignored for sorting brief
# member documentation.
# Note: If SORT_MEMBER_DOCS is set to NO this option is ignored for sorting
# detailed member documentation.
# The default value is: NO.

SORT_MEMBERS_CTORS_1ST = NO

# If the SORT_GROUP_NAMES tag is set to YES then doxygen will sort the hierarchy
# of group names into alphabetical order. If set to NO the group names will
# appear in their defined order.
# The default value is: NO.

SORT_GROUP_NAMES       = NO

# If the SORT_BY_SCOPE_NAME tag is set to YES, the class list will be sorted by
# fully-qualified names, including namespaces. If set to NO, the class list will
# be sorted only by class name, not including the namespace part.
# Note: This option is not very useful if HIDE_SCOPE_NAMES is set to YES.
# Note: This option applies only to the class list, not to the alphabetical
# list.
# The default value is: NO.

SORT_BY_SCOPE_NAME     = NO

# If the STRICT_PROTO_MATCHING option is enabled and doxygen fails to do proper
# type resolution of all parameters of a function it will reject a match between
# the prototype and the implementation of a member function even if there is
# only one candidate or it is obvious which candidate to choose by doing a
# simple string match. By disabling STRICT_PROTO_MATCHING doxygen will still
# accept a match between prototype and implementation in such cases.
# The default value is: NO.

STRICT_PROTO_MATCHING  = NO

# The GENERATE_TODOLIST tag can be used to enable (YES) or disable (NO) the todo
# list. This list is created by putting \todo commands in the documentation.
# The default value is: YES.

GENERATE_TODOLIST      = NO

# The GENERATE_TESTLIST tag can be used to enable (YES) or disable (NO) the test
# list. This list is created by putting \test commands in the documentation.
# The default value is: YES.

GENERATE_TESTLIST      = NO

# The GENERATE_BUGLIST tag can be used to enable (YES) or disable (NO) the bug
# list. This list is created by putting \bug commands in the documentation.
# The default value is: YES.

GENERATE_BUGLIST       = NO

# The GENERATE_DEPRECATEDLIST tag can be used to enable (YES) or disable (NO)
# the deprecated list. This list is created by putting \deprecated commands in
# the documentation.
# The default value is: YES.

GENERATE_DEPRECATEDLIST= NO

# The ENABLED_SECTIONS tag can be used to enable conditional documentation
# sections, marked by \if <section_label> ... \endif and \cond <section_label>
# ... \endcond blocks.

ENABLED_SECTIONS       =

# The MAX_INITIALIZER_LINES tag determines the maximum number of lines that the
# initial value of a variable or macro / define can have for it to appear in the
# documentation. If the initializer consists of more lines than specified here
# it will be hidden. Use a value of 0 to hide initializers completely. The
# appearance of the value of individual variables and macros / defines can be
# controlled using \showinitializer or \hideinitializer command in the
# documentation regardless of this setting.
# Minimum value: 0, maximum value: 10000, default value: 30.

MAX_INITIALIZER_LINES  = 30

# Set the SHOW_USED_FILES tag to NO to disable the list of files generated at
# the bottom of the documentation of classes and structs. If set to YES, the
# list will mention the files that were used to generate the documentation.
# The default value is: YES.

SHOW_USED_FILES        = YES

# Set the SHOW_FILES tag to NO to disable the generation of the Files page. This
# will remove the Files entry from the Quick Index and from the Folder Tree View
# (if specified).
# The default value is: YES.

SHOW_FILES             = YES

# Set the SHOW_NAMESPACES tag to NO to disable the generation of the Namespaces
# page. This will remove the Namespaces entry from the Quick Index and from the
# Folder Tree View (if specified).
# The default value is: YES.

SHOW_NAMESPACES        = YES

# The FILE_VERSION_FILTER tag can be used to specify a program or script that
# doxygen should invoke to get the current version for each file (typically from
# the version control system). Doxygen will invoke the program by executing (via
# popen()) the command command input-file, where command is the value of the
# FILE_VERSION_FILTER tag, and input-file is the name of an input file provided
# by doxygen. Whatever the program writes to standard output is used as the file
# version. For an example see the documentation.

FILE_VERSION_FILTER    =

# The LAYOUT_FILE tag can be used to specify a layout file which will be parsed
# by doxygen. The layout file controls the global structure of the generated
# output files in an output format independent way. To create the layout file
# that represents doxygen's defaults, run doxygen with the -l option. You can
# optionally specify a file name after the option, if omitted DoxygenLayout.xml
# will be used as the name of the layout file. See also section "Changing the
# layout of pages" for information.
#
# Note that if you run doxygen from a directory containing a file called
# DoxygenLayout.xml, doxygen will parse it automatically even if the LAYOUT_FILE
# tag is left empty.

LAYOUT_FILE            =

# The CITE_BIB_FILES tag can be used to specify one or more bib files containing
# the reference definitions. This must be a list of .bib files. The .bib
# extension is automatically appended if omitted. This requires the bibtex tool
# to be installed. See also https://en.wikipedia.org/wiki/BibTeX for more info.
# For LaTeX the style of the bibliography can be controlled using
# LATEX_BIB_STYLE. To use this feature you need bibtex and perl available in the
# search path. See also \cite for info how to create references.

CITE_BIB_FILES         =

#---------------------------------------------------------------------------
# Configuration options related to warning and progress messages
#---------------------------------------------------------------------------

# The QUIET tag can be used to turn on/off the messages that are generated to
# standard output by doxygen. If QUIET is set to YES this implies that the
# messages are off.
# The default value is: NO.

QUIET                  = NO

# The WARNINGS tag can be used to turn on/off the warning messages that are
# generated to standard error (stderr) by doxygen. If WARNINGS is set to YES
# this implies that the warnings are on.
#
# Tip: Turn warnings on while writing the documentation.
# The default value is: YES.

WARNINGS               = YES

# If the WARN_IF_UNDOCUMENTED tag is set to YES then doxygen will generate
# warnings for undocumented members. If EXTRACT_ALL is set to YES then this flag
# will automatically be disabled.
# The default value is: YES.

WARN_IF_UNDOCUMENTED   = YES

# If the WARN_IF_DOC_ERROR tag is set to YES, doxygen will generate warnings for
# potential errors in the documentation, such as documenting some parameters in
# a documented function twice, or documenting parameters that don't exist or
# using markup commands wrongly.
# The default value is: YES.

WARN_IF_DOC_ERROR      = YES

# If WARN_IF_INCOMPLETE_DOC is set to YES, doxygen will warn about incomplete
# function parameter documentation. If set to NO, doxygen will accept that some
# parameters have no documentation without warning.
# The default value is: YES.

WARN_IF_INCOMPLETE_DOC = YES

# This WARN_NO_PARAMDOC option can be enabled to get warnings for functions that
# are documented, but have no documentation for their parameters or return
# value. If set to NO, doxygen will only warn about wrong parameter
# documentation, but not about the absence of documentation. If EXTRACT_ALL is
# set to YES then this flag will automatically be disabled. See also
# WARN_IF_INCOMPLETE_DOC
# The default value is: NO.

WARN_NO_PARAMDOC       = NO

# If WARN_IF_UNDOC_ENUM_VAL option is set to YES, doxygen will warn about
# undocumented enumeration values. If set to NO, doxygen will accept
# undocumented enumeration values. If EXTRACT_ALL is set to YES then this flag
# will automatically be disabled.
# The default value is: NO.

WARN_IF_UNDOC_ENUM_VAL = NO

# If the WARN_AS_ERROR tag is set to YES then doxygen will immediately stop when
# a warning is encountered. If the WARN_AS_ERROR tag is set to FAIL_ON_WARNINGS
# then doxygen will continue running as if WARN_AS_ERROR tag is set to NO, but
# at the end of the doxygen process doxygen will return with a non-zero status.
# If the WARN_AS_ERROR tag is set to FAIL_ON_WARNINGS_PRINT then doxygen behaves
# like FAIL_ON_WARNINGS but in case no WARN_LOGFILE is defined doxygen will not
# write the warning messages in between other messages but write them at the end
# of a run, in case a WARN_LOGFILE is defined the warning messages will be
# besides being in the defined file also be shown at the end of a run, unless
# the WARN_LOGFILE is defined as - i.e. standard output (stdout) in that case
# the behavior will remain as with the setting FAIL_ON_WARNINGS.
# Possible values are: NO, YES, FAIL_ON_WARNINGS and FAIL_ON_WARNINGS_PRINT.
# The default value is: NO.

WARN_AS_ERROR          = NO

# The WARN_FORMAT tag determines the format of the warning messages that doxygen
# can produce. The string should contain the $file, $line, and $text tags, which
# will be replaced by the file and line number from which the warning originated
# and the warning text. Optionally the format may contain $version, which will
# be replaced by the version of the file (if it could be obtained via
# FILE_VERSION_FILTER)
# See also: WARN_LINE_FORMAT
# The default value is: $file:$line: $text.

WARN_FORMAT            = "$file:$line: $text"

# In the $text part of the WARN_FORMAT command it is possible that a reference
# to a more specific place is given. To make it easier to jump to this place
# (outside of doxygen) the user can define a custom "cut" / "paste" string.
# Example:
# WARN_LINE_FORMAT = "'vi $file +$line'"
# See also: WARN_FORMAT
# The default value is: at line $line of file $file.

WARN_LINE_FORMAT       = "at line $line of file $file"

# The WARN_LOGFILE tag can be used to specify a file to which warning and error
# messages should be written. If left blank the output is written to standard
# error (stderr). In case the file specified cannot be opened for writing the
# warning and error messages are written to standard error. When as file - is
# specified the warning and error messages are written to standard output
# (stdout).

WARN_LOGFILE           =

#---------------------------------------------------------------------------
# Configuration options related to the input files
#---------------------------------------------------------------------------

# The INPUT tag is used to specify the files and/or directories that contain
# documented source files. You may enter file names like myfile.cpp or
# directories like /usr/src/myproject. Separate the files or directories with
# spaces. See also FILE_PATTERNS and EXTENSION_MAPPING
# Note: If this tag is empty the current directory is searched.

INPUT                  = ./src ./include 

# This tag can be used to specify the character encoding of the source files
# that doxygen parses. Internally doxygen uses the UTF-8 encoding. Doxygen uses
# libiconv (or the iconv built into libc) for the transcoding. See the libiconv
# documentation (see:
# https://www.gnu.org/software/libiconv/) for the list of possible encodings.
# See also: INPUT_FILE_ENCODING
# The default value is: UTF-8.

INPUT_ENCODING         = UTF-8

# This tag can be used to specify the character encoding of the source files
# that doxygen parses The INPUT_FILE_ENCODING tag can be used to specify
# character encoding on a per file pattern basis. Doxygen will compare the file
# name with each pattern and apply the encoding instead of the default
# INPUT_ENCODING) if there is a match. The character encodings are a list of the
# form: pattern=encoding (like *.php=ISO-8859-1). See cfg_input_encoding
# "INPUT_ENCODING" for further information on supported encodings.

INPUT_FILE_ENCODING    =

# If the value of the INPUT tag contains directories, you can use the
# FILE_PATTERNS tag to specify one or more wildcard patterns (like *.cpp and
# *.h) to filter out the source-files in the directories.
#
# Note that for custom extensions or not directly supported extensions you also
# need to set EXTENSION_MAPPING for the extension otherwise the files are not
# read by doxygen.
#
# Note the list of default checked file patterns might differ from the list of
# default file extension mappings.
#
# If left blank the following patterns are tested:*.c, *.cc, *.cxx, *.cxxm,
# *.cpp, *.cppm, *.ccm, *.c++, *.c++m, *.java, *.ii, *.ixx, *.ipp, *.i++, *.inl,
# *.idl, *.ddl, *.odl, *.h, *.hh, *.hxx, *.hpp, *.h++, *.ixx, *.l, *.cs, *.d,
# *.php, *.php4, *.php5, *.phtml, *.inc, *.m, *.markdown, *.md, *.mm, *.dox (to
# be provided as doxygen C comment), *.py, *.pyw, *.f90, *.f95, *.f03, *.f08,
# *.f18, *.f, *.for, *.vhd, *.vhdl, *.ucf, *.qsf and *.ice.

FILE_PATTERNS          = *.c \
                         *.cc \
                         *.cxx \
                         *.cxxm \
                         *.cpp \
                         *.cppm \
                         *.ccm \
                         *.c++ \
                         *.c++m \
                         *.java \
                         *.ii \
                         *.ixx \
                         *.ipp \
                         *.i++ \
                         *.inl \
                         *.idl \
                         *.ddl \
                         *.odl \
                         *.h \
                         *.hh \
                         *.hxx \
                         *.hpp \
                         *.h++ \
                         *.ixx \
                         *.l \
                         *.cs \
                         *.d \
                         *.php \
                         *.php4 \
                         *.php5 \
                         *.phtml \
                         *.inc \
                         *.m \
                         *.markdown \
                         *.md \
                         *.mm \
                         *.dox \
                         *.py \
                         *.pyw \
                         *.f90 \
                         *.f95 \
                         *.f03 \
                         *.f08 \
                         *.f18 \
                         *.f \
                         *.for \
                         *.vhd \
                         *.vhdl \
                         *.ucf \
                         *.qsf \
                         *.ice

# The RECURSIVE tag can be used to specify whether or not subdirectories should
# be searched for input files as well.
# The default value is: NO.

RECURSIVE              = YES

# The EXCLUDE tag can be used to specify files and/or directories that should be
# excluded from the INPUT source files. This way you can easily exclude a
# subdirectory from a directory tree whose root is specified with the INPUT tag.
#
# Note that relative paths are relative to the directory from which doxygen is
# run.

EXCLUDE                =

# The EXCLUDE_SYMLINKS tag can be used to select whether or not files or
# directories that are symbolic links (a Unix file system feature) are excluded
# from the input.
# The default value is: NO.

EXCLUDE_SYMLINKS       = NO

# If the value of the INPUT tag contains directories, you can use the
# EXCLUDE_PATTERNS tag to specify one or more wildcard patterns to exclude
# certain files from those directories.
#
# Note that the wildcards are matched against the file with absolute path, so to
# exclude all test directories for example use the pattern */test/*

EXCLUDE_PATTERNS       =

# The EXCLUDE_SYMBOLS tag can be used to specify one or more symbol names
# (namespaces, classes, functions, etc.) that should be excluded from the
# output. The symbol name can be a fully qualified name, a word, or if the
# wildcard * is used, a substring. Examples: ANamespace, AClass,
# ANamespace::AClass, ANamespace::*Test

EXCLUDE_SYMBOLS        =

# The EXAMPLE_PATH tag can be used to specify one or more files or directories
# that contain example code fragments that are included (see the \include
# command).

EXAMPLE_PATH           =

# If the value of the EXAMPLE_PATH tag contains directories, you can use the
# EXAMPLE_PATTERNS tag to specify one or more wildcard pattern (like *.cpp and
# *.h) to filter out the source-files in the directories. If left blank all
# files are included.

EXAMPLE_PATTERNS       = *

# If the EXAMPLE_RECURSIVE tag is set to YES then subdirectories will be
# searched for input files to be used with the \include or \dontinclude commands
# irrespective of the value of the RECURSIVE tag.
# The default value is: NO.

EXAMPLE_RECURSIVE      = NO

# The IMAGE_PATH tag can be used to specify one or more files or directories
# that contain images that are to be included in the documentation (see the
# \image command).

IMAGE_PATH             =

# The INPUT_FILTER tag can be used to specify a program that doxygen should
# invoke to filter for each input file. Doxygen will invoke the filter program
# by executing (via popen()) the command:
#
# <filter> <input-file>
#
# where <filter> is the value of the INPUT_FILTER tag, and <input-file> is the
# name of an input file. Doxygen will then use the output that the filter
# program writes to standard output. If FILTER_PATTERNS is specified, this tag
# will be ignored.
#
# Note that the filter must not add or remove lines; it is applied before the
# code is scanned, but not when the output code is generated. If lines are added
# or removed, the anchors will not be placed correctly.
#
# Note that doxygen will use the data processed and written to standard output
# for further processing, therefore nothing else, like debug statements or used
# commands (so in case of a Windows batch file always use @echo OFF), should be
# written to standard output.
#
# Note that for custom extensions or not directly supported extensions you also
# need to set EXTENSION_MAPPING for the extension otherwise the files are not
# properly processed by doxygen.

INPUT_FILTER           =

# The FILTER_PATTERNS tag can be used to specify filters on a per file pattern
# basis. Doxygen will compare the file name with each pattern and apply the
# filter if there is a match. The filters are a list of the form: pattern=filter
# (like *.cpp=my_cpp_filter). See INPUT_FILTER for further information on how
# filters are used. If the FILTER_PATTERNS tag is empty or if none of the
# patterns match the file name, INPUT_FILTER is applied.
#
# Note that for custom extensions or not directly supported extensions you also
# need to set EXTENSION_MAPPING for the extension otherwise the files are not
# properly processed by doxygen.

FILTER_PATTERNS        =

# If the FILTER_SOURCE_FILES tag is set to YES, the input filter (if set using
# INPUT_FILTER) will also be used to filter the input files that are used for
# producing the source files to browse (i.e. when SOURCE_BROWSER is set to YES).
# The default value is: NO.

FILTER_SOURCE_FILES    = NO

# The FILTER_SOURCE_PATTERNS tag can be used to specify source filters per file
# pattern. A pattern will override the setting for FILTER_PATTERN (if any) and
# it is also possible to disable source filtering for a specific pattern using
# *.ext= (so without naming a filter).
# This tag requires that the tag FILTER_SOURCE_FILES is set to YES.

FILTER_SOURCE_PATTERNS =

# If the USE_MDFILE_AS_MAINPAGE tag refers to the name of a markdown file that
# is part of the input, its contents will be placed on the main page
# (index.html). This can be useful if you have a project on for instance GitHub
# and want to reuse the introduction page also for the doxygen output.

USE_MDFILE_AS_MAINPAGE =

# The Fortran standard specifies that for fixed formatted Fortran code all
# characters from position 72 are to be considered as comment. A common
# extension is to allow longer lines before the automatic comment starts. The
# setting FORTRAN_COMMENT_AFTER will also make it possible that longer lines can
# be processed before the automatic comment starts.
# Minimum value: 7, maximum value: 10000, default value: 72.

FORTRAN_COMMENT_AFTER  = 72

#---------------------------------------------------------------------------
# Configuration options related to source browsing
#---------------------------------------------------------------------------

# If the SOURCE_BROWSER tag is set to YES then a list of source files will be
# generated. Documented entities will be cross-referenced with these sources.
#
# Note: To get rid of all source code in the generated output, make sure that
# also VERBATIM_HEADERS is set to NO.
# The default value is: NO.

SOURCE_BROWSER         = NO

# Setting the INLINE_SOURCES tag to YES will include the body of functions,
# multi-line macros, enums or list initialized variables directly into the
# documentation.
# The default value is: NO.

INLINE_SOURCES         = NO

# Setting the STRIP_CODE_COMMENTS tag to YES will instruct doxygen to hide any
# special comment blocks from generated source code fragments. Normal C, C++ and
# Fortran comments will always remain visible.
# The default value is: YES.

STRIP_CODE_COMMENTS    = YES

# If the REFERENCED_BY_RELATION tag is set to YES then for each documented
# entity all documented functions referencing it will be listed.
# The default value is: NO.

REFERENCED_BY_RELATION = NO

# If the REFERENCES_RELATION tag is set to YES then for each documented function
# all documented entities called/used by that function will be listed.
# The default value is: NO.

REFERENCES_RELATION    = NO

# If the REFERENCES_LINK_SOURCE tag is set to YES and SOURCE_BROWSER tag is set
# to YES then the hyperlinks from functions in REFERENCES_RELATION and
# REFERENCED_BY_RELATION lists will link to the source code. Otherwise they will
# link to the documentation.
# The default value is: YES.

REFERENCES_LINK_SOURCE = YES

# If SOURCE_TOOLTIPS is enabled (the default) then hovering a hyperlink in the
# source code will show a tooltip with additional information such as prototype,
# brief description and links to the definition and documentation. Since this
# will make the HTML file larger and loading of large files a bit slower, you
# can opt to disable this feature.
# The default value is: YES.
# This tag requires that the tag SOURCE_BROWSER is set to YES.

SOURCE_TOOLTIPS        = YES

# If the USE_HTAGS tag is set to YES then the references to source code will
# point to the HTML generated by the htags(1) tool instead of doxygen built-in
# source browser. The htags tool is part of GNU's global source tagging system
# (see https://www.gnu.org/software/global/global.html). You will need version
# 4.8.6 or higher.
#
# To use it do the following:
# - Install the latest version of global
# - Enable SOURCE_BROWSER and USE_HTAGS in the configuration file
# - Make sure the INPUT points to the root of the source tree
# - Run doxygen as normal
#
# Doxygen will invoke htags (and that will in turn invoke gtags), so these
# tools must be available from the command line (i.e. in the search path).
#
# The result: instead of the source browser generated by doxygen, the links to
# source code will now point to the output of htags.
# The default value is: NO.
# This tag requires that the tag SOURCE_BROWSER is set to YES.

USE_HTAGS              = NO

# If the VERBATIM_HEADERS tag is set the YES then doxygen will generate a
# verbatim copy of the header file for each class for which an include is
# specified. Set to NO to disable this.
# See also: Section \class.
# The default value is: YES.

VERBATIM_HEADERS       = YES

# If the CLANG_ASSISTED_PARSING tag is set to YES then doxygen will use the
# clang parser (see:
# http://clang.llvm.org/) for more accurate parsing at the cost of reduced
# performance. This can be particularly helpful with template rich C++ code for
# which doxygen's built-in parser lacks the necessary type information.
# Note: The availability of this option depends on whether or not doxygen was
# generated with the -Duse_libclang=ON option for CMake.
# The default value is: NO.

CLANG_ASSISTED_PARSING = NO

# If the CLANG_ASSISTED_PARSING tag is set to YES and the CLANG_ADD_INC_PATHS
# tag is set to YES then doxygen will add the directory of each input to the
# include path.
# The default value is: YES.
# This tag requires that the tag CLANG_ASSISTED_PARSING is set to YES.

CLANG_ADD_INC_PATHS    = YES

# If clang assisted parsing is enabled you can provide the compiler with command
# line options that you would normally use when invoking the compiler. Note that
# the include paths will already be set by doxygen for the files and directories
# specified with INPUT and INCLUDE_PATH.
# This tag requires that the tag CLANG_ASSISTED_PARSING is set to YES.

CLANG_OPTIONS          =

# If clang assisted parsing is enabled you can provide the clang parser with the
# path to the directory containing a file called compile_commands.json. This
# file is the compilation database (see:
# http://clang.llvm.org/docs/HowToSetupToolingForLLVM.html) containing the
# options used when the source files were built. This is equivalent to
# specifying the -p option to a clang tool, such as clang-check. These options
# will then be passed to the parser. Any options specified with CLANG_OPTIONS
# will be added as well.
# Note: The availability of this option depends on whether or not doxygen was
# generated with the -Duse_libclang=ON option for CMake.

CLANG_DATABASE_PATH    =

#---------------------------------------------------------------------------
# Configuration options related to the alphabetical class index
#---------------------------------------------------------------------------

# If the ALPHABETICAL_INDEX tag is set to YES, an alphabetical index of all
# compounds will be generated. Enable this if the project contains a lot of
# classes, structs, unions or interfaces.
# The default value is: YES.

ALPHABETICAL_INDEX     = YES

# The IGNORE_PREFIX tag can be used to specify a prefix (or a list of prefixes)
# that should be ignored while generating the index headers. The IGNORE_PREFIX
# tag works for classes, function and member names. The entity will be placed in
# the alphabetical list under the first letter of the entity name that remains
# after removing the prefix.
# This tag requires that the tag ALPHABETICAL_INDEX is set to YES.

IGNORE_PREFIX          =

#---------------------------------------------------------------------------
# Configuration options related to the HTML output
#---------------------------------------------------------------------------

# If the GENERATE_HTML tag is set to YES, doxygen will generate HTML output
# The default value is: YES.

GENERATE_HTML          = YES # Change to generate HTML output

# The HTML_OUTPUT tag is used to specify where the HTML docs will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it.
# The default directory is: html.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_OUTPUT            = html

# The HTML_FILE_EXTENSION tag can be used to specify the file extension for each
# generated HTML page (for example: .htm, .php, .asp).
# The default value is: .html.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_FILE_EXTENSION    = .html

# The HTML_HEADER tag can be used to specify a user-defined HTML header file for
# each generated HTML page. If the tag is left blank doxygen will generate a
# standard header.
#
# To get valid HTML the header file that includes any scripts and style sheets
# that doxygen needs, which is dependent on the configuration options used (e.g.
# the setting GENERATE_TREEVIEW). It is highly recommended to start with a
# default header using
# doxygen -w html new_header.html new_footer.html new_stylesheet.css
# YourConfigFile
# and then modify the file new_header.html. See also section "Doxygen usage"
# for information on how to generate the default header that doxygen normally
# uses.
# Note: The header is subject to change so you typically have to regenerate the
# default header when upgrading to a newer version of doxygen. For a description
# of the possible markers and block names see the documentation.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_HEADER            =

# The HTML_FOOTER tag can be used to specify a user-defined HTML footer for each
# generated HTML page. If the tag is left blank doxygen will generate a standard
# footer. See HTML_HEADER for more information on how to generate a default
# footer and what special commands can be used inside the footer. See also
# section "Doxygen usage" for information on how to generate the default footer
# that doxygen normally uses.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_FOOTER            =

# The HTML_STYLESHEET tag can be used to specify a user-defined cascading style
# sheet that is used by each HTML page. It can be used to fine-tune the look of
# the HTML output. If left blank doxygen will generate a default style sheet.
# See also section "Doxygen usage" for information on how to generate the style
# sheet that doxygen normally uses.
# Note: It is recommended to use HTML_EXTRA_STYLESHEET instead of this tag, as
# it is more robust and this tag (HTML_STYLESHEET) will in the future become
# obsolete.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_STYLESHEET        =

# The HTML_EXTRA_STYLESHEET tag can be used to specify additional user-defined
# cascading style sheets that are included after the standard style sheets
# created by doxygen. Using this option one can overrule certain style aspects.
# This is preferred over using HTML_STYLESHEET since it does not replace the
# standard style sheet and is therefore more robust against future updates.
# Doxygen will copy the style sheet files to the output directory.
# Note: The order of the extra style sheet files is of importance (e.g. the last
# style sheet in the list overrules the setting of the previous ones in the
# list).
# Note: Since the styling of scrollbars can currently not be overruled in
# Webkit/Chromium, the styling will be left out of the default doxygen.css if
# one or more extra stylesheets have been specified. So if scrollbar
# customization is desired it has to be added explicitly. For an example see the
# documentation.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_EXTRA_STYLESHEET  =

# The HTML_EXTRA_FILES tag can be used to specify one or more extra images or
# other source files which should be copied to the HTML output directory. Note
# that these files will be copied to the base HTML output directory. Use the
# $relpath^ marker in the HTML_HEADER and/or HTML_FOOTER files to load these
# files. In the HTML_STYLESHEET file, use the file name only. Also note that the
# files will be copied as-is; there are no commands or markers available.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_EXTRA_FILES       =

# The HTML_COLORSTYLE tag can be used to specify if the generated HTML output
# should be rendered with a dark or light theme.
# Possible values are: LIGHT always generate light mode output, DARK always
# generate dark mode output, AUTO_LIGHT automatically set the mode according to
# the user preference, use light mode if no preference is set (the default),
# AUTO_DARK automatically set the mode according to the user preference, use
# dark mode if no preference is set and TOGGLE allow to user to switch between
# light and dark mode via a button.
# The default value is: AUTO_LIGHT.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_COLORSTYLE        = AUTO_LIGHT

# The HTML_COLORSTYLE_HUE tag controls the color of the HTML output. Doxygen
# will adjust the colors in the style sheet and background images according to
# this color. Hue is specified as an angle on a color-wheel, see
# https://en.wikipedia.org/wiki/Hue for more information. For instance the value
# 0 represents red, 60 is yellow, 120 is green, 180 is cyan, 240 is blue, 300
# purple, and 360 is red again.
# Minimum value: 0, maximum value: 359, default value: 220.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_COLORSTYLE_HUE    = 220

# The HTML_COLORSTYLE_SAT tag controls the purity (or saturation) of the colors
# in the HTML output. For a value of 0 the output will use gray-scales only. A
# value of 255 will produce the most vivid colors.
# Minimum value: 0, maximum value: 255, default value: 100.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_COLORSTYLE_SAT    = 100

# The HTML_COLORSTYLE_GAMMA tag controls the gamma correction applied to the
# luminance component of the colors in the HTML output. Values below 100
# gradually make the output lighter, whereas values above 100 make the output
# darker. The value divided by 100 is the actual gamma applied, so 80 represents
# a gamma of 0.8, The value 220 represents a gamma of 2.2, and 100 does not
# change the gamma.
# Minimum value: 40, maximum value: 240, default value: 80.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_COLORSTYLE_GAMMA  = 80

# If the HTML_DYNAMIC_MENUS tag is set to YES then the generated HTML
# documentation will contain a main index with vertical navigation menus that
# are dynamically created via JavaScript. If disabled, the navigation index will
# consists of multiple levels of tabs that are statically embedded in every HTML
# page. Disable this option to support browsers that do not have JavaScript,
# like the Qt help browser.
# The default value is: YES.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_DYNAMIC_MENUS     = YES

# If the HTML_DYNAMIC_SECTIONS tag is set to YES then the generated HTML
# documentation will contain sections that can be hidden and shown after the
# page has loaded.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_DYNAMIC_SECTIONS  = NO

# If the HTML_CODE_FOLDING tag is set to YES then classes and functions can be
# dynamically folded and expanded in the generated HTML source code.
# The default value is: YES.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_CODE_FOLDING      = YES

# If the HTML_COPY_CLIPBOARD tag is set to YES then doxygen will show an icon in
# the top right corner of code and text fragments that allows the user to copy
# its content to the clipboard. Note this only works if supported by the browser
# and the web page is served via a secure context (see:
# https://www.w3.org/TR/secure-contexts/), i.e. using the https: or file:
# protocol.
# The default value is: YES.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_COPY_CLIPBOARD    = YES

# Doxygen stores a couple of settings persistently in the browser (via e.g.
# cookies). By default these settings apply to all HTML pages generated by
# doxygen across all projects. The HTML_PROJECT_COOKIE tag can be used to store
# the settings under a project specific key, such that the user preferences will
# be stored separately.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_PROJECT_COOKIE    =

# With HTML_INDEX_NUM_ENTRIES one can control the preferred number of entries
# shown in the various tree structured indices initially; the user can expand
# and collapse entries dynamically later on. Doxygen will expand the tree to
# such a level that at most the specified number of entries are visible (unless
# a fully collapsed tree already exceeds this amount). So setting the number of
# entries 1 will produce a full collapsed tree by default. 0 is a special value
# representing an infinite number of entries and will result in a full expanded
# tree by default.
# Minimum value: 0, maximum value: 9999, default value: 100.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_INDEX_NUM_ENTRIES = 100

# If the GENERATE_DOCSET tag is set to YES, additional index files will be
# generated that can be used as input for Apple's Xcode 3 integrated development
# environment (see:
# https://developer.apple.com/xcode/), introduced with OSX 10.5 (Leopard). To
# create a documentation set, doxygen will generate a Makefile in the HTML
# output directory. Running make will produce the docset in that directory and
# running make install will install the docset in
# ~/Library/Developer/Shared/Documentation/DocSets so that Xcode will find it at
# startup. See https://developer.apple.com/library/archive/featuredarticles/Doxy
# genXcode/_index.html for more information.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_DOCSET        = NO

# This tag determines the name of the docset feed. A documentation feed provides
# an umbrella under which multiple documentation sets from a single provider
# (such as a company or product suite) can be grouped.
# The default value is: Doxygen generated docs.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_FEEDNAME        = "Doxygen generated docs"

# This tag determines the URL of the docset feed. A documentation feed provides
# an umbrella under which multiple documentation sets from a single provider
# (such as a company or product suite) can be grouped.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_FEEDURL         =

# This tag specifies a string that should uniquely identify the documentation
# set bundle. This should be a reverse domain-name style string, e.g.
# com.mycompany.MyDocSet. Doxygen will append .docset to the name.
# The default value is: org.doxygen.Project.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_BUNDLE_ID       = org.doxygen.Project

# The DOCSET_PUBLISHER_ID tag specifies a string that should uniquely identify
# the documentation publisher. This should be a reverse domain-name style
# string, e.g. com.mycompany.MyDocSet.documentation.
# The default value is: org.doxygen.Publisher.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_PUBLISHER_ID    = org.doxygen.Publisher

# The DOCSET_PUBLISHER_NAME tag identifies the documentation publisher.
# The default value is: Publisher.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_PUBLISHER_NAME  = Publisher

# If the GENERATE_HTMLHELP tag is set to YES then doxygen generates three
# additional HTML index files: index.hhp, index.hhc, and index.hhk. The
# index.hhp is a project file that can be read by Microsoft's HTML Help Workshop
# on Windows. In the beginning of 2021 Microsoft took the original page, with
# a.o. the download links, offline the HTML help workshop was already many years
# in maintenance mode). You can download the HTML help workshop from the web
# archives at Installation executable (see:
# http://web.archive.org/web/20160201063255/http://download.microsoft.com/downlo
# ad/0/A/9/0A939EF6-E31C-430F-A3DF-DFAE7960D564/htmlhelp.exe).
#
# The HTML Help Workshop contains a compiler that can convert all HTML output
# generated by doxygen into a single compiled HTML file (.chm). Compiled HTML
# files are now used as the Windows 98 help format, and will replace the old
# Windows help format (.hlp) on all Windows platforms in the future. Compressed
# HTML files also contain an index, a table of contents, and you can search for
# words in the documentation. The HTML workshop also contains a viewer for
# compressed HTML files.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_HTMLHELP      = NO

# The CHM_FILE tag can be used to specify the file name of the resulting .chm
# file. You can add a path in front of the file if the result should not be
# written to the html output directory.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

CHM_FILE               =

# The HHC_LOCATION tag can be used to specify the location (absolute path
# including file name) of the HTML help compiler (hhc.exe). If non-empty,
# doxygen will try to run the HTML help compiler on the generated index.hhp.
# The file has to be specified with full path.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

HHC_LOCATION           =

# The GENERATE_CHI flag controls if a separate .chi index file is generated
# (YES) or that it should be included in the main .chm file (NO).
# The default value is: NO.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

GENERATE_CHI           = NO

# The CHM_INDEX_ENCODING is used to encode HtmlHelp index (hhk), content (hhc)
# and project file content.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

CHM_INDEX_ENCODING     =

# The BINARY_TOC flag controls whether a binary table of contents is generated
# (YES) or a normal table of contents (NO) in the .chm file. Furthermore it
# enables the Previous and Next buttons.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

BINARY_TOC             = NO

# The TOC_EXPAND flag can be set to YES to add extra items for group members to
# the table of contents of the HTML help documentation and to the tree view.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

TOC_EXPAND             = NO

# The SITEMAP_URL tag is used to specify the full URL of the place where the
# generated documentation will be placed on the server by the user during the
# deployment of the documentation. The generated sitemap is called sitemap.xml
# and placed on the directory specified by HTML_OUTPUT. In case no SITEMAP_URL
# is specified no sitemap is generated. For information about the sitemap
# protocol see https://www.sitemaps.org
# This tag requires that the tag GENERATE_HTML is set to YES.

SITEMAP_URL            =

# If the GENERATE_QHP tag is set to YES and both QHP_NAMESPACE and
# QHP_VIRTUAL_FOLDER are set, an additional index file will be generated that
# can be used as input for Qt's qhelpgenerator to generate a Qt Compressed Help
# (.qch) of the generated HTML documentation.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_QHP           = NO

# If the QHG_LOCATION tag is specified, the QCH_FILE tag can be used to specify
# the file name of the resulting .qch file. The path specified is relative to
# the HTML output folder.
# This tag requires that the tag GENERATE_QHP is set to YES.

QCH_FILE               =

# The QHP_NAMESPACE tag specifies the namespace to use when generating Qt Help
# Project output. For more information please see Qt Help Project / Namespace
# (see:
# https://doc.qt.io/archives/qt-4.8/qthelpproject.html#namespace).
# The default value is: org.doxygen.Project.
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_NAMESPACE          = org.doxygen.Project

# The QHP_VIRTUAL_FOLDER tag specifies the namespace to use when generating Qt
# Help Project output. For more information please see Qt Help Project / Virtual
# Folders (see:
# https://doc.qt.io/archives/qt-4.8/qthelpproject.html#virtual-folders).
# The default value is: doc.
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_VIRTUAL_FOLDER     = doc

# If the QHP_CUST_FILTER_NAME tag is set, it specifies the name of a custom
# filter to add. For more information please see Qt Help Project / Custom
# Filters (see:
# https://doc.qt.io/archives/qt-4.8/qthelpproject.html#custom-filters).
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_CUST_FILTER_NAME   =

# The QHP_CUST_FILTER_ATTRS tag specifies the list of the attributes of the
# custom filter to add. For more information please see Qt Help Project / Custom
# Filters (see:
# https://doc.qt.io/archives/qt-4.8/qthelpproject.html#custom-filters).
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_CUST_FILTER_ATTRS  =

# The QHP_SECT_FILTER_ATTRS tag specifies the list of the attributes this
# project's filter section matches. Qt Help Project / Filter Attributes (see:
# https://doc.qt.io/archives/qt-4.8/qthelpproject.html#filter-attributes).
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_SECT_FILTER_ATTRS  =

# The QHG_LOCATION tag can be used to specify the location (absolute path
# including file name) of Qt's qhelpgenerator. If non-empty doxygen will try to
# run qhelpgenerator on the generated .qhp file.
# This tag requires that the tag GENERATE_QHP is set to YES.

QHG_LOCATION           =

# If the GENERATE_ECLIPSEHELP tag is set to YES, additional index files will be
# generated, together with the HTML files, they form an Eclipse help plugin. To
# install this plugin and make it available under the help contents menu in
# Eclipse, the contents of the directory containing the HTML and XML files needs
# to be copied into the plugins directory of eclipse. The name of the directory
# within the plugins directory should be the same as the ECLIPSE_DOC_ID value.
# After copying Eclipse needs to be restarted before the help appears.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_ECLIPSEHELP   = NO

# A unique identifier for the Eclipse help plugin. When installing the plugin
# the directory name containing the HTML and XML files should also have this
# name. Each documentation set should have its own identifier.
# The default value is: org.doxygen.Project.
# This tag requires that the tag GENERATE_ECLIPSEHELP is set to YES.

ECLIPSE_DOC_ID         = org.doxygen.Project

# If you want full control over the layout of the generated HTML pages it might
# be necessary to disable the index and replace it with your own. The
# DISABLE_INDEX tag can be used to turn on/off the condensed index (tabs) at top
# of each HTML page. A value of NO enables the index and the value YES disables
# it. Since the tabs in the index contain the same information as the navigation
# tree, you can set this option to YES if you also set GENERATE_TREEVIEW to YES.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

DISABLE_INDEX          = NO

# The GENERATE_TREEVIEW tag is used to specify whether a tree-like index
# structure should be generated to display hierarchical information. If the tag
# value is set to YES, a side panel will be generated containing a tree-like
# index structure (just like the one that is generated for HTML Help). For this
# to work a browser that supports JavaScript, DHTML, CSS and frames is required
# (i.e. any modern browser). Windows users are probably better off using the
# HTML help feature. Via custom style sheets (see HTML_EXTRA_STYLESHEET) one can
# further fine tune the look of the index (see "Fine-tuning the output"). As an
# example, the default style sheet generated by doxygen has an example that
# shows how to put an image at the root of the tree instead of the PROJECT_NAME.
# Since the tree basically has the same information as the tab index, you could
# consider setting DISABLE_INDEX to YES when enabling this option.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_TREEVIEW      = NO

# When both GENERATE_TREEVIEW and DISABLE_INDEX are set to YES, then the
# FULL_SIDEBAR option determines if the side bar is limited to only the treeview
# area (value NO) or if it should extend to the full height of the window (value
# YES). Setting this to YES gives a layout similar to
# https://docs.readthedocs.io with more room for contents, but less room for the
# project logo, title, and description. If either GENERATE_TREEVIEW or
# DISABLE_INDEX is set to NO, this option has no effect.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

FULL_SIDEBAR           = NO

# The ENUM_VALUES_PER_LINE tag can be used to set the number of enum values that
# doxygen will group on one line in the generated HTML documentation.
#
# Note that a value of 0 will completely suppress the enum values from appearing
# in the overview section.
# Minimum value: 0, maximum value: 20, default value: 4.
# This tag requires that the tag GENERATE_HTML is set to YES.

ENUM_VALUES_PER_LINE   = 4

# If the treeview is enabled (see GENERATE_TREEVIEW) then this tag can be used
# to set the initial width (in pixels) of the frame in which the tree is shown.
# Minimum value: 0, maximum value: 1500, default value: 250.
# This tag requires that the tag GENERATE_HTML is set to YES.

TREEVIEW_WIDTH         = 250

# If the EXT_LINKS_IN_WINDOW option is set to YES, doxygen will open links to
# external symbols imported via tag files in a separate window.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

EXT_LINKS_IN_WINDOW    = NO

# If the OBFUSCATE_EMAILS tag is set to YES, doxygen will obfuscate email
# addresses.
# The default value is: YES.
# This tag requires that the tag GENERATE_HTML is set to YES.

OBFUSCATE_EMAILS       = YES

# If the HTML_FORMULA_FORMAT option is set to svg, doxygen will use the pdf2svg
# tool (see https://github.com/dawbarton/pdf2svg) or inkscape (see
# https://inkscape.org) to generate formulas as SVG images instead of PNGs for
# the HTML output. These images will generally look nicer at scaled resolutions.
# Possible values are: png (the default) and svg (looks nicer but requires the
# pdf2svg or inkscape tool).
# The default value is: png.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_FORMULA_FORMAT    = png

# Use this tag to change the font size of LaTeX formulas included as images in
# the HTML documentation. When you change the font size after a successful
# doxygen run you need to manually remove any form_*.png images from the HTML
# output directory to force them to be regenerated.
# Minimum value: 8, maximum value: 50, default value: 10.
# This tag requires that the tag GENERATE_HTML is set to YES.

FORMULA_FONTSIZE       = 10

# The FORMULA_MACROFILE can contain LaTeX \newcommand and \renewcommand commands
# to create new LaTeX commands to be used in formulas as building blocks. See
# the section "Including formulas" for details.

FORMULA_MACROFILE      =

# Enable the USE_MATHJAX option to render LaTeX formulas using MathJax (see
# https://www.mathjax.org) which uses client side JavaScript for the rendering
# instead of using pre-rendered bitmaps. Use this if you do not have LaTeX
# installed or if you want to formulas look prettier in the HTML output. When
# enabled you may also need to install MathJax separately and configure the path
# to it using the MATHJAX_RELPATH option.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

USE_MATHJAX            = NO

# With MATHJAX_VERSION it is possible to specify the MathJax version to be used.
# Note that the different versions of MathJax have different requirements with
# regards to the different settings, so it is possible that also other MathJax
# settings have to be changed when switching between the different MathJax
# versions.
# Possible values are: MathJax_2 and MathJax_3.
# The default value is: MathJax_2.
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_VERSION        = MathJax_2

# When MathJax is enabled you can set the default output format to be used for
# the MathJax output. For more details about the output format see MathJax
# version 2 (see:
# http://docs.mathjax.org/en/v2.7-latest/output.html) and MathJax version 3
# (see:
# http://docs.mathjax.org/en/latest/web/components/output.html).
# Possible values are: HTML-CSS (which is slower, but has the best
# compatibility. This is the name for Mathjax version 2, for MathJax version 3
# this will be translated into chtml), NativeMML (i.e. MathML. Only supported
# for NathJax 2. For MathJax version 3 chtml will be used instead.), chtml (This
# is the name for Mathjax version 3, for MathJax version 2 this will be
# translated into HTML-CSS) and SVG.
# The default value is: HTML-CSS.
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_FORMAT         = HTML-CSS

# When MathJax is enabled you need to specify the location relative to the HTML
# output directory using the MATHJAX_RELPATH option. The destination directory
# should contain the MathJax.js script. For instance, if the mathjax directory
# is located at the same level as the HTML output directory, then
# MATHJAX_RELPATH should be ../mathjax. The default value points to the MathJax
# Content Delivery Network so you can quickly see the result without installing
# MathJax. However, it is strongly recommended to install a local copy of
# MathJax from https://www.mathjax.org before deployment. The default value is:
# - in case of MathJax version 2: https://cdn.jsdelivr.net/npm/mathjax@2
# - in case of MathJax version 3: https://cdn.jsdelivr.net/npm/mathjax@3
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_RELPATH        =

# The MATHJAX_EXTENSIONS tag can be used to specify one or more MathJax
# extension names that should be enabled during MathJax rendering. For example
# for MathJax version 2 (see
# https://docs.mathjax.org/en/v2.7-latest/tex.html#tex-and-latex-extensions):
# MATHJAX_EXTENSIONS = TeX/AMSmath TeX/AMSsymbols
# For example for MathJax version 3 (see
# http://docs.mathjax.org/en/latest/input/tex/extensions/index.html):
# MATHJAX_EXTENSIONS = ams
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_EXTENSIONS     =

# The MATHJAX_CODEFILE tag can be used to specify a file with javascript pieces
# of code that will be used on startup of the MathJax code. See the MathJax site
# (see:
# http://docs.mathjax.org/en/v2.7-latest/output.html) for more details. For an
# example see the documentation.
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_CODEFILE       =

# When the SEARCHENGINE tag is enabled doxygen will generate a search box for
# the HTML output. The underlying search engine uses javascript and DHTML and
# should work on any modern browser. Note that when using HTML help
# (GENERATE_HTMLHELP), Qt help (GENERATE_QHP), or docsets (GENERATE_DOCSET)
# there is already a search function so this one should typically be disabled.
# For large projects the javascript based search engine can be slow, then
# enabling SERVER_BASED_SEARCH may provide a better solution. It is possible to
# search using the keyboard; to jump to the search box use <access key> + S
# (what the <access key> is depends on the OS and browser, but it is typically
# <CTRL>, <ALT>/<option>, or both). Inside the search box use the <cursor down
# key> to jump into the search results window, the results can be navigated
# using the <cursor keys>. Press <Enter> to select an item or <escape> to cancel
# the search. The filter options can be selected when the cursor is inside the
# search box by pressing <Shift>+<cursor down>. Also here use the <cursor keys>
# to select a filter and <Enter> or <escape> to activate or cancel the filter
# option.
# The default value is: YES.
# This tag requires that the tag GENERATE_HTML is set to YES.

SEARCHENGINE           = YES

# When the SERVER_BASED_SEARCH tag is enabled the search engine will be
# implemented using a web server instead of a web client using JavaScript. There
# are two flavors of web server based searching depending on the EXTERNAL_SEARCH
# setting. When disabled, doxygen will generate a PHP script for searching and
# an index file used by the script. When EXTERNAL_SEARCH is enabled the indexing
# and searching needs to be provided by external tools. See the section
# "External Indexing and Searching" for details.
# The default value is: NO.
# This tag requires that the tag SEARCHENGINE is set to YES.

SERVER_BASED_SEARCH    = NO

# When EXTERNAL_SEARCH tag is enabled doxygen will no longer generate the PHP
# script for searching. Instead the search results are written to an XML file
# which needs to be processed by an external indexer. Doxygen will invoke an
# external search engine pointed to by the SEARCHENGINE_URL option to obtain the
# search results.
#
# Doxygen ships with an example indexer (doxyindexer) and search engine
# (doxysearch.cgi) which are based on the open source search engine library
# Xapian (see:
# https://xapian.org/).
#
# See the section "External Indexing and Searching" for details.
# The default value is: NO.
# This tag requires that the tag SEARCHENGINE is set to YES.

EXTERNAL_SEARCH        = NO

# The SEARCHENGINE_URL should point to a search engine hosted by a web server
# which will return the search results when EXTERNAL_SEARCH is enabled.
#
# Doxygen ships with an example indexer (doxyindexer) and search engine
# (doxysearch.cgi) which are based on the open source search engine library
# Xapian (see:
# https://xapian.org/). See the section "External Indexing and Searching" for
# details.
# This tag requires that the tag SEARCHENGINE is set to YES.

SEARCHENGINE_URL       =

# When SERVER_BASED_SEARCH and EXTERNAL_SEARCH are both enabled the unindexed
# search data is written to a file for indexing by an external tool. With the
# SEARCHDATA_FILE tag the name of this file can be specified.
# The default file is: searchdata.xml.
# This tag requires that the tag SEARCHENGINE is set to YES.

SEARCHDATA_FILE        = searchdata.xml

# When SERVER_BASED_SEARCH and EXTERNAL_SEARCH are both enabled the
# EXTERNAL_SEARCH_ID tag can be used as an identifier for the project. This is
# useful in combination with EXTRA_SEARCH_MAPPINGS to search through multiple
# projects and redirect the results back to the right project.
# This tag requires that the tag SEARCHENGINE is set to YES.

EXTERNAL_SEARCH_ID     =

# The EXTRA_SEARCH_MAPPINGS tag can be used to enable searching through doxygen
# projects other than the one defined by this configuration file, but that are
# all added to the same external search index. Each project needs to have a
# unique id set via EXTERNAL_SEARCH_ID. The search mapping then maps the id of
# to a relative location where the documentation can be found. The format is:
# EXTRA_SEARCH_MAPPINGS = tagname1=loc1 tagname2=loc2 ...
# This tag requires that the tag SEARCHENGINE is set to YES.

EXTRA_SEARCH_MAPPINGS  =

#---------------------------------------------------------------------------
# Configuration options related to the LaTeX output
#---------------------------------------------------------------------------

# If the GENERATE_LATEX tag is set to YES, doxygen will generate LaTeX output.
# The default value is: YES.

GENERATE_LATEX         = NO

# The LATEX_OUTPUT tag is used to specify where the LaTeX docs will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it.
# The default directory is: latex.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_OUTPUT           = latex

# The LATEX_CMD_NAME tag can be used to specify the LaTeX command name to be
# invoked.
#
# Note that when not enabling USE_PDFLATEX the default is latex when enabling
# USE_PDFLATEX the default is pdflatex and when in the later case latex is
# chosen this is overwritten by pdflatex. For specific output languages the
# default can have been set differently, this depends on the implementation of
# the output language.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_CMD_NAME         =

# The MAKEINDEX_CMD_NAME tag can be used to specify the command name to generate
# index for LaTeX.
# Note: This tag is used in the Makefile / make.bat.
# See also: LATEX_MAKEINDEX_CMD for the part in the generated output file
# (.tex).
# The default file is: makeindex.
# This tag requires that the tag GENERATE_LATEX is set to YES.

MAKEINDEX_CMD_NAME     = makeindex

# The LATEX_MAKEINDEX_CMD tag can be used to specify the command name to
# generate index for LaTeX. In case there is no backslash (\) as first character
# it will be automatically added in the LaTeX code.
# Note: This tag is used in the generated output file (.tex).
# See also: MAKEINDEX_CMD_NAME for the part in the Makefile / make.bat.
# The default value is: makeindex.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_MAKEINDEX_CMD    = makeindex

# If the COMPACT_LATEX tag is set to YES, doxygen generates more compact LaTeX
# documents. This may be useful for small projects and may help to save some
# trees in general.
# The default value is: NO.
# This tag requires that the tag GENERATE_LATEX is set to YES.

COMPACT_LATEX          = NO

# The PAPER_TYPE tag can be used to set the paper type that is used by the
# printer.
# Possible values are: a4 (210 x 297 mm), letter (8.5 x 11 inches), legal (8.5 x
# 14 inches) and executive (7.25 x 10.5 inches).
# The default value is: a4.
# This tag requires that the tag GENERATE_LATEX is set to YES.

PAPER_TYPE             = a4

# The EXTRA_PACKAGES tag can be used to specify one or more LaTeX package names
# that should be included in the LaTeX output. The package can be specified just
# by its name or with the correct syntax as to be used with the LaTeX
# \usepackage command. To get the times font for instance you can specify :
# EXTRA_PACKAGES=times or EXTRA_PACKAGES={times}
# To use the option intlimits with the amsmath package you can specify:
# EXTRA_PACKAGES=[intlimits]{amsmath}
# If left blank no extra packages will be included.
# This tag requires that the tag GENERATE_LATEX is set to YES.

EXTRA_PACKAGES         =

# The LATEX_HEADER tag can be used to specify a user-defined LaTeX header for
# the generated LaTeX document. The header should contain everything until the
# first chapter. If it is left blank doxygen will generate a standard header. It
# is highly recommended to start with a default header using
# doxygen -w latex new_header.tex new_footer.tex new_stylesheet.sty
# and then modify the file new_header.tex. See also section "Doxygen usage" for
# information on how to generate the default header that doxygen normally uses.
#
# Note: Only use a user-defined header if you know what you are doing!
# Note: The header is subject to change so you typically have to regenerate the
# default header when upgrading to a newer version of doxygen. The following
# commands have a special meaning inside the header (and footer): For a
# description of the possible markers and block names see the documentation.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_HEADER           =

# The LATEX_FOOTER tag can be used to specify a user-defined LaTeX footer for
# the generated LaTeX document. The footer should contain everything after the
# last chapter. If it is left blank doxygen will generate a standard footer. See
# LATEX_HEADER for more information on how to generate a default footer and what
# special commands can be used inside the footer. See also section "Doxygen
# usage" for information on how to generate the default footer that doxygen
# normally uses. Note: Only use a user-defined footer if you know what you are
# doing!
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_FOOTER           =

# The LATEX_EXTRA_STYLESHEET tag can be used to specify additional user-defined
# LaTeX style sheets that are included after the standard style sheets created
# by doxygen. Using this option one can overrule certain style aspects. Doxygen
# will copy the style sheet files to the output directory.
# Note: The order of the extra style sheet files is of importance (e.g. the last
# style sheet in the list overrules the setting of the previous ones in the
# list).
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_EXTRA_STYLESHEET =

# The LATEX_EXTRA_FILES tag can be used to specify one or more extra images or
# other source files which should be copied to the LATEX_OUTPUT output
# directory. Note that the files will be copied as-is; there are no commands or
# markers available.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_EXTRA_FILES      =

# If the PDF_HYPERLINKS tag is set to YES, the LaTeX that is generated is
# prepared for conversion to PDF (using ps2pdf or pdflatex). The PDF file will
# contain links (just like the HTML output) instead of page references. This
# makes the output suitable for online browsing using a PDF viewer.
# The default value is: YES.
# This tag requires that the tag GENERATE_LATEX is set to YES.

PDF_HYPERLINKS         = YES

# If the USE_PDFLATEX tag is set to YES, doxygen will use the engine as
# specified with LATEX_CMD_NAME to generate the PDF file directly from the LaTeX
# files. Set this option to YES, to get a higher quality PDF documentation.
#
# See also section LATEX_CMD_NAME for selecting the engine.
# The default value is: YES.
# This tag requires that the tag GENERATE_LATEX is set to YES.

USE_PDFLATEX           = YES

# The LATEX_BATCHMODE tag signals the behavior of LaTeX in case of an error.
# Possible values are: NO same as ERROR_STOP, YES same as BATCH, BATCH In batch
# mode nothing is printed on the terminal, errors are scrolled as if <return> is
# hit at every error; missing files that TeX tries to input or request from
# keyboard input (\read on a not open input stream) cause the job to abort,
# NON_STOP In nonstop mode the diagnostic message will appear on the terminal,
# but there is no possibility of user interaction just like in batch mode,
# SCROLL In scroll mode, TeX will stop only for missing files to input or if
# keyboard input is necessary and ERROR_STOP In errorstop mode, TeX will stop at
# each error, asking for user intervention.
# The default value is: NO.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_BATCHMODE        = NO

# If the LATEX_HIDE_INDICES tag is set to YES then doxygen will not include the
# index chapters (such as File Index, Compound Index, etc.) in the output.
# The default value is: NO.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_HIDE_INDICES     = NO

# The LATEX_BIB_STYLE tag can be used to specify the style to use for the
# bibliography, e.g. plainnat, or ieeetr. See
# https://en.wikipedia.org/wiki/BibTeX and \cite for more info.
# The default value is: plain.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_BIB_STYLE        = plain

# The LATEX_EMOJI_DIRECTORY tag is used to specify the (relative or absolute)
# path from which the emoji images will be read. If a relative path is entered,
# it will be relative to the LATEX_OUTPUT directory. If left blank the
# LATEX_OUTPUT directory will be used.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_EMOJI_DIRECTORY  =

#---------------------------------------------------------------------------
# Configuration options related to the RTF output
#---------------------------------------------------------------------------

# If the GENERATE_RTF tag is set to YES, doxygen will generate RTF output. The
# RTF output is optimized for Word 97 and may not look too pretty with other RTF
# readers/editors.
# The default value is: NO.

GENERATE_RTF           = NO

# The RTF_OUTPUT tag is used to specify where the RTF docs will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it.
# The default directory is: rtf.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_OUTPUT             = rtf

# If the COMPACT_RTF tag is set to YES, doxygen generates more compact RTF
# documents. This may be useful for small projects and may help to save some
# trees in general.
# The default value is: NO.
# This tag requires that the tag GENERATE_RTF is set to YES.

COMPACT_RTF            = NO

# If the RTF_HYPERLINKS tag is set to YES, the RTF that is generated will
# contain hyperlink fields. The RTF file will contain links (just like the HTML
# output) instead of page references. This makes the output suitable for online
# browsing using Word or some other Word compatible readers that support those
# fields.
#
# Note: WordPad (write) and others do not support links.
# The default value is: NO.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_HYPERLINKS         = NO

# Load stylesheet definitions from file. Syntax is similar to doxygen's
# configuration file, i.e. a series of assignments. You only have to provide
# replacements, missing definitions are set to their default value.
#
# See also section "Doxygen usage" for information on how to generate the
# default style sheet that doxygen normally uses.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_STYLESHEET_FILE    =

# Set optional variables used in the generation of an RTF document. Syntax is
# similar to doxygen's configuration file. A template extensions file can be
# generated using doxygen -e rtf extensionFile.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_EXTENSIONS_FILE    =

#---------------------------------------------------------------------------
# Configuration options related to the man page output
#---------------------------------------------------------------------------

# If the GENERATE_MAN tag is set to YES, doxygen will generate man pages for
# classes and files.
# The default value is: NO.

GENERATE_MAN           = NO

# The MAN_OUTPUT tag is used to specify where the man pages will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it. A directory man3 will be created inside the directory specified by
# MAN_OUTPUT.
# The default directory is: man.
# This tag requires that the tag GENERATE_MAN is set to YES.

MAN_OUTPUT             = man

# The MAN_EXTENSION tag determines the extension that is added to the generated
# man pages. In case the manual section does not start with a number, the number
# 3 is prepended. The dot (.) at the beginning of the MAN_EXTENSION tag is
# optional.
# The default value is: .3.
# This tag requires that the tag GENERATE_MAN is set to YES.

MAN_EXTENSION          = .3

# The MAN_SUBDIR tag determines the name of the directory created within
# MAN_OUTPUT in which the man pages are placed. If defaults to man followed by
# MAN_EXTENSION with the initial . removed.
# This tag requires that the tag GENERATE_MAN is set to YES.

MAN_SUBDIR             =

# If the MAN_LINKS tag is set to YES and doxygen generates man output, then it
# will generate one additional man file for each entity documented in the real
# man page(s). These additional files only source the real man page, but without
# them the man command would be unable to find the correct page.
# The default value is: NO.
# This tag requires that the tag GENERATE_MAN is set to YES.

MAN_LINKS              = NO

#---------------------------------------------------------------------------
# Configuration options related to the XML output
#---------------------------------------------------------------------------

# If the GENERATE_XML tag is set to YES, doxygen will generate an XML file that
# captures the structure of the code including all documentation.
# The default value is: NO.

GENERATE_XML           = NO

# The XML_OUTPUT tag is used to specify where the XML pages will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it.
# The default directory is: xml.
# This tag requires that the tag GENERATE_XML is set to YES.

XML_OUTPUT             = xml

# If the XML_PROGRAMLISTING tag is set to YES, doxygen will dump the program
# listings (including syntax highlighting and cross-referencing information) to
# the XML output. Note that enabling this will significantly increase the size
# of the XML output.
# The default value is: YES.
# This tag requires that the tag GENERATE_XML is set to YES.

XML_PROGRAMLISTING     = YES

# If the XML_NS_MEMB_FILE_SCOPE tag is set to YES, doxygen will include
# namespace members in file scope as well, matching the HTML output.
# The default value is: NO.
# This tag requires that the tag GENERATE_XML is set to YES.

XML_NS_MEMB_FILE_SCOPE = NO

#---------------------------------------------------------------------------
# Configuration options related to the DOCBOOK output
#---------------------------------------------------------------------------

# If the GENERATE_DOCBOOK tag is set to YES, doxygen will generate Docbook files
# that can be used to generate PDF.
# The default value is: NO.

GENERATE_DOCBOOK       = NO

# The DOCBOOK_OUTPUT tag is used to specify where the Docbook pages will be put.
# If a relative path is entered the value of OUTPUT_DIRECTORY will be put in
# front of it.
# The default directory is: docbook.
# This tag requires that the tag GENERATE_DOCBOOK is set to YES.

DOCBOOK_OUTPUT         = docbook

#---------------------------------------------------------------------------
# Configuration options for the AutoGen Definitions output
#---------------------------------------------------------------------------

# If the GENERATE_AUTOGEN_DEF tag is set to YES, doxygen will generate an
# AutoGen Definitions (see https://autogen.sourceforge.net/) file that captures
# the structure of the code including all documentation. Note that this feature
# is still experimental and incomplete at the moment.
# The default value is: NO.

GENERATE_AUTOGEN_DEF   = NO

#---------------------------------------------------------------------------
# Configuration options related to Sqlite3 output
#---------------------------------------------------------------------------

# If the GENERATE_SQLITE3 tag is set to YES doxygen will generate a Sqlite3
# database with symbols found by doxygen stored in tables.
# The default value is: NO.

GENERATE_SQLITE3       = NO

# The SQLITE3_OUTPUT tag is used to specify where the Sqlite3 database will be
# put. If a relative path is entered the value of OUTPUT_DIRECTORY will be put
# in front of it.
# The default directory is: sqlite3.
# This tag requires that the tag GENERATE_SQLITE3 is set to YES.

SQLITE3_OUTPUT         = sqlite3

# The SQLITE3_RECREATE_DB tag is set to YES, the existing doxygen_sqlite3.db
# database file will be recreated with each doxygen run. If set to NO, doxygen
# will warn if a database file is already found and not modify it.
# The default value is: YES.
# This tag requires that the tag GENERATE_SQLITE3 is set to YES.

SQLITE3_RECREATE_DB    = YES

#---------------------------------------------------------------------------
# Configuration options related to the Perl module output
#---------------------------------------------------------------------------

# If the GENERATE_PERLMOD tag is set to YES, doxygen will generate a Perl module
# file that captures the structure of the code including all documentation.
#
# Note that this feature is still experimental and incomplete at the moment.
# The default value is: NO.

GENERATE_PERLMOD       = NO

# If the PERLMOD_LATEX tag is set to YES, doxygen will generate the necessary
# Makefile rules, Perl scripts and LaTeX code to be able to generate PDF and DVI
# output from the Perl module output.
# The default value is: NO.
# This tag requires that the tag GENERATE_PERLMOD is set to YES.

PERLMOD_LATEX          = NO

# If the PERLMOD_PRETTY tag is set to YES, the Perl module output will be nicely
# formatted so it can be parsed by a human reader. This is useful if you want to
# understand what is going on. On the other hand, if this tag is set to NO, the
# size of the Perl module output will be much smaller and Perl will parse it
# just the same.
# The default value is: YES.
# This tag requires that the tag GENERATE_PERLMOD is set to YES.

PERLMOD_PRETTY         = YES

# The names of the make variables in the generated doxyrules.make file are
# prefixed with the string contained in PERLMOD_MAKEVAR_PREFIX. This is useful
# so different doxyrules.make files included by the same Makefile don't
# overwrite each other's variables.
# This tag requires that the tag GENERATE_PERLMOD is set to YES.

PERLMOD_MAKEVAR_PREFIX =

#---------------------------------------------------------------------------
# Configuration options related to the preprocessor
#---------------------------------------------------------------------------

# If the ENABLE_PREPROCESSING tag is set to YES, doxygen will evaluate all
# C-preprocessor directives found in the sources and include files.
# The default value is: YES.

ENABLE_PREPROCESSING   = YES

# If the MACRO_EXPANSION tag is set to YES, doxygen will expand all macro names
# in the source code. If set to NO, only conditional compilation will be
# performed. Macro expansion can be done in a controlled way by setting
# EXPAND_ONLY_PREDEF to YES.
# The default value is: NO.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

MACRO_EXPANSION        = NO

# If the EXPAND_ONLY_PREDEF and MACRO_EXPANSION tags are both set to YES then
# the macro expansion is limited to the macros specified with the PREDEFINED and
# EXPAND_AS_DEFINED tags.
# The default value is: NO.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

EXPAND_ONLY_PREDEF     = NO

# If the SEARCH_INCLUDES tag is set to YES, the include files in the
# INCLUDE_PATH will be searched if a #include is found.
# The default value is: YES.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

SEARCH_INCLUDES        = YES

# The INCLUDE_PATH tag can be used to specify one or more directories that
# contain include files that are not input files but should be processed by the
# preprocessor. Note that the INCLUDE_PATH is not recursive, so the setting of
# RECURSIVE has no effect here.
# This tag requires that the tag SEARCH_INCLUDES is set to YES.

INCLUDE_PATH           =

# You can use the INCLUDE_FILE_PATTERNS tag to specify one or more wildcard
# patterns (like *.h and *.hpp) to filter out the header-files in the
# directories. If left blank, the patterns specified with FILE_PATTERNS will be
# used.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

INCLUDE_FILE_PATTERNS  =

# The PREDEFINED tag can be used to specify one or more macro names that are
# defined before the preprocessor is started (similar to the -D option of e.g.
# gcc). The argument of the tag is a list of macros of the form: name or
# name=definition (no spaces). If the definition and the "=" are omitted, "=1"
# is assumed. To prevent a macro definition from being undefined via #undef or
# recursively expanded use the := operator instead of the = operator.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

PREDEFINED             =

# If the MACRO_EXPANSION and EXPAND_ONLY_PREDEF tags are set to YES then this
# tag can be used to specify a list of macro names that should be expanded. The
# macro definition that is found in the sources will be used. Use the PREDEFINED
# tag if you want to use a different macro definition that overrules the
# definition found in the source code.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

EXPAND_AS_DEFINED      =

# If the SKIP_FUNCTION_MACROS tag is set to YES then doxygen's preprocessor will
# remove all references to function-like macros that are alone on a line, have
# an all uppercase name, and do not end with a semicolon. Such function macros
# are typically used for boiler-plate code, and will confuse the parser if not
# removed.
# The default value is: YES.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

SKIP_FUNCTION_MACROS   = YES

#---------------------------------------------------------------------------
# Configuration options related to external references
#---------------------------------------------------------------------------

# The TAGFILES tag can be used to specify one or more tag files. For each tag
# file the location of the external documentation should be added. The format of
# a tag file without this location is as follows:
# TAGFILES = file1 file2 ...
# Adding location for the tag files is done as follows:
# TAGFILES = file1=loc1 "file2 = loc2" ...
# where loc1 and loc2 can be relative or absolute paths or URLs. See the
# section "Linking to external documentation" for more information about the use
# of tag files.
# Note: Each tag file must have a unique name (where the name does NOT include
# the path). If a tag file is not located in the directory in which doxygen is
# run, you must also specify the path to the tagfile here.

TAGFILES               =

# When a file name is specified after GENERATE_TAGFILE, doxygen will create a
# tag file that is based on the input files it reads. See section "Linking to
# external documentation" for more information about the usage of tag files.

GENERATE_TAGFILE       =

# If the ALLEXTERNALS tag is set to YES, all external classes and namespaces
# will be listed in the class and namespace index. If set to NO, only the
# inherited external classes will be listed.
# The default value is: NO.

ALLEXTERNALS           = NO

# If the EXTERNAL_GROUPS tag is set to YES, all external groups will be listed
# in the topic index. If set to NO, only the current project's groups will be
# listed.
# The default value is: YES.

EXTERNAL_GROUPS        = YES

# If the EXTERNAL_PAGES tag is set to YES, all external pages will be listed in
# the related pages index. If set to NO, only the current project's pages will
# be listed.
# The default value is: YES.

EXTERNAL_PAGES         = YES

#---------------------------------------------------------------------------
# Configuration options related to diagram generator tools
#---------------------------------------------------------------------------

# If set to YES the inheritance and collaboration graphs will hide inheritance
# and usage relations if the target is undocumented or is not a class.
# The default value is: YES.

HIDE_UNDOC_RELATIONS   = YES

# If you set the HAVE_DOT tag to YES then doxygen will assume the dot tool is
# available from the path. This tool is part of Graphviz (see:
# https://www.graphviz.org/), a graph visualization toolkit from AT&T and Lucent
# Bell Labs. The other options in this section have no effect if this option is
# set to NO
# The default value is: NO.

HAVE_DOT               = NO

# The DOT_NUM_THREADS specifies the number of dot invocations doxygen is allowed
# to run in parallel. When set to 0 doxygen will base this on the number of
# processors available in the system. You can set it explicitly to a value
# larger than 0 to get control over the balance between CPU load and processing
# speed.
# Minimum value: 0, maximum value: 32, default value: 0.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_NUM_THREADS        = 0

# DOT_COMMON_ATTR is common attributes for nodes, edges and labels of
# subgraphs. When you want a differently looking font in the dot files that
# doxygen generates you can specify fontname, fontcolor and fontsize attributes.
# For details please see <a href=https://graphviz.org/doc/info/attrs.html>Node,
# Edge and Graph Attributes specification</a> You need to make sure dot is able
# to find the font, which can be done by putting it in a standard location or by
# setting the DOTFONTPATH environment variable or by setting DOT_FONTPATH to the
# directory containing the font. Default graphviz fontsize is 14.
# The default value is: fontname=Helvetica,fontsize=10.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_COMMON_ATTR        = "fontname=Helvetica,fontsize=10"

# DOT_EDGE_ATTR is concatenated with DOT_COMMON_ATTR. For elegant style you can
# add 'arrowhead=open, arrowtail=open, arrowsize=0.5'. <a
# href=https://graphviz.org/doc/info/arrows.html>Complete documentation about
# arrows shapes.</a>
# The default value is: labelfontname=Helvetica,labelfontsize=10.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_EDGE_ATTR          = "labelfontname=Helvetica,labelfontsize=10"

# DOT_NODE_ATTR is concatenated with DOT_COMMON_ATTR. For view without boxes
# around nodes set 'shape=plain' or 'shape=plaintext' <a
# href=https://www.graphviz.org/doc/info/shapes.html>Shapes specification</a>
# The default value is: shape=box,height=0.2,width=0.4.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_NODE_ATTR          = "shape=box,height=0.2,width=0.4"

# You can set the path where dot can find font specified with fontname in
# DOT_COMMON_ATTR and others dot attributes.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_FONTPATH           =

# If the CLASS_GRAPH tag is set to YES or GRAPH or BUILTIN then doxygen will
# generate a graph for each documented class showing the direct and indirect
# inheritance relations. In case the CLASS_GRAPH tag is set to YES or GRAPH and
# HAVE_DOT is enabled as well, then dot will be used to draw the graph. In case
# the CLASS_GRAPH tag is set to YES and HAVE_DOT is disabled or if the
# CLASS_GRAPH tag is set to BUILTIN, then the built-in generator will be used.
# If the CLASS_GRAPH tag is set to TEXT the direct and indirect inheritance
# relations will be shown as texts / links. Explicit enabling an inheritance
# graph or choosing a different representation for an inheritance graph of a
# specific class, can be accomplished by means of the command \inheritancegraph.
# Disabling an inheritance graph can be accomplished by means of the command
# \hideinheritancegraph.
# Possible values are: NO, YES, TEXT, GRAPH and BUILTIN.
# The default value is: YES.

CLASS_GRAPH            = YES

# If the COLLABORATION_GRAPH tag is set to YES then doxygen will generate a
# graph for each documented class showing the direct and indirect implementation
# dependencies (inheritance, containment, and class references variables) of the
# class with other documented classes. Explicit enabling a collaboration graph,
# when COLLABORATION_GRAPH is set to NO, can be accomplished by means of the
# command \collaborationgraph. Disabling a collaboration graph can be
# accomplished by means of the command \hidecollaborationgraph.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

COLLABORATION_GRAPH    = YES

# If the GROUP_GRAPHS tag is set to YES then doxygen will generate a graph for
# groups, showing the direct groups dependencies. Explicit enabling a group
# dependency graph, when GROUP_GRAPHS is set to NO, can be accomplished by means
# of the command \groupgraph. Disabling a directory graph can be accomplished by
# means of the command \hidegroupgraph. See also the chapter Grouping in the
# manual.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

GROUP_GRAPHS           = YES

# If the UML_LOOK tag is set to YES, doxygen will generate inheritance and
# collaboration diagrams in a style similar to the OMG's Unified Modeling
# Language.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

UML_LOOK               = NO

# If the UML_LOOK tag is enabled, the fields and methods are shown inside the
# class node. If there are many fields or methods and many nodes the graph may
# become too big to be useful. The UML_LIMIT_NUM_FIELDS threshold limits the
# number of items for each type to make the size more manageable. Set this to 0
# for no limit. Note that the threshold may be exceeded by 50% before the limit
# is enforced. So when you set the threshold to 10, up to 15 fields may appear,
# but if the number exceeds 15, the total amount of fields shown is limited to
# 10.
# Minimum value: 0, maximum value: 100, default value: 10.
# This tag requires that the tag UML_LOOK is set to YES.

UML_LIMIT_NUM_FIELDS   = 10

# If the DOT_UML_DETAILS tag is set to NO, doxygen will show attributes and
# methods without types and arguments in the UML graphs. If the DOT_UML_DETAILS
# tag is set to YES, doxygen will add type and arguments for attributes and
# methods in the UML graphs. If the DOT_UML_DETAILS tag is set to NONE, doxygen
# will not generate fields with class member information in the UML graphs. The
# class diagrams will look similar to the default class diagrams but using UML
# notation for the relationships.
# Possible values are: NO, YES and NONE.
# The default value is: NO.
# This tag requires that the tag UML_LOOK is set to YES.

DOT_UML_DETAILS        = NO

# The DOT_WRAP_THRESHOLD tag can be used to set the maximum number of characters
# to display on a single line. If the actual line length exceeds this threshold
# significantly it will be wrapped across multiple lines. Some heuristics are
# applied to avoid ugly line breaks.
# Minimum value: 0, maximum value: 1000, default value: 17.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_WRAP_THRESHOLD     = 17

# If the TEMPLATE_RELATIONS tag is set to YES then the inheritance and
# collaboration graphs will show the relations between templates and their
# instances.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

TEMPLATE_RELATIONS     = NO

# If the INCLUDE_GRAPH, ENABLE_PREPROCESSING and SEARCH_INCLUDES tags are set to
# YES then doxygen will generate a graph for each documented file showing the
# direct and indirect include dependencies of the file with other documented
# files. Explicit enabling an include graph, when INCLUDE_GRAPH is is set to NO,
# can be accomplished by means of the command \includegraph. Disabling an
# include graph can be accomplished by means of the command \hideincludegraph.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

INCLUDE_GRAPH          = YES

# If the INCLUDED_BY_GRAPH, ENABLE_PREPROCESSING and SEARCH_INCLUDES tags are
# set to YES then doxygen will generate a graph for each documented file showing
# the direct and indirect include dependencies of the file with other documented
# files. Explicit enabling an included by graph, when INCLUDED_BY_GRAPH is set
# to NO, can be accomplished by means of the command \includedbygraph. Disabling
# an included by graph can be accomplished by means of the command
# \hideincludedbygraph.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

INCLUDED_BY_GRAPH      = YES

# If the CALL_GRAPH tag is set to YES then doxygen will generate a call
# dependency graph for every global function or class method.
#
# Note that enabling this option will significantly increase the time of a run.
# So in most cases it will be better to enable call graphs for selected
# functions only using the \callgraph command. Disabling a call graph can be
# accomplished by means of the command \hidecallgraph.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

CALL_GRAPH             = NO

# If the CALLER_GRAPH tag is set to YES then doxygen will generate a caller
# dependency graph for every global function or class method.
#
# Note that enabling this option will significantly increase the time of a run.
# So in most cases it will be better to enable caller graphs for selected
# functions only using the \callergraph command. Disabling a caller graph can be
# accomplished by means of the command \hidecallergraph.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

CALLER_GRAPH           = NO

# If the GRAPHICAL_HIERARCHY tag is set to YES then doxygen will graphical
# hierarchy of all classes instead of a textual one.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

GRAPHICAL_HIERARCHY    = YES

# If the DIRECTORY_GRAPH tag is set to YES then doxygen will show the
# dependencies a directory has on other directories in a graphical way. The
# dependency relations are determined by the #include relations between the
# files in the directories. Explicit enabling a directory graph, when
# DIRECTORY_GRAPH is set to NO, can be accomplished by means of the command
# \directorygraph. Disabling a directory graph can be accomplished by means of
# the command \hidedirectorygraph.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

DIRECTORY_GRAPH        = YES

# The DIR_GRAPH_MAX_DEPTH tag can be used to limit the maximum number of levels
# of child directories generated in directory dependency graphs by dot.
# Minimum value: 1, maximum value: 25, default value: 1.
# This tag requires that the tag DIRECTORY_GRAPH is set to YES.

DIR_GRAPH_MAX_DEPTH    = 1

# The DOT_IMAGE_FORMAT tag can be used to set the image format of the images
# generated by dot. For an explanation of the image formats see the section
# output formats in the documentation of the dot tool (Graphviz (see:
# https://www.graphviz.org/)).
# Note: If you choose svg you need to set HTML_FILE_EXTENSION to xhtml in order
# to make the SVG files visible in IE 9+ (other browsers do not have this
# requirement).
# Possible values are: png, jpg, gif, svg, png:gd, png:gd:gd, png:cairo,
# png:cairo:gd, png:cairo:cairo, png:cairo:gdiplus, png:gdiplus and
# png:gdiplus:gdiplus.
# The default value is: png.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_IMAGE_FORMAT       = png

# If DOT_IMAGE_FORMAT is set to svg, then this option can be set to YES to
# enable generation of interactive SVG images that allow zooming and panning.
#
# Note that this requires a modern browser other than Internet Explorer. Tested
# and working are Firefox, Chrome, Safari, and Opera.
# Note: For IE 9+ you need to set HTML_FILE_EXTENSION to xhtml in order to make
# the SVG files visible. Older versions of IE do not have SVG support.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

INTERACTIVE_SVG        = NO

# The DOT_PATH tag can be used to specify the path where the dot tool can be
# found. If left blank, it is assumed the dot tool can be found in the path.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_PATH               =

# The DOTFILE_DIRS tag can be used to specify one or more directories that
# contain dot files that are included in the documentation (see the \dotfile
# command).
# This tag requires that the tag HAVE_DOT is set to YES.

DOTFILE_DIRS           =

# You can include diagrams made with dia in doxygen documentation. Doxygen will
# then run dia to produce the diagram and insert it in the documentation. The
# DIA_PATH tag allows you to specify the directory where the dia binary resides.
# If left empty dia is assumed to be found in the default search path.

DIA_PATH               =

# The DIAFILE_DIRS tag can be used to specify one or more directories that
# contain dia files that are included in the documentation (see the \diafile
# command).

DIAFILE_DIRS           =

# When using plantuml, the PLANTUML_JAR_PATH tag should be used to specify the
# path where java can find the plantuml.jar file or to the filename of jar file
# to be used. If left blank, it is assumed PlantUML is not used or called during
# a preprocessing step. Doxygen will generate a warning when it encounters a
# \startuml command in this case and will not generate output for the diagram.

PLANTUML_JAR_PATH      =

# When using plantuml, the PLANTUML_CFG_FILE tag can be used to specify a
# configuration file for plantuml.

PLANTUML_CFG_FILE      =

# When using plantuml, the specified paths are searched for files specified by
# the !include statement in a plantuml block.

PLANTUML_INCLUDE_PATH  =

# The DOT_GRAPH_MAX_NODES tag can be used to set the maximum number of nodes
# that will be shown in the graph. If the number of nodes in a graph becomes
# larger than this value, doxygen will truncate the graph, which is visualized
# by representing a node as a red box. Note that doxygen if the number of direct
# children of the root node in a graph is already larger than
# DOT_GRAPH_MAX_NODES then the graph will not be shown at all. Also note that
# the size of a graph can be further restricted by MAX_DOT_GRAPH_DEPTH.
# Minimum value: 0, maximum value: 10000, default value: 50.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_GRAPH_MAX_NODES    = 50

# The MAX_DOT_GRAPH_DEPTH tag can be used to set the maximum depth of the graphs
# generated by dot. A depth value of 3 means that only nodes reachable from the
# root by following a path via at most 3 edges will be shown. Nodes that lay
# further from the root node will be omitted. Note that setting this option to 1
# or 2 may greatly reduce the computation time needed for large code bases. Also
# note that the size of a graph can be further restricted by
# DOT_GRAPH_MAX_NODES. Using a depth of 0 means no depth restriction.
# Minimum value: 0, maximum value: 1000, default value: 0.
# This tag requires that the tag HAVE_DOT is set to YES.

MAX_DOT_GRAPH_DEPTH    = 0

# Set the DOT_MULTI_TARGETS tag to YES to allow dot to generate multiple output
# files in one run (i.e. multiple -o and -T options on the command line). This
# makes dot run faster, but since only newer versions of dot (>1.8.10) support
# this, this feature is disabled by default.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_MULTI_TARGETS      = NO

# If the GENERATE_LEGEND tag is set to YES doxygen will generate a legend page
# explaining the meaning of the various boxes and arrows in the dot generated
# graphs.
# Note: This tag requires that UML_LOOK isn't set, i.e. the doxygen internal
# graphical representation for inheritance and collaboration diagrams is used.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

GENERATE_LEGEND        = YES

# If the DOT_CLEANUP tag is set to YES, doxygen will remove the intermediate
# files that are used to generate the various graphs.
#
# Note: This setting is not only used for dot files but also for msc temporary
# files.
# The default value is: YES.

DOT_CLEANUP            = YES

# You can define message sequence charts within doxygen comments using the \msc
# command. If the MSCGEN_TOOL tag is left empty (the default), then doxygen will
# use a built-in version of mscgen tool to produce the charts. Alternatively,
# the MSCGEN_TOOL tag can also specify the name an external tool. For instance,
# specifying prog as the value, doxygen will call the tool as prog -T
# <outfile_format> -o <outputfile> <inputfile>. The external tool should support
# output file formats "png", "eps", "svg", and "ismap".

MSCGEN_TOOL            =

# The MSCFILE_DIRS tag can be used to specify one or more directories that
# contain msc files that are included in the documentation (see the \mscfile
# command).

MSCFILE_DIRS           =



```


---
### Archivo: `INSTALL.md`

```
## Install `prometheus-client-c` sin Docker

El `Makefile` está configurado para usar Docker por defecto, para no usar Docker, podemos compilar manualmente la biblioteca.

### Pasos para compilar `prometheus-client-c` sin Docker:

1. **Revisar Dependencias Necesarias**:
   Asegúrate de tener las dependencias necesarias instaladas en tu sistema:

   - **GNU Make**: para ejecutar las tareas de compilación.
   - **CMake**: que se utiliza para configurar el proceso de compilación.
   - **gcc** o **clang**: el compilador C.
   - **libmicrohttpd-dev**: biblioteca para manejar servidores HTTP.

   En sistemas basados en Debian/Ubuntu, puedes instalar estas dependencias ejecutando:

   ```bash
   sudo apt update
   sudo apt install make cmake gcc libmicrohttpd-dev
   ```

2. **Modificar el Makefile**:
   Si el `Makefile` intenta usar Docker por defecto, puedes modificarlo para evitar la sección que lo invoca. Aquí hay dos posibles enfoques:

   - **Opción 1**: Comentar o eliminar las partes del `Makefile` que invocan Docker. Busca las líneas que mencionan Docker (como `docker build` o `docker run`) y coméntalas o elimínalas.

     Edita el `Makefile` y busca una sección como esta:

     ```makefile
     docker:
         docker build -t prometheus-client-c-dev .
     ```

     Puedes comentar las líneas:

     ```makefile
     # docker:
     #     docker build -t prometheus-client-c-dev .
     ```

   - **Opción 2**: Ejecuta los comandos de compilación manualmente sin usar el `Makefile` (explicado en los siguientes pasos).

3. **Crear un Directorio de Compilación**:
   Muchos proyectos usan `CMake` para configurar el entorno de compilación. Crea un directorio de compilación dentro del repositorio para organizar los archivos:

   ```bash
   mkdir build
   cd build
   ```

4. **Configurar el Proyecto con CMake**:
   Ejecuta `CMake` desde el directorio `build` para configurar el proyecto:

   ```bash
   cmake ..
   ```

   Esto generará los archivos de compilación necesarios.

5. **Compilar el Proyecto**:
   Ahora puedes compilar el proyecto ejecutando:

   ```bash
   make
   ```

6. **Instalar la Biblioteca**:
   Una vez que se haya completado la compilación, puedes instalar la biblioteca en tu sistema ejecutando:

   ```bash
   sudo make install
   ```

   Esto instalará los archivos en las rutas estándar del sistema, como `/usr/local/lib` y `/usr/local/include`.

### Verificar la Instalación

Puedes verificar que la biblioteca se instaló correctamente comprobando que los archivos de cabecera y las bibliotecas están en las ubicaciones correctas:

```bash
ls /usr/local/include/prom.h
ls /usr/local/lib/libprom.so
```

### Compilar tu Programa Usando `prometheus-client-c`

Ahora que `prometheus-client-c` está instalada, puedes compilar tus programas que dependan de esta biblioteca con el siguiente comando:

```bash
gcc -o my_program my_program.c -lprom
```

Este comando compila el archivo `my_program.c` y enlaza la biblioteca `prom`.

### Resumen

1. Asegúrate de tener las dependencias instaladas.
2. Modifica el `Makefile` para evitar Docker o ignóralo.
3. Usa `CMake` para configurar el proyecto.
4. Compila con `make`.
5. Instala la biblioteca con `sudo make install`.

## promhttp

Necesitas compilar e instalar `promhttp` por separado si deseas exponer tus métricas a través de HTTP. `promhttp` es el servidor HTTP que expone las métricas de Prometheus, y no está incluido en la instalación básica de `prometheus-client-c`. Sigue los pasos a continuación para instalarlo correctamente.

### Instalación de `promhttp`

1. Cambia al directorio donde está implementado `promhttp`:

   ```bash
   cd prometheus-client-c/promhttp
   ```

2. Compila el proyecto:

   ```bash
   make
   ```

3. Instala `promhttp`:
   ```bash
   sudo make install
   ```

### Verificar la Instalación

Para verificar que `promhttp` se instaló correctamente, asegúrate de que los archivos correspondientes estén en las ubicaciones esperadas:

```bash
ls /usr/local/include/promhttp.h
ls /usr/local/lib/libpromhttp.so
```

Una vez que hayas instalado `promhttp`, podrás iniciar el servidor HTTP que expone tus métricas a Prometheus en el puerto configurado, como se describe en los ejemplos de código.

```


---
### Archivo: `README.md`

```
# Monitor de Sistemas en un Mundo Postapocalíptico

## Introducción

En un mundo devastado por la pandemia del Cordyceps, donde cada recurso cuenta para la supervivencia, es crucial mantener y monitorear los sistemas que aún funcionan. En esta guía, aprenderás a desarrollar un programa en C que permita a las comunidades sobrevivientes leer datos de uso de CPU desde el sistema de archivos `/proc`, exponer estos datos utilizando la librería `prometheus-client-c` y, finalmente, visualizarlos en Grafana. Este proceso te ayudará a monitorear y analizar en tiempo real el consumo de CPU de los sistemas críticos que mantienen en funcionamiento las pocas infraestructuras tecnológicas restantes.

## ¿Qué aprenderemos?

- **Conocimientos Básicos en C:** Manejo de archivos y entradas/salidas en C para sistemas en condiciones adversas.
- **Sistema Operativo Linux:** Uso del archivo `/proc` en sistemas Linux supervivientes.
- **Prometheus y Grafana:** Instalación y configuración en entornos con recursos limitados.
- **Librería `prometheus-client-c`:** Utilización para exponer métricas esenciales para la supervivencia tecnológica.

### Preparativos

Dado que los recursos son escasos y las conexiones a internet son prácticamente inexistentes, asumiremos que tienes acceso local a los paquetes necesarios o que los has rescatado de servidores abandonados.

### Instalación de Prometheus

Consulta el manual local [INSTALL.md](INSTALL.md) que recuperamos de los antiguos servidores para instalar Prometheus desde los recursos disponibles.

### Instalación de Grafana

Sigue las instrucciones en los documentos impresos que tenemos disponibles, equivalentes a [esta guía](https://grafana.com/docs/grafana/latest/setup-grafana/installation/debian/).

### Instalación de `prometheus-client-c`

Asegúrate de tener acceso al repositorio local o al medio de almacenamiento donde se encuentra la librería:

```bash
git clone https://github.com/digitalocean/prometheus-client-c.git
cd prometheus-client-c
make
sudo make install
```

## Paso 1: Lectura de Datos de Consumo de CPU desde `/proc/`

Incluso en estos tiempos, los sistemas Linux siguen siendo el pilar de nuestra infraestructura tecnológica. Los archivos del directorio `/proc/` nos permite acceder a estadísticas vitales del sistema, incluyendo el consumo de CPU, esencial para asegurar que nuestros sistemas no fallen en momentos críticos.

### Explicación de `/proc/stat`

El archivo `/proc/stat` contiene líneas que comienzan con "cpu", seguidas de valores que representan el tiempo que la CPU ha pasado en diferentes estados: `user`, `nice`, `system`, `idle`, etc.

Ejemplo de salida:

```
cpu  4705 0 3421 1204310 50 120 0 0 0 0
```

- `user`: Tiempo en modo usuario (procesos normales).
- `nice`: Tiempo en procesos con prioridad modificada.
- `system`: Tiempo ejecutando procesos del sistema.
- `idle`: Tiempo que la CPU ha estado inactiva (importante para gestionar recursos).

### Código en C para Leer `/proc/stat`

Consulta el programa de ejemplo `read_cpu_usage.c`, que hemos adaptado para funcionar en nuestras condiciones actuales.

#### Explicación del Código:

- **`fopen`:** Abre `/proc/stat` en modo lectura.
- **`fgets`:** Lee línea por línea hasta encontrar la información de la CPU.
- **`strncmp`:** Verifica que estamos analizando la línea correcta.
- **`fclose`:** Cierra el archivo para conservar recursos.

## Paso 2: Exponer los Datos a Prometheus

Es vital compartir estas métricas con los demás puestos de control. Al exponer estos datos, podemos mantener una vigilancia constante y coordinada de nuestros sistemas.

### Agregar `prometheus-client-c` a tu Proyecto

Compila tu código, por ejemplo, 'expose_metrics.c':

```bash
gcc expose_metrics.c -o metrics -lprom -pthread -lpromhttp
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
./metrics
```

### Acceder a `/metrics` de Prometheus

Este endpoint expone las métricas en el formato que Prometheus puede recolectar. Asegúrate de que los demás puestos puedan acceder a este endpoint para una monitorización colaborativa.

Si experimentas problemas como un "segfault", revisa cuidadosamente el manejo de las métricas en el código, ya que puede ser crítico para la estabilidad del sistema.

## Paso 3: Visualizar los Datos en Grafana

Con las métricas expuestas y recolectadas, utilizaremos Grafana para visualizarlas en nuestros monitores y así mantener una vigilancia constante.

### Configurar Grafana

1. Accede a Grafana desde el terminal seguro.
2. Configura Prometheus como fuente de datos:
   - URL: `http://localhost:9090` (o la dirección del servidor Prometheus en tu red local).
3. Crea un nuevo dashboard y añade un panel con la métrica `cpu_usage`.

### Ejemplo de Consulta

Utiliza la siguiente consulta en Grafana para visualizar el uso de CPU:

```
cpu_usage
```

## Actividad

### Mejorar tu Dashboard

Es esencial ampliar nuestro monitoreo para garantizar la estabilidad de nuestros sistemas. Agrega las siguientes métricas:

- **Uso de Memoria:** Lee estadísticas desde `/proc/meminfo` y expón métricas para la memoria total, usada y disponible.
- **I/O de Disco:** Rastrea estadísticas desde `/proc/diskstats` para prevenir fallos en el almacenamiento.
- **Estadísticas de Red:** Expon métricas de tráfico desde `/proc/net/dev` para asegurar la comunicación entre puestos.
- **Conteo de Procesos:** Calcula el número de procesos en ejecución para detectar sobrecargas.
- **Cambios de Contexto:** Rastrea desde `/proc/stat` para analizar el rendimiento del sistema.

### Preguntas que debes responder en tu informe

1. **¿Cuál es el propósito del sistema de archivos `/proc` en Linux, y cómo podemos usarlo para recopilar métricas del sistema?**
2. **¿Cómo interpretas los campos en `/proc/stat` relacionados con el uso de la CPU, y cómo se utilizan para calcular el porcentaje de utilización de la CPU?**
3. **Explica cómo Prometheus recopila y almacena métricas, y cómo Grafana visualiza estos datos. ¿Cuáles son los componentes clave de cada uno?**
4. **¿Cuál es la diferencia entre un _gauge_, un _counter_ y un _histograma_ en Prometheus? Proporciona un ejemplo de cuándo debería usarse cada uno.**
5. **¿Por qué sería necesario un _mutex_ al trabajar con métricas en un entorno multi-thread? ¿Qué podría salir mal si no se utiliza?**

## Conclusión

A pesar de las adversidades, hemos logrado crear un programa en C que lee el uso de la CPU y la memoria desde /proc, expone esos datos y los visualiza para mantener nuestros sistemas críticos en funcionamiento. Este conocimiento es vital para la supervivencia y el restablecimiento de nuestra sociedad.

## Recursos Adicionales

- **Documentación de `/proc`**: Consulta los manuales locales o documentos impresos que hemos recopilado.
- **Prometheus Client for C**: Revisa el código fuente disponible en nuestros repositorios locales.
- **Documentación de Grafana**: Utiliza las guías impresas que tenemos en nuestro centro de control.

```


---
### Archivo: `resumen_completo_proyecto.md`

```
# Contenido del Proyecto: so-i-24-javii54311

## Estructura del Proyecto

```
./
.clang-format
.gitignore
.gitmodules
CMakeLists.txt
Doxyfile
INSTALL.md
LICENSE
README.md
resumen_completo_proyecto.md
build/
    CMakeCache.txt
    CPackConfig.cmake
    CPackSourceConfig.cmake
    Makefile
    cmake_install.cmake
    CMakeFiles/
        CMakeConfigureLog.yaml
        CMakeDirectoryInformation.cmake
        Makefile.cmake
        Makefile2
        TargetDirectories.txt
        cmake.check_cache
        progress.marks
        3.28.3/
            CMakeCCompiler.cmake
            CMakeDetermineCompilerABI_C.bin
            CMakeSystem.cmake
            CompilerIdC/
                CMakeCCompilerId.c
                a.out
                tmp/
        CMakeScratch/
        pkgRedirects/
        monitor.dir/
            DependInfo.cmake
            build.make
            cmake_clean.cmake
            compiler_depend.make
            compiler_depend.ts
            depend.make
            flags.make
            link.txt
            progress.make
            src/
include/
    constants.h
    metric_exposer.h
    metrics.h
.github/
    .keep
    actions/
        building/
            action.yml
        documentation/
            action.yml
        style/
            action.yml
    workflows/
        QAWorkflow.yml
external/
    prometheus-client-c/
        .clang-format
        .gitignore
        CODEOWNERS
        Doxyfile
        LICENSE
        Makefile
        README.md
        VERSION
        auto
        example/
            Makefile
            README.md
            bar.c
            bar.h
            foo.c
            foo.h
            main.c
        docker/
            Makefile
        prom/
            CMakeLists.txt
            include/
                prom.h
                prom_alloc.h
                prom_collector.h
                prom_collector_registry.h
                prom_counter.h
                prom_gauge.h
                prom_histogram.h
                prom_histogram_buckets.h
                prom_linked_list.h
                prom_map.h
                prom_metric.h
                prom_metric_sample.h
                prom_metric_sample_histogram.h
            test/
                CMakeLists.txt
                prom_collector_registry_test.c
                prom_collector_test.c
                prom_counter_test.c
                prom_gauge_test.c
                prom_histogram_buckets_test.c
                prom_histogram_test.c
                prom_linked_list_test.c
                prom_map_test.c
                prom_metric_formatter_test.c
                prom_metric_sample_test.c
                prom_metric_test.c
                prom_process_limits_test.c
                prom_procfs_test.c
                prom_string_builder_test.c
                prom_test_helpers.c
                prom_test_helpers.h
                fixtures/
                    limits
                    stat
            src/
                prom_assert.h
                prom_collector.c
                prom_collector_registry.c
                prom_collector_registry_i.h
                prom_collector_registry_t.h
                prom_collector_t.h
                prom_counter.c
                prom_errors.h
                prom_gauge.c
                prom_histogram.c
                prom_histogram_buckets.c
                prom_linked_list.c
                prom_linked_list_i.h
                prom_linked_list_t.h
                prom_log.h
                prom_map.c
                prom_map_i.h
                prom_map_t.h
                prom_metric.c
                prom_metric_formatter.c
                prom_metric_formatter_i.h
                prom_metric_formatter_t.h
                prom_metric_i.h
                prom_metric_sample.c
                prom_metric_sample_histogram.c
                prom_metric_sample_histogram_i.h
                prom_metric_sample_histogram_t.h
                prom_metric_sample_i.h
                prom_metric_sample_t.h
                prom_metric_t.h
                prom_process_fds.c
                prom_process_fds_i.h
                prom_process_fds_t.h
                prom_process_limits.c
                prom_process_limits_i.h
                prom_process_limits_t.h
                prom_process_stat.c
                prom_process_stat_i.h
                prom_process_stat_t.h
                prom_procfs.c
                prom_procfs_i.h
                prom_procfs_t.h
                prom_string_builder.c
                prom_string_builder_i.h
                prom_string_builder_t.h
        docs/
            annotated.html
            bc_s.png
            bdwn.png
            classes.html
            closed.png
            dir_000003_000000.html
            dir_21619567660c3332e6a61228c76007f9.html
            dir_21619567660c3332e6a61228c76007f9_dep.dot
            dir_21619567660c3332e6a61228c76007f9_dep.map
            dir_21619567660c3332e6a61228c76007f9_dep.md5
            dir_21619567660c3332e6a61228c76007f9_dep.png
            dir_2c63f04010e7ff462eba5e344f58cd21.html
            dir_83821d63a26a6eb889c4977bd95ca990.html
            dir_8d140c3a8bac3cd45205c9ea74fd211f.html
            dir_8d140c3a8bac3cd45205c9ea74fd211f_dep.dot
            dir_8d140c3a8bac3cd45205c9ea74fd211f_dep.map
            dir_8d140c3a8bac3cd45205c9ea74fd211f_dep.md5
            dir_8d140c3a8bac3cd45205c9ea74fd211f_dep.png
            doc.png
            doxygen.css
            doxygen.png
            dynsections.js
            files.html
            folderclosed.png
            folderopen.png
            functions.html
            functions_vars.html
            globals.html
            globals_defs.html
            globals_enum.html
            globals_eval.html
            globals_func.html
            globals_type.html
            globals_vars.html
            graph_legend.dot
            graph_legend.html
            graph_legend.md5
            graph_legend.png
            index.html
            jquery.js
            menu.js
            menudata.js
            nav_f.png
            nav_g.png
            nav_h.png
            open.png
            pages.html
            prom_8h.html
            prom_8h__dep__incl.dot
            prom_8h__dep__incl.map
            prom_8h__dep__incl.md5
            prom_8h__dep__incl.png
            prom_8h__incl.dot
            prom_8h__incl.map
            prom_8h__incl.md5
            prom_8h__incl.png
            prom_8h_source.html
            prom__alloc_8h.html
            prom__alloc_8h__dep__incl.map
            prom__alloc_8h__dep__incl.md5
            prom__alloc_8h__dep__incl.png
            prom__alloc_8h__incl.map
            prom__alloc_8h__incl.md5
            prom__alloc_8h__incl.png
            prom__alloc_8h_source.html
            prom__collector_8h.html
            prom__collector_8h__dep__incl.dot
            prom__collector_8h__dep__incl.map
            prom__collector_8h__dep__incl.md5
            prom__collector_8h__dep__incl.png
            prom__collector_8h__incl.dot
            prom__collector_8h__incl.map
            prom__collector_8h__incl.md5
            prom__collector_8h__incl.png
            prom__collector_8h_source.html
            prom__collector__registry_8h.html
            prom__collector__registry_8h__dep__incl.dot
            prom__collector__registry_8h__dep__incl.map
            prom__collector__registry_8h__dep__incl.md5
            prom__collector__registry_8h__dep__incl.png
            prom__collector__registry_8h__incl.dot
            prom__collector__registry_8h__incl.map
            prom__collector__registry_8h__incl.md5
            prom__collector__registry_8h__incl.png
            prom__collector__registry_8h_source.html
            prom__counter_8h.html
            prom__counter_8h__dep__incl.dot
            prom__counter_8h__dep__incl.map
            prom__counter_8h__dep__incl.md5
            prom__counter_8h__dep__incl.png
            prom__counter_8h__incl.dot
            prom__counter_8h__incl.map
            prom__counter_8h__incl.md5
            prom__counter_8h__incl.png
            prom__counter_8h_source.html
            prom__errors_8h.html
            prom__errors_8h__dep__incl.dot
            prom__errors_8h__dep__incl.map
            prom__errors_8h__dep__incl.md5
            prom__errors_8h__dep__incl.png
            prom__errors_8h_source.html
            prom__gauge_8h.html
            prom__gauge_8h__dep__incl.dot
            prom__gauge_8h__dep__incl.map
            prom__gauge_8h__dep__incl.md5
            prom__gauge_8h__dep__incl.png
            prom__gauge_8h__incl.dot
            prom__gauge_8h__incl.map
            prom__gauge_8h__incl.md5
            prom__gauge_8h__incl.png
            prom__gauge_8h_source.html
            prom__histogram_8h.html
            prom__histogram_8h__dep__incl.dot
            prom__histogram_8h__dep__incl.map
            prom__histogram_8h__dep__incl.md5
            prom__histogram_8h__dep__incl.png
            prom__histogram_8h__incl.dot
            prom__histogram_8h__incl.map
            prom__histogram_8h__incl.md5
            prom__histogram_8h__incl.png
            prom__histogram_8h_source.html
            prom__histogram__buckets_8h.html
            prom__histogram__buckets_8h__dep__incl.dot
            prom__histogram__buckets_8h__dep__incl.map
            prom__histogram__buckets_8h__dep__incl.md5
            prom__histogram__buckets_8h__dep__incl.png
            prom__histogram__buckets_8h__incl.map
            prom__histogram__buckets_8h__incl.md5
            prom__histogram__buckets_8h__incl.png
            prom__histogram__buckets_8h_source.html
            prom__linked__list_8h_source.html
            prom__map_8h_source.html
            prom__metric_8h.html
            prom__metric_8h__dep__incl.dot
            prom__metric_8h__dep__incl.map
            prom__metric_8h__dep__incl.md5
            prom__metric_8h__dep__incl.png
            prom__metric_8h__incl.dot
            prom__metric_8h__incl.map
            prom__metric_8h__incl.md5
            prom__metric_8h__incl.png
            prom__metric_8h_source.html
            prom__metric__sample_8h.html
            prom__metric__sample_8h__dep__incl.dot
            prom__metric__sample_8h__dep__incl.map
            prom__metric__sample_8h__dep__incl.md5
            prom__metric__sample_8h__dep__incl.png
            prom__metric__sample_8h__incl.dot
            prom__metric__sample_8h__incl.map
            prom__metric__sample_8h__incl.md5
            prom__metric__sample_8h__incl.png
            prom__metric__sample_8h_source.html
            prom__metric__sample__histogram_8h.html
            prom__metric__sample__histogram_8h__dep__incl.dot
            prom__metric__sample__histogram_8h__dep__incl.map
            prom__metric__sample__histogram_8h__dep__incl.md5
            prom__metric__sample__histogram_8h__dep__incl.png
            prom__metric__sample__histogram_8h__incl.dot
            prom__metric__sample__histogram_8h__incl.map
            prom__metric__sample__histogram_8h__incl.md5
            prom__metric__sample__histogram_8h__incl.png
            prom__metric__sample__histogram_8h_source.html
            promhttp_8h.html
            promhttp_8h__incl.dot
            promhttp_8h__incl.map
            promhttp_8h__incl.md5
            promhttp_8h__incl.png
            promhttp_8h_source.html
            splitbar.png
            structprom__histogram__buckets-members.html
            structprom__histogram__buckets.html
            sync_off.png
            sync_on.png
            tab_a.png
            tab_b.png
            tab_h.png
            tab_s.png
            tabs.css
            todo.html
            search/
                all_0.html
                all_0.js
                all_1.html
                all_1.js
                all_2.html
                all_2.js
                all_3.html
                all_3.js
                all_4.html
                all_4.js
                classes_0.html
                classes_0.js
                close.png
                defines_0.html
                defines_0.js
                enums_0.html
                enums_0.js
                enumvalues_0.html
                enumvalues_0.js
                files_0.html
                files_0.js
                functions_0.html
                functions_0.js
                mag_sel.png
                nomatches.html
                pages_0.html
                pages_0.js
                pages_1.html
                pages_1.js
                search.css
                search.js
                search_l.png
                search_m.png
                search_r.png
                searchdata.js
                typedefs_0.html
                typedefs_0.js
                variables_0.html
                variables_0.js
                variables_1.html
                variables_1.js
                variables_2.html
                variables_2.js
        autolib/
            autolib.sh
            build.sh
            docker.sh
            env.sh
            output.sh
            test.sh
            cmd/
                clean
                dev
                docs
                format
                package
                smoke
                test
        .github/
            workflows/
                ci.yaml
        promhttp/
            CMakeLists.txt
            include/
                promhttp.h
            src/
                promhttp.c
        promtest/
            CMakeLists.txt
            test/
                promtest.c
                promtest_counter.c
                promtest_counter.h
                promtest_gauge.c
                promtest_gauge.h
                promtest_helpers.c
                promtest_helpers.h
                promtest_histogram.c
                promtest_histogram.h
src/
    main.c
    metric_exposer.c
    metrics.c
.git/
    COMMIT_EDITMSG
    FETCH_HEAD
    HEAD
    ORIG_HEAD
    config
    description
    index
    packed-refs
    modules/
        prometheus-client-c/
            FETCH_HEAD
            HEAD
            config
            description
            index
            packed-refs
            info/
                exclude
            logs/
                HEAD
                refs/
                    remotes/
                        origin/
                            HEAD
                    heads/
                        master
            refs/
                remotes/
                    origin/
                        HEAD
                tags/
                heads/
                    master
            hooks/
                applypatch-msg.sample
                commit-msg.sample
                fsmonitor-watchman.sample
                post-update.sample
                pre-applypatch.sample
                pre-commit.sample
                pre-merge-commit.sample
                pre-push.sample
                pre-rebase.sample
                pre-receive.sample
                prepare-commit-msg.sample
                push-to-checkout.sample
                sendemail-validate.sample
                update.sample
            branches/
            objects/
                info/
                pack/
                    pack-9d2f03ae5de95eebba711cbd0b2573626c397cb9.idx
                    pack-9d2f03ae5de95eebba711cbd0b2573626c397cb9.pack
                    pack-9d2f03ae5de95eebba711cbd0b2573626c397cb9.rev
    info/
        exclude
    logs/
        HEAD
        refs/
            remotes/
                origin/
                    HEAD
                    develop
            heads/
                develop
                master
    refs/
        remotes/
            origin/
                HEAD
                develop
        tags/
        heads/
            develop
            master
    hooks/
        applypatch-msg.sample
        commit-msg.sample
        fsmonitor-watchman.sample
        post-update.sample
        pre-applypatch.sample
        pre-commit.sample
        pre-merge-commit.sample
        pre-push.sample
        pre-rebase.sample
        pre-receive.sample
        prepare-commit-msg.sample
        push-to-checkout.sample
        sendemail-validate.sample
        update.sample
    branches/
    objects/
        ad/
            071019e3d1de72a7180e5f92af5ca78a580604
            1c435ed176370a8d60f095c24e40c4e31b86c9
            6f8dbb99fe29872ead99d26094eae6bb3d6887
        48/
            689a9a90a7d0e94927ac1c1cccb3b3ca333164
            fbb53e2e946d26ea6c2bda1b6fc100bc2825d7
        d3/
            a149dcddd3353cd3ae1ae1c2545f7947023704
        f5/
            29a573005de7389c3a53d7e526f55a6c823678
            6a918ada5e871b4cb3c723b32ce1801a536dd7
        e5/
            9b89697818f0d2098b7a56c0f99ac0c9e46588
        06/
            10556a870f7b93fab2c39c85068b0e3289c51c
            cf98223bef7d23d80be4f126482ad0d2891d58
        37/
            6d1ceaf099e3f003e3567c7e4518fc7d143ece
        82/
            d9afb52c370c25f3e695614f9d4666f9eca67a
        9d/
            12e876b737989c5577844bd57cc01b230c4b0e
        53/
            570de7df91dc0458991dd4265379c640d8badb
        info/
        a4/
            c03ce6bc7874fc612014d0034f616d832601cf
        63/
            1a309dd2d7e7cf29d27d7c9602ba7e01d908e0
            a947f35d0a5fecc87699766fdbbd5da5c6e3eb
        6c/
            bf02223cbf749e46df331bc57fd70aab985201
        e1/
            5d82703cd30b94b496d6e0df388dcbab1a777e
        c3/
            30e597f860d05c6797819e5c107c3cad9a8bec
        b9/
            53da98485ba07bef9d4d83f9b4a801d9d1c240
        9c/
            09c8a997da0de506a4a4b023dc6c24081fa5ad
            4d667aa0febac88944e43a14fbf7b3f1c37600
            a820df187d1ad332580679b8cb363694574b2b
        0e/
            d3e7616c0c676e93583e5e9364f9b16d0e447b
        62/
            80894728bfcbf21ebae99b18ae12f19f0a2467
        af/
            1e6eecd333f4db7ad0151f6995c704635d53c1
        c9/
            46fed59960f7c24f49634ac70bc6df21077825
            4f7d79f0b91b1efc741bc892ad0c3aeee3ef60
            5007aa621f4103754b55730fb7de372ab5d722
        4a/
            d4a8ae813e2d0b891ca41589668496453ef3cb
        bc/
            5747ac4394f7ffb4a01af8e3945c067f2e3c73
        7b/
            1517e10dada9aadbe6fa7c8301b20492bae188
        99/
            0d1accca4d16cce3c47fe98ed4b330b78a70b9
            5eabd67c44bd865adfa873e25af3b6191f8592
        1f/
            b1ac89a5e7f347a07e035f3bce873959befc09
        e8/
            1b0fba2d8e5089563bce86f239047b3f7925d5
        5d/
            8efd15fb9f8a66ee6726490d2f659ddc857bbd
        40/
            3c120fd6ad6c8c3dbd3da65cd5fd4a25fdfcb0
        c1/
            c7d445fc06cca9b66f9d117d06cce71bd7c67d
        ac/
            323160281d11b4ada7cae9fca759cda2399f55
            6722e27647b82c561a80e887bdf315d68e617e
        cc/
            8795020315ce34358ad2156c4cb4ea45efdd19
            d38ac197b47377761fa3e73151d4f7631b0cfd
        56/
            97458325679d08926122b727fea7bec9cf05a6
        25/
            c9d53f3bbcd8cbef8442d5656aec0e783a8247
        a7/
            69c73a49a62533146bef6b8b1edf8db1a019d7
        be/
            cbb303fcf2c269654a0569d33d595a529f0db9
        7c/
            8829937255078f5361701f63213d8a912c4482
        89/
            619df19efe6a396639ea85d945c64c18a59ef2
        69/
            8b0ee944f5e4a07e603ecfa1810829ea834bc7
            90aaa48f4ae0319710899927656b80f65019b1
        60/
            3167c088f94f09fc8f8f4b2a2615b4de60b31b
        b6/
            cf444b31708e04d211a0e6be01b94ab14904e5
        21/
            4a5f6d94c55121384348e5a6294b772373dab5
            90bd317f91e5821bb28ac56b1fdd33fd3453b6
        bf/
            bb018bbda5824d5a5ef57ffedd86c25861196a
        12/
            d36619a35c0c3505d871ee2a14f7835083c49c
        38/
            9fc4db1ca47dd49a2dc5004b1a71d5e5ddf786
        f0/
            9e2a905dadb99cb1e8d465291c6b9d5ca526b8
        c6/
            0975ebb8f70865df453c1bfe9342781482a8e4
            b8edf5ffaed939ddf41e7cd42301d3bf113b15
        d5/
            008c0ce5f2d4b729a7916d25cb2074a3045e35
            c9f5e2c864f61c0b1ed79392d004124702a6af
        aa/
            2cb00adc8e627c5a370c28a0d22eada424a319
        26/
            0187792677af95d52b530755967eae3d9c65fc
            ec237602738a1f86ef475558602d9d0edc562f
        57/
            09f235efe6c14a56819dbceaffc12c597e5bb4
        7a/
            a3820ca859f351d3bfce0b5a81bc60e15b7f76
        a6/
            5e20c2bfd0be18bdfbc2761538078740213cf0
        77/
            0a58cdb1dbb89b38e1a57f035046005123f487
        ab/
            2801e6081192b67ec17eb3d264d06daf1c7e52
        e2/
            59f2e987b717641730ece407d49c99a047685a
            8b810559f146079138d46d2ac19926bb26dabf
        73/
            9fe944dafd7ec8ee910c7d6bf27af869f22e5c
        49/
            1b90082f6a7320f3479861f0468669dfe7c171
            965369f97c742ebec28ac15036f5499db95c21
            fdcc13177948580b4a92c3f21d54751f95326b
        10/
            d2104a15f9de3d1f80b544587c69b3d1edcf34
        ba/
            c06a9aebf2496554c17bfc4cfe543677137c85
        05/
            1d3895b0f09e6a54b93ab48f5d10b836e7bd89
        3a/
            77c875173fc7cdfde782323d2479c56fc3afc0
        fa/
            c195d1c080a975faaf61827901845fe2dde2e7
        33/
            0b64ef45b37996469209a2c0d9dc774dfcafaa
            a6304bad3bb741e53e1d516916cc4aab2101ac
        50/
            187a8a5f763ca8340ba289c9654e181c3f0c03
        71/
            4e2da3fcf198988c451e9aae1bfbe19a8537cb
        93/
            dfba2b3912d0db91d1e8252519e246db0435f8
            e78944a31d7841100cd8723728c21848754f27
        1c/
            63ce5f1dac19f2d9a3ff94ff6b4b4d16ae12de
            7f56543e78a67711e898c5fec2e03b1190e804
        2a/
            6aff68f01e047b0f269561ecff6e454cd17df1
            f685a65bd3a913b555de4bb4ac815d8163780a
        d7/
            014ed1c8fa21c33750d4c60bb1a324f77469c6
        23/
            2bb952c0ee7a4609b8acec3c6a7a36b1d5af59
        pack/
            pack-de18e24a356d85544dccbf77419b65c954f312d6.idx
            pack-de18e24a356d85544dccbf77419b65c954f312d6.pack
            pack-de18e24a356d85544dccbf77419b65c954f312d6.rev
        81/
            202b7b1ef3669e67eb7cc6b9a2ccd68bd4f2a8
            c308090500030573d49bde1d015edfb8978f74
        32/
            d38542891cbe0f4d1e0333b10daf6103e01323
        df/
            9cd93a1f53066c70642171e91bbbc2ac7beca5
        a2/
            28a8a3a8bfd9c565d6e484ede14134b5764379
            e2778834ba1d8db54e70638233bff109a203fc
            f7ba6afa7a9ce2853670424f12093fb8b97942
        07/
            9b38a1a7f700749a519043ab8182e20727de9d
        d6/
            d0f6634c93c5c3e76bb1a7a82b4b89bb5fa0c6
        42/
            6491f1cecc30c364d09d836f60ff2147030d21
        79/
            cc5de0575ed02b3ac602eb0dffa80054a4626d
            d76df7826fa471d94da86f7c2a594fec06ff4a
        e6/
            e13653dd6c26ca5d9676642fa4c627c4d9f301
        55/
            09b99c31cb539656eec25a3a9329197df36c38
            28584ed882da3787185a5aa5f8f49e8baf6357
            2bf785767e739c26a8d7c6675b6c04904a204b
        6e/
            2bded8026924bf2704b4a298c6df8c6b1ad641
            683237c9943235e972b48cb6d2190ea75c1fee
        3b/
            dc5f436806fe592320fa587d4686b8b4a895d5
        7d/
            83a4fe921dd48e4277cfe45763d1b3cd49b4b3
        78/
            39f96bfbd22ab2af6796487e6be226912ff9da
            c45a533539eaac643fc94900465414f5f3b2f8
        88/
            a0cc61688b35a2c6e9414ec8bba52880f14466
        6d/
            f55a76fbf74bc4c0e6ec63bae1f15160ca5dc2
        ed/
            f10da09ec72af9cd01998e028de8f952671e7e
        47/
            c7c1edaae059de4166fff904b52cd88419edfe
            d9a480a85ce167bd4a577991a0030aed48d514
        bb/
            68259d28ca4ecc51eddff05042fc88ae37a1ee
            77736af010b572bafa5b10b25b467d6ce7b974
        dc/
            9b9f47d2b014201017c53da238b35b842a7ca1
            e3bb47e2c349130124840fd79f1d9f97e29165
        0f/
            289c357e37b9d2bd1c0664f8e0b51d613528a8
        91/
            f7dbbdf570f2cf3acbe91dc11bbad9386fb868
        2c/
            2d1c58bab28912824f49929d3e3d48d27cadb4
        f3/
            2ddb1086ba98010fa372959b75c5288f09d4f3
            ee8f80632c01f95de0fd5f548f9cacd293ecad
        fc/
            badaa7a3b9c17a9a5af17e8156b5983898c1fe
        ae/
            489a166524126b142079d63d0de046465da2f2
        d4/
            7e521b0e341d98deff9eb57cb9a0432f63d74a
        66/
            3f4b4d3c2afb283117da6fe8edfa28177105da
        00/
            902cf178e0ccd473c6af065d4aca31d128f5ca
        f6/
            c31ff1d52d23b57617be95573c9c3065413a14
        94/
            593e512acbe270fad885b8cdfaa6c3afde617d
            8a725a0a2cca83be34e7e09b0d0abc92f3fb50
        b8/
            3adecb66a42029c64564f4308283c5f9c28253
            b0780cb64540b656139fde59922b7712e0544f
        fd/
            24b9d962c7a1c5807360436ae83ba9ece50c77
        9a/
            c84b3706377c7521406d7fec3737e6f3d91586
        a8/
            b30b396245ddbf88a93a48cf2dd22d74b8aeb6
        c5/
            70b47b39e8b6031211739636a99aaa585a4e75
            dcd298610a44d3e5bf93cfbd1009a646d8fd67
        30/
            5580e9b9f370b2803d195a1d50c72f564228f2
        45/
            de43d8c4a83a2d7bae4cba81da715f345ff6ad
        ef/
            61902302c766338b74eca4bb3fb067ff6db422
        41/
            6b3f1f3b45983b29c26565394f6e467a43bfb7
        a5/
            53828868ee4bb7c16782071a8efaedf319d584
            63760097d468ca782754a066e9f4da15055aeb
        84/
            7485c80a4722f0daa6fb0cd22dd4e5f939ece5
            9d25dd53b15b3e400c8d7832421886df354eb3
        51/
            3f47d1a0e4e75b401883070b148dd9e99827f0
        76/
            cd1d8b1e8521c65b086ea94fd11e43383491c4
        43/
            2cd4bae72172d5b033f8956e329d6b18378a47
        1b/
            6e1013b4fe8c6d628dda54971d18724a0a8370
        f4/
            8eef3781c8dc853e9bf894b6c9e9df63f47521
        36/
            4d0abf6c3267f57ded15c2556e0c8f051972d6
        e3/
            1eed1325b38d7f8f18c67ce8be3886bd7725be
        5e/
            535ab80586a736c7e7ed0d5f145ca4d1fd3470
            6e8778ece556a09104daafe090fe05245dab5e
        17/
            50ea47bb4649258474e509f46d0175707e90e1
        35/
            01b07c0ec5d682a33685cc4c55165879ec763f
        d0/
            c00196a3af7b0daf07ab00a664dc3d31560292
        96/
            bb060f2225af57105e64591942e918b2366675
        2b/
            2986c4246852a6b6037f1f4bd27a78710d980c
        c7/
            39b937791793d0f05ac478ebecc4b2485292c6
            a47dc9a17d18b7bd825ba98ddb283afc12c127
```


---
### Archivo: `build/CMakeCache.txt`

```
# This is the CMakeCache file.
# For build in directory: /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build
# It was generated by CMake: /usr/bin/cmake
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//Path to a program.
CMAKE_ADDR2LINE:FILEPATH=/usr/bin/addr2line

//Path to a program.
CMAKE_AR:FILEPATH=/usr/bin/ar

//Choose the type of build, options are: None Debug Release RelWithDebInfo
// MinSizeRel ...
CMAKE_BUILD_TYPE:STRING=

//Enable/Disable color output during build.
CMAKE_COLOR_MAKEFILE:BOOL=ON

//C compiler
CMAKE_C_COMPILER:FILEPATH=/usr/bin/cc

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-13

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-13

//Flags used by the C compiler during all build types.
CMAKE_C_FLAGS:STRING=

//Flags used by the C compiler during DEBUG builds.
CMAKE_C_FLAGS_DEBUG:STRING=-g

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the C compiler during RELEASE builds.
CMAKE_C_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//Path to a program.
CMAKE_DLLTOOL:FILEPATH=CMAKE_DLLTOOL-NOTFOUND

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during RELEASE builds.
CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/pkgRedirects

//User executables (bin)
CMAKE_INSTALL_BINDIR:PATH=bin

//Read-only architecture-independent data (DATAROOTDIR)
CMAKE_INSTALL_DATADIR:PATH=

//Read-only architecture-independent data root (share)
CMAKE_INSTALL_DATAROOTDIR:PATH=share

//Documentation root (DATAROOTDIR/doc/PROJECT_NAME)
CMAKE_INSTALL_DOCDIR:PATH=

//C header files (include)
CMAKE_INSTALL_INCLUDEDIR:PATH=include

//Info documentation (DATAROOTDIR/info)
CMAKE_INSTALL_INFODIR:PATH=

//Object code libraries (lib)
CMAKE_INSTALL_LIBDIR:PATH=lib

//Program executables (libexec)
CMAKE_INSTALL_LIBEXECDIR:PATH=libexec

//Locale-dependent data (DATAROOTDIR/locale)
CMAKE_INSTALL_LOCALEDIR:PATH=

//Modifiable single-machine data (var)
CMAKE_INSTALL_LOCALSTATEDIR:PATH=var

//Man documentation (DATAROOTDIR/man)
CMAKE_INSTALL_MANDIR:PATH=

//C header files for non-gcc (/usr/include)
CMAKE_INSTALL_OLDINCLUDEDIR:PATH=/usr/include

//Install path prefix, prepended onto install directories.
CMAKE_INSTALL_PREFIX:PATH=/usr/local

//Run-time variable data (LOCALSTATEDIR/run)
CMAKE_INSTALL_RUNSTATEDIR:PATH=

//System admin executables (sbin)
CMAKE_INSTALL_SBINDIR:PATH=sbin

//Modifiable architecture-independent data (com)
CMAKE_INSTALL_SHAREDSTATEDIR:PATH=com

//Read-only single-machine data (etc)
CMAKE_INSTALL_SYSCONFDIR:PATH=etc

//Path to a program.
CMAKE_LINKER:FILEPATH=/usr/bin/ld

//Path to a program.
CMAKE_MAKE_PROGRAM:FILEPATH=/usr/bin/gmake

//Flags used by the linker during the creation of modules during
// all build types.
CMAKE_MODULE_LINKER_FLAGS:STRING=

//Flags used by the linker during the creation of modules during
// DEBUG builds.
CMAKE_MODULE_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during the creation of modules during
// MINSIZEREL builds.
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during the creation of modules during
// RELEASE builds.
CMAKE_MODULE_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during the creation of modules during
// RELWITHDEBINFO builds.
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Path to a program.
CMAKE_NM:FILEPATH=/usr/bin/nm

//Path to a program.
CMAKE_OBJCOPY:FILEPATH=/usr/bin/objcopy

//Path to a program.
CMAKE_OBJDUMP:FILEPATH=/usr/bin/objdump

//Value Computed by CMake
CMAKE_PROJECT_DESCRIPTION:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_HOMEPAGE_URL:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_NAME:STATIC=SystemMonitor

//Value Computed by CMake
CMAKE_PROJECT_VERSION:STATIC=0.1.3

//Value Computed by CMake
CMAKE_PROJECT_VERSION_MAJOR:STATIC=0

//Value Computed by CMake
CMAKE_PROJECT_VERSION_MINOR:STATIC=1

//Value Computed by CMake
CMAKE_PROJECT_VERSION_PATCH:STATIC=3

//Value Computed by CMake
CMAKE_PROJECT_VERSION_TWEAK:STATIC=

//Path to a program.
CMAKE_RANLIB:FILEPATH=/usr/bin/ranlib

//Path to a program.
CMAKE_READELF:FILEPATH=/usr/bin/readelf

//Flags used by the linker during the creation of shared libraries
// during all build types.
CMAKE_SHARED_LINKER_FLAGS:STRING=

//Flags used by the linker during the creation of shared libraries
// during DEBUG builds.
CMAKE_SHARED_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during the creation of shared libraries
// during MINSIZEREL builds.
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during the creation of shared libraries
// during RELEASE builds.
CMAKE_SHARED_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during the creation of shared libraries
// during RELWITHDEBINFO builds.
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//If set, runtime paths are not added when installing shared libraries,
// but are added when building.
CMAKE_SKIP_INSTALL_RPATH:BOOL=NO

//If set, runtime paths are not added when using shared libraries.
CMAKE_SKIP_RPATH:BOOL=NO

//Flags used by the linker during the creation of static libraries
// during all build types.
CMAKE_STATIC_LINKER_FLAGS:STRING=

//Flags used by the linker during the creation of static libraries
// during DEBUG builds.
CMAKE_STATIC_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during the creation of static libraries
// during MINSIZEREL builds.
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during the creation of static libraries
// during RELEASE builds.
CMAKE_STATIC_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during the creation of static libraries
// during RELWITHDEBINFO builds.
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Path to a program.
CMAKE_STRIP:FILEPATH=/usr/bin/strip

//Path to a program.
CMAKE_TAPI:FILEPATH=CMAKE_TAPI-NOTFOUND

//If this value is on, makefiles will be generated without the
// .SILENT directive, and all commands will be echoed to the console
// during the make.  This is useful for debugging only. With Visual
// Studio IDE projects all commands are done without /nologo.
CMAKE_VERBOSE_MAKEFILE:BOOL=FALSE

//Enable to build RPM source packages
CPACK_SOURCE_RPM:BOOL=OFF

//Enable to build TBZ2 source packages
CPACK_SOURCE_TBZ2:BOOL=ON

//Enable to build TGZ source packages
CPACK_SOURCE_TGZ:BOOL=ON

//Enable to build TXZ source packages
CPACK_SOURCE_TXZ:BOOL=ON

//Enable to build TZ source packages
CPACK_SOURCE_TZ:BOOL=ON

//Enable to build ZIP source packages
CPACK_SOURCE_ZIP:BOOL=OFF

//Value Computed by CMake
SystemMonitor_BINARY_DIR:STATIC=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build

//Value Computed by CMake
SystemMonitor_IS_TOP_LEVEL:STATIC=ON

//Value Computed by CMake
SystemMonitor_SOURCE_DIR:STATIC=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311

//Disable tests for prometheus-client-c
TEST:BOOL=OFF

//Value Computed by CMake
libprom_BINARY_DIR:STATIC=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom

//Value Computed by CMake
libprom_IS_TOP_LEVEL:STATIC=OFF

//Value Computed by CMake
libprom_SOURCE_DIR:STATIC=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/external/prometheus-client-c/prom

//Value Computed by CMake
libpromhttp_BINARY_DIR:STATIC=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp

//Value Computed by CMake
libpromhttp_IS_TOP_LEVEL:STATIC=OFF

//Value Computed by CMake
libpromhttp_SOURCE_DIR:STATIC=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/external/prometheus-client-c/promhttp

//Path to a library.
microhttpd:FILEPATH=/usr/lib/x86_64-linux-gnu/libmicrohttpd.so

//Path to a library.
prom:FILEPATH=/usr/local/lib/libprom.so


########################
# INTERNAL cache entries
########################

//ADVANCED property for variable: CMAKE_ADDR2LINE
CMAKE_ADDR2LINE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_AR
CMAKE_AR-ADVANCED:INTERNAL=1
//This is the directory where this CMakeCache.txt was created
CMAKE_CACHEFILE_DIR:INTERNAL=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build
//Major version of cmake used to create the current loaded cache
CMAKE_CACHE_MAJOR_VERSION:INTERNAL=3
//Minor version of cmake used to create the current loaded cache
CMAKE_CACHE_MINOR_VERSION:INTERNAL=28
//Patch version of cmake used to create the current loaded cache
CMAKE_CACHE_PATCH_VERSION:INTERNAL=3
//ADVANCED property for variable: CMAKE_COLOR_MAKEFILE
CMAKE_COLOR_MAKEFILE-ADVANCED:INTERNAL=1
//Path to CMake executable.
CMAKE_COMMAND:INTERNAL=/usr/bin/cmake
//Path to cpack program executable.
CMAKE_CPACK_COMMAND:INTERNAL=/usr/bin/cpack
//Path to ctest program executable.
CMAKE_CTEST_COMMAND:INTERNAL=/usr/bin/ctest
//ADVANCED property for variable: CMAKE_C_COMPILER
CMAKE_C_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_COMPILER_AR
CMAKE_C_COMPILER_AR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_COMPILER_RANLIB
CMAKE_C_COMPILER_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS
CMAKE_C_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_DEBUG
CMAKE_C_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_MINSIZEREL
CMAKE_C_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELEASE
CMAKE_C_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELWITHDEBINFO
CMAKE_C_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_DLLTOOL
CMAKE_DLLTOOL-ADVANCED:INTERNAL=1
//Executable file format
CMAKE_EXECUTABLE_FORMAT:INTERNAL=ELF
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Name of external makefile project generator.
CMAKE_EXTRA_GENERATOR:INTERNAL=
//Name of generator.
CMAKE_GENERATOR:INTERNAL=Unix Makefiles
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Test CMAKE_HAVE_LIBC_PTHREAD
CMAKE_HAVE_LIBC_PTHREAD:INTERNAL=1
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311
//ADVANCED property for variable: CMAKE_INSTALL_BINDIR
CMAKE_INSTALL_BINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATADIR
CMAKE_INSTALL_DATADIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATAROOTDIR
CMAKE_INSTALL_DATAROOTDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DOCDIR
CMAKE_INSTALL_DOCDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INCLUDEDIR
CMAKE_INSTALL_INCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INFODIR
CMAKE_INSTALL_INFODIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBDIR
CMAKE_INSTALL_LIBDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBEXECDIR
CMAKE_INSTALL_LIBEXECDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALEDIR
CMAKE_INSTALL_LOCALEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALSTATEDIR
CMAKE_INSTALL_LOCALSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_MANDIR
CMAKE_INSTALL_MANDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_OLDINCLUDEDIR
CMAKE_INSTALL_OLDINCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_RUNSTATEDIR
CMAKE_INSTALL_RUNSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SBINDIR
CMAKE_INSTALL_SBINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SHAREDSTATEDIR
CMAKE_INSTALL_SHAREDSTATEDIR-ADVANCED:INTERNAL=1
//Install .so files without execute permission.
CMAKE_INSTALL_SO_NO_EXE:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SYSCONFDIR
CMAKE_INSTALL_SYSCONFDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MAKE_PROGRAM
CMAKE_MAKE_PROGRAM-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_NM
CMAKE_NM-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=3
//ADVANCED property for variable: CMAKE_OBJCOPY
CMAKE_OBJCOPY-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_OBJDUMP
CMAKE_OBJDUMP-ADVANCED:INTERNAL=1
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RANLIB
CMAKE_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_READELF
CMAKE_READELF-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=/usr/share/cmake-3.28
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STRIP
CMAKE_STRIP-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TAPI
CMAKE_TAPI-ADVANCED:INTERNAL=1
//uname command
CMAKE_UNAME:INTERNAL=/usr/bin/uname
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CPACK_SOURCE_RPM
CPACK_SOURCE_RPM-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CPACK_SOURCE_TBZ2
CPACK_SOURCE_TBZ2-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CPACK_SOURCE_TGZ
CPACK_SOURCE_TGZ-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CPACK_SOURCE_TXZ
CPACK_SOURCE_TXZ-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CPACK_SOURCE_TZ
CPACK_SOURCE_TZ-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CPACK_SOURCE_ZIP
CPACK_SOURCE_ZIP-ADVANCED:INTERNAL=1
//Details about finding Threads
FIND_PACKAGE_MESSAGE_DETAILS_Threads:INTERNAL=[TRUE][v()]
//linker supports push/pop state
_CMAKE_LINKER_PUSHPOP_STATE_SUPPORTED:INTERNAL=TRUE
//CMAKE_INSTALL_PREFIX during last run
_GNUInstallDirs_LAST_CMAKE_INSTALL_PREFIX:INTERNAL=/usr/local


```


---
### Archivo: `build/Makefile`

```bash
# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target package
package: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Run CPack packaging tool..."
	/usr/bin/cpack --config ./CPackConfig.cmake
.PHONY : package

# Special rule for the target package
package/fast: package
.PHONY : package/fast

# Special rule for the target package_source
package_source:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Run CPack packaging tool for source..."
	/usr/bin/cpack --config ./CPackSourceConfig.cmake /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CPackSourceConfig.cmake
.PHONY : package_source

# Special rule for the target package_source
package_source/fast: package_source
.PHONY : package_source/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named monitor

# Build rule for target.
monitor: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 monitor
.PHONY : monitor

# fast build rule for target.
monitor/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/build
.PHONY : monitor/fast

#=============================================================================
# Target rules for targets named prom

# Build rule for target.
prom: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 prom
.PHONY : prom

# fast build rule for target.
prom/fast:
	$(MAKE) $(MAKESILENT) -f external/prometheus-client-c/prom/CMakeFiles/prom.dir/build.make external/prometheus-client-c/prom/CMakeFiles/prom.dir/build
.PHONY : prom/fast

#=============================================================================
# Target rules for targets named promhttp

# Build rule for target.
promhttp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 promhttp
.PHONY : promhttp

# fast build rule for target.
promhttp/fast:
	$(MAKE) $(MAKESILENT) -f external/prometheus-client-c/promhttp/CMakeFiles/promhttp.dir/build.make external/prometheus-client-c/promhttp/CMakeFiles/promhttp.dir/build
.PHONY : promhttp/fast

src/main.o: src/main.c.o
.PHONY : src/main.o

# target to build an object file
src/main.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/main.c.o
.PHONY : src/main.c.o

src/main.i: src/main.c.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/main.c.i
.PHONY : src/main.c.i

src/main.s: src/main.c.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/main.c.s
.PHONY : src/main.c.s

src/metric_exposer.o: src/metric_exposer.c.o
.PHONY : src/metric_exposer.o

# target to build an object file
src/metric_exposer.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/metric_exposer.c.o
.PHONY : src/metric_exposer.c.o

src/metric_exposer.i: src/metric_exposer.c.i
.PHONY : src/metric_exposer.i

# target to preprocess a source file
src/metric_exposer.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/metric_exposer.c.i
.PHONY : src/metric_exposer.c.i

src/metric_exposer.s: src/metric_exposer.c.s
.PHONY : src/metric_exposer.s

# target to generate assembly for a file
src/metric_exposer.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/metric_exposer.c.s
.PHONY : src/metric_exposer.c.s

src/metrics.o: src/metrics.c.o
.PHONY : src/metrics.o

# target to build an object file
src/metrics.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/metrics.c.o
.PHONY : src/metrics.c.o

src/metrics.i: src/metrics.c.i
.PHONY : src/metrics.i

# target to preprocess a source file
src/metrics.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/metrics.c.i
.PHONY : src/metrics.c.i

src/metrics.s: src/metrics.c.s
.PHONY : src/metrics.s

# target to generate assembly for a file
src/metrics.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/monitor.dir/build.make CMakeFiles/monitor.dir/src/metrics.c.s
.PHONY : src/metrics.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... package"
	@echo "... package_source"
	@echo "... rebuild_cache"
	@echo "... monitor"
	@echo "... prom"
	@echo "... promhttp"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/metric_exposer.o"
	@echo "... src/metric_exposer.i"
	@echo "... src/metric_exposer.s"
	@echo "... src/metrics.o"
	@echo "... src/metrics.i"
	@echo "... src/metrics.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system


```


---
### Archivo: `build/CMakeFiles/CMakeConfigureLog.yaml`

```yaml

---
events:
  -
    kind: "message-v1"
    backtrace:
      - "/usr/share/cmake-3.28/Modules/CMakeDetermineSystem.cmake:233 (message)"
      - "CMakeLists.txt:5 (project)"
    message: |
      The system is: Linux - 6.11.0-28-generic - x86_64
  -
    kind: "message-v1"
    backtrace:
      - "/usr/share/cmake-3.28/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/usr/share/cmake-3.28/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/usr/share/cmake-3.28/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:5 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" succeeded.
      Compiler: /usr/bin/cc 
      Build flags: 
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the C compiler identification source "CMakeCCompilerId.c" produced "a.out"
      
      The C compiler identification is GNU, found in:
        /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/3.28.3/CompilerIdC/a.out
      
  -
    kind: "try_compile-v1"
    backtrace:
      - "/usr/share/cmake-3.28/Modules/CMakeDetermineCompilerABI.cmake:57 (try_compile)"
      - "/usr/share/cmake-3.28/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:5 (project)"
    checks:
      - "Detecting C compiler ABI info"
    directories:
      source: "/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-gna9dd"
      binary: "/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-gna9dd"
    cmakeVariables:
      CMAKE_C_FLAGS: ""
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
    buildResult:
      variable: "CMAKE_C_ABI_COMPILED"
      cached: true
      stdout: |
        Change Dir: '/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-gna9dd'
        
        Run Build Command(s): /usr/bin/cmake -E env VERBOSE=1 /usr/bin/gmake -f Makefile cmTC_9589f/fast
        /usr/bin/gmake  -f CMakeFiles/cmTC_9589f.dir/build.make CMakeFiles/cmTC_9589f.dir/build
        gmake[1]: Entering directory '/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-gna9dd'
        Building C object CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o
        /usr/bin/cc   -v -o CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o -c /usr/share/cmake-3.28/Modules/CMakeCCompilerABI.c
        Using built-in specs.
        COLLECT_GCC=/usr/bin/cc
        OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
        OFFLOAD_TARGET_DEFAULT=1
        Target: x86_64-linux-gnu
        Configured with: ../src/configure -v --with-pkgversion='Ubuntu 13.3.0-6ubuntu2~24.04' --with-bugurl=file:///usr/share/doc/gcc-13/README.Bugs --enable-languages=c,ada,c++,go,d,fortran,objc,obj-c++,m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-13 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/libexec --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-libstdcxx-backtrace --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --enable-cet --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-13-fG75Ri/gcc-13-13.3.0/debian/tmp-nvptx/usr,amdgcn-amdhsa=/build/gcc-13-fG75Ri/gcc-13-13.3.0/debian/tmp-gcn/usr --enable-offload-defaulted --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu --with-build-config=bootstrap-lto-lean --enable-link-serialization=2
        Thread model: posix
        Supported LTO compression algorithms: zlib zstd
        gcc version 13.3.0 (Ubuntu 13.3.0-6ubuntu2~24.04) 
        COLLECT_GCC_OPTIONS='-v' '-o' 'CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o' '-c' '-mtune=generic' '-march=x86-64' '-dumpdir' 'CMakeFiles/cmTC_9589f.dir/'
         /usr/libexec/gcc/x86_64-linux-gnu/13/cc1 -quiet -v -imultiarch x86_64-linux-gnu /usr/share/cmake-3.28/Modules/CMakeCCompilerABI.c -quiet -dumpdir CMakeFiles/cmTC_9589f.dir/ -dumpbase CMakeCCompilerABI.c.c -dumpbase-ext .c -mtune=generic -march=x86-64 -version -fasynchronous-unwind-tables -fstack-protector-strong -Wformat -Wformat-security -fstack-clash-protection -fcf-protection -o /tmp/ccnDzor0.s
        GNU C17 (Ubuntu 13.3.0-6ubuntu2~24.04) version 13.3.0 (x86_64-linux-gnu)
        	compiled by GNU C version 13.3.0, GMP version 6.3.0, MPFR version 4.2.1, MPC version 1.3.1, isl version isl-0.26-GMP
        
        GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
        ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
        ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/13/include-fixed/x86_64-linux-gnu"
        ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/13/include-fixed"
        ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/13/../../../../x86_64-linux-gnu/include"
        #include "..." search starts here:
        #include <...> search starts here:
         /usr/lib/gcc/x86_64-linux-gnu/13/include
         /usr/local/include
         /usr/include/x86_64-linux-gnu
         /usr/include
        End of search list.
        Compiler executable checksum: 38987c28e967c64056a6454abdef726e
        COLLECT_GCC_OPTIONS='-v' '-o' 'CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o' '-c' '-mtune=generic' '-march=x86-64' '-dumpdir' 'CMakeFiles/cmTC_9589f.dir/'
         as -v --64 -o CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o /tmp/ccnDzor0.s
        GNU assembler version 2.42 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.42
        COMPILER_PATH=/usr/libexec/gcc/x86_64-linux-gnu/13/:/usr/libexec/gcc/x86_64-linux-gnu/13/:/usr/libexec/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/13/:/usr/lib/gcc/x86_64-linux-gnu/
        LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/13/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../:/lib/:/usr/lib/
        COLLECT_GCC_OPTIONS='-v' '-o' 'CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o' '-c' '-mtune=generic' '-march=x86-64' '-dumpdir' 'CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.'
        Linking C executable cmTC_9589f
        /usr/bin/cmake -E cmake_link_script CMakeFiles/cmTC_9589f.dir/link.txt --verbose=1
        /usr/bin/cc  -v CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o -o cmTC_9589f 
        Using built-in specs.
        COLLECT_GCC=/usr/bin/cc
        COLLECT_LTO_WRAPPER=/usr/libexec/gcc/x86_64-linux-gnu/13/lto-wrapper
        OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
        OFFLOAD_TARGET_DEFAULT=1
        Target: x86_64-linux-gnu
        Configured with: ../src/configure -v --with-pkgversion='Ubuntu 13.3.0-6ubuntu2~24.04' --with-bugurl=file:///usr/share/doc/gcc-13/README.Bugs --enable-languages=c,ada,c++,go,d,fortran,objc,obj-c++,m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-13 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/libexec --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-libstdcxx-backtrace --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --enable-cet --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-13-fG75Ri/gcc-13-13.3.0/debian/tmp-nvptx/usr,amdgcn-amdhsa=/build/gcc-13-fG75Ri/gcc-13-13.3.0/debian/tmp-gcn/usr --enable-offload-defaulted --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu --with-build-config=bootstrap-lto-lean --enable-link-serialization=2
        Thread model: posix
        Supported LTO compression algorithms: zlib zstd
        gcc version 13.3.0 (Ubuntu 13.3.0-6ubuntu2~24.04) 
        COMPILER_PATH=/usr/libexec/gcc/x86_64-linux-gnu/13/:/usr/libexec/gcc/x86_64-linux-gnu/13/:/usr/libexec/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/13/:/usr/lib/gcc/x86_64-linux-gnu/
        LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/13/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../:/lib/:/usr/lib/
        COLLECT_GCC_OPTIONS='-v' '-o' 'cmTC_9589f' '-mtune=generic' '-march=x86-64' '-dumpdir' 'cmTC_9589f.'
         /usr/libexec/gcc/x86_64-linux-gnu/13/collect2 -plugin /usr/libexec/gcc/x86_64-linux-gnu/13/liblto_plugin.so -plugin-opt=/usr/libexec/gcc/x86_64-linux-gnu/13/lto-wrapper -plugin-opt=-fresolution=/tmp/ccuEsNjI.res -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s --build-id --eh-frame-hdr -m elf_x86_64 --hash-style=gnu --as-needed -dynamic-linker /lib64/ld-linux-x86-64.so.2 -pie -z now -z relro -o cmTC_9589f /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o -L/usr/lib/gcc/x86_64-linux-gnu/13 -L/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/13/../../.. CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o -lgcc --push-state --as-needed -lgcc_s --pop-state -lc -lgcc --push-state --as-needed -lgcc_s --pop-state /usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o
        COLLECT_GCC_OPTIONS='-v' '-o' 'cmTC_9589f' '-mtune=generic' '-march=x86-64' '-dumpdir' 'cmTC_9589f.'
        gmake[1]: Leaving directory '/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-gna9dd'
        
      exitCode: 0
  -
    kind: "message-v1"
    backtrace:
      - "/usr/share/cmake-3.28/Modules/CMakeDetermineCompilerABI.cmake:127 (message)"
      - "/usr/share/cmake-3.28/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:5 (project)"
    message: |
      Parsed C implicit include dir info: rv=done
        found start of include info
        found start of implicit include info
          add: [/usr/lib/gcc/x86_64-linux-gnu/13/include]
          add: [/usr/local/include]
          add: [/usr/include/x86_64-linux-gnu]
          add: [/usr/include]
        end of search list found
        collapse include dir [/usr/lib/gcc/x86_64-linux-gnu/13/include] ==> [/usr/lib/gcc/x86_64-linux-gnu/13/include]
        collapse include dir [/usr/local/include] ==> [/usr/local/include]
        collapse include dir [/usr/include/x86_64-linux-gnu] ==> [/usr/include/x86_64-linux-gnu]
        collapse include dir [/usr/include] ==> [/usr/include]
        implicit include dirs: [/usr/lib/gcc/x86_64-linux-gnu/13/include;/usr/local/include;/usr/include/x86_64-linux-gnu;/usr/include]
      
      
  -
    kind: "message-v1"
    backtrace:
      - "/usr/share/cmake-3.28/Modules/CMakeDetermineCompilerABI.cmake:159 (message)"
      - "/usr/share/cmake-3.28/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:5 (project)"
    message: |
      Parsed C implicit link information:
        link line regex: [^( *|.*[/\\])(ld|CMAKE_LINK_STARTFILE-NOTFOUND|([^/\\]+-)?ld|collect2)[^/\\]*( |$)]
        ignore line: [Change Dir: '/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-gna9dd']
        ignore line: []
        ignore line: [Run Build Command(s): /usr/bin/cmake -E env VERBOSE=1 /usr/bin/gmake -f Makefile cmTC_9589f/fast]
        ignore line: [/usr/bin/gmake  -f CMakeFiles/cmTC_9589f.dir/build.make CMakeFiles/cmTC_9589f.dir/build]
        ignore line: [gmake[1]: Entering directory '/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-gna9dd']
        ignore line: [Building C object CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o]
        ignore line: [/usr/bin/cc   -v -o CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o -c /usr/share/cmake-3.28/Modules/CMakeCCompilerABI.c]
        ignore line: [Using built-in specs.]
        ignore line: [COLLECT_GCC=/usr/bin/cc]
        ignore line: [OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa]
        ignore line: [OFFLOAD_TARGET_DEFAULT=1]
        ignore line: [Target: x86_64-linux-gnu]
        ignore line: [Configured with: ../src/configure -v --with-pkgversion='Ubuntu 13.3.0-6ubuntu2~24.04' --with-bugurl=file:///usr/share/doc/gcc-13/README.Bugs --enable-languages=c ada c++ go d fortran objc obj-c++ m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-13 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/libexec --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-libstdcxx-backtrace --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --enable-cet --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32 m64 mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-13-fG75Ri/gcc-13-13.3.0/debian/tmp-nvptx/usr amdgcn-amdhsa=/build/gcc-13-fG75Ri/gcc-13-13.3.0/debian/tmp-gcn/usr --enable-offload-defaulted --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu --with-build-config=bootstrap-lto-lean --enable-link-serialization=2]
        ignore line: [Thread model: posix]
        ignore line: [Supported LTO compression algorithms: zlib zstd]
        ignore line: [gcc version 13.3.0 (Ubuntu 13.3.0-6ubuntu2~24.04) ]
        ignore line: [COLLECT_GCC_OPTIONS='-v' '-o' 'CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o' '-c' '-mtune=generic' '-march=x86-64' '-dumpdir' 'CMakeFiles/cmTC_9589f.dir/']
        ignore line: [ /usr/libexec/gcc/x86_64-linux-gnu/13/cc1 -quiet -v -imultiarch x86_64-linux-gnu /usr/share/cmake-3.28/Modules/CMakeCCompilerABI.c -quiet -dumpdir CMakeFiles/cmTC_9589f.dir/ -dumpbase CMakeCCompilerABI.c.c -dumpbase-ext .c -mtune=generic -march=x86-64 -version -fasynchronous-unwind-tables -fstack-protector-strong -Wformat -Wformat-security -fstack-clash-protection -fcf-protection -o /tmp/ccnDzor0.s]
        ignore line: [GNU C17 (Ubuntu 13.3.0-6ubuntu2~24.04) version 13.3.0 (x86_64-linux-gnu)]
        ignore line: [	compiled by GNU C version 13.3.0  GMP version 6.3.0  MPFR version 4.2.1  MPC version 1.3.1  isl version isl-0.26-GMP]
        ignore line: []
        ignore line: [GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072]
        ignore line: [ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"]
        ignore line: [ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/13/include-fixed/x86_64-linux-gnu"]
        ignore line: [ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/13/include-fixed"]
        ignore line: [ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/13/../../../../x86_64-linux-gnu/include"]
        ignore line: [#include "..." search starts here:]
        ignore line: [#include <...> search starts here:]
        ignore line: [ /usr/lib/gcc/x86_64-linux-gnu/13/include]
        ignore line: [ /usr/local/include]
        ignore line: [ /usr/include/x86_64-linux-gnu]
        ignore line: [ /usr/include]
        ignore line: [End of search list.]
        ignore line: [Compiler executable checksum: 38987c28e967c64056a6454abdef726e]
        ignore line: [COLLECT_GCC_OPTIONS='-v' '-o' 'CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o' '-c' '-mtune=generic' '-march=x86-64' '-dumpdir' 'CMakeFiles/cmTC_9589f.dir/']
        ignore line: [ as -v --64 -o CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o /tmp/ccnDzor0.s]
        ignore line: [GNU assembler version 2.42 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.42]
        ignore line: [COMPILER_PATH=/usr/libexec/gcc/x86_64-linux-gnu/13/:/usr/libexec/gcc/x86_64-linux-gnu/13/:/usr/libexec/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/13/:/usr/lib/gcc/x86_64-linux-gnu/]
        ignore line: [LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/13/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../:/lib/:/usr/lib/]
        ignore line: [COLLECT_GCC_OPTIONS='-v' '-o' 'CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o' '-c' '-mtune=generic' '-march=x86-64' '-dumpdir' 'CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.']
        ignore line: [Linking C executable cmTC_9589f]
        ignore line: [/usr/bin/cmake -E cmake_link_script CMakeFiles/cmTC_9589f.dir/link.txt --verbose=1]
        ignore line: [/usr/bin/cc  -v CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o -o cmTC_9589f ]
        ignore line: [Using built-in specs.]
        ignore line: [COLLECT_GCC=/usr/bin/cc]
        ignore line: [COLLECT_LTO_WRAPPER=/usr/libexec/gcc/x86_64-linux-gnu/13/lto-wrapper]
        ignore line: [OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa]
        ignore line: [OFFLOAD_TARGET_DEFAULT=1]
        ignore line: [Target: x86_64-linux-gnu]
        ignore line: [Configured with: ../src/configure -v --with-pkgversion='Ubuntu 13.3.0-6ubuntu2~24.04' --with-bugurl=file:///usr/share/doc/gcc-13/README.Bugs --enable-languages=c ada c++ go d fortran objc obj-c++ m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-13 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/libexec --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-libstdcxx-backtrace --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --enable-cet --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32 m64 mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-13-fG75Ri/gcc-13-13.3.0/debian/tmp-nvptx/usr amdgcn-amdhsa=/build/gcc-13-fG75Ri/gcc-13-13.3.0/debian/tmp-gcn/usr --enable-offload-defaulted --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu --with-build-config=bootstrap-lto-lean --enable-link-serialization=2]
        ignore line: [Thread model: posix]
        ignore line: [Supported LTO compression algorithms: zlib zstd]
        ignore line: [gcc version 13.3.0 (Ubuntu 13.3.0-6ubuntu2~24.04) ]
        ignore line: [COMPILER_PATH=/usr/libexec/gcc/x86_64-linux-gnu/13/:/usr/libexec/gcc/x86_64-linux-gnu/13/:/usr/libexec/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/13/:/usr/lib/gcc/x86_64-linux-gnu/]
        ignore line: [LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/13/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/13/../../../:/lib/:/usr/lib/]
        ignore line: [COLLECT_GCC_OPTIONS='-v' '-o' 'cmTC_9589f' '-mtune=generic' '-march=x86-64' '-dumpdir' 'cmTC_9589f.']
        link line: [ /usr/libexec/gcc/x86_64-linux-gnu/13/collect2 -plugin /usr/libexec/gcc/x86_64-linux-gnu/13/liblto_plugin.so -plugin-opt=/usr/libexec/gcc/x86_64-linux-gnu/13/lto-wrapper -plugin-opt=-fresolution=/tmp/ccuEsNjI.res -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s --build-id --eh-frame-hdr -m elf_x86_64 --hash-style=gnu --as-needed -dynamic-linker /lib64/ld-linux-x86-64.so.2 -pie -z now -z relro -o cmTC_9589f /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o -L/usr/lib/gcc/x86_64-linux-gnu/13 -L/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/13/../../.. CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o -lgcc --push-state --as-needed -lgcc_s --pop-state -lc -lgcc --push-state --as-needed -lgcc_s --pop-state /usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o]
          arg [/usr/libexec/gcc/x86_64-linux-gnu/13/collect2] ==> ignore
          arg [-plugin] ==> ignore
          arg [/usr/libexec/gcc/x86_64-linux-gnu/13/liblto_plugin.so] ==> ignore
          arg [-plugin-opt=/usr/libexec/gcc/x86_64-linux-gnu/13/lto-wrapper] ==> ignore
          arg [-plugin-opt=-fresolution=/tmp/ccuEsNjI.res] ==> ignore
          arg [-plugin-opt=-pass-through=-lgcc] ==> ignore
          arg [-plugin-opt=-pass-through=-lgcc_s] ==> ignore
          arg [-plugin-opt=-pass-through=-lc] ==> ignore
          arg [-plugin-opt=-pass-through=-lgcc] ==> ignore
          arg [-plugin-opt=-pass-through=-lgcc_s] ==> ignore
          arg [--build-id] ==> ignore
          arg [--eh-frame-hdr] ==> ignore
          arg [-m] ==> ignore
          arg [elf_x86_64] ==> ignore
          arg [--hash-style=gnu] ==> ignore
          arg [--as-needed] ==> ignore
          arg [-dynamic-linker] ==> ignore
          arg [/lib64/ld-linux-x86-64.so.2] ==> ignore
          arg [-pie] ==> ignore
          arg [-znow] ==> ignore
          arg [-zrelro] ==> ignore
          arg [-o] ==> ignore
          arg [cmTC_9589f] ==> ignore
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib]
          arg [-L/lib/x86_64-linux-gnu] ==> dir [/lib/x86_64-linux-gnu]
          arg [-L/lib/../lib] ==> dir [/lib/../lib]
          arg [-L/usr/lib/x86_64-linux-gnu] ==> dir [/usr/lib/x86_64-linux-gnu]
          arg [-L/usr/lib/../lib] ==> dir [/usr/lib/../lib]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../..] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../..]
          arg [CMakeFiles/cmTC_9589f.dir/CMakeCCompilerABI.c.o] ==> ignore
          arg [-lgcc] ==> lib [gcc]
          arg [--push-state] ==> ignore
          arg [--as-needed] ==> ignore
          arg [-lgcc_s] ==> lib [gcc_s]
          arg [--pop-state] ==> ignore
          arg [-lc] ==> lib [c]
          arg [-lgcc] ==> lib [gcc]
          arg [--push-state] ==> ignore
          arg [--as-needed] ==> ignore
          arg [-lgcc_s] ==> lib [gcc_s]
          arg [--pop-state] ==> ignore
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o]
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o] ==> [/usr/lib/x86_64-linux-gnu/Scrt1.o]
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o] ==> [/usr/lib/x86_64-linux-gnu/crti.o]
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o] ==> [/usr/lib/x86_64-linux-gnu/crtn.o]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13] ==> [/usr/lib/gcc/x86_64-linux-gnu/13]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu] ==> [/usr/lib/x86_64-linux-gnu]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib] ==> [/usr/lib]
        collapse library dir [/lib/x86_64-linux-gnu] ==> [/lib/x86_64-linux-gnu]
        collapse library dir [/lib/../lib] ==> [/lib]
        collapse library dir [/usr/lib/x86_64-linux-gnu] ==> [/usr/lib/x86_64-linux-gnu]
        collapse library dir [/usr/lib/../lib] ==> [/usr/lib]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../..] ==> [/usr/lib]
        implicit libs: [gcc;gcc_s;c;gcc;gcc_s]
        implicit objs: [/usr/lib/x86_64-linux-gnu/Scrt1.o;/usr/lib/x86_64-linux-gnu/crti.o;/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o;/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o;/usr/lib/x86_64-linux-gnu/crtn.o]
        implicit dirs: [/usr/lib/gcc/x86_64-linux-gnu/13;/usr/lib/x86_64-linux-gnu;/usr/lib;/lib/x86_64-linux-gnu;/lib]
        implicit fwks: []
      
      
  -
    kind: "try_compile-v1"
    backtrace:
      - "/usr/share/cmake-3.28/Modules/Internal/CheckSourceCompiles.cmake:101 (try_compile)"
      - "/usr/share/cmake-3.28/Modules/CheckCSourceCompiles.cmake:52 (cmake_check_source_compiles)"
      - "/usr/share/cmake-3.28/Modules/FindThreads.cmake:97 (CHECK_C_SOURCE_COMPILES)"
      - "/usr/share/cmake-3.28/Modules/FindThreads.cmake:163 (_threads_check_libc)"
      - "external/prometheus-client-c/prom/CMakeLists.txt:104 (include)"
    checks:
      - "Performing Test CMAKE_HAVE_LIBC_PTHREAD"
    directories:
      source: "/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-8evIbP"
      binary: "/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-8evIbP"
    cmakeVariables:
      CMAKE_C_FLAGS: ""
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
    buildResult:
      variable: "CMAKE_HAVE_LIBC_PTHREAD"
      cached: true
      stdout: |
        Change Dir: '/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-8evIbP'
        
        Run Build Command(s): /usr/bin/cmake -E env VERBOSE=1 /usr/bin/gmake -f Makefile cmTC_9bbf1/fast
        /usr/bin/gmake  -f CMakeFiles/cmTC_9bbf1.dir/build.make CMakeFiles/cmTC_9bbf1.dir/build
        gmake[1]: se entra en el directorio '/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-8evIbP'
        Building C object CMakeFiles/cmTC_9bbf1.dir/src.c.o
        /usr/bin/cc -DCMAKE_HAVE_LIBC_PTHREAD  -std=gnu11 -o CMakeFiles/cmTC_9bbf1.dir/src.c.o -c /home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-8evIbP/src.c
        Linking C executable cmTC_9bbf1
        /usr/bin/cmake -E cmake_link_script CMakeFiles/cmTC_9bbf1.dir/link.txt --verbose=1
        /usr/bin/cc CMakeFiles/cmTC_9bbf1.dir/src.c.o -o cmTC_9bbf1 
        gmake[1]: se sale del directorio '/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/CMakeScratch/TryCompile-8evIbP'
        
      exitCode: 0
...

```


---
### Archivo: `build/CMakeFiles/TargetDirectories.txt`

```
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/monitor.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/package.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/package_source.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/edit_cache.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/rebuild_cache.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/list_install_components.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/install.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/install/local.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/CMakeFiles/install/strip.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/prom.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/package.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/package_source.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/edit_cache.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/rebuild_cache.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/list_install_components.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/install.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/install/local.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom/CMakeFiles/install/strip.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/promhttp.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/package.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/package_source.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/edit_cache.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/rebuild_cache.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/list_install_components.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/install.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/install/local.dir
/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp/CMakeFiles/install/strip.dir

```


---
### Archivo: `build/CMakeFiles/3.28.3/CompilerIdC/CMakeCCompilerId.c`

```c
#ifdef __cplusplus
# error "A C++ compiler has been selected for C."
#endif

#if defined(__18CXX)
# define ID_VOID_MAIN
#endif
#if defined(__CLASSIC_C__)
/* cv-qualifiers did not exist in K&R C */
# define const
# define volatile
#endif

#if !defined(__has_include)
/* If the compiler does not have __has_include, pretend the answer is
   always no.  */
#  define __has_include(x) 0
#endif


/* Version number components: V=Version, R=Revision, P=Patch
   Version date components:   YYYY=Year, MM=Month,   DD=Day  */

#if defined(__INTEL_COMPILER) || defined(__ICC)
# define COMPILER_ID "Intel"
# if defined(_MSC_VER)
#  define SIMULATE_ID "MSVC"
# endif
# if defined(__GNUC__)
#  define SIMULATE_ID "GNU"
# endif
  /* __INTEL_COMPILER = VRP prior to 2021, and then VVVV for 2021 and later,
     except that a few beta releases use the old format with V=2021.  */
# if __INTEL_COMPILER < 2021 || __INTEL_COMPILER == 202110 || __INTEL_COMPILER == 202111
#  define COMPILER_VERSION_MAJOR DEC(__INTEL_COMPILER/100)
#  define COMPILER_VERSION_MINOR DEC(__INTEL_COMPILER/10 % 10)
#  if defined(__INTEL_COMPILER_UPDATE)
#   define COMPILER_VERSION_PATCH DEC(__INTEL_COMPILER_UPDATE)
#  else
#   define COMPILER_VERSION_PATCH DEC(__INTEL_COMPILER   % 10)
#  endif
# else
#  define COMPILER_VERSION_MAJOR DEC(__INTEL_COMPILER)
#  define COMPILER_VERSION_MINOR DEC(__INTEL_COMPILER_UPDATE)
   /* The third version component from --version is an update index,
      but no macro is provided for it.  */
#  define COMPILER_VERSION_PATCH DEC(0)
# endif
# if defined(__INTEL_COMPILER_BUILD_DATE)
   /* __INTEL_COMPILER_BUILD_DATE = YYYYMMDD */
#  define COMPILER_VERSION_TWEAK DEC(__INTEL_COMPILER_BUILD_DATE)
# endif
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define SIMULATE_VERSION_MAJOR DEC(_MSC_VER / 100)
#  define SIMULATE_VERSION_MINOR DEC(_MSC_VER % 100)
# endif
# if defined(__GNUC__)
#  define SIMULATE_VERSION_MAJOR DEC(__GNUC__)
# elif defined(__GNUG__)
#  define SIMULATE_VERSION_MAJOR DEC(__GNUG__)
# endif
# if defined(__GNUC_MINOR__)
#  define SIMULATE_VERSION_MINOR DEC(__GNUC_MINOR__)
# endif
# if defined(__GNUC_PATCHLEVEL__)
#  define SIMULATE_VERSION_PATCH DEC(__GNUC_PATCHLEVEL__)
# endif

#elif (defined(__clang__) && defined(__INTEL_CLANG_COMPILER)) || defined(__INTEL_LLVM_COMPILER)
# define COMPILER_ID "IntelLLVM"
#if defined(_MSC_VER)
# define SIMULATE_ID "MSVC"
#endif
#if defined(__GNUC__)
# define SIMULATE_ID "GNU"
#endif
/* __INTEL_LLVM_COMPILER = VVVVRP prior to 2021.2.0, VVVVRRPP for 2021.2.0 and
 * later.  Look for 6 digit vs. 8 digit version number to decide encoding.
 * VVVV is no smaller than the current year when a version is released.
 */
#if __INTEL_LLVM_COMPILER < 1000000L
# define COMPILER_VERSION_MAJOR DEC(__INTEL_LLVM_COMPILER/100)
# define COMPILER_VERSION_MINOR DEC(__INTEL_LLVM_COMPILER/10 % 10)
# define COMPILER_VERSION_PATCH DEC(__INTEL_LLVM_COMPILER    % 10)
#else
# define COMPILER_VERSION_MAJOR DEC(__INTEL_LLVM_COMPILER/10000)
# define COMPILER_VERSION_MINOR DEC(__INTEL_LLVM_COMPILER/100 % 100)
# define COMPILER_VERSION_PATCH DEC(__INTEL_LLVM_COMPILER     % 100)
#endif
#if defined(_MSC_VER)
  /* _MSC_VER = VVRR */
# define SIMULATE_VERSION_MAJOR DEC(_MSC_VER / 100)
# define SIMULATE_VERSION_MINOR DEC(_MSC_VER % 100)
#endif
#if defined(__GNUC__)
# define SIMULATE_VERSION_MAJOR DEC(__GNUC__)
#elif defined(__GNUG__)
# define SIMULATE_VERSION_MAJOR DEC(__GNUG__)
#endif
#if defined(__GNUC_MINOR__)
# define SIMULATE_VERSION_MINOR DEC(__GNUC_MINOR__)
#endif
#if defined(__GNUC_PATCHLEVEL__)
# define SIMULATE_VERSION_PATCH DEC(__GNUC_PATCHLEVEL__)
#endif

#elif defined(__PATHCC__)
# define COMPILER_ID "PathScale"
# define COMPILER_VERSION_MAJOR DEC(__PATHCC__)
# define COMPILER_VERSION_MINOR DEC(__PATHCC_MINOR__)
# if defined(__PATHCC_PATCHLEVEL__)
#  define COMPILER_VERSION_PATCH DEC(__PATHCC_PATCHLEVEL__)
# endif

#elif defined(__BORLANDC__) && defined(__CODEGEARC_VERSION__)
# define COMPILER_ID "Embarcadero"
# define COMPILER_VERSION_MAJOR HEX(__CODEGEARC_VERSION__>>24 & 0x00FF)
# define COMPILER_VERSION_MINOR HEX(__CODEGEARC_VERSION__>>16 & 0x00FF)
# define COMPILER_VERSION_PATCH DEC(__CODEGEARC_VERSION__     & 0xFFFF)

#elif defined(__BORLANDC__)
# define COMPILER_ID "Borland"
  /* __BORLANDC__ = 0xVRR */
# define COMPILER_VERSION_MAJOR HEX(__BORLANDC__>>8)
# define COMPILER_VERSION_MINOR HEX(__BORLANDC__ & 0xFF)

#elif defined(__WATCOMC__) && __WATCOMC__ < 1200
# define COMPILER_ID "Watcom"
   /* __WATCOMC__ = VVRR */
# define COMPILER_VERSION_MAJOR DEC(__WATCOMC__ / 100)
# define COMPILER_VERSION_MINOR DEC((__WATCOMC__ / 10) % 10)
# if (__WATCOMC__ % 10) > 0
#  define COMPILER_VERSION_PATCH DEC(__WATCOMC__ % 10)
# endif

#elif defined(__WATCOMC__)
# define COMPILER_ID "OpenWatcom"
   /* __WATCOMC__ = VVRP + 1100 */
# define COMPILER_VERSION_MAJOR DEC((__WATCOMC__ - 1100) / 100)
# define COMPILER_VERSION_MINOR DEC((__WATCOMC__ / 10) % 10)
# if (__WATCOMC__ % 10) > 0
#  define COMPILER_VERSION_PATCH DEC(__WATCOMC__ % 10)
# endif

#elif defined(__SUNPRO_C)
# define COMPILER_ID "SunPro"
# if __SUNPRO_C >= 0x5100
   /* __SUNPRO_C = 0xVRRP */
#  define COMPILER_VERSION_MAJOR HEX(__SUNPRO_C>>12)
#  define COMPILER_VERSION_MINOR HEX(__SUNPRO_C>>4 & 0xFF)
#  define COMPILER_VERSION_PATCH HEX(__SUNPRO_C    & 0xF)
# else
   /* __SUNPRO_CC = 0xVRP */
#  define COMPILER_VERSION_MAJOR HEX(__SUNPRO_C>>8)
#  define COMPILER_VERSION_MINOR HEX(__SUNPRO_C>>4 & 0xF)
#  define COMPILER_VERSION_PATCH HEX(__SUNPRO_C    & 0xF)
# endif

#elif defined(__HP_cc)
# define COMPILER_ID "HP"
  /* __HP_cc = VVRRPP */
# define COMPILER_VERSION_MAJOR DEC(__HP_cc/10000)
# define COMPILER_VERSION_MINOR DEC(__HP_cc/100 % 100)
# define COMPILER_VERSION_PATCH DEC(__HP_cc     % 100)

#elif defined(__DECC)
# define COMPILER_ID "Compaq"
  /* __DECC_VER = VVRRTPPPP */
# define COMPILER_VERSION_MAJOR DEC(__DECC_VER/10000000)
# define COMPILER_VERSION_MINOR DEC(__DECC_VER/100000  % 100)
# define COMPILER_VERSION_PATCH DEC(__DECC_VER         % 10000)

#elif defined(__IBMC__) && defined(__COMPILER_VER__)
# define COMPILER_ID "zOS"
  /* __IBMC__ = VRP */
# define COMPILER_VERSION_MAJOR DEC(__IBMC__/100)
# define COMPILER_VERSION_MINOR DEC(__IBMC__/10 % 10)
# define COMPILER_VERSION_PATCH DEC(__IBMC__    % 10)

#elif defined(__open_xl__) && defined(__clang__)
# define COMPILER_ID "IBMClang"
# define COMPILER_VERSION_MAJOR DEC(__open_xl_version__)
# define COMPILER_VERSION_MINOR DEC(__open_xl_release__)
# define COMPILER_VERSION_PATCH DEC(__open_xl_modification__)
# define COMPILER_VERSION_TWEAK DEC(__open_xl_ptf_fix_level__)


#elif defined(__ibmxl__) && defined(__clang__)
# define COMPILER_ID "XLClang"
# define COMPILER_VERSION_MAJOR DEC(__ibmxl_version__)
# define COMPILER_VERSION_MINOR DEC(__ibmxl_release__)
# define COMPILER_VERSION_PATCH DEC(__ibmxl_modification__)
# define COMPILER_VERSION_TWEAK DEC(__ibmxl_ptf_fix_level__)


#elif defined(__IBMC__) && !defined(__COMPILER_VER__) && __IBMC__ >= 800
# define COMPILER_ID "XL"
  /* __IBMC__ = VRP */
# define COMPILER_VERSION_MAJOR DEC(__IBMC__/100)
# define COMPILER_VERSION_MINOR DEC(__IBMC__/10 % 10)
# define COMPILER_VERSION_PATCH DEC(__IBMC__    % 10)

#elif defined(__IBMC__) && !defined(__COMPILER_VER__) && __IBMC__ < 800
# define COMPILER_ID "VisualAge"
  /* __IBMC__ = VRP */
# define COMPILER_VERSION_MAJOR DEC(__IBMC__/100)
# define COMPILER_VERSION_MINOR DEC(__IBMC__/10 % 10)
# define COMPILER_VERSION_PATCH DEC(__IBMC__    % 10)

#elif defined(__NVCOMPILER)
# define COMPILER_ID "NVHPC"
# define COMPILER_VERSION_MAJOR DEC(__NVCOMPILER_MAJOR__)
# define COMPILER_VERSION_MINOR DEC(__NVCOMPILER_MINOR__)
# if defined(__NVCOMPILER_PATCHLEVEL__)
#  define COMPILER_VERSION_PATCH DEC(__NVCOMPILER_PATCHLEVEL__)
# endif

#elif defined(__PGI)
# define COMPILER_ID "PGI"
# define COMPILER_VERSION_MAJOR DEC(__PGIC__)
# define COMPILER_VERSION_MINOR DEC(__PGIC_MINOR__)
# if defined(__PGIC_PATCHLEVEL__)
#  define COMPILER_VERSION_PATCH DEC(__PGIC_PATCHLEVEL__)
# endif

#elif defined(__clang__) && defined(__cray__)
# define COMPILER_ID "CrayClang"
# define COMPILER_VERSION_MAJOR DEC(__cray_major__)
# define COMPILER_VERSION_MINOR DEC(__cray_minor__)
# define COMPILER_VERSION_PATCH DEC(__cray_patchlevel__)
# define COMPILER_VERSION_INTERNAL_STR __clang_version__


#elif defined(_CRAYC)
# define COMPILER_ID "Cray"
# define COMPILER_VERSION_MAJOR DEC(_RELEASE_MAJOR)
# define COMPILER_VERSION_MINOR DEC(_RELEASE_MINOR)

#elif defined(__TI_COMPILER_VERSION__)
# define COMPILER_ID "TI"
  /* __TI_COMPILER_VERSION__ = VVVRRRPPP */
# define COMPILER_VERSION_MAJOR DEC(__TI_COMPILER_VERSION__/1000000)
# define COMPILER_VERSION_MINOR DEC(__TI_COMPILER_VERSION__/1000   % 1000)
# define COMPILER_VERSION_PATCH DEC(__TI_COMPILER_VERSION__        % 1000)

#elif defined(__CLANG_FUJITSU)
# define COMPILER_ID "FujitsuClang"
# define COMPILER_VERSION_MAJOR DEC(__FCC_major__)
# define COMPILER_VERSION_MINOR DEC(__FCC_minor__)
# define COMPILER_VERSION_PATCH DEC(__FCC_patchlevel__)
# define COMPILER_VERSION_INTERNAL_STR __clang_version__


#elif defined(__FUJITSU)
# define COMPILER_ID "Fujitsu"
# if defined(__FCC_version__)
#   define COMPILER_VERSION __FCC_version__
# elif defined(__FCC_major__)
#   define COMPILER_VERSION_MAJOR DEC(__FCC_major__)
#   define COMPILER_VERSION_MINOR DEC(__FCC_minor__)
#   define COMPILER_VERSION_PATCH DEC(__FCC_patchlevel__)
# endif
# if defined(__fcc_version)
#   define COMPILER_VERSION_INTERNAL DEC(__fcc_version)
# elif defined(__FCC_VERSION)
#   define COMPILER_VERSION_INTERNAL DEC(__FCC_VERSION)
# endif


#elif defined(__ghs__)
# define COMPILER_ID "GHS"
/* __GHS_VERSION_NUMBER = VVVVRP */
# ifdef __GHS_VERSION_NUMBER
# define COMPILER_VERSION_MAJOR DEC(__GHS_VERSION_NUMBER / 100)
# define COMPILER_VERSION_MINOR DEC(__GHS_VERSION_NUMBER / 10 % 10)
# define COMPILER_VERSION_PATCH DEC(__GHS_VERSION_NUMBER      % 10)
# endif

#elif defined(__TASKING__)
# define COMPILER_ID "Tasking"
  # define COMPILER_VERSION_MAJOR DEC(__VERSION__/1000)
  # define COMPILER_VERSION_MINOR DEC(__VERSION__ % 100)
# define COMPILER_VERSION_INTERNAL DEC(__VERSION__)

#elif defined(__ORANGEC__)
# define COMPILER_ID "OrangeC"
# define COMPILER_VERSION_MAJOR DEC(__ORANGEC_MAJOR__)
# define COMPILER_VERSION_MINOR DEC(__ORANGEC_MINOR__)
# define COMPILER_VERSION_PATCH DEC(__ORANGEC_PATCHLEVEL__)

#elif defined(__TINYC__)
# define COMPILER_ID "TinyCC"

#elif defined(__BCC__)
# define COMPILER_ID "Bruce"

#elif defined(__SCO_VERSION__)
# define COMPILER_ID "SCO"

#elif defined(__ARMCC_VERSION) && !defined(__clang__)
# define COMPILER_ID "ARMCC"
#if __ARMCC_VERSION >= 1000000
  /* __ARMCC_VERSION = VRRPPPP */
  # define COMPILER_VERSION_MAJOR DEC(__ARMCC_VERSION/1000000)
  # define COMPILER_VERSION_MINOR DEC(__ARMCC_VERSION/10000 % 100)
  # define COMPILER_VERSION_PATCH DEC(__ARMCC_VERSION     % 10000)
#else
  /* __ARMCC_VERSION = VRPPPP */
  # define COMPILER_VERSION_MAJOR DEC(__ARMCC_VERSION/100000)
  # define COMPILER_VERSION_MINOR DEC(__ARMCC_VERSION/10000 % 10)
  # define COMPILER_VERSION_PATCH DEC(__ARMCC_VERSION    % 10000)
#endif


#elif defined(__clang__) && defined(__apple_build_version__)
# define COMPILER_ID "AppleClang"
# if defined(_MSC_VER)
#  define SIMULATE_ID "MSVC"
# endif
# define COMPILER_VERSION_MAJOR DEC(__clang_major__)
# define COMPILER_VERSION_MINOR DEC(__clang_minor__)
# define COMPILER_VERSION_PATCH DEC(__clang_patchlevel__)
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define SIMULATE_VERSION_MAJOR DEC(_MSC_VER / 100)
#  define SIMULATE_VERSION_MINOR DEC(_MSC_VER % 100)
# endif
# define COMPILER_VERSION_TWEAK DEC(__apple_build_version__)

#elif defined(__clang__) && defined(__ARMCOMPILER_VERSION)
# define COMPILER_ID "ARMClang"
  # define COMPILER_VERSION_MAJOR DEC(__ARMCOMPILER_VERSION/1000000)
  # define COMPILER_VERSION_MINOR DEC(__ARMCOMPILER_VERSION/10000 % 100)
  # define COMPILER_VERSION_PATCH DEC(__ARMCOMPILER_VERSION/100   % 100)
# define COMPILER_VERSION_INTERNAL DEC(__ARMCOMPILER_VERSION)

#elif defined(__clang__)
# define COMPILER_ID "Clang"
# if defined(_MSC_VER)
#  define SIMULATE_ID "MSVC"
# endif
# define COMPILER_VERSION_MAJOR DEC(__clang_major__)
# define COMPILER_VERSION_MINOR DEC(__clang_minor__)
# define COMPILER_VERSION_PATCH DEC(__clang_patchlevel__)
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define SIMULATE_VERSION_MAJOR DEC(_MSC_VER / 100)
#  define SIMULATE_VERSION_MINOR DEC(_MSC_VER % 100)
# endif

#elif defined(__LCC__) && (defined(__GNUC__) || defined(__GNUG__) || defined(__MCST__))
# define COMPILER_ID "LCC"
# define COMPILER_VERSION_MAJOR DEC(__LCC__ / 100)
# define COMPILER_VERSION_MINOR DEC(__LCC__ % 100)
# if defined(__LCC_MINOR__)
#  define COMPILER_VERSION_PATCH DEC(__LCC_MINOR__)
# endif
# if defined(__GNUC__) && defined(__GNUC_MINOR__)
#  define SIMULATE_ID "GNU"
#  define SIMULATE_VERSION_MAJOR DEC(__GNUC__)
#  define SIMULATE_VERSION_MINOR DEC(__GNUC_MINOR__)
#  if defined(__GNUC_PATCHLEVEL__)
#   define SIMULATE_VERSION_PATCH DEC(__GNUC_PATCHLEVEL__)
#  endif
# endif

#elif defined(__GNUC__)
# define COMPILER_ID "GNU"
# define COMPILER_VERSION_MAJOR DEC(__GNUC__)
# if defined(__GNUC_MINOR__)
#  define COMPILER_VERSION_MINOR DEC(__GNUC_MINOR__)
# endif
# if defined(__GNUC_PATCHLEVEL__)
#  define COMPILER_VERSION_PATCH DEC(__GNUC_PATCHLEVEL__)
# endif

#elif defined(_MSC_VER)
# define COMPILER_ID "MSVC"
  /* _MSC_VER = VVRR */
# define COMPILER_VERSION_MAJOR DEC(_MSC_VER / 100)
# define COMPILER_VERSION_MINOR DEC(_MSC_VER % 100)
# if defined(_MSC_FULL_VER)
#  if _MSC_VER >= 1400
    /* _MSC_FULL_VER = VVRRPPPPP */
#   define COMPILER_VERSION_PATCH DEC(_MSC_FULL_VER % 100000)
#  else
    /* _MSC_FULL_VER = VVRRPPPP */
#   define COMPILER_VERSION_PATCH DEC(_MSC_FULL_VER % 10000)
#  endif
# endif
# if defined(_MSC_BUILD)
#  define COMPILER_VERSION_TWEAK DEC(_MSC_BUILD)
# endif

#elif defined(_ADI_COMPILER)
# define COMPILER_ID "ADSP"
#if defined(__VERSIONNUM__)
  /* __VERSIONNUM__ = 0xVVRRPPTT */
#  define COMPILER_VERSION_MAJOR DEC(__VERSIONNUM__ >> 24 & 0xFF)
#  define COMPILER_VERSION_MINOR DEC(__VERSIONNUM__ >> 16 & 0xFF)
#  define COMPILER_VERSION_PATCH DEC(__VERSIONNUM__ >> 8 & 0xFF)
#  define COMPILER_VERSION_TWEAK DEC(__VERSIONNUM__ & 0xFF)
#endif

#elif defined(__IAR_SYSTEMS_ICC__) || defined(__IAR_SYSTEMS_ICC)
# define COMPILER_ID "IAR"
# if defined(__VER__) && defined(__ICCARM__)
#  define COMPILER_VERSION_MAJOR DEC((__VER__) / 1000000)
#  define COMPILER_VERSION_MINOR DEC(((__VER__) / 1000) % 1000)
#  define COMPILER_VERSION_PATCH DEC((__VER__) % 1000)
#  define COMPILER_VERSION_INTERNAL DEC(__IAR_SYSTEMS_ICC__)
# elif defined(__VER__) && (defined(__ICCAVR__) || defined(__ICCRX__) || defined(__ICCRH850__) || defined(__ICCRL78__) || defined(__ICC430__) || defined(__ICCRISCV__) || defined(__ICCV850__) || defined(__ICC8051__) || defined(__ICCSTM8__))
#  define COMPILER_VERSION_MAJOR DEC((__VER__) / 100)
#  define COMPILER_VERSION_MINOR DEC((__VER__) - (((__VER__) / 100)*100))
#  define COMPILER_VERSION_PATCH DEC(__SUBVERSION__)
#  define COMPILER_VERSION_INTERNAL DEC(__IAR_SYSTEMS_ICC__)
# endif

#elif defined(__SDCC_VERSION_MAJOR) || defined(SDCC)
# define COMPILER_ID "SDCC"
# if defined(__SDCC_VERSION_MAJOR)
#  define COMPILER_VERSION_MAJOR DEC(__SDCC_VERSION_MAJOR)
#  define COMPILER_VERSION_MINOR DEC(__SDCC_VERSION_MINOR)
#  define COMPILER_VERSION_PATCH DEC(__SDCC_VERSION_PATCH)
# else
  /* SDCC = VRP */
#  define COMPILER_VERSION_MAJOR DEC(SDCC/100)
#  define COMPILER_VERSION_MINOR DEC(SDCC/10 % 10)
#  define COMPILER_VERSION_PATCH DEC(SDCC    % 10)
# endif


/* These compilers are either not known or too old to define an
  identification macro.  Try to identify the platform and guess that
  it is the native compiler.  */
#elif defined(__hpux) || defined(__hpua)
# define COMPILER_ID "HP"

#else /* unknown compiler */
# define COMPILER_ID ""
#endif

/* Construct the string literal in pieces to prevent the source from
   getting matched.  Store it in a pointer rather than an array
   because some compilers will just produce instructions to fill the
   array rather than assigning a pointer to a static array.  */
char const* info_compiler = "INFO" ":" "compiler[" COMPILER_ID "]";
#ifdef SIMULATE_ID
char const* info_simulate = "INFO" ":" "simulate[" SIMULATE_ID "]";
#endif

#ifdef __QNXNTO__
char const* qnxnto = "INFO" ":" "qnxnto[]";
#endif

#if defined(__CRAYXT_COMPUTE_LINUX_TARGET)
char const *info_cray = "INFO" ":" "compiler_wrapper[CrayPrgEnv]";
#endif

#define STRINGIFY_HELPER(X) #X
#define STRINGIFY(X) STRINGIFY_HELPER(X)

/* Identify known platforms by name.  */
#if defined(__linux) || defined(__linux__) || defined(linux)
# define PLATFORM_ID "Linux"

#elif defined(__MSYS__)
# define PLATFORM_ID "MSYS"

#elif defined(__CYGWIN__)
# define PLATFORM_ID "Cygwin"

#elif defined(__MINGW32__)
# define PLATFORM_ID "MinGW"

#elif defined(__APPLE__)
# define PLATFORM_ID "Darwin"

#elif defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
# define PLATFORM_ID "Windows"

#elif defined(__FreeBSD__) || defined(__FreeBSD)
# define PLATFORM_ID "FreeBSD"

#elif defined(__NetBSD__) || defined(__NetBSD)
# define PLATFORM_ID "NetBSD"

#elif defined(__OpenBSD__) || defined(__OPENBSD)
# define PLATFORM_ID "OpenBSD"

#elif defined(__sun) || defined(sun)
# define PLATFORM_ID "SunOS"

#elif defined(_AIX) || defined(__AIX) || defined(__AIX__) || defined(__aix) || defined(__aix__)
# define PLATFORM_ID "AIX"

#elif defined(__hpux) || defined(__hpux__)
# define PLATFORM_ID "HP-UX"

#elif defined(__HAIKU__)
# define PLATFORM_ID "Haiku"

#elif defined(__BeOS) || defined(__BEOS__) || defined(_BEOS)
# define PLATFORM_ID "BeOS"

#elif defined(__QNX__) || defined(__QNXNTO__)
# define PLATFORM_ID "QNX"

#elif defined(__tru64) || defined(_tru64) || defined(__TRU64__)
# define PLATFORM_ID "Tru64"

#elif defined(__riscos) || defined(__riscos__)
# define PLATFORM_ID "RISCos"

#elif defined(__sinix) || defined(__sinix__) || defined(__SINIX__)
# define PLATFORM_ID "SINIX"

#elif defined(__UNIX_SV__)
# define PLATFORM_ID "UNIX_SV"

#elif defined(__bsdos__)
# define PLATFORM_ID "BSDOS"

#elif defined(_MPRAS) || defined(MPRAS)
# define PLATFORM_ID "MP-RAS"

#elif defined(__osf) || defined(__osf__)
# define PLATFORM_ID "OSF1"

#elif defined(_SCO_SV) || defined(SCO_SV) || defined(sco_sv)
# define PLATFORM_ID "SCO_SV"

#elif defined(__ultrix) || defined(__ultrix__) || defined(_ULTRIX)
# define PLATFORM_ID "ULTRIX"

#elif defined(__XENIX__) || defined(_XENIX) || defined(XENIX)
# define PLATFORM_ID "Xenix"

#elif defined(__WATCOMC__)
# if defined(__LINUX__)
#  define PLATFORM_ID "Linux"

# elif defined(__DOS__)
#  define PLATFORM_ID "DOS"

# elif defined(__OS2__)
#  define PLATFORM_ID "OS2"

# elif defined(__WINDOWS__)
#  define PLATFORM_ID "Windows3x"

# elif defined(__VXWORKS__)
#  define PLATFORM_ID "VxWorks"

# else /* unknown platform */
#  define PLATFORM_ID
# endif

#elif defined(__INTEGRITY)
# if defined(INT_178B)
#  define PLATFORM_ID "Integrity178"

# else /* regular Integrity */
#  define PLATFORM_ID "Integrity"
# endif

# elif defined(_ADI_COMPILER)
#  define PLATFORM_ID "ADSP"

#else /* unknown platform */
# define PLATFORM_ID

#endif

/* For windows compilers MSVC and Intel we can determine
   the architecture of the compiler being used.  This is because
   the compilers do not have flags that can change the architecture,
   but rather depend on which compiler is being used
*/
#if defined(_WIN32) && defined(_MSC_VER)
# if defined(_M_IA64)
#  define ARCHITECTURE_ID "IA64"

# elif defined(_M_ARM64EC)
#  define ARCHITECTURE_ID "ARM64EC"

# elif defined(_M_X64) || defined(_M_AMD64)
#  define ARCHITECTURE_ID "x64"

# elif defined(_M_IX86)
#  define ARCHITECTURE_ID "X86"

# elif defined(_M_ARM64)
#  define ARCHITECTURE_ID "ARM64"

# elif defined(_M_ARM)
#  if _M_ARM == 4
#   define ARCHITECTURE_ID "ARMV4I"
#  elif _M_ARM == 5
#   define ARCHITECTURE_ID "ARMV5I"
#  else
#   define ARCHITECTURE_ID "ARMV" STRINGIFY(_M_ARM)
#  endif

# elif defined(_M_MIPS)
#  define ARCHITECTURE_ID "MIPS"

# elif defined(_M_SH)
#  define ARCHITECTURE_ID "SHx"

# else /* unknown architecture */
#  define ARCHITECTURE_ID ""
# endif

#elif defined(__WATCOMC__)
# if defined(_M_I86)
#  define ARCHITECTURE_ID "I86"

# elif defined(_M_IX86)
#  define ARCHITECTURE_ID "X86"

# else /* unknown architecture */
#  define ARCHITECTURE_ID ""
# endif

#elif defined(__IAR_SYSTEMS_ICC__) || defined(__IAR_SYSTEMS_ICC)
# if defined(__ICCARM__)
#  define ARCHITECTURE_ID "ARM"

# elif defined(__ICCRX__)
#  define ARCHITECTURE_ID "RX"

# elif defined(__ICCRH850__)
#  define ARCHITECTURE_ID "RH850"

# elif defined(__ICCRL78__)
#  define ARCHITECTURE_ID "RL78"

# elif defined(__ICCRISCV__)
#  define ARCHITECTURE_ID "RISCV"

# elif defined(__ICCAVR__)
#  define ARCHITECTURE_ID "AVR"

# elif defined(__ICC430__)
#  define ARCHITECTURE_ID "MSP430"

# elif defined(__ICCV850__)
#  define ARCHITECTURE_ID "V850"

# elif defined(__ICC8051__)
#  define ARCHITECTURE_ID "8051"

# elif defined(__ICCSTM8__)
#  define ARCHITECTURE_ID "STM8"

# else /* unknown architecture */
#  define ARCHITECTURE_ID ""
# endif

#elif defined(__ghs__)
# if defined(__PPC64__)
#  define ARCHITECTURE_ID "PPC64"

# elif defined(__ppc__)
#  define ARCHITECTURE_ID "PPC"

# elif defined(__ARM__)
#  define ARCHITECTURE_ID "ARM"

# elif defined(__x86_64__)
#  define ARCHITECTURE_ID "x64"

# elif defined(__i386__)
#  define ARCHITECTURE_ID "X86"

# else /* unknown architecture */
#  define ARCHITECTURE_ID ""
# endif

#elif defined(__TI_COMPILER_VERSION__)
# if defined(__TI_ARM__)
#  define ARCHITECTURE_ID "ARM"

# elif defined(__MSP430__)
#  define ARCHITECTURE_ID "MSP430"

# elif defined(__TMS320C28XX__)
#  define ARCHITECTURE_ID "TMS320C28x"

# elif defined(__TMS320C6X__) || defined(_TMS320C6X)
#  define ARCHITECTURE_ID "TMS320C6x"

# else /* unknown architecture */
#  define ARCHITECTURE_ID ""
# endif

# elif defined(__ADSPSHARC__)
#  define ARCHITECTURE_ID "SHARC"

# elif defined(__ADSPBLACKFIN__)
#  define ARCHITECTURE_ID "Blackfin"

#elif defined(__TASKING__)

# if defined(__CTC__) || defined(__CPTC__)
#  define ARCHITECTURE_ID "TriCore"

# elif defined(__CMCS__)
#  define ARCHITECTURE_ID "MCS"

# elif defined(__CARM__)
#  define ARCHITECTURE_ID "ARM"

# elif defined(__CARC__)
#  define ARCHITECTURE_ID "ARC"

# elif defined(__C51__)
#  define ARCHITECTURE_ID "8051"

# elif defined(__CPCP__)
#  define ARCHITECTURE_ID "PCP"

# else
#  define ARCHITECTURE_ID ""
# endif

#else
#  define ARCHITECTURE_ID
#endif

/* Convert integer to decimal digit literals.  */
#define DEC(n)                   \
  ('0' + (((n) / 10000000)%10)), \
  ('0' + (((n) / 1000000)%10)),  \
  ('0' + (((n) / 100000)%10)),   \
  ('0' + (((n) / 10000)%10)),    \
  ('0' + (((n) / 1000)%10)),     \
  ('0' + (((n) / 100)%10)),      \
  ('0' + (((n) / 10)%10)),       \
  ('0' +  ((n) % 10))

/* Convert integer to hex digit literals.  */
#define HEX(n)             \
  ('0' + ((n)>>28 & 0xF)), \
  ('0' + ((n)>>24 & 0xF)), \
  ('0' + ((n)>>20 & 0xF)), \
  ('0' + ((n)>>16 & 0xF)), \
  ('0' + ((n)>>12 & 0xF)), \
  ('0' + ((n)>>8  & 0xF)), \
  ('0' + ((n)>>4  & 0xF)), \
  ('0' + ((n)     & 0xF))

/* Construct a string literal encoding the version number. */
#ifdef COMPILER_VERSION
char const* info_version = "INFO" ":" "compiler_version[" COMPILER_VERSION "]";

/* Construct a string literal encoding the version number components. */
#elif defined(COMPILER_VERSION_MAJOR)
char const info_version[] = {
  'I', 'N', 'F', 'O', ':',
  'c','o','m','p','i','l','e','r','_','v','e','r','s','i','o','n','[',
  COMPILER_VERSION_MAJOR,
# ifdef COMPILER_VERSION_MINOR
  '.', COMPILER_VERSION_MINOR,
#  ifdef COMPILER_VERSION_PATCH
   '.', COMPILER_VERSION_PATCH,
#   ifdef COMPILER_VERSION_TWEAK
    '.', COMPILER_VERSION_TWEAK,
#   endif
#  endif
# endif
  ']','\0'};
#endif

/* Construct a string literal encoding the internal version number. */
#ifdef COMPILER_VERSION_INTERNAL
char const info_version_internal[] = {
  'I', 'N', 'F', 'O', ':',
  'c','o','m','p','i','l','e','r','_','v','e','r','s','i','o','n','_',
  'i','n','t','e','r','n','a','l','[',
  COMPILER_VERSION_INTERNAL,']','\0'};
#elif defined(COMPILER_VERSION_INTERNAL_STR)
char const* info_version_internal = "INFO" ":" "compiler_version_internal[" COMPILER_VERSION_INTERNAL_STR "]";
#endif

/* Construct a string literal encoding the version number components. */
#ifdef SIMULATE_VERSION_MAJOR
char const info_simulate_version[] = {
  'I', 'N', 'F', 'O', ':',
  's','i','m','u','l','a','t','e','_','v','e','r','s','i','o','n','[',
  SIMULATE_VERSION_MAJOR,
# ifdef SIMULATE_VERSION_MINOR
  '.', SIMULATE_VERSION_MINOR,
#  ifdef SIMULATE_VERSION_PATCH
   '.', SIMULATE_VERSION_PATCH,
#   ifdef SIMULATE_VERSION_TWEAK
    '.', SIMULATE_VERSION_TWEAK,
#   endif
#  endif
# endif
  ']','\0'};
#endif

/* Construct the string literal in pieces to prevent the source from
   getting matched.  Store it in a pointer rather than an array
   because some compilers will just produce instructions to fill the
   array rather than assigning a pointer to a static array.  */
char const* info_platform = "INFO" ":" "platform[" PLATFORM_ID "]";
char const* info_arch = "INFO" ":" "arch[" ARCHITECTURE_ID "]";



#if !defined(__STDC__) && !defined(__clang__)
# if defined(_MSC_VER) || defined(__ibmxl__) || defined(__IBMC__)
#  define C_VERSION "90"
# else
#  define C_VERSION
# endif
#elif __STDC_VERSION__ > 201710L
# define C_VERSION "23"
#elif __STDC_VERSION__ >= 201710L
# define C_VERSION "17"
#elif __STDC_VERSION__ >= 201000L
# define C_VERSION "11"
#elif __STDC_VERSION__ >= 199901L
# define C_VERSION "99"
#else
# define C_VERSION "90"
#endif
const char* info_language_standard_default =
  "INFO" ":" "standard_default[" C_VERSION "]";

const char* info_language_extensions_default = "INFO" ":" "extensions_default["
#if (defined(__clang__) || defined(__GNUC__) || defined(__xlC__) ||           \
     defined(__TI_COMPILER_VERSION__)) &&                                     \
  !defined(__STRICT_ANSI__)
  "ON"
#else
  "OFF"
#endif
"]";

/*--------------------------------------------------------------------------*/

#ifdef ID_VOID_MAIN
void main() {}
#else
# if defined(__CLASSIC_C__)
int main(argc, argv) int argc; char *argv[];
# else
int main(int argc, char* argv[])
# endif
{
  int require = 0;
  require += info_compiler[argc];
  require += info_platform[argc];
  require += info_arch[argc];
#ifdef COMPILER_VERSION_MAJOR
  require += info_version[argc];
#endif
#ifdef COMPILER_VERSION_INTERNAL
  require += info_version_internal[argc];
#endif
#ifdef SIMULATE_ID
  require += info_simulate[argc];
#endif
#ifdef SIMULATE_VERSION_MAJOR
  require += info_simulate_version[argc];
#endif
#if defined(__CRAYXT_COMPUTE_LINUX_TARGET)
  require += info_cray[argc];
#endif
  require += info_language_standard_default[argc];
  require += info_language_extensions_default[argc];
  (void)argv;
  return require;
}
#endif

```


---
### Archivo: `build/CMakeFiles/monitor.dir/link.txt`

```
/usr/bin/cc CMakeFiles/monitor.dir/src/main.c.o CMakeFiles/monitor.dir/src/metric_exposer.c.o CMakeFiles/monitor.dir/src/metrics.c.o -o monitor  -Wl,-rpath,/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/promhttp:/home/francisco-javier-vasquez/GItHub/so-i-24-javii54311/build/external/prometheus-client-c/prom: external/prometheus-client-c/promhttp/libpromhttp.so -lpthread -lmicrohttpd external/prometheus-client-c/prom/libprom.so 

```


---
### Archivo: `include/constants.h`

```c
#ifndef CONSTANTS_H
#define CONSTANTS_H

/**
 * @file constants.h
 * @brief Defines global constants for the system monitor.
 */

/**
 * @brief The port on which the Prometheus metrics server will be exposed.
 */
#define METRICS_PORT 8000

/**
 * @brief The interval in seconds between each metric collection and update.
 */
#define UPDATE_INTERVAL_SECONDS 1

/**
 * @brief Constant to indicate that no labels are being used for a metric.
 */
#define NO_LABELS 0

#endif // CONSTANTS_H

```


---
### Archivo: `include/metric_exposer.h`

```c
/**
 * @file metric_exposer.h
 * @brief Functions to initialize, update, and expose system metrics via Prometheus.
 */

#ifndef METRIC_EXPOSER_H
#define METRIC_EXPOSER_H

#include "metrics.h"
#include <prom.h>
#include <promhttp.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * @brief Updates the CPU usage gauge metric.
 */
void update_cpu_gauge(void);

/**
 * @brief Updates the memory usage gauge metric.
 */
void update_memory_gauge(void);

/**
 * @brief Updates the context switches gauge metric.
 */
void update_context_switches_gauge(void);

/**
 * @brief Updates the disk I/O gauge metrics (reads and writes).
 */
void update_disk_io_gauges(void);

/**
 * @brief Updates all network-related gauge metrics.
 */
void update_network_gauges(void);

/**
 * @brief Updates the running processes count gauge metric.
 */
void update_process_count_gauge(void);

/**
 * @brief Thread function to expose metrics via an HTTP server.
 *
 * This function starts an HTTP daemon to serve the collected Prometheus metrics.
 *
 * @param arg Thread argument (unused).
 * @return NULL.
 */
void* expose_metrics_thread(void* arg);

/**
 * @brief Initializes all Prometheus metrics and the synchronization mutex.
 *
 * @return EXIT_SUCCESS on success, or EXIT_FAILURE on error.
 */
int initialize_metrics(void);

/**
 * @brief Destroys the synchronization mutex.
 */
void destroy_mutex(void);

#endif // METRIC_EXPOSER_H

```


---
### Archivo: `include/metrics.h`

```c
/**
 * @file metrics.h
 * @brief Functions to retrieve system statistics from the /proc filesystem.
 */

#ifndef METRICS_H
#define METRICS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * @brief Default buffer size for reading files.
 */
#define BUFFER_SIZE 256

/**
 * @brief Number of fields expected when parsing CPU data from /proc/stat.
 */
#define CPU_STAT_FIELDS 8

/**
 * @brief Error return value for functions returning a double.
 */
#define METRICS_ERROR_VALUE -1.0

/**
 * @brief Error return value for functions returning an unsigned long long.
 */
#define METRICS_ERROR_ULL -1ULL

/**
 * @brief Error return value for functions returning an int.
 */
#define METRICS_ERROR_INT -1

/**
 * @brief Retrieves the current memory usage percentage from /proc/meminfo.
 *
 * This function reads the total and available memory from /proc/meminfo
 * and calculates the usage percentage.
 *
 * @return Memory usage as a percentage (0.0 to 100.0), or METRICS_ERROR_VALUE on error.
 */
double get_memory_usage(void);

/**
 * @brief Retrieves the current CPU usage percentage from /proc/stat.
 *
 * This function reads CPU time counters from /proc/stat over an interval
 * to calculate the CPU usage percentage.
 *
 * @return CPU usage as a percentage (0.0 to 100.0), or METRICS_ERROR_VALUE on error.
 */
double get_cpu_usage(void);

/**
 * @brief Retrieves the total number of context switches from /proc/stat.
 *
 * This function reads the 'ctxt' value, which indicates how many times the
 * system has switched from one running process to another.
 *
 * @return The total number of context switches, or METRICS_ERROR_ULL on error.
 */
unsigned long long get_context_switches(void);

/**
 * @brief Retrieves disk I/O statistics from /proc/diskstats.
 *
 * This function sums the total sectors read and written across all block devices.
 *
 * @param[out] reads Pointer to store the total sectors read.
 * @param[out] writes Pointer to store the total sectors written.
 */
void get_disk_io(unsigned long long* reads, unsigned long long* writes);

/**
 * @brief Retrieves network statistics from /proc/net/dev.
 *
 * This function accumulates bytes received/transmitted and errors/collisions
 * across all network interfaces.
 *
 * @param[out] rx_bytes Pointer to store total received bytes.
 * @param[out] tx_bytes Pointer to store total transmitted bytes.
 * @param[out] rx_errors Pointer to store total receive errors.
 * @param[out] tx_errors Pointer to store total transmit errors.
 * @param[out] collisions Pointer to store total collisions.
 */
void get_network_stats(unsigned long long* rx_bytes, unsigned long long* tx_bytes, unsigned long long* rx_errors,
                       unsigned long long* tx_errors, unsigned long long* collisions);

/**
 * @brief Retrieves the number of running processes from /proc/stat.
 *
 * This function reads the 'procs_running' value from /proc/stat.
 *
 * @return The number of running processes, or METRICS_ERROR_INT on error.
 */
int get_running_processes(void);

#endif // METRICS_H

```


---
### Archivo: `.github/actions/building/action.yml`

```yaml
name: "Build"
description: "Executes a CMake-based compilation."

runs:
  using: "composite"
  steps:
    - name: Configure and Build
      shell: bash
      run: |
        echo "--- Creating build directory ---"
        mkdir -p build

        echo "--- Configuring project with CMake ---"
        cmake -S . -B build

        echo "--- Compiling project with Make ---"
        cmake --build build
```


---
### Archivo: `.github/actions/documentation/action.yml`

```yaml
name: "Doc check"
description: "Code documentation generation with Doxygen"

runs:
  using: "composite"
  steps:
    - name: "Run doxygen command"
      shell: bash
      run: |
          # We only make check, not changes
          DOX_CONF_FILE=$(pwd)/Doxyfile

          # Append to DOX_CONF_FILE input source directories 
          {
              cat $DOX_CONF_FILE
              echo "INPUT" = $(pwd)/src $(pwd)/include 
          } > $DOX_CONF_FILE

          # Generate documentation
          # dot -c clears Graphviz configuration, doxygen uses Graphviz for generating graphical representations
          sudo dot -c

          ERROR_FILE_FLAG=$(pwd)/dox_errors.txt

          # create documentation: -s specifies comments of configurations items will be omitted.
          # pipe stderr to error file
          DOXYGEN_COMMAND=$(doxygen -s $DOX_CONF_FILE 2> $ERROR_FILE_FLAG)

          # if error file not empty fail
          if [ -s $ERROR_FILE_FLAG ]; then
            echo "Error: There are some files that are not documented correctly"
            exit 1
          else
            echo "All files are documented correctly. Niiiceee"
            exit 0
          fi
      
    # Upload errors as an artifact, when failed
    - uses: actions/upload-artifact@v4
      if: failure()
      with:
        name: Doxygen errors!!!
        path: ./dox_errors.txt
        retention-days: 1



```


---
### Archivo: `.github/actions/style/action.yml`

```yaml
name: "Style check"
description: "Style check using clang-format"

runs:
  using: "composite"
  steps:
    - name: "Run clang-format"
      shell: bash
      run: |
        # We only make check, not changes
        # Use the find command with the variable
        PROJECT_PATH=$(pwd)

        echo "Checking style for src/ and include/ directories..."
        
        # Find files only in your source and include directories.
        # The 'lib' directory containing third-party code is now ignored.
        SOURCE_FILES=$(find $PROJECT_PATH/src -type f \( -name "*.cpp" -or -name "*.hpp" -or -name "*.h" -or -name "*.c" \) | tr "\n" " ")
        SOURCE_FILES+=$(find $PROJECT_PATH/include -type f \( -name "*.cpp" -or -name "*.hpp" -or -name "*.h" -or -name "*.c" \) | tr "\n" " ")
        
        # This line has been removed:
        # SOURCE_FILES+=$(find $PROJECT_PATH/lib -type f \( -name "*.cpp" -or -name "*.hpp" -or -name "*.h" -or -name "*.c" \) | tr "\n" " ")

        ERROR_FILE_FLAG=$PROJECT_PATH/clang-format_errors.txt

        # clang-format: check and format code style
        #               - -n (--dry-run) option for checking style but not actually making changes
        #                 outputs to stderr warnings and errors.
        echo "Running: clang-format -n --style=file $SOURCE_FILES"
        clang-format -n --style=file $SOURCE_FILES 2> ${ERROR_FILE_FLAG}

        if [ -s $ERROR_FILE_FLAG ]; then
            echo "Error: There are some files that are not formatted correctly"
            cat $ERROR_FILE_FLAG
            exit 1
        else
            echo "All files are formatted correctly. Niiiceee"
            exit 0
        fi

    # Upload errors as an artifact, when failed
    - uses: actions/upload-artifact@v4
      if: failure()
      with:
        name: Clang-format errors!!!
        path: ./clang-format_errors.txt
        retention-days: 1
```


---
### Archivo: `.github/workflows/QAWorkflow.yml`

```yaml
name: QA Workflow

on:
  workflow_dispatch:
  pull_request:
    types: [synchronize, opened, reopened, ready_for_review]

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
      - name: Checkout repository
        uses: actions/checkout@v3
        with:
          submodules: recursive

      - name: Install dependencies
        uses: awalsh128/cache-apt-pkgs-action@latest
        with:
          packages: doxygen gcovr lcov cppcheck graphviz clang-format valgrind bc libmicrohttpd-dev libcjson-dev
          version: 1.0

      - name: Run style check
        uses: ./.github/actions/style

      - name: Run documentation check
        uses: ./.github/actions/documentation

      - name: Build project
        uses: ./.github/actions/building
```


---
### Archivo: `external/prometheus-client-c/.clang-format`

```
BasedOnStyle: Google
ColumnLimit: 120
```


---
### Archivo: `external/prometheus-client-c/.gitignore`

```
.*.swp
docker/Dockerfile
.vscode
prom/build/*
promhttp/build/*
promtest/build/*
tty.gif
ttyrecord
_CPack_Packages/
*deb
*tar.gz
*vgcore*
*.o

```


---
### Archivo: `external/prometheus-client-c/Doxyfile`

```
# Doxyfile 1.8.13

# This file describes the settings to be used by the documentation system
# doxygen (www.doxygen.org) for a project.
#
# All text after a double hash (##) is considered a comment and is placed in
# front of the TAG it is preceding.
#
# All text after a single hash (#) is considered a comment and will be ignored.
# The format is:
# TAG = value [value, ...]
# For lists, items can also be appended using:
# TAG += value [value, ...]
# Values that contain spaces should be placed between quotes (\" \").

#---------------------------------------------------------------------------
# Project related configuration options
#---------------------------------------------------------------------------

# This tag specifies the encoding used for all characters in the config file
# that follow. The default is UTF-8 which is also the encoding used for all text
# before the first occurrence of this tag. Doxygen uses libiconv (or the iconv
# built into libc) for the transcoding. See http://www.gnu.org/software/libiconv
# for the list of possible encodings.
# The default value is: UTF-8.

DOXYFILE_ENCODING      = UTF-8

# The PROJECT_NAME tag is a single word (or a sequence of words surrounded by
# double-quotes, unless you are using Doxywizard) that should identify the
# project for which the documentation is generated. This name is used in the
# title of most generated pages and in a few other places.
# The default value is: My Project.

PROJECT_NAME           = "prometheus-client-c"

# The PROJECT_NUMBER tag can be used to enter a project or revision number. This
# could be handy for archiving the generated documentation or if some version
# control system is used.

PROJECT_NUMBER         = "0.1.1"

# Using the PROJECT_BRIEF tag one can provide an optional one line description
# for a project that appears at the top of each page and should give viewer a
# quick idea about the purpose of the project. Keep the description short.

PROJECT_BRIEF          = "Prometheus client for the C programming language"

# With the PROJECT_LOGO tag one can specify a logo or an icon that is included
# in the documentation. The maximum height of the logo should not exceed 55
# pixels and the maximum width should not exceed 200 pixels. Doxygen will copy
# the logo to the output directory.

PROJECT_LOGO           =

# The OUTPUT_DIRECTORY tag is used to specify the (relative or absolute) path
# into which the generated documentation will be written. If a relative path is
# entered, it will be relative to the location where doxygen was started. If
# left blank the current directory will be used.

OUTPUT_DIRECTORY       = "docs/"

# If the CREATE_SUBDIRS tag is set to YES then doxygen will create 4096 sub-
# directories (in 2 levels) under the output directory of each output format and
# will distribute the generated files over these directories. Enabling this
# option can be useful when feeding doxygen a huge amount of source files, where
# putting all generated files in the same directory would otherwise causes
# performance problems for the file system.
# The default value is: NO.

CREATE_SUBDIRS         = NO

# If the ALLOW_UNICODE_NAMES tag is set to YES, doxygen will allow non-ASCII
# characters to appear in the names of generated files. If set to NO, non-ASCII
# characters will be escaped, for example _xE3_x81_x84 will be used for Unicode
# U+3044.
# The default value is: NO.

ALLOW_UNICODE_NAMES    = NO

# The OUTPUT_LANGUAGE tag is used to specify the language in which all
# documentation generated by doxygen is written. Doxygen will use this
# information to generate all constant output in the proper language.
# Possible values are: Afrikaans, Arabic, Armenian, Brazilian, Catalan, Chinese,
# Chinese-Traditional, Croatian, Czech, Danish, Dutch, English (United States),
# Esperanto, Farsi (Persian), Finnish, French, German, Greek, Hungarian,
# Indonesian, Italian, Japanese, Japanese-en (Japanese with English messages),
# Korean, Korean-en (Korean with English messages), Latvian, Lithuanian,
# Macedonian, Norwegian, Persian (Farsi), Polish, Portuguese, Romanian, Russian,
# Serbian, Serbian-Cyrillic, Slovak, Slovene, Spanish, Swedish, Turkish,
# Ukrainian and Vietnamese.
# The default value is: English.

OUTPUT_LANGUAGE        = English

# If the BRIEF_MEMBER_DESC tag is set to YES, doxygen will include brief member
# descriptions after the members that are listed in the file and class
# documentation (similar to Javadoc). Set to NO to disable this.
# The default value is: YES.

BRIEF_MEMBER_DESC      = YES

# If the REPEAT_BRIEF tag is set to YES, doxygen will prepend the brief
# description of a member or function before the detailed description
#
# Note: If both HIDE_UNDOC_MEMBERS and BRIEF_MEMBER_DESC are set to NO, the
# brief descriptions will be completely suppressed.
# The default value is: YES.

REPEAT_BRIEF           = YES

# This tag implements a quasi-intelligent brief description abbreviator that is
# used to form the text in various listings. Each string in this list, if found
# as the leading text of the brief description, will be stripped from the text
# and the result, after processing the whole list, is used as the annotated
# text. Otherwise, the brief description is used as-is. If left blank, the
# following values are used ($name is automatically replaced with the name of
# the entity):The $name class, The $name widget, The $name file, is, provides,
# specifies, contains, represents, a, an and the.

ABBREVIATE_BRIEF       = "The $name class" \
                         "The $name widget" \
                         "The $name file" \
                         is \
                         provides \
                         specifies \
                         contains \
                         represents \
                         a \
                         an \
                         the

# If the ALWAYS_DETAILED_SEC and REPEAT_BRIEF tags are both set to YES then
# doxygen will generate a detailed section even if there is only a brief
# description.
# The default value is: NO.

ALWAYS_DETAILED_SEC    = NO

# If the INLINE_INHERITED_MEMB tag is set to YES, doxygen will show all
# inherited members of a class in the documentation of that class as if those
# members were ordinary class members. Constructors, destructors and assignment
# operators of the base classes will not be shown.
# The default value is: NO.

INLINE_INHERITED_MEMB  = NO

# If the FULL_PATH_NAMES tag is set to YES, doxygen will prepend the full path
# before files name in the file list and in the header files. If set to NO the
# shortest path that makes the file name unique will be used
# The default value is: YES.

FULL_PATH_NAMES        = YES

# The STRIP_FROM_PATH tag can be used to strip a user-defined part of the path.
# Stripping is only done if one of the specified strings matches the left-hand
# part of the path. The tag can be used to show relative paths in the file list.
# If left blank the directory from which doxygen is run is used as the path to
# strip.
#
# Note that you can specify absolute paths here, but also relative paths, which
# will be relative from the directory where doxygen is started.
# This tag requires that the tag FULL_PATH_NAMES is set to YES.

STRIP_FROM_PATH        =

# The STRIP_FROM_INC_PATH tag can be used to strip a user-defined part of the
# path mentioned in the documentation of a class, which tells the reader which
# header file to include in order to use a class. If left blank only the name of
# the header file containing the class definition is used. Otherwise one should
# specify the list of include paths that are normally passed to the compiler
# using the -I flag.

STRIP_FROM_INC_PATH    =

# If the SHORT_NAMES tag is set to YES, doxygen will generate much shorter (but
# less readable) file names. This can be useful is your file systems doesn't
# support long names like on DOS, Mac, or CD-ROM.
# The default value is: NO.

SHORT_NAMES            = NO

# If the JAVADOC_AUTOBRIEF tag is set to YES then doxygen will interpret the
# first line (until the first dot) of a Javadoc-style comment as the brief
# description. If set to NO, the Javadoc-style will behave just like regular Qt-
# style comments (thus requiring an explicit @brief command for a brief
# description.)
# The default value is: NO.

JAVADOC_AUTOBRIEF      = YES

# If the QT_AUTOBRIEF tag is set to YES then doxygen will interpret the first
# line (until the first dot) of a Qt-style comment as the brief description. If
# set to NO, the Qt-style will behave just like regular Qt-style comments (thus
# requiring an explicit \brief command for a brief description.)
# The default value is: NO.

QT_AUTOBRIEF           = NO

# The MULTILINE_CPP_IS_BRIEF tag can be set to YES to make doxygen treat a
# multi-line C++ special comment block (i.e. a block of //! or /// comments) as
# a brief description. This used to be the default behavior. The new default is
# to treat a multi-line C++ comment block as a detailed description. Set this
# tag to YES if you prefer the old behavior instead.
#
# Note that setting this tag to YES also means that rational rose comments are
# not recognized any more.
# The default value is: NO.

MULTILINE_CPP_IS_BRIEF = NO

# If the INHERIT_DOCS tag is set to YES then an undocumented member inherits the
# documentation from any documented member that it re-implements.
# The default value is: YES.

INHERIT_DOCS           = YES

# If the SEPARATE_MEMBER_PAGES tag is set to YES then doxygen will produce a new
# page for each member. If set to NO, the documentation of a member will be part
# of the file/class/namespace that contains it.
# The default value is: NO.

SEPARATE_MEMBER_PAGES  = NO

# The TAB_SIZE tag can be used to set the number of spaces in a tab. Doxygen
# uses this value to replace tabs by spaces in code fragments.
# Minimum value: 1, maximum value: 16, default value: 4.

TAB_SIZE               = 4

# This tag can be used to specify a number of aliases that act as commands in
# the documentation. An alias has the form:
# name=value
# For example adding
# "sideeffect=@par Side Effects:\n"
# will allow you to put the command \sideeffect (or @sideeffect) in the
# documentation, which will result in a user-defined paragraph with heading
# "Side Effects:". You can put \n's in the value part of an alias to insert
# newlines.

ALIASES                =

# This tag can be used to specify a number of word-keyword mappings (TCL only).
# A mapping has the form "name=value". For example adding "class=itcl::class"
# will allow you to use the command class in the itcl::class meaning.

TCL_SUBST              =

# Set the OPTIMIZE_OUTPUT_FOR_C tag to YES if your project consists of C sources
# only. Doxygen will then generate output that is more tailored for C. For
# instance, some of the names that are used will be different. The list of all
# members will be omitted, etc.
# The default value is: NO.

OPTIMIZE_OUTPUT_FOR_C  = NO

# Set the OPTIMIZE_OUTPUT_JAVA tag to YES if your project consists of Java or
# Python sources only. Doxygen will then generate output that is more tailored
# for that language. For instance, namespaces will be presented as packages,
# qualified scopes will look different, etc.
# The default value is: NO.

OPTIMIZE_OUTPUT_JAVA   = NO

# Set the OPTIMIZE_FOR_FORTRAN tag to YES if your project consists of Fortran
# sources. Doxygen will then generate output that is tailored for Fortran.
# The default value is: NO.

OPTIMIZE_FOR_FORTRAN   = NO

# Set the OPTIMIZE_OUTPUT_VHDL tag to YES if your project consists of VHDL
# sources. Doxygen will then generate output that is tailored for VHDL.
# The default value is: NO.

OPTIMIZE_OUTPUT_VHDL   = NO

# Doxygen selects the parser to use depending on the extension of the files it
# parses. With this tag you can assign which parser to use for a given
# extension. Doxygen has a built-in mapping, but you can override or extend it
# using this tag. The format is ext=language, where ext is a file extension, and
# language is one of the parsers supported by doxygen: IDL, Java, Javascript,
# C#, C, C++, D, PHP, Objective-C, Python, Fortran (fixed format Fortran:
# FortranFixed, free formatted Fortran: FortranFree, unknown formatted Fortran:
# Fortran. In the later case the parser tries to guess whether the code is fixed
# or free formatted code, this is the default for Fortran type files), VHDL. For
# instance to make doxygen treat .inc files as Fortran files (default is PHP),
# and .f files as C (default is Fortran), use: inc=Fortran f=C.
#
# Note: For files without extension you can use no_extension as a placeholder.
#
# Note that for custom extensions you also need to set FILE_PATTERNS otherwise
# the files are not read by doxygen.

EXTENSION_MAPPING      =

# If the MARKDOWN_SUPPORT tag is enabled then doxygen pre-processes all comments
# according to the Markdown format, which allows for more readable
# documentation. See http://daringfireball.net/projects/markdown/ for details.
# The output of markdown processing is further processed by doxygen, so you can
# mix doxygen, HTML, and XML commands with Markdown formatting. Disable only in
# case of backward compatibilities issues.
# The default value is: YES.

MARKDOWN_SUPPORT       = YES

# When the TOC_INCLUDE_HEADINGS tag is set to a non-zero value, all headings up
# to that level are automatically included in the table of contents, even if
# they do not have an id attribute.
# Note: This feature currently applies only to Markdown headings.
# Minimum value: 0, maximum value: 99, default value: 0.
# This tag requires that the tag MARKDOWN_SUPPORT is set to YES.

TOC_INCLUDE_HEADINGS   = 0

# When enabled doxygen tries to link words that correspond to documented
# classes, or namespaces to their corresponding documentation. Such a link can
# be prevented in individual cases by putting a % sign in front of the word or
# globally by setting AUTOLINK_SUPPORT to NO.
# The default value is: YES.

AUTOLINK_SUPPORT       = YES

# If you use STL classes (i.e. std::string, std::vector, etc.) but do not want
# to include (a tag file for) the STL sources as input, then you should set this
# tag to YES in order to let doxygen match functions declarations and
# definitions whose arguments contain STL classes (e.g. func(std::string);
# versus func(std::string) {}). This also make the inheritance and collaboration
# diagrams that involve STL classes more complete and accurate.
# The default value is: NO.

BUILTIN_STL_SUPPORT    = NO

# If you use Microsoft's C++/CLI language, you should set this option to YES to
# enable parsing support.
# The default value is: NO.

CPP_CLI_SUPPORT        = NO

# Set the SIP_SUPPORT tag to YES if your project consists of sip (see:
# http://www.riverbankcomputing.co.uk/software/sip/intro) sources only. Doxygen
# will parse them like normal C++ but will assume all classes use public instead
# of private inheritance when no explicit protection keyword is present.
# The default value is: NO.

SIP_SUPPORT            = NO

# For Microsoft's IDL there are propget and propput attributes to indicate
# getter and setter methods for a property. Setting this option to YES will make
# doxygen to replace the get and set methods by a property in the documentation.
# This will only work if the methods are indeed getting or setting a simple
# type. If this is not the case, or you want to show the methods anyway, you
# should set this option to NO.
# The default value is: YES.

IDL_PROPERTY_SUPPORT   = YES

# If member grouping is used in the documentation and the DISTRIBUTE_GROUP_DOC
# tag is set to YES then doxygen will reuse the documentation of the first
# member in the group (if any) for the other members of the group. By default
# all members of a group must be documented explicitly.
# The default value is: NO.

DISTRIBUTE_GROUP_DOC   = NO

# If one adds a struct or class to a group and this option is enabled, then also
# any nested class or struct is added to the same group. By default this option
# is disabled and one has to add nested compounds explicitly via \ingroup.
# The default value is: NO.

GROUP_NESTED_COMPOUNDS = NO

# Set the SUBGROUPING tag to YES to allow class member groups of the same type
# (for instance a group of public functions) to be put as a subgroup of that
# type (e.g. under the Public Functions section). Set it to NO to prevent
# subgrouping. Alternatively, this can be done per class using the
# \nosubgrouping command.
# The default value is: YES.

SUBGROUPING            = YES

# When the INLINE_GROUPED_CLASSES tag is set to YES, classes, structs and unions
# are shown inside the group in which they are included (e.g. using \ingroup)
# instead of on a separate page (for HTML and Man pages) or section (for LaTeX
# and RTF).
#
# Note that this feature does not work in combination with
# SEPARATE_MEMBER_PAGES.
# The default value is: NO.

INLINE_GROUPED_CLASSES = NO

# When the INLINE_SIMPLE_STRUCTS tag is set to YES, structs, classes, and unions
# with only public data fields or simple typedef fields will be shown inline in
# the documentation of the scope in which they are defined (i.e. file,
# namespace, or group documentation), provided this scope is documented. If set
# to NO, structs, classes, and unions are shown on a separate page (for HTML and
# Man pages) or section (for LaTeX and RTF).
# The default value is: NO.

INLINE_SIMPLE_STRUCTS  = NO

# When TYPEDEF_HIDES_STRUCT tag is enabled, a typedef of a struct, union, or
# enum is documented as struct, union, or enum with the name of the typedef. So
# typedef struct TypeS {} TypeT, will appear in the documentation as a struct
# with name TypeT. When disabled the typedef will appear as a member of a file,
# namespace, or class. And the struct will be named TypeS. This can typically be
# useful for C code in case the coding convention dictates that all compound
# types are typedef'ed and only the typedef is referenced, never the tag name.
# The default value is: NO.

TYPEDEF_HIDES_STRUCT   = NO

# The size of the symbol lookup cache can be set using LOOKUP_CACHE_SIZE. This
# cache is used to resolve symbols given their name and scope. Since this can be
# an expensive process and often the same symbol appears multiple times in the
# code, doxygen keeps a cache of pre-resolved symbols. If the cache is too small
# doxygen will become slower. If the cache is too large, memory is wasted. The
# cache size is given by this formula: 2^(16+LOOKUP_CACHE_SIZE). The valid range
# is 0..9, the default is 0, corresponding to a cache size of 2^16=65536
# symbols. At the end of a run doxygen will report the cache usage and suggest
# the optimal cache size from a speed point of view.
# Minimum value: 0, maximum value: 9, default value: 0.

LOOKUP_CACHE_SIZE      = 0

#---------------------------------------------------------------------------
# Build related configuration options
#---------------------------------------------------------------------------

# If the EXTRACT_ALL tag is set to YES, doxygen will assume all entities in
# documentation are documented, even if no documentation was available. Private
# class members and static file members will be hidden unless the
# EXTRACT_PRIVATE respectively EXTRACT_STATIC tags are set to YES.
# Note: This will also disable the warnings about undocumented members that are
# normally produced when WARNINGS is set to YES.
# The default value is: NO.

EXTRACT_ALL            = NO

# If the EXTRACT_PRIVATE tag is set to YES, all private members of a class will
# be included in the documentation.
# The default value is: NO.

EXTRACT_PRIVATE        = NO

# If the EXTRACT_PACKAGE tag is set to YES, all members with package or internal
# scope will be included in the documentation.
# The default value is: NO.

EXTRACT_PACKAGE        = NO

# If the EXTRACT_STATIC tag is set to YES, all static members of a file will be
# included in the documentation.
# The default value is: NO.

EXTRACT_STATIC         = NO

# If the EXTRACT_LOCAL_CLASSES tag is set to YES, classes (and structs) defined
# locally in source files will be included in the documentation. If set to NO,
# only classes defined in header files are included. Does not have any effect
# for Java sources.
# The default value is: YES.

EXTRACT_LOCAL_CLASSES  = YES

# This flag is only useful for Objective-C code. If set to YES, local methods,
# which are defined in the implementation section but not in the interface are
# included in the documentation. If set to NO, only methods in the interface are
# included.
# The default value is: NO.

EXTRACT_LOCAL_METHODS  = NO

# If this flag is set to YES, the members of anonymous namespaces will be
# extracted and appear in the documentation as a namespace called
# 'anonymous_namespace{file}', where file will be replaced with the base name of
# the file that contains the anonymous namespace. By default anonymous namespace
# are hidden.
# The default value is: NO.

EXTRACT_ANON_NSPACES   = NO

# If the HIDE_UNDOC_MEMBERS tag is set to YES, doxygen will hide all
# undocumented members inside documented classes or files. If set to NO these
# members will be included in the various overviews, but no documentation
# section is generated. This option has no effect if EXTRACT_ALL is enabled.
# The default value is: NO.

HIDE_UNDOC_MEMBERS     = NO

# If the HIDE_UNDOC_CLASSES tag is set to YES, doxygen will hide all
# undocumented classes that are normally visible in the class hierarchy. If set
# to NO, these classes will be included in the various overviews. This option
# has no effect if EXTRACT_ALL is enabled.
# The default value is: NO.

HIDE_UNDOC_CLASSES     = NO

# If the HIDE_FRIEND_COMPOUNDS tag is set to YES, doxygen will hide all friend
# (class|struct|union) declarations. If set to NO, these declarations will be
# included in the documentation.
# The default value is: NO.

HIDE_FRIEND_COMPOUNDS  = NO

# If the HIDE_IN_BODY_DOCS tag is set to YES, doxygen will hide any
# documentation blocks found inside the body of a function. If set to NO, these
# blocks will be appended to the function's detailed documentation block.
# The default value is: NO.

HIDE_IN_BODY_DOCS      = NO

# The INTERNAL_DOCS tag determines if documentation that is typed after a
# \internal command is included. If the tag is set to NO then the documentation
# will be excluded. Set it to YES to include the internal documentation.
# The default value is: NO.

INTERNAL_DOCS          = NO

# If the CASE_SENSE_NAMES tag is set to NO then doxygen will only generate file
# names in lower-case letters. If set to YES, upper-case letters are also
# allowed. This is useful if you have classes or files whose names only differ
# in case and if your file system supports case sensitive file names. Windows
# and Mac users are advised to set this option to NO.
# The default value is: system dependent.

CASE_SENSE_NAMES       = YES

# If the HIDE_SCOPE_NAMES tag is set to NO then doxygen will show members with
# their full class and namespace scopes in the documentation. If set to YES, the
# scope will be hidden.
# The default value is: NO.

HIDE_SCOPE_NAMES       = NO

# If the HIDE_COMPOUND_REFERENCE tag is set to NO (default) then doxygen will
# append additional text to a page's title, such as Class Reference. If set to
# YES the compound reference will be hidden.
# The default value is: NO.

HIDE_COMPOUND_REFERENCE= NO

# If the SHOW_INCLUDE_FILES tag is set to YES then doxygen will put a list of
# the files that are included by a file in the documentation of that file.
# The default value is: YES.

SHOW_INCLUDE_FILES     = YES

# If the SHOW_GROUPED_MEMB_INC tag is set to YES then Doxygen will add for each
# grouped member an include statement to the documentation, telling the reader
# which file to include in order to use the member.
# The default value is: NO.

SHOW_GROUPED_MEMB_INC  = NO

# If the FORCE_LOCAL_INCLUDES tag is set to YES then doxygen will list include
# files with double quotes in the documentation rather than with sharp brackets.
# The default value is: NO.

FORCE_LOCAL_INCLUDES   = NO

# If the INLINE_INFO tag is set to YES then a tag [inline] is inserted in the
# documentation for inline members.
# The default value is: YES.

INLINE_INFO            = YES

# If the SORT_MEMBER_DOCS tag is set to YES then doxygen will sort the
# (detailed) documentation of file and class members alphabetically by member
# name. If set to NO, the members will appear in declaration order.
# The default value is: YES.

SORT_MEMBER_DOCS       = YES

# If the SORT_BRIEF_DOCS tag is set to YES then doxygen will sort the brief
# descriptions of file, namespace and class members alphabetically by member
# name. If set to NO, the members will appear in declaration order. Note that
# this will also influence the order of the classes in the class list.
# The default value is: NO.

SORT_BRIEF_DOCS        = NO

# If the SORT_MEMBERS_CTORS_1ST tag is set to YES then doxygen will sort the
# (brief and detailed) documentation of class members so that constructors and
# destructors are listed first. If set to NO the constructors will appear in the
# respective orders defined by SORT_BRIEF_DOCS and SORT_MEMBER_DOCS.
# Note: If SORT_BRIEF_DOCS is set to NO this option is ignored for sorting brief
# member documentation.
# Note: If SORT_MEMBER_DOCS is set to NO this option is ignored for sorting
# detailed member documentation.
# The default value is: NO.

SORT_MEMBERS_CTORS_1ST = NO

# If the SORT_GROUP_NAMES tag is set to YES then doxygen will sort the hierarchy
# of group names into alphabetical order. If set to NO the group names will
# appear in their defined order.
# The default value is: NO.

SORT_GROUP_NAMES       = NO

# If the SORT_BY_SCOPE_NAME tag is set to YES, the class list will be sorted by
# fully-qualified names, including namespaces. If set to NO, the class list will
# be sorted only by class name, not including the namespace part.
# Note: This option is not very useful if HIDE_SCOPE_NAMES is set to YES.
# Note: This option applies only to the class list, not to the alphabetical
# list.
# The default value is: NO.

SORT_BY_SCOPE_NAME     = NO

# If the STRICT_PROTO_MATCHING option is enabled and doxygen fails to do proper
# type resolution of all parameters of a function it will reject a match between
# the prototype and the implementation of a member function even if there is
# only one candidate or it is obvious which candidate to choose by doing a
# simple string match. By disabling STRICT_PROTO_MATCHING doxygen will still
# accept a match between prototype and implementation in such cases.
# The default value is: NO.

STRICT_PROTO_MATCHING  = NO

# The GENERATE_TODOLIST tag can be used to enable (YES) or disable (NO) the todo
# list. This list is created by putting \todo commands in the documentation.
# The default value is: YES.

GENERATE_TODOLIST      = YES

# The GENERATE_TESTLIST tag can be used to enable (YES) or disable (NO) the test
# list. This list is created by putting \test commands in the documentation.
# The default value is: YES.

GENERATE_TESTLIST      = YES

# The GENERATE_BUGLIST tag can be used to enable (YES) or disable (NO) the bug
# list. This list is created by putting \bug commands in the documentation.
# The default value is: YES.

GENERATE_BUGLIST       = YES

# The GENERATE_DEPRECATEDLIST tag can be used to enable (YES) or disable (NO)
# the deprecated list. This list is created by putting \deprecated commands in
# the documentation.
# The default value is: YES.

GENERATE_DEPRECATEDLIST= YES

# The ENABLED_SECTIONS tag can be used to enable conditional documentation
# sections, marked by \if <section_label> ... \endif and \cond <section_label>
# ... \endcond blocks.

ENABLED_SECTIONS       =

# The MAX_INITIALIZER_LINES tag determines the maximum number of lines that the
# initial value of a variable or macro / define can have for it to appear in the
# documentation. If the initializer consists of more lines than specified here
# it will be hidden. Use a value of 0 to hide initializers completely. The
# appearance of the value of individual variables and macros / defines can be
# controlled using \showinitializer or \hideinitializer command in the
# documentation regardless of this setting.
# Minimum value: 0, maximum value: 10000, default value: 30.

MAX_INITIALIZER_LINES  = 30

# Set the SHOW_USED_FILES tag to NO to disable the list of files generated at
# the bottom of the documentation of classes and structs. If set to YES, the
# list will mention the files that were used to generate the documentation.
# The default value is: YES.

SHOW_USED_FILES        = YES

# Set the SHOW_FILES tag to NO to disable the generation of the Files page. This
# will remove the Files entry from the Quick Index and from the Folder Tree View
# (if specified).
# The default value is: YES.

SHOW_FILES             = YES

# Set the SHOW_NAMESPACES tag to NO to disable the generation of the Namespaces
# page. This will remove the Namespaces entry from the Quick Index and from the
# Folder Tree View (if specified).
# The default value is: YES.

SHOW_NAMESPACES        = YES

# The FILE_VERSION_FILTER tag can be used to specify a program or script that
# doxygen should invoke to get the current version for each file (typically from
# the version control system). Doxygen will invoke the program by executing (via
# popen()) the command command input-file, where command is the value of the
# FILE_VERSION_FILTER tag, and input-file is the name of an input file provided
# by doxygen. Whatever the program writes to standard output is used as the file
# version. For an example see the documentation.

FILE_VERSION_FILTER    =

# The LAYOUT_FILE tag can be used to specify a layout file which will be parsed
# by doxygen. The layout file controls the global structure of the generated
# output files in an output format independent way. To create the layout file
# that represents doxygen's defaults, run doxygen with the -l option. You can
# optionally specify a file name after the option, if omitted DoxygenLayout.xml
# will be used as the name of the layout file.
#
# Note that if you run doxygen from a directory containing a file called
# DoxygenLayout.xml, doxygen will parse it automatically even if the LAYOUT_FILE
# tag is left empty.

LAYOUT_FILE            =

# The CITE_BIB_FILES tag can be used to specify one or more bib files containing
# the reference definitions. This must be a list of .bib files. The .bib
# extension is automatically appended if omitted. This requires the bibtex tool
# to be installed. See also http://en.wikipedia.org/wiki/BibTeX for more info.
# For LaTeX the style of the bibliography can be controlled using
# LATEX_BIB_STYLE. To use this feature you need bibtex and perl available in the
# search path. See also \cite for info how to create references.

CITE_BIB_FILES         =

#---------------------------------------------------------------------------
# Configuration options related to warning and progress messages
#---------------------------------------------------------------------------

# The QUIET tag can be used to turn on/off the messages that are generated to
# standard output by doxygen. If QUIET is set to YES this implies that the
# messages are off.
# The default value is: NO.

QUIET                  = NO

# The WARNINGS tag can be used to turn on/off the warning messages that are
# generated to standard error (stderr) by doxygen. If WARNINGS is set to YES
# this implies that the warnings are on.
#
# Tip: Turn warnings on while writing the documentation.
# The default value is: YES.

WARNINGS               = YES

# If the WARN_IF_UNDOCUMENTED tag is set to YES then doxygen will generate
# warnings for undocumented members. If EXTRACT_ALL is set to YES then this flag
# will automatically be disabled.
# The default value is: YES.

WARN_IF_UNDOCUMENTED   = YES

# If the WARN_IF_DOC_ERROR tag is set to YES, doxygen will generate warnings for
# potential errors in the documentation, such as not documenting some parameters
# in a documented function, or documenting parameters that don't exist or using
# markup commands wrongly.
# The default value is: YES.

WARN_IF_DOC_ERROR      = YES

# This WARN_NO_PARAMDOC option can be enabled to get warnings for functions that
# are documented, but have no documentation for their parameters or return
# value. If set to NO, doxygen will only warn about wrong or incomplete
# parameter documentation, but not about the absence of documentation.
# The default value is: NO.

WARN_NO_PARAMDOC       = NO

# If the WARN_AS_ERROR tag is set to YES then doxygen will immediately stop when
# a warning is encountered.
# The default value is: NO.

WARN_AS_ERROR          = NO

# The WARN_FORMAT tag determines the format of the warning messages that doxygen
# can produce. The string should contain the $file, $line, and $text tags, which
# will be replaced by the file and line number from which the warning originated
# and the warning text. Optionally the format may contain $version, which will
# be replaced by the version of the file (if it could be obtained via
# FILE_VERSION_FILTER)
# The default value is: $file:$line: $text.

WARN_FORMAT            = "$file:$line: $text"

# The WARN_LOGFILE tag can be used to specify a file to which warning and error
# messages should be written. If left blank the output is written to standard
# error (stderr).

WARN_LOGFILE           =

#---------------------------------------------------------------------------
# Configuration options related to the input files
#---------------------------------------------------------------------------

# The INPUT tag is used to specify the files and/or directories that contain
# documented source files. You may enter file names like myfile.cpp or
# directories like /usr/src/myproject. Separate the files or directories with
# spaces. See also FILE_PATTERNS and EXTENSION_MAPPING
# Note: If this tag is empty the current directory is searched.

INPUT                  = prom/include promhttp/include

# This tag can be used to specify the character encoding of the source files
# that doxygen parses. Internally doxygen uses the UTF-8 encoding. Doxygen uses
# libiconv (or the iconv built into libc) for the transcoding. See the libiconv
# documentation (see: http://www.gnu.org/software/libiconv) for the list of
# possible encodings.
# The default value is: UTF-8.

INPUT_ENCODING         = UTF-8

# If the value of the INPUT tag contains directories, you can use the
# FILE_PATTERNS tag to specify one or more wildcard patterns (like *.cpp and
# *.h) to filter out the source-files in the directories.
#
# Note that for custom extensions or not directly supported extensions you also
# need to set EXTENSION_MAPPING for the extension otherwise the files are not
# read by doxygen.
#
# If left blank the following patterns are tested:*.c, *.cc, *.cxx, *.cpp,
# *.c++, *.java, *.ii, *.ixx, *.ipp, *.i++, *.inl, *.idl, *.ddl, *.odl, *.h,
# *.hh, *.hxx, *.hpp, *.h++, *.cs, *.d, *.php, *.php4, *.php5, *.phtml, *.inc,
# *.m, *.markdown, *.md, *.mm, *.dox, *.py, *.pyw, *.f90, *.f95, *.f03, *.f08,
# *.f, *.for, *.tcl, *.vhd, *.vhdl, *.ucf and *.qsf.

FILE_PATTERNS          = *.c \
                         *.cc \
                         *.cxx \
                         *.cpp \
                         *.c++ \
                         *.java \
                         *.ii \
                         *.ixx \
                         *.ipp \
                         *.i++ \
                         *.inl \
                         *.idl \
                         *.ddl \
                         *.odl \
                         *.h \
                         *.hh \
                         *.hxx \
                         *.hpp \
                         *.h++ \
                         *.cs \
                         *.d \
                         *.php \
                         *.php4 \
                         *.php5 \
                         *.phtml \
                         *.inc \
                         *.m \
                         *.markdown \
                         *.md \
                         *.mm \
                         *.dox \
                         *.py \
                         *.pyw \
                         *.f90 \
                         *.f95 \
                         *.f03 \
                         *.f08 \
                         *.f \
                         *.for \
                         *.tcl \
                         *.vhd \
                         *.vhdl \
                         *.ucf \
                         *.qsf

# The RECURSIVE tag can be used to specify whether or not subdirectories should
# be searched for input files as well.
# The default value is: NO.

RECURSIVE              = NO

# The EXCLUDE tag can be used to specify files and/or directories that should be
# excluded from the INPUT source files. This way you can easily exclude a
# subdirectory from a directory tree whose root is specified with the INPUT tag.
#
# Note that relative paths are relative to the directory from which doxygen is
# run.

EXCLUDE                =

# The EXCLUDE_SYMLINKS tag can be used to select whether or not files or
# directories that are symbolic links (a Unix file system feature) are excluded
# from the input.
# The default value is: NO.

EXCLUDE_SYMLINKS       = NO

# If the value of the INPUT tag contains directories, you can use the
# EXCLUDE_PATTERNS tag to specify one or more wildcard patterns to exclude
# certain files from those directories.
#
# Note that the wildcards are matched against the file with absolute path, so to
# exclude all test directories for example use the pattern */test/*

EXCLUDE_PATTERNS       =

# The EXCLUDE_SYMBOLS tag can be used to specify one or more symbol names
# (namespaces, classes, functions, etc.) that should be excluded from the
# output. The symbol name can be a fully qualified name, a word, or if the
# wildcard * is used, a substring. Examples: ANamespace, AClass,
# AClass::ANamespace, ANamespace::*Test
#
# Note that the wildcards are matched against the file with absolute path, so to
# exclude all test directories use the pattern */test/*

EXCLUDE_SYMBOLS        =

# The EXAMPLE_PATH tag can be used to specify one or more files or directories
# that contain example code fragments that are included (see the \include
# command).

EXAMPLE_PATH           =

# If the value of the EXAMPLE_PATH tag contains directories, you can use the
# EXAMPLE_PATTERNS tag to specify one or more wildcard pattern (like *.cpp and
# *.h) to filter out the source-files in the directories. If left blank all
# files are included.

EXAMPLE_PATTERNS       = *

# If the EXAMPLE_RECURSIVE tag is set to YES then subdirectories will be
# searched for input files to be used with the \include or \dontinclude commands
# irrespective of the value of the RECURSIVE tag.
# The default value is: NO.

EXAMPLE_RECURSIVE      = NO

# The IMAGE_PATH tag can be used to specify one or more files or directories
# that contain images that are to be included in the documentation (see the
# \image command).

IMAGE_PATH             =

# The INPUT_FILTER tag can be used to specify a program that doxygen should
# invoke to filter for each input file. Doxygen will invoke the filter program
# by executing (via popen()) the command:
#
# <filter> <input-file>
#
# where <filter> is the value of the INPUT_FILTER tag, and <input-file> is the
# name of an input file. Doxygen will then use the output that the filter
# program writes to standard output. If FILTER_PATTERNS is specified, this tag
# will be ignored.
#
# Note that the filter must not add or remove lines; it is applied before the
# code is scanned, but not when the output code is generated. If lines are added
# or removed, the anchors will not be placed correctly.
#
# Note that for custom extensions or not directly supported extensions you also
# need to set EXTENSION_MAPPING for the extension otherwise the files are not
# properly processed by doxygen.

INPUT_FILTER           =

# The FILTER_PATTERNS tag can be used to specify filters on a per file pattern
# basis. Doxygen will compare the file name with each pattern and apply the
# filter if there is a match. The filters are a list of the form: pattern=filter
# (like *.cpp=my_cpp_filter). See INPUT_FILTER for further information on how
# filters are used. If the FILTER_PATTERNS tag is empty or if none of the
# patterns match the file name, INPUT_FILTER is applied.
#
# Note that for custom extensions or not directly supported extensions you also
# need to set EXTENSION_MAPPING for the extension otherwise the files are not
# properly processed by doxygen.

FILTER_PATTERNS        =

# If the FILTER_SOURCE_FILES tag is set to YES, the input filter (if set using
# INPUT_FILTER) will also be used to filter the input files that are used for
# producing the source files to browse (i.e. when SOURCE_BROWSER is set to YES).
# The default value is: NO.

FILTER_SOURCE_FILES    = NO

# The FILTER_SOURCE_PATTERNS tag can be used to specify source filters per file
# pattern. A pattern will override the setting for FILTER_PATTERN (if any) and
# it is also possible to disable source filtering for a specific pattern using
# *.ext= (so without naming a filter).
# This tag requires that the tag FILTER_SOURCE_FILES is set to YES.

FILTER_SOURCE_PATTERNS =

# If the USE_MDFILE_AS_MAINPAGE tag refers to the name of a markdown file that
# is part of the input, its contents will be placed on the main page
# (index.html). This can be useful if you have a project on for instance GitHub
# and want to reuse the introduction page also for the doxygen output.

USE_MDFILE_AS_MAINPAGE =

#---------------------------------------------------------------------------
# Configuration options related to source browsing
#---------------------------------------------------------------------------

# If the SOURCE_BROWSER tag is set to YES then a list of source files will be
# generated. Documented entities will be cross-referenced with these sources.
#
# Note: To get rid of all source code in the generated output, make sure that
# also VERBATIM_HEADERS is set to NO.
# The default value is: NO.

SOURCE_BROWSER         = NO

# Setting the INLINE_SOURCES tag to YES will include the body of functions,
# classes and enums directly into the documentation.
# The default value is: NO.

INLINE_SOURCES         = NO

# Setting the STRIP_CODE_COMMENTS tag to YES will instruct doxygen to hide any
# special comment blocks from generated source code fragments. Normal C, C++ and
# Fortran comments will always remain visible.
# The default value is: YES.

STRIP_CODE_COMMENTS    = YES

# If the REFERENCED_BY_RELATION tag is set to YES then for each documented
# function all documented functions referencing it will be listed.
# The default value is: NO.

REFERENCED_BY_RELATION = NO

# If the REFERENCES_RELATION tag is set to YES then for each documented function
# all documented entities called/used by that function will be listed.
# The default value is: NO.

REFERENCES_RELATION    = NO

# If the REFERENCES_LINK_SOURCE tag is set to YES and SOURCE_BROWSER tag is set
# to YES then the hyperlinks from functions in REFERENCES_RELATION and
# REFERENCED_BY_RELATION lists will link to the source code. Otherwise they will
# link to the documentation.
# The default value is: YES.

REFERENCES_LINK_SOURCE = YES

# If SOURCE_TOOLTIPS is enabled (the default) then hovering a hyperlink in the
# source code will show a tooltip with additional information such as prototype,
# brief description and links to the definition and documentation. Since this
# will make the HTML file larger and loading of large files a bit slower, you
# can opt to disable this feature.
# The default value is: YES.
# This tag requires that the tag SOURCE_BROWSER is set to YES.

SOURCE_TOOLTIPS        = YES

# If the USE_HTAGS tag is set to YES then the references to source code will
# point to the HTML generated by the htags(1) tool instead of doxygen built-in
# source browser. The htags tool is part of GNU's global source tagging system
# (see http://www.gnu.org/software/global/global.html). You will need version
# 4.8.6 or higher.
#
# To use it do the following:
# - Install the latest version of global
# - Enable SOURCE_BROWSER and USE_HTAGS in the config file
# - Make sure the INPUT points to the root of the source tree
# - Run doxygen as normal
#
# Doxygen will invoke htags (and that will in turn invoke gtags), so these
# tools must be available from the command line (i.e. in the search path).
#
# The result: instead of the source browser generated by doxygen, the links to
# source code will now point to the output of htags.
# The default value is: NO.
# This tag requires that the tag SOURCE_BROWSER is set to YES.

USE_HTAGS              = NO

# If the VERBATIM_HEADERS tag is set the YES then doxygen will generate a
# verbatim copy of the header file for each class for which an include is
# specified. Set to NO to disable this.
# See also: Section \class.
# The default value is: YES.

VERBATIM_HEADERS       = YES

# If the CLANG_ASSISTED_PARSING tag is set to YES then doxygen will use the
# clang parser (see: http://clang.llvm.org/) for more accurate parsing at the
# cost of reduced performance. This can be particularly helpful with template
# rich C++ code for which doxygen's built-in parser lacks the necessary type
# information.
# Note: The availability of this option depends on whether or not doxygen was
# generated with the -Duse-libclang=ON option for CMake.
# The default value is: NO.

CLANG_ASSISTED_PARSING = NO

# If clang assisted parsing is enabled you can provide the compiler with command
# line options that you would normally use when invoking the compiler. Note that
# the include paths will already be set by doxygen for the files and directories
# specified with INPUT and INCLUDE_PATH.
# This tag requires that the tag CLANG_ASSISTED_PARSING is set to YES.

CLANG_OPTIONS          =

#---------------------------------------------------------------------------
# Configuration options related to the alphabetical class index
#---------------------------------------------------------------------------

# If the ALPHABETICAL_INDEX tag is set to YES, an alphabetical index of all
# compounds will be generated. Enable this if the project contains a lot of
# classes, structs, unions or interfaces.
# The default value is: YES.

ALPHABETICAL_INDEX     = YES

# The COLS_IN_ALPHA_INDEX tag can be used to specify the number of columns in
# which the alphabetical index list will be split.
# Minimum value: 1, maximum value: 20, default value: 5.
# This tag requires that the tag ALPHABETICAL_INDEX is set to YES.

COLS_IN_ALPHA_INDEX    = 5

# In case all classes in a project start with a common prefix, all classes will
# be put under the same header in the alphabetical index. The IGNORE_PREFIX tag
# can be used to specify a prefix (or a list of prefixes) that should be ignored
# while generating the index headers.
# This tag requires that the tag ALPHABETICAL_INDEX is set to YES.

IGNORE_PREFIX          =

#---------------------------------------------------------------------------
# Configuration options related to the HTML output
#---------------------------------------------------------------------------

# If the GENERATE_HTML tag is set to YES, doxygen will generate HTML output
# The default value is: YES.

GENERATE_HTML          = YES

# The HTML_OUTPUT tag is used to specify where the HTML docs will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it.
# The default directory is: html.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_OUTPUT            = html

# The HTML_FILE_EXTENSION tag can be used to specify the file extension for each
# generated HTML page (for example: .htm, .php, .asp).
# The default value is: .html.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_FILE_EXTENSION    = .html

# The HTML_HEADER tag can be used to specify a user-defined HTML header file for
# each generated HTML page. If the tag is left blank doxygen will generate a
# standard header.
#
# To get valid HTML the header file that includes any scripts and style sheets
# that doxygen needs, which is dependent on the configuration options used (e.g.
# the setting GENERATE_TREEVIEW). It is highly recommended to start with a
# default header using
# doxygen -w html new_header.html new_footer.html new_stylesheet.css
# YourConfigFile
# and then modify the file new_header.html. See also section "Doxygen usage"
# for information on how to generate the default header that doxygen normally
# uses.
# Note: The header is subject to change so you typically have to regenerate the
# default header when upgrading to a newer version of doxygen. For a description
# of the possible markers and block names see the documentation.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_HEADER            =

# The HTML_FOOTER tag can be used to specify a user-defined HTML footer for each
# generated HTML page. If the tag is left blank doxygen will generate a standard
# footer. See HTML_HEADER for more information on how to generate a default
# footer and what special commands can be used inside the footer. See also
# section "Doxygen usage" for information on how to generate the default footer
# that doxygen normally uses.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_FOOTER            =

# The HTML_STYLESHEET tag can be used to specify a user-defined cascading style
# sheet that is used by each HTML page. It can be used to fine-tune the look of
# the HTML output. If left blank doxygen will generate a default style sheet.
# See also section "Doxygen usage" for information on how to generate the style
# sheet that doxygen normally uses.
# Note: It is recommended to use HTML_EXTRA_STYLESHEET instead of this tag, as
# it is more robust and this tag (HTML_STYLESHEET) will in the future become
# obsolete.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_STYLESHEET        =

# The HTML_EXTRA_STYLESHEET tag can be used to specify additional user-defined
# cascading style sheets that are included after the standard style sheets
# created by doxygen. Using this option one can overrule certain style aspects.
# This is preferred over using HTML_STYLESHEET since it does not replace the
# standard style sheet and is therefore more robust against future updates.
# Doxygen will copy the style sheet files to the output directory.
# Note: The order of the extra style sheet files is of importance (e.g. the last
# style sheet in the list overrules the setting of the previous ones in the
# list). For an example see the documentation.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_EXTRA_STYLESHEET  =

# The HTML_EXTRA_FILES tag can be used to specify one or more extra images or
# other source files which should be copied to the HTML output directory. Note
# that these files will be copied to the base HTML output directory. Use the
# $relpath^ marker in the HTML_HEADER and/or HTML_FOOTER files to load these
# files. In the HTML_STYLESHEET file, use the file name only. Also note that the
# files will be copied as-is; there are no commands or markers available.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_EXTRA_FILES       =

# The HTML_COLORSTYLE_HUE tag controls the color of the HTML output. Doxygen
# will adjust the colors in the style sheet and background images according to
# this color. Hue is specified as an angle on a colorwheel, see
# http://en.wikipedia.org/wiki/Hue for more information. For instance the value
# 0 represents red, 60 is yellow, 120 is green, 180 is cyan, 240 is blue, 300
# purple, and 360 is red again.
# Minimum value: 0, maximum value: 359, default value: 220.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_COLORSTYLE_HUE    = 220

# The HTML_COLORSTYLE_SAT tag controls the purity (or saturation) of the colors
# in the HTML output. For a value of 0 the output will use grayscales only. A
# value of 255 will produce the most vivid colors.
# Minimum value: 0, maximum value: 255, default value: 100.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_COLORSTYLE_SAT    = 100

# The HTML_COLORSTYLE_GAMMA tag controls the gamma correction applied to the
# luminance component of the colors in the HTML output. Values below 100
# gradually make the output lighter, whereas values above 100 make the output
# darker. The value divided by 100 is the actual gamma applied, so 80 represents
# a gamma of 0.8, The value 220 represents a gamma of 2.2, and 100 does not
# change the gamma.
# Minimum value: 40, maximum value: 240, default value: 80.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_COLORSTYLE_GAMMA  = 80

# If the HTML_TIMESTAMP tag is set to YES then the footer of each generated HTML
# page will contain the date and time when the page was generated. Setting this
# to YES can help to show when doxygen was last run and thus if the
# documentation is up to date.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_TIMESTAMP         = NO

# If the HTML_DYNAMIC_SECTIONS tag is set to YES then the generated HTML
# documentation will contain sections that can be hidden and shown after the
# page has loaded.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_DYNAMIC_SECTIONS  = NO

# With HTML_INDEX_NUM_ENTRIES one can control the preferred number of entries
# shown in the various tree structured indices initially; the user can expand
# and collapse entries dynamically later on. Doxygen will expand the tree to
# such a level that at most the specified number of entries are visible (unless
# a fully collapsed tree already exceeds this amount). So setting the number of
# entries 1 will produce a full collapsed tree by default. 0 is a special value
# representing an infinite number of entries and will result in a full expanded
# tree by default.
# Minimum value: 0, maximum value: 9999, default value: 100.
# This tag requires that the tag GENERATE_HTML is set to YES.

HTML_INDEX_NUM_ENTRIES = 100

# If the GENERATE_DOCSET tag is set to YES, additional index files will be
# generated that can be used as input for Apple's Xcode 3 integrated development
# environment (see: http://developer.apple.com/tools/xcode/), introduced with
# OSX 10.5 (Leopard). To create a documentation set, doxygen will generate a
# Makefile in the HTML output directory. Running make will produce the docset in
# that directory and running make install will install the docset in
# ~/Library/Developer/Shared/Documentation/DocSets so that Xcode will find it at
# startup. See http://developer.apple.com/tools/creatingdocsetswithdoxygen.html
# for more information.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_DOCSET        = NO

# This tag determines the name of the docset feed. A documentation feed provides
# an umbrella under which multiple documentation sets from a single provider
# (such as a company or product suite) can be grouped.
# The default value is: Doxygen generated docs.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_FEEDNAME        = "Doxygen generated docs"

# This tag specifies a string that should uniquely identify the documentation
# set bundle. This should be a reverse domain-name style string, e.g.
# com.mycompany.MyDocSet. Doxygen will append .docset to the name.
# The default value is: org.doxygen.Project.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_BUNDLE_ID       = org.doxygen.Project

# The DOCSET_PUBLISHER_ID tag specifies a string that should uniquely identify
# the documentation publisher. This should be a reverse domain-name style
# string, e.g. com.mycompany.MyDocSet.documentation.
# The default value is: org.doxygen.Publisher.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_PUBLISHER_ID    = org.doxygen.Publisher

# The DOCSET_PUBLISHER_NAME tag identifies the documentation publisher.
# The default value is: Publisher.
# This tag requires that the tag GENERATE_DOCSET is set to YES.

DOCSET_PUBLISHER_NAME  = Publisher

# If the GENERATE_HTMLHELP tag is set to YES then doxygen generates three
# additional HTML index files: index.hhp, index.hhc, and index.hhk. The
# index.hhp is a project file that can be read by Microsoft's HTML Help Workshop
# (see: http://www.microsoft.com/en-us/download/details.aspx?id=21138) on
# Windows.
#
# The HTML Help Workshop contains a compiler that can convert all HTML output
# generated by doxygen into a single compiled HTML file (.chm). Compiled HTML
# files are now used as the Windows 98 help format, and will replace the old
# Windows help format (.hlp) on all Windows platforms in the future. Compressed
# HTML files also contain an index, a table of contents, and you can search for
# words in the documentation. The HTML workshop also contains a viewer for
# compressed HTML files.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_HTMLHELP      = NO

# The CHM_FILE tag can be used to specify the file name of the resulting .chm
# file. You can add a path in front of the file if the result should not be
# written to the html output directory.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

CHM_FILE               =

# The HHC_LOCATION tag can be used to specify the location (absolute path
# including file name) of the HTML help compiler (hhc.exe). If non-empty,
# doxygen will try to run the HTML help compiler on the generated index.hhp.
# The file has to be specified with full path.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

HHC_LOCATION           =

# The GENERATE_CHI flag controls if a separate .chi index file is generated
# (YES) or that it should be included in the master .chm file (NO).
# The default value is: NO.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

GENERATE_CHI           = NO

# The CHM_INDEX_ENCODING is used to encode HtmlHelp index (hhk), content (hhc)
# and project file content.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

CHM_INDEX_ENCODING     =

# The BINARY_TOC flag controls whether a binary table of contents is generated
# (YES) or a normal table of contents (NO) in the .chm file. Furthermore it
# enables the Previous and Next buttons.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

BINARY_TOC             = NO

# The TOC_EXPAND flag can be set to YES to add extra items for group members to
# the table of contents of the HTML help documentation and to the tree view.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTMLHELP is set to YES.

TOC_EXPAND             = NO

# If the GENERATE_QHP tag is set to YES and both QHP_NAMESPACE and
# QHP_VIRTUAL_FOLDER are set, an additional index file will be generated that
# can be used as input for Qt's qhelpgenerator to generate a Qt Compressed Help
# (.qch) of the generated HTML documentation.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_QHP           = NO

# If the QHG_LOCATION tag is specified, the QCH_FILE tag can be used to specify
# the file name of the resulting .qch file. The path specified is relative to
# the HTML output folder.
# This tag requires that the tag GENERATE_QHP is set to YES.

QCH_FILE               =

# The QHP_NAMESPACE tag specifies the namespace to use when generating Qt Help
# Project output. For more information please see Qt Help Project / Namespace
# (see: http://qt-project.org/doc/qt-4.8/qthelpproject.html#namespace).
# The default value is: org.doxygen.Project.
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_NAMESPACE          = org.doxygen.Project

# The QHP_VIRTUAL_FOLDER tag specifies the namespace to use when generating Qt
# Help Project output. For more information please see Qt Help Project / Virtual
# Folders (see: http://qt-project.org/doc/qt-4.8/qthelpproject.html#virtual-
# folders).
# The default value is: doc.
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_VIRTUAL_FOLDER     = doc

# If the QHP_CUST_FILTER_NAME tag is set, it specifies the name of a custom
# filter to add. For more information please see Qt Help Project / Custom
# Filters (see: http://qt-project.org/doc/qt-4.8/qthelpproject.html#custom-
# filters).
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_CUST_FILTER_NAME   =

# The QHP_CUST_FILTER_ATTRS tag specifies the list of the attributes of the
# custom filter to add. For more information please see Qt Help Project / Custom
# Filters (see: http://qt-project.org/doc/qt-4.8/qthelpproject.html#custom-
# filters).
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_CUST_FILTER_ATTRS  =

# The QHP_SECT_FILTER_ATTRS tag specifies the list of the attributes this
# project's filter section matches. Qt Help Project / Filter Attributes (see:
# http://qt-project.org/doc/qt-4.8/qthelpproject.html#filter-attributes).
# This tag requires that the tag GENERATE_QHP is set to YES.

QHP_SECT_FILTER_ATTRS  =

# The QHG_LOCATION tag can be used to specify the location of Qt's
# qhelpgenerator. If non-empty doxygen will try to run qhelpgenerator on the
# generated .qhp file.
# This tag requires that the tag GENERATE_QHP is set to YES.

QHG_LOCATION           =

# If the GENERATE_ECLIPSEHELP tag is set to YES, additional index files will be
# generated, together with the HTML files, they form an Eclipse help plugin. To
# install this plugin and make it available under the help contents menu in
# Eclipse, the contents of the directory containing the HTML and XML files needs
# to be copied into the plugins directory of eclipse. The name of the directory
# within the plugins directory should be the same as the ECLIPSE_DOC_ID value.
# After copying Eclipse needs to be restarted before the help appears.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_ECLIPSEHELP   = NO

# A unique identifier for the Eclipse help plugin. When installing the plugin
# the directory name containing the HTML and XML files should also have this
# name. Each documentation set should have its own identifier.
# The default value is: org.doxygen.Project.
# This tag requires that the tag GENERATE_ECLIPSEHELP is set to YES.

ECLIPSE_DOC_ID         = org.doxygen.Project

# If you want full control over the layout of the generated HTML pages it might
# be necessary to disable the index and replace it with your own. The
# DISABLE_INDEX tag can be used to turn on/off the condensed index (tabs) at top
# of each HTML page. A value of NO enables the index and the value YES disables
# it. Since the tabs in the index contain the same information as the navigation
# tree, you can set this option to YES if you also set GENERATE_TREEVIEW to YES.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

DISABLE_INDEX          = NO

# The GENERATE_TREEVIEW tag is used to specify whether a tree-like index
# structure should be generated to display hierarchical information. If the tag
# value is set to YES, a side panel will be generated containing a tree-like
# index structure (just like the one that is generated for HTML Help). For this
# to work a browser that supports JavaScript, DHTML, CSS and frames is required
# (i.e. any modern browser). Windows users are probably better off using the
# HTML help feature. Via custom style sheets (see HTML_EXTRA_STYLESHEET) one can
# further fine-tune the look of the index. As an example, the default style
# sheet generated by doxygen has an example that shows how to put an image at
# the root of the tree instead of the PROJECT_NAME. Since the tree basically has
# the same information as the tab index, you could consider setting
# DISABLE_INDEX to YES when enabling this option.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

GENERATE_TREEVIEW      = NO

# The ENUM_VALUES_PER_LINE tag can be used to set the number of enum values that
# doxygen will group on one line in the generated HTML documentation.
#
# Note that a value of 0 will completely suppress the enum values from appearing
# in the overview section.
# Minimum value: 0, maximum value: 20, default value: 4.
# This tag requires that the tag GENERATE_HTML is set to YES.

ENUM_VALUES_PER_LINE   = 4

# If the treeview is enabled (see GENERATE_TREEVIEW) then this tag can be used
# to set the initial width (in pixels) of the frame in which the tree is shown.
# Minimum value: 0, maximum value: 1500, default value: 250.
# This tag requires that the tag GENERATE_HTML is set to YES.

TREEVIEW_WIDTH         = 250

# If the EXT_LINKS_IN_WINDOW option is set to YES, doxygen will open links to
# external symbols imported via tag files in a separate window.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

EXT_LINKS_IN_WINDOW    = NO

# Use this tag to change the font size of LaTeX formulas included as images in
# the HTML documentation. When you change the font size after a successful
# doxygen run you need to manually remove any form_*.png images from the HTML
# output directory to force them to be regenerated.
# Minimum value: 8, maximum value: 50, default value: 10.
# This tag requires that the tag GENERATE_HTML is set to YES.

FORMULA_FONTSIZE       = 10

# Use the FORMULA_TRANPARENT tag to determine whether or not the images
# generated for formulas are transparent PNGs. Transparent PNGs are not
# supported properly for IE 6.0, but are supported on all modern browsers.
#
# Note that when changing this option you need to delete any form_*.png files in
# the HTML output directory before the changes have effect.
# The default value is: YES.
# This tag requires that the tag GENERATE_HTML is set to YES.

FORMULA_TRANSPARENT    = YES

# Enable the USE_MATHJAX option to render LaTeX formulas using MathJax (see
# http://www.mathjax.org) which uses client side Javascript for the rendering
# instead of using pre-rendered bitmaps. Use this if you do not have LaTeX
# installed or if you want to formulas look prettier in the HTML output. When
# enabled you may also need to install MathJax separately and configure the path
# to it using the MATHJAX_RELPATH option.
# The default value is: NO.
# This tag requires that the tag GENERATE_HTML is set to YES.

USE_MATHJAX            = NO

# When MathJax is enabled you can set the default output format to be used for
# the MathJax output. See the MathJax site (see:
# http://docs.mathjax.org/en/latest/output.html) for more details.
# Possible values are: HTML-CSS (which is slower, but has the best
# compatibility), NativeMML (i.e. MathML) and SVG.
# The default value is: HTML-CSS.
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_FORMAT         = HTML-CSS

# When MathJax is enabled you need to specify the location relative to the HTML
# output directory using the MATHJAX_RELPATH option. The destination directory
# should contain the MathJax.js script. For instance, if the mathjax directory
# is located at the same level as the HTML output directory, then
# MATHJAX_RELPATH should be ../mathjax. The default value points to the MathJax
# Content Delivery Network so you can quickly see the result without installing
# MathJax. However, it is strongly recommended to install a local copy of
# MathJax from http://www.mathjax.org before deployment.
# The default value is: http://cdn.mathjax.org/mathjax/latest.
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_RELPATH        = http://cdn.mathjax.org/mathjax/latest

# The MATHJAX_EXTENSIONS tag can be used to specify one or more MathJax
# extension names that should be enabled during MathJax rendering. For example
# MATHJAX_EXTENSIONS = TeX/AMSmath TeX/AMSsymbols
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_EXTENSIONS     =

# The MATHJAX_CODEFILE tag can be used to specify a file with javascript pieces
# of code that will be used on startup of the MathJax code. See the MathJax site
# (see: http://docs.mathjax.org/en/latest/output.html) for more details. For an
# example see the documentation.
# This tag requires that the tag USE_MATHJAX is set to YES.

MATHJAX_CODEFILE       =

# When the SEARCHENGINE tag is enabled doxygen will generate a search box for
# the HTML output. The underlying search engine uses javascript and DHTML and
# should work on any modern browser. Note that when using HTML help
# (GENERATE_HTMLHELP), Qt help (GENERATE_QHP), or docsets (GENERATE_DOCSET)
# there is already a search function so this one should typically be disabled.
# For large projects the javascript based search engine can be slow, then
# enabling SERVER_BASED_SEARCH may provide a better solution. It is possible to
# search using the keyboard; to jump to the search box use <access key> + S
# (what the <access key> is depends on the OS and browser, but it is typically
# <CTRL>, <ALT>/<option>, or both). Inside the search box use the <cursor down
# key> to jump into the search results window, the results can be navigated
# using the <cursor keys>. Press <Enter> to select an item or <escape> to cancel
# the search. The filter options can be selected when the cursor is inside the
# search box by pressing <Shift>+<cursor down>. Also here use the <cursor keys>
# to select a filter and <Enter> or <escape> to activate or cancel the filter
# option.
# The default value is: YES.
# This tag requires that the tag GENERATE_HTML is set to YES.

SEARCHENGINE           = YES

# When the SERVER_BASED_SEARCH tag is enabled the search engine will be
# implemented using a web server instead of a web client using Javascript. There
# are two flavors of web server based searching depending on the EXTERNAL_SEARCH
# setting. When disabled, doxygen will generate a PHP script for searching and
# an index file used by the script. When EXTERNAL_SEARCH is enabled the indexing
# and searching needs to be provided by external tools. See the section
# "External Indexing and Searching" for details.
# The default value is: NO.
# This tag requires that the tag SEARCHENGINE is set to YES.

SERVER_BASED_SEARCH    = NO

# When EXTERNAL_SEARCH tag is enabled doxygen will no longer generate the PHP
# script for searching. Instead the search results are written to an XML file
# which needs to be processed by an external indexer. Doxygen will invoke an
# external search engine pointed to by the SEARCHENGINE_URL option to obtain the
# search results.
#
# Doxygen ships with an example indexer (doxyindexer) and search engine
# (doxysearch.cgi) which are based on the open source search engine library
# Xapian (see: http://xapian.org/).
#
# See the section "External Indexing and Searching" for details.
# The default value is: NO.
# This tag requires that the tag SEARCHENGINE is set to YES.

EXTERNAL_SEARCH        = NO

# The SEARCHENGINE_URL should point to a search engine hosted by a web server
# which will return the search results when EXTERNAL_SEARCH is enabled.
#
# Doxygen ships with an example indexer (doxyindexer) and search engine
# (doxysearch.cgi) which are based on the open source search engine library
# Xapian (see: http://xapian.org/). See the section "External Indexing and
# Searching" for details.
# This tag requires that the tag SEARCHENGINE is set to YES.

SEARCHENGINE_URL       =

# When SERVER_BASED_SEARCH and EXTERNAL_SEARCH are both enabled the unindexed
# search data is written to a file for indexing by an external tool. With the
# SEARCHDATA_FILE tag the name of this file can be specified.
# The default file is: searchdata.xml.
# This tag requires that the tag SEARCHENGINE is set to YES.

SEARCHDATA_FILE        = searchdata.xml

# When SERVER_BASED_SEARCH and EXTERNAL_SEARCH are both enabled the
# EXTERNAL_SEARCH_ID tag can be used as an identifier for the project. This is
# useful in combination with EXTRA_SEARCH_MAPPINGS to search through multiple
# projects and redirect the results back to the right project.
# This tag requires that the tag SEARCHENGINE is set to YES.

EXTERNAL_SEARCH_ID     =

# The EXTRA_SEARCH_MAPPINGS tag can be used to enable searching through doxygen
# projects other than the one defined by this configuration file, but that are
# all added to the same external search index. Each project needs to have a
# unique id set via EXTERNAL_SEARCH_ID. The search mapping then maps the id of
# to a relative location where the documentation can be found. The format is:
# EXTRA_SEARCH_MAPPINGS = tagname1=loc1 tagname2=loc2 ...
# This tag requires that the tag SEARCHENGINE is set to YES.

EXTRA_SEARCH_MAPPINGS  =

#---------------------------------------------------------------------------
# Configuration options related to the LaTeX output
#---------------------------------------------------------------------------

# If the GENERATE_LATEX tag is set to YES, doxygen will generate LaTeX output.
# The default value is: YES.

GENERATE_LATEX         = YES

# The LATEX_OUTPUT tag is used to specify where the LaTeX docs will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it.
# The default directory is: latex.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_OUTPUT           = latex

# The LATEX_CMD_NAME tag can be used to specify the LaTeX command name to be
# invoked.
#
# Note that when enabling USE_PDFLATEX this option is only used for generating
# bitmaps for formulas in the HTML output, but not in the Makefile that is
# written to the output directory.
# The default file is: latex.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_CMD_NAME         = latex

# The MAKEINDEX_CMD_NAME tag can be used to specify the command name to generate
# index for LaTeX.
# The default file is: makeindex.
# This tag requires that the tag GENERATE_LATEX is set to YES.

MAKEINDEX_CMD_NAME     = makeindex

# If the COMPACT_LATEX tag is set to YES, doxygen generates more compact LaTeX
# documents. This may be useful for small projects and may help to save some
# trees in general.
# The default value is: NO.
# This tag requires that the tag GENERATE_LATEX is set to YES.

COMPACT_LATEX          = NO

# The PAPER_TYPE tag can be used to set the paper type that is used by the
# printer.
# Possible values are: a4 (210 x 297 mm), letter (8.5 x 11 inches), legal (8.5 x
# 14 inches) and executive (7.25 x 10.5 inches).
# The default value is: a4.
# This tag requires that the tag GENERATE_LATEX is set to YES.

PAPER_TYPE             = a4

# The EXTRA_PACKAGES tag can be used to specify one or more LaTeX package names
# that should be included in the LaTeX output. The package can be specified just
# by its name or with the correct syntax as to be used with the LaTeX
# \usepackage command. To get the times font for instance you can specify :
# EXTRA_PACKAGES=times or EXTRA_PACKAGES={times}
# To use the option intlimits with the amsmath package you can specify:
# EXTRA_PACKAGES=[intlimits]{amsmath}
# If left blank no extra packages will be included.
# This tag requires that the tag GENERATE_LATEX is set to YES.

EXTRA_PACKAGES         =

# The LATEX_HEADER tag can be used to specify a personal LaTeX header for the
# generated LaTeX document. The header should contain everything until the first
# chapter. If it is left blank doxygen will generate a standard header. See
# section "Doxygen usage" for information on how to let doxygen write the
# default header to a separate file.
#
# Note: Only use a user-defined header if you know what you are doing! The
# following commands have a special meaning inside the header: $title,
# $datetime, $date, $doxygenversion, $projectname, $projectnumber,
# $projectbrief, $projectlogo. Doxygen will replace $title with the empty
# string, for the replacement values of the other commands the user is referred
# to HTML_HEADER.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_HEADER           =

# The LATEX_FOOTER tag can be used to specify a personal LaTeX footer for the
# generated LaTeX document. The footer should contain everything after the last
# chapter. If it is left blank doxygen will generate a standard footer. See
# LATEX_HEADER for more information on how to generate a default footer and what
# special commands can be used inside the footer.
#
# Note: Only use a user-defined footer if you know what you are doing!
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_FOOTER           =

# The LATEX_EXTRA_STYLESHEET tag can be used to specify additional user-defined
# LaTeX style sheets that are included after the standard style sheets created
# by doxygen. Using this option one can overrule certain style aspects. Doxygen
# will copy the style sheet files to the output directory.
# Note: The order of the extra style sheet files is of importance (e.g. the last
# style sheet in the list overrules the setting of the previous ones in the
# list).
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_EXTRA_STYLESHEET =

# The LATEX_EXTRA_FILES tag can be used to specify one or more extra images or
# other source files which should be copied to the LATEX_OUTPUT output
# directory. Note that the files will be copied as-is; there are no commands or
# markers available.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_EXTRA_FILES      =

# If the PDF_HYPERLINKS tag is set to YES, the LaTeX that is generated is
# prepared for conversion to PDF (using ps2pdf or pdflatex). The PDF file will
# contain links (just like the HTML output) instead of page references. This
# makes the output suitable for online browsing using a PDF viewer.
# The default value is: YES.
# This tag requires that the tag GENERATE_LATEX is set to YES.

PDF_HYPERLINKS         = YES

# If the USE_PDFLATEX tag is set to YES, doxygen will use pdflatex to generate
# the PDF file directly from the LaTeX files. Set this option to YES, to get a
# higher quality PDF documentation.
# The default value is: YES.
# This tag requires that the tag GENERATE_LATEX is set to YES.

USE_PDFLATEX           = YES

# If the LATEX_BATCHMODE tag is set to YES, doxygen will add the \batchmode
# command to the generated LaTeX files. This will instruct LaTeX to keep running
# if errors occur, instead of asking the user for help. This option is also used
# when generating formulas in HTML.
# The default value is: NO.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_BATCHMODE        = NO

# If the LATEX_HIDE_INDICES tag is set to YES then doxygen will not include the
# index chapters (such as File Index, Compound Index, etc.) in the output.
# The default value is: NO.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_HIDE_INDICES     = NO

# If the LATEX_SOURCE_CODE tag is set to YES then doxygen will include source
# code with syntax highlighting in the LaTeX output.
#
# Note that which sources are shown also depends on other settings such as
# SOURCE_BROWSER.
# The default value is: NO.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_SOURCE_CODE      = NO

# The LATEX_BIB_STYLE tag can be used to specify the style to use for the
# bibliography, e.g. plainnat, or ieeetr. See
# http://en.wikipedia.org/wiki/BibTeX and \cite for more info.
# The default value is: plain.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_BIB_STYLE        = plain

# If the LATEX_TIMESTAMP tag is set to YES then the footer of each generated
# page will contain the date and time when the page was generated. Setting this
# to NO can help when comparing the output of multiple runs.
# The default value is: NO.
# This tag requires that the tag GENERATE_LATEX is set to YES.

LATEX_TIMESTAMP        = NO

#---------------------------------------------------------------------------
# Configuration options related to the RTF output
#---------------------------------------------------------------------------

# If the GENERATE_RTF tag is set to YES, doxygen will generate RTF output. The
# RTF output is optimized for Word 97 and may not look too pretty with other RTF
# readers/editors.
# The default value is: NO.

GENERATE_RTF           = NO

# The RTF_OUTPUT tag is used to specify where the RTF docs will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it.
# The default directory is: rtf.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_OUTPUT             = rtf

# If the COMPACT_RTF tag is set to YES, doxygen generates more compact RTF
# documents. This may be useful for small projects and may help to save some
# trees in general.
# The default value is: NO.
# This tag requires that the tag GENERATE_RTF is set to YES.

COMPACT_RTF            = NO

# If the RTF_HYPERLINKS tag is set to YES, the RTF that is generated will
# contain hyperlink fields. The RTF file will contain links (just like the HTML
# output) instead of page references. This makes the output suitable for online
# browsing using Word or some other Word compatible readers that support those
# fields.
#
# Note: WordPad (write) and others do not support links.
# The default value is: NO.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_HYPERLINKS         = NO

# Load stylesheet definitions from file. Syntax is similar to doxygen's config
# file, i.e. a series of assignments. You only have to provide replacements,
# missing definitions are set to their default value.
#
# See also section "Doxygen usage" for information on how to generate the
# default style sheet that doxygen normally uses.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_STYLESHEET_FILE    =

# Set optional variables used in the generation of an RTF document. Syntax is
# similar to doxygen's config file. A template extensions file can be generated
# using doxygen -e rtf extensionFile.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_EXTENSIONS_FILE    =

# If the RTF_SOURCE_CODE tag is set to YES then doxygen will include source code
# with syntax highlighting in the RTF output.
#
# Note that which sources are shown also depends on other settings such as
# SOURCE_BROWSER.
# The default value is: NO.
# This tag requires that the tag GENERATE_RTF is set to YES.

RTF_SOURCE_CODE        = NO

#---------------------------------------------------------------------------
# Configuration options related to the man page output
#---------------------------------------------------------------------------

# If the GENERATE_MAN tag is set to YES, doxygen will generate man pages for
# classes and files.
# The default value is: NO.

GENERATE_MAN           = NO

# The MAN_OUTPUT tag is used to specify where the man pages will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it. A directory man3 will be created inside the directory specified by
# MAN_OUTPUT.
# The default directory is: man.
# This tag requires that the tag GENERATE_MAN is set to YES.

MAN_OUTPUT             = man

# The MAN_EXTENSION tag determines the extension that is added to the generated
# man pages. In case the manual section does not start with a number, the number
# 3 is prepended. The dot (.) at the beginning of the MAN_EXTENSION tag is
# optional.
# The default value is: .3.
# This tag requires that the tag GENERATE_MAN is set to YES.

MAN_EXTENSION          = .3

# The MAN_SUBDIR tag determines the name of the directory created within
# MAN_OUTPUT in which the man pages are placed. If defaults to man followed by
# MAN_EXTENSION with the initial . removed.
# This tag requires that the tag GENERATE_MAN is set to YES.

MAN_SUBDIR             =

# If the MAN_LINKS tag is set to YES and doxygen generates man output, then it
# will generate one additional man file for each entity documented in the real
# man page(s). These additional files only source the real man page, but without
# them the man command would be unable to find the correct page.
# The default value is: NO.
# This tag requires that the tag GENERATE_MAN is set to YES.

MAN_LINKS              = NO

#---------------------------------------------------------------------------
# Configuration options related to the XML output
#---------------------------------------------------------------------------

# If the GENERATE_XML tag is set to YES, doxygen will generate an XML file that
# captures the structure of the code including all documentation.
# The default value is: NO.

GENERATE_XML           = NO

# The XML_OUTPUT tag is used to specify where the XML pages will be put. If a
# relative path is entered the value of OUTPUT_DIRECTORY will be put in front of
# it.
# The default directory is: xml.
# This tag requires that the tag GENERATE_XML is set to YES.

XML_OUTPUT             = xml

# If the XML_PROGRAMLISTING tag is set to YES, doxygen will dump the program
# listings (including syntax highlighting and cross-referencing information) to
# the XML output. Note that enabling this will significantly increase the size
# of the XML output.
# The default value is: YES.
# This tag requires that the tag GENERATE_XML is set to YES.

XML_PROGRAMLISTING     = YES

#---------------------------------------------------------------------------
# Configuration options related to the DOCBOOK output
#---------------------------------------------------------------------------

# If the GENERATE_DOCBOOK tag is set to YES, doxygen will generate Docbook files
# that can be used to generate PDF.
# The default value is: NO.

GENERATE_DOCBOOK       = NO

# The DOCBOOK_OUTPUT tag is used to specify where the Docbook pages will be put.
# If a relative path is entered the value of OUTPUT_DIRECTORY will be put in
# front of it.
# The default directory is: docbook.
# This tag requires that the tag GENERATE_DOCBOOK is set to YES.

DOCBOOK_OUTPUT         = docbook

# If the DOCBOOK_PROGRAMLISTING tag is set to YES, doxygen will include the
# program listings (including syntax highlighting and cross-referencing
# information) to the DOCBOOK output. Note that enabling this will significantly
# increase the size of the DOCBOOK output.
# The default value is: NO.
# This tag requires that the tag GENERATE_DOCBOOK is set to YES.

DOCBOOK_PROGRAMLISTING = NO

#---------------------------------------------------------------------------
# Configuration options for the AutoGen Definitions output
#---------------------------------------------------------------------------

# If the GENERATE_AUTOGEN_DEF tag is set to YES, doxygen will generate an
# AutoGen Definitions (see http://autogen.sf.net) file that captures the
# structure of the code including all documentation. Note that this feature is
# still experimental and incomplete at the moment.
# The default value is: NO.

GENERATE_AUTOGEN_DEF   = NO

#---------------------------------------------------------------------------
# Configuration options related to the Perl module output
#---------------------------------------------------------------------------

# If the GENERATE_PERLMOD tag is set to YES, doxygen will generate a Perl module
# file that captures the structure of the code including all documentation.
#
# Note that this feature is still experimental and incomplete at the moment.
# The default value is: NO.

GENERATE_PERLMOD       = NO

# If the PERLMOD_LATEX tag is set to YES, doxygen will generate the necessary
# Makefile rules, Perl scripts and LaTeX code to be able to generate PDF and DVI
# output from the Perl module output.
# The default value is: NO.
# This tag requires that the tag GENERATE_PERLMOD is set to YES.

PERLMOD_LATEX          = NO

# If the PERLMOD_PRETTY tag is set to YES, the Perl module output will be nicely
# formatted so it can be parsed by a human reader. This is useful if you want to
# understand what is going on. On the other hand, if this tag is set to NO, the
# size of the Perl module output will be much smaller and Perl will parse it
# just the same.
# The default value is: YES.
# This tag requires that the tag GENERATE_PERLMOD is set to YES.

PERLMOD_PRETTY         = YES

# The names of the make variables in the generated doxyrules.make file are
# prefixed with the string contained in PERLMOD_MAKEVAR_PREFIX. This is useful
# so different doxyrules.make files included by the same Makefile don't
# overwrite each other's variables.
# This tag requires that the tag GENERATE_PERLMOD is set to YES.

PERLMOD_MAKEVAR_PREFIX =

#---------------------------------------------------------------------------
# Configuration options related to the preprocessor
#---------------------------------------------------------------------------

# If the ENABLE_PREPROCESSING tag is set to YES, doxygen will evaluate all
# C-preprocessor directives found in the sources and include files.
# The default value is: YES.

ENABLE_PREPROCESSING   = YES

# If the MACRO_EXPANSION tag is set to YES, doxygen will expand all macro names
# in the source code. If set to NO, only conditional compilation will be
# performed. Macro expansion can be done in a controlled way by setting
# EXPAND_ONLY_PREDEF to YES.
# The default value is: NO.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

MACRO_EXPANSION        = NO

# If the EXPAND_ONLY_PREDEF and MACRO_EXPANSION tags are both set to YES then
# the macro expansion is limited to the macros specified with the PREDEFINED and
# EXPAND_AS_DEFINED tags.
# The default value is: NO.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

EXPAND_ONLY_PREDEF     = NO

# If the SEARCH_INCLUDES tag is set to YES, the include files in the
# INCLUDE_PATH will be searched if a #include is found.
# The default value is: YES.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

SEARCH_INCLUDES        = YES

# The INCLUDE_PATH tag can be used to specify one or more directories that
# contain include files that are not input files but should be processed by the
# preprocessor.
# This tag requires that the tag SEARCH_INCLUDES is set to YES.

INCLUDE_PATH           =

# You can use the INCLUDE_FILE_PATTERNS tag to specify one or more wildcard
# patterns (like *.h and *.hpp) to filter out the header-files in the
# directories. If left blank, the patterns specified with FILE_PATTERNS will be
# used.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

INCLUDE_FILE_PATTERNS  =

# The PREDEFINED tag can be used to specify one or more macro names that are
# defined before the preprocessor is started (similar to the -D option of e.g.
# gcc). The argument of the tag is a list of macros of the form: name or
# name=definition (no spaces). If the definition and the "=" are omitted, "=1"
# is assumed. To prevent a macro definition from being undefined via #undef or
# recursively expanded use the := operator instead of the = operator.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

PREDEFINED             =

# If the MACRO_EXPANSION and EXPAND_ONLY_PREDEF tags are set to YES then this
# tag can be used to specify a list of macro names that should be expanded. The
# macro definition that is found in the sources will be used. Use the PREDEFINED
# tag if you want to use a different macro definition that overrules the
# definition found in the source code.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

EXPAND_AS_DEFINED      =

# If the SKIP_FUNCTION_MACROS tag is set to YES then doxygen's preprocessor will
# remove all references to function-like macros that are alone on a line, have
# an all uppercase name, and do not end with a semicolon. Such function macros
# are typically used for boiler-plate code, and will confuse the parser if not
# removed.
# The default value is: YES.
# This tag requires that the tag ENABLE_PREPROCESSING is set to YES.

SKIP_FUNCTION_MACROS   = YES

#---------------------------------------------------------------------------
# Configuration options related to external references
#---------------------------------------------------------------------------

# The TAGFILES tag can be used to specify one or more tag files. For each tag
# file the location of the external documentation should be added. The format of
# a tag file without this location is as follows:
# TAGFILES = file1 file2 ...
# Adding location for the tag files is done as follows:
# TAGFILES = file1=loc1 "file2 = loc2" ...
# where loc1 and loc2 can be relative or absolute paths or URLs. See the
# section "Linking to external documentation" for more information about the use
# of tag files.
# Note: Each tag file must have a unique name (where the name does NOT include
# the path). If a tag file is not located in the directory in which doxygen is
# run, you must also specify the path to the tagfile here.

TAGFILES               =

# When a file name is specified after GENERATE_TAGFILE, doxygen will create a
# tag file that is based on the input files it reads. See section "Linking to
# external documentation" for more information about the usage of tag files.

GENERATE_TAGFILE       =

# If the ALLEXTERNALS tag is set to YES, all external class will be listed in
# the class index. If set to NO, only the inherited external classes will be
# listed.
# The default value is: NO.

ALLEXTERNALS           = NO

# If the EXTERNAL_GROUPS tag is set to YES, all external groups will be listed
# in the modules index. If set to NO, only the current project's groups will be
# listed.
# The default value is: YES.

EXTERNAL_GROUPS        = YES

# If the EXTERNAL_PAGES tag is set to YES, all external pages will be listed in
# the related pages index. If set to NO, only the current project's pages will
# be listed.
# The default value is: YES.

EXTERNAL_PAGES         = YES

# The PERL_PATH should be the absolute path and name of the perl script
# interpreter (i.e. the result of 'which perl').
# The default file (with absolute path) is: /usr/bin/perl.

PERL_PATH              = /usr/bin/perl

#---------------------------------------------------------------------------
# Configuration options related to the dot tool
#---------------------------------------------------------------------------

# If the CLASS_DIAGRAMS tag is set to YES, doxygen will generate a class diagram
# (in HTML and LaTeX) for classes with base or super classes. Setting the tag to
# NO turns the diagrams off. Note that this option also works with HAVE_DOT
# disabled, but it is recommended to install and use dot, since it yields more
# powerful graphs.
# The default value is: YES.

CLASS_DIAGRAMS         = YES

# You can define message sequence charts within doxygen comments using the \msc
# command. Doxygen will then run the mscgen tool (see:
# http://www.mcternan.me.uk/mscgen/)) to produce the chart and insert it in the
# documentation. The MSCGEN_PATH tag allows you to specify the directory where
# the mscgen tool resides. If left empty the tool is assumed to be found in the
# default search path.

MSCGEN_PATH            =

# You can include diagrams made with dia in doxygen documentation. Doxygen will
# then run dia to produce the diagram and insert it in the documentation. The
# DIA_PATH tag allows you to specify the directory where the dia binary resides.
# If left empty dia is assumed to be found in the default search path.

DIA_PATH               =

# If set to YES the inheritance and collaboration graphs will hide inheritance
# and usage relations if the target is undocumented or is not a class.
# The default value is: YES.

HIDE_UNDOC_RELATIONS   = YES

# If you set the HAVE_DOT tag to YES then doxygen will assume the dot tool is
# available from the path. This tool is part of Graphviz (see:
# http://www.graphviz.org/), a graph visualization toolkit from AT&T and Lucent
# Bell Labs. The other options in this section have no effect if this option is
# set to NO
# The default value is: YES.

HAVE_DOT               = YES

# The DOT_NUM_THREADS specifies the number of dot invocations doxygen is allowed
# to run in parallel. When set to 0 doxygen will base this on the number of
# processors available in the system. You can set it explicitly to a value
# larger than 0 to get control over the balance between CPU load and processing
# speed.
# Minimum value: 0, maximum value: 32, default value: 0.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_NUM_THREADS        = 0

# When you want a differently looking font in the dot files that doxygen
# generates you can specify the font name using DOT_FONTNAME. You need to make
# sure dot is able to find the font, which can be done by putting it in a
# standard location or by setting the DOTFONTPATH environment variable or by
# setting DOT_FONTPATH to the directory containing the font.
# The default value is: Helvetica.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_FONTNAME           = Helvetica

# The DOT_FONTSIZE tag can be used to set the size (in points) of the font of
# dot graphs.
# Minimum value: 4, maximum value: 24, default value: 10.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_FONTSIZE           = 10

# By default doxygen will tell dot to use the default font as specified with
# DOT_FONTNAME. If you specify a different font using DOT_FONTNAME you can set
# the path where dot can find it using this tag.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_FONTPATH           =

# If the CLASS_GRAPH tag is set to YES then doxygen will generate a graph for
# each documented class showing the direct and indirect inheritance relations.
# Setting this tag to YES will force the CLASS_DIAGRAMS tag to NO.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

CLASS_GRAPH            = YES

# If the COLLABORATION_GRAPH tag is set to YES then doxygen will generate a
# graph for each documented class showing the direct and indirect implementation
# dependencies (inheritance, containment, and class references variables) of the
# class with other documented classes.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

COLLABORATION_GRAPH    = YES

# If the GROUP_GRAPHS tag is set to YES then doxygen will generate a graph for
# groups, showing the direct groups dependencies.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

GROUP_GRAPHS           = YES

# If the UML_LOOK tag is set to YES, doxygen will generate inheritance and
# collaboration diagrams in a style similar to the OMG's Unified Modeling
# Language.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

UML_LOOK               = NO

# If the UML_LOOK tag is enabled, the fields and methods are shown inside the
# class node. If there are many fields or methods and many nodes the graph may
# become too big to be useful. The UML_LIMIT_NUM_FIELDS threshold limits the
# number of items for each type to make the size more manageable. Set this to 0
# for no limit. Note that the threshold may be exceeded by 50% before the limit
# is enforced. So when you set the threshold to 10, up to 15 fields may appear,
# but if the number exceeds 15, the total amount of fields shown is limited to
# 10.
# Minimum value: 0, maximum value: 100, default value: 10.
# This tag requires that the tag HAVE_DOT is set to YES.

UML_LIMIT_NUM_FIELDS   = 10

# If the TEMPLATE_RELATIONS tag is set to YES then the inheritance and
# collaboration graphs will show the relations between templates and their
# instances.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

TEMPLATE_RELATIONS     = NO

# If the INCLUDE_GRAPH, ENABLE_PREPROCESSING and SEARCH_INCLUDES tags are set to
# YES then doxygen will generate a graph for each documented file showing the
# direct and indirect include dependencies of the file with other documented
# files.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

INCLUDE_GRAPH          = YES

# If the INCLUDED_BY_GRAPH, ENABLE_PREPROCESSING and SEARCH_INCLUDES tags are
# set to YES then doxygen will generate a graph for each documented file showing
# the direct and indirect include dependencies of the file with other documented
# files.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

INCLUDED_BY_GRAPH      = YES

# If the CALL_GRAPH tag is set to YES then doxygen will generate a call
# dependency graph for every global function or class method.
#
# Note that enabling this option will significantly increase the time of a run.
# So in most cases it will be better to enable call graphs for selected
# functions only using the \callgraph command. Disabling a call graph can be
# accomplished by means of the command \hidecallgraph.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

CALL_GRAPH             = NO

# If the CALLER_GRAPH tag is set to YES then doxygen will generate a caller
# dependency graph for every global function or class method.
#
# Note that enabling this option will significantly increase the time of a run.
# So in most cases it will be better to enable caller graphs for selected
# functions only using the \callergraph command. Disabling a caller graph can be
# accomplished by means of the command \hidecallergraph.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

CALLER_GRAPH           = NO

# If the GRAPHICAL_HIERARCHY tag is set to YES then doxygen will graphical
# hierarchy of all classes instead of a textual one.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

GRAPHICAL_HIERARCHY    = YES

# If the DIRECTORY_GRAPH tag is set to YES then doxygen will show the
# dependencies a directory has on other directories in a graphical way. The
# dependency relations are determined by the #include relations between the
# files in the directories.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

DIRECTORY_GRAPH        = YES

# The DOT_IMAGE_FORMAT tag can be used to set the image format of the images
# generated by dot. For an explanation of the image formats see the section
# output formats in the documentation of the dot tool (Graphviz (see:
# http://www.graphviz.org/)).
# Note: If you choose svg you need to set HTML_FILE_EXTENSION to xhtml in order
# to make the SVG files visible in IE 9+ (other browsers do not have this
# requirement).
# Possible values are: png, png:cairo, png:cairo:cairo, png:cairo:gd, png:gd,
# png:gd:gd, jpg, jpg:cairo, jpg:cairo:gd, jpg:gd, jpg:gd:gd, gif, gif:cairo,
# gif:cairo:gd, gif:gd, gif:gd:gd, svg, png:gd, png:gd:gd, png:cairo,
# png:cairo:gd, png:cairo:cairo, png:cairo:gdiplus, png:gdiplus and
# png:gdiplus:gdiplus.
# The default value is: png.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_IMAGE_FORMAT       = png

# If DOT_IMAGE_FORMAT is set to svg, then this option can be set to YES to
# enable generation of interactive SVG images that allow zooming and panning.
#
# Note that this requires a modern browser other than Internet Explorer. Tested
# and working are Firefox, Chrome, Safari, and Opera.
# Note: For IE 9+ you need to set HTML_FILE_EXTENSION to xhtml in order to make
# the SVG files visible. Older versions of IE do not have SVG support.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

INTERACTIVE_SVG        = NO

# The DOT_PATH tag can be used to specify the path where the dot tool can be
# found. If left blank, it is assumed the dot tool can be found in the path.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_PATH               =

# The DOTFILE_DIRS tag can be used to specify one or more directories that
# contain dot files that are included in the documentation (see the \dotfile
# command).
# This tag requires that the tag HAVE_DOT is set to YES.

DOTFILE_DIRS           =

# The MSCFILE_DIRS tag can be used to specify one or more directories that
# contain msc files that are included in the documentation (see the \mscfile
# command).

MSCFILE_DIRS           =

# The DIAFILE_DIRS tag can be used to specify one or more directories that
# contain dia files that are included in the documentation (see the \diafile
# command).

DIAFILE_DIRS           =

# When using plantuml, the PLANTUML_JAR_PATH tag should be used to specify the
# path where java can find the plantuml.jar file. If left blank, it is assumed
# PlantUML is not used or called during a preprocessing step. Doxygen will
# generate a warning when it encounters a \startuml command in this case and
# will not generate output for the diagram.

PLANTUML_JAR_PATH      =

# When using plantuml, the PLANTUML_CFG_FILE tag can be used to specify a
# configuration file for plantuml.

PLANTUML_CFG_FILE      =

# When using plantuml, the specified paths are searched for files specified by
# the !include statement in a plantuml block.

PLANTUML_INCLUDE_PATH  =

# The DOT_GRAPH_MAX_NODES tag can be used to set the maximum number of nodes
# that will be shown in the graph. If the number of nodes in a graph becomes
# larger than this value, doxygen will truncate the graph, which is visualized
# by representing a node as a red box. Note that doxygen if the number of direct
# children of the root node in a graph is already larger than
# DOT_GRAPH_MAX_NODES then the graph will not be shown at all. Also note that
# the size of a graph can be further restricted by MAX_DOT_GRAPH_DEPTH.
# Minimum value: 0, maximum value: 10000, default value: 50.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_GRAPH_MAX_NODES    = 50

# The MAX_DOT_GRAPH_DEPTH tag can be used to set the maximum depth of the graphs
# generated by dot. A depth value of 3 means that only nodes reachable from the
# root by following a path via at most 3 edges will be shown. Nodes that lay
# further from the root node will be omitted. Note that setting this option to 1
# or 2 may greatly reduce the computation time needed for large code bases. Also
# note that the size of a graph can be further restricted by
# DOT_GRAPH_MAX_NODES. Using a depth of 0 means no depth restriction.
# Minimum value: 0, maximum value: 1000, default value: 0.
# This tag requires that the tag HAVE_DOT is set to YES.

MAX_DOT_GRAPH_DEPTH    = 0

# Set the DOT_TRANSPARENT tag to YES to generate images with a transparent
# background. This is disabled by default, because dot on Windows does not seem
# to support this out of the box.
#
# Warning: Depending on the platform used, enabling this option may lead to
# badly anti-aliased labels on the edges of a graph (i.e. they become hard to
# read).
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_TRANSPARENT        = NO

# Set the DOT_MULTI_TARGETS tag to YES to allow dot to generate multiple output
# files in one run (i.e. multiple -o and -T options on the command line). This
# makes dot run faster, but since only newer versions of dot (>1.8.10) support
# this, this feature is disabled by default.
# The default value is: NO.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_MULTI_TARGETS      = NO

# If the GENERATE_LEGEND tag is set to YES doxygen will generate a legend page
# explaining the meaning of the various boxes and arrows in the dot generated
# graphs.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

GENERATE_LEGEND        = YES

# If the DOT_CLEANUP tag is set to YES, doxygen will remove the intermediate dot
# files that are used to generate the various graphs.
# The default value is: YES.
# This tag requires that the tag HAVE_DOT is set to YES.

DOT_CLEANUP            = YES

```


---
### Archivo: `external/prometheus-client-c/Makefile`

```bash

SHELL = /bin/bash

GITHUB_ORG = digitalocean

# Origin does not point to https://github.com/digitalocean/prometheus-client-c.git in TravisCI so we must add a new
# remote for fetching. Fetch master, diff on the filenames and look for C files. If no changes to C files are made, skip
# the build.
CHANGED_FILES = $(shell git remote add ci https://github.com/${GITHUB_ORG}/prometheus-client-c.git > /dev/null 2>&1; git fetch ci master > /dev/null 2>&1; git diff --name-only ci/master | egrep -v '.*\.md$$')

ifneq ($(shell echo "x${CHANGED_FILES}x" | sed 's/\n\t //'), xx)
default: build_and_test
else
default: build_and_test
# default: changed_files
	# @echo -e "\033[1;32mNothing to build\033[0m"
endif

build_and_test: changed_files clean build test package smoke
.PHONY: build_and_test

all: build_and_test docs
.PHONY: all

clean:
	./auto dev -e auto -a clean

build: clean
	./auto dev -e auto -a build -a -t
.PHONY: build

test: build
	./auto dev -e auto -a test
.PHONY: test

package: test
	./auto dev -e auto -a package
.PHONY: smoke

docs: smoke
	./auto dev -e auto -a docs
.PHONY: package

changed_files:
	@echo "Changed C files: ${CHANGED_FILES}"
.PHONY: changed_files

smoke: package
	./auto dev -e auto -a smoke
.PHONY: smoke

```


---
### Archivo: `external/prometheus-client-c/README.md`

```
# prometheus-client-c

[![Build Status](https://github.com/digitalocean/prometheus-client-c/workflows/CI/badge.svg)](https://github.com/digitalocean/prometheus-client-c/actions)

This project provides shared libraries for instrumenting software via [Prometheus](https://prometheus.io)

* libprom - Provides the core API. Resources such as counters, gauges, histograms, and
  collector registries can be found here. This library has no dependencies on third-party
  libraries; however, it does rely on pthreads native to POSIX systems.
* libpromhttp - Provides a simple web handler to expose Prometheus metrics for scraping.
  This library has a dependency on libmicrohttpd.

Documentation can be found
[at the documentation site](https://digitalocean.github.io/prometheus-client-c/)
and an example can be found under example/. Check under the releases tab for tarballs and debian installers

## Versioning

This project generally follows [semantic versioning](https://semver.org). For each version you can find a corresponding
release under the releases type. Do not expect the master branch to maintain alignment with the latest release. It may
contain changes not yet released.

## Development

The only development dependencies required to get started are Docker, Make and Bash. Navigate to the root fo this
project directory and execute `make`. This process will build the development container, build libprom and libpromhttp,
run the unit tests and execute the smoke tests.

The stages of the development workflow are automated via `auto` which can be found in the root of this project directory.
Execute `bash auto -h` for information regarding the different subcommands. Information for each subcommand can be
obtained by executing `bash auto CMD -h`.

## Contributing

Thank you for your interest in contributing to prometheus-client-c! There two primary ways to get involved with this
project: documentation and code modifications.  In either case, the process is identical.

### General Rules for Contribution

* Open An Issue: Before opening a PR or starting any work, open an issue.  In the issue, describe the problem you
want to fix and how you would like to fix it.  The level of detail should match the relative size of the proposed change.
This will allow us to work together to determine the best path forward towards a sound solution.

* Open a Pull Request: After you have gotten confirmation on your proposed change it's time to get to work! Create a
fork and make all of your updates in said fork. For each commit, you must prefix the commit with the associated issue.
For example: `#12 - Fixing typo in documentation`. Before opening a pull request, review the commit log for your fork.
If any of your commit messages are extraneous, squash said commits using `git rebase`. Once you're happy with your
changes and your commit log, open a pull request against the master branch.

* Engage in the Code Review: After submitting your pull request, there may be some requests for changes.  If you have
any questions or concerns, please do not hesitate to make them known.  The code review process is a bidirectional
communication process so please do not be shy. Speak up!

### Coding Rules for Contribution

* Please follow the general coding style already present in the project.
  * clang-format your code by executing `bash auto format` before submitting a PR.
  * Every struct must have a constructor function and destructor function.
  * Every method must pass a pointer to the target struct as the first argument.
  * Every function that is not a constructor or destructor and does not return a value must return an int to signify
    success with 0 and failure with non-zero.
  * Every function name must begin with the library name. For example, all functions within prom must begin with `prom_`
    and all functions within promhttp must begin with `promhttp_`.
  * All variables must be underscore delimited (i.e. snake-case).
  * All macros must be captilalized.
  * Every pointer reference must be assigned a NULL value after it is destroyed either by prom_free or its
    corresponding destructor function.
* All new functions must introduce a corresponding suite of unit tests.
* If you add functionality to an existing function, be sure to add a corresponding unit test to verify correctness.

## Misc

* Language level: C11
* Operating Systems:
  * Ubuntu 20.04
  * Ubuntu 18.04
  * Ubuntu 16.04
  * Debian Buster
  * Debian Stretch
  * Debian Jessie

```


---
### Archivo: `external/prometheus-client-c/example/Makefile`

```bash
.PHONY: clean

VERSION = $(shell cat ../VERSION)


GCC = /usr/bin/gcc
FLAGS = -g -Wall
DEPS = foo.h bar.h
OBJ = foo.o bar.o main.o
LIBS = /usr/lib/libprom.so /usr/lib/libpromhttp.so

PROM_DEB_PACKAGE = ../prom/libprom-dev-${VERSION}-Linux.deb
PROM_TGZ_PACKAGE = ../prom/libprom-dev-${VERSION}-Linux.tar.gz

PROMHTTP_DEB_PACKAGE = ../promhttp/libpromhttp-dev-${VERSION}-Linux.deb
PROMHTTP_TGZ_PACKAGE = ../promhttp/libpromhttp-dev-${VERSION}-Linux.tar.gz

example: ${OBJ} ${LIBS}
	gcc -g -o $@ ${FLAGS} -O1 -pthread ${OBJ} -lprom -lpromhttp -lmicrohttpd

${PROM_DEB_PACKAGE}:
	cd .. && ./auto build && ./auto package

${PROMHTTP_DEB_PACKAGE}:
	cd .. && ./auto build && ./auto package

/usr/lib/libprom.so: ${PROM_DEB_PACKAGE}
	dpkg -i ${PROM_DEB_PACKAGE}

/usr/lib/libpromhttp.so: ${PROMHTTP_DEB_PACKAGE}
	dpkg -i ${PROMHTTP_DEB_PACKAGE}

%.o: %.c ${PROM_DEB_PACKAGE} ${PROMHTTP_DEB_PACKAGE} ${LIBS} ${DEPS}
	${GCC} ${FLAGS} -c $< -o $@

clean:
	-rm ${OBJ} example ${PROM_DEB_PACKAGE} ${PROM_TGZ_PACKAGE} ${PROMHTTP_DEB_PACKAGE} ${PROMHTTP_TGZ_PACKAGE}
	-dpkg -r libprom-dev
	-dpkg -r libpromhttp-dev

```


---
### Archivo: `external/prometheus-client-c/example/README.md`

```
# Example

To run this example:

* Execute `./auto dev` from the root of the project directory to enter the development environment
* Execute `cd example`
* Execute `make`
* This process will build a binary called example in the current working directory. Execute `./example` to execute the
  example.
* In another shell, execute `curl http://0.0.0.0:8000/metrics`
```


---
### Archivo: `external/prometheus-client-c/example/bar.c`

```c
/**
 * Copyright 2019 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom.h"

prom_counter_t *bar_counter;
prom_gauge_t *bar_gauge;

int bar(int v, const char *label) {
  int r = 0;
  r = prom_counter_inc(bar_counter, NULL);
  if (r) return r;
  return prom_gauge_add(bar_gauge, v, (const char *[]) { label });
}

void bar_init(void) {
  bar_counter = prom_collector_registry_must_register_metric(prom_counter_new("bar_counter", "counter for bar", 0, NULL));
  bar_gauge = prom_collector_registry_must_register_metric(prom_gauge_new("bar_gauge", "gauge for bar", 1, (const char *[]) { "label" }));
}
```


---
### Archivo: `external/prometheus-client-c/example/bar.h`

```c
/**
 * Copyright 2019 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

int bar(int v, const char *label);
void bar_init(void);
```


---
### Archivo: `external/prometheus-client-c/example/foo.c`

```c
/**
 * Copyright 2019 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include "prom.h"

prom_counter_t *foo_counter;
prom_gauge_t *foo_gauge;

int foo(int v, const char *label) {
  int r = 0;
  r = prom_counter_inc(foo_counter, NULL);
  if (r) return r;
  return prom_gauge_add(foo_gauge, v, (const char *[]) { label });
}

void foo_init(void) {
  foo_counter = prom_collector_registry_must_register_metric(prom_counter_new("foo_counter", "counter for foo", 0, NULL));
  foo_gauge = prom_collector_registry_must_register_metric(prom_gauge_new("foo_gauge", "gauge for foo", 1, (const char *[]) { "label" }));
}
```


---
### Archivo: `external/prometheus-client-c/example/foo.h`

```c
/**
 * Copyright 2019 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


int foo(int v, const char *label);
void foo_init(void);
```


---
### Archivo: `external/prometheus-client-c/example/main.c`

```c
/**
 * Copyright 2019 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "microhttpd.h"
#include "prom.h"
#include "promhttp.h"
#include "foo.h"
#include "bar.h"


prom_histogram_t *test_histogram;

static void init(void) {
  // Initialize the Default registry
  prom_collector_registry_default_init();

  // Register file-based metrics for each file
  foo_init();
  bar_init();

  test_histogram = prom_collector_registry_must_register_metric(
    prom_histogram_new(
      "test_histogram",
      "histogram under test",
      prom_histogram_buckets_linear(5.0, 5.0, 2),
      0,
      NULL
    )
  );

  // Set the active registry for the HTTP handler
  promhttp_set_active_collector_registry(NULL);
}

int main(int argc, const char **argv) {
  init();
  int r = 0;
  const char *labels[] = { "one", "two", "three", "four", "five" };
  for (int i = 1; i <= 100; i++) {
    double hist_value;
    if (i % 2 == 0) {
      hist_value = 3.0;
    } else {
      hist_value = 7.0;
    }

    r = prom_histogram_observe(test_histogram, hist_value, NULL);
    if (r) exit(1);

    for (int x = 0; x < 5; x++) {
      r = foo(i,  labels[x]);
      if (r) exit(r);
      r = bar(i+x, labels[x]);
      if (r) exit(r);
    }
  }


  struct MHD_Daemon *daemon = promhttp_start_daemon(MHD_USE_SELECT_INTERNALLY, 8000, NULL, NULL);
  if (daemon == NULL) {
    return 1;
  }

  int done = 0;

  auto void intHandler(int signal);
  void intHandler(int signal) {
    printf("\nshutting down...\n");
    fflush(stdout);
    prom_collector_registry_destroy(PROM_COLLECTOR_REGISTRY_DEFAULT);
    MHD_stop_daemon(daemon);
    done = 1;
  }

  if (argc == 2) {
    unsigned int timeout = atoi(argv[1]);
    sleep(timeout);
    intHandler(0);
    return 0;
  }

  signal(SIGINT, intHandler);
  while(done == 0) {}

  return 0;
}
```


---
### Archivo: `external/prometheus-client-c/docker/Makefile`

```bash
docker:
	docker build -t prometheus-client-c-dev .
```


---
### Archivo: `external/prometheus-client-c/prom/CMakeLists.txt`

```
cmake_minimum_required(VERSION 3.14.5)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    OUTPUT_VARIABLE Version
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\1/g"
    OUTPUT_VARIABLE MajorVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\2/"
    OUTPUT_VARIABLE MinorVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\3/"
    OUTPUT_VARIABLE PatchVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

project(libprom VERSION ${Version} LANGUAGES C)

set(build_dir ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(public_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(private_dir ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(test_dir ${CMAKE_CURRENT_SOURCE_DIR}/test)

set(
    public_files
    ${public_dir}/prom_alloc.h
    ${public_dir}/prom_collector.h
    ${public_dir}/prom_collector_registry.h
    ${public_dir}/prom_counter.h
    ${public_dir}/prom_gauge.h
    ${public_dir}/prom_histogram.h
    ${public_dir}/prom_histogram_buckets.h
    ${public_dir}/prom_linked_list.h
    ${public_dir}/prom_map.h
    ${public_dir}/prom_metric.h
    ${public_dir}/prom_metric_sample.h
    ${public_dir}/prom_metric_sample_histogram.h
    ${public_dir}/prom.h
)

set(
    private_files
    ${private_dir}/prom_assert.h
    ${private_dir}/prom_collector.c
    ${private_dir}/prom_collector_registry.c
    ${private_dir}/prom_collector_registry_i.h
    ${private_dir}/prom_collector_registry_t.h
    ${private_dir}/prom_collector_t.h
    ${private_dir}/prom_counter.c
    ${private_dir}/prom_gauge.c
    ${private_dir}/prom_histogram.c
    ${private_dir}/prom_histogram_buckets.c
    ${private_dir}/prom_linked_list.c
    ${private_dir}/prom_linked_list_i.h
    ${private_dir}/prom_linked_list_t.h
    ${private_dir}/prom_log.h
    ${private_dir}/prom_map.c
    ${private_dir}/prom_map_i.h
    ${private_dir}/prom_map_t.h
    ${private_dir}/prom_metric.c
    ${private_dir}/prom_metric_formatter.c
    ${private_dir}/prom_metric_formatter_i.h
    ${private_dir}/prom_metric_formatter_t.h
    ${private_dir}/prom_metric_i.h
    ${private_dir}/prom_metric_sample.c
    ${private_dir}/prom_metric_sample_histogram.c
    ${private_dir}/prom_metric_sample_histogram_i.h
    ${private_dir}/prom_metric_sample_histogram_t.h
    ${private_dir}/prom_metric_sample_i.h
    ${private_dir}/prom_metric_sample_t.h
    ${private_dir}/prom_metric_t.h
    ${private_dir}/prom_process_fds.c
    ${private_dir}/prom_process_fds_i.h
    ${private_dir}/prom_process_fds_t.h
    ${private_dir}/prom_process_limits.c
    ${private_dir}/prom_process_limits_i.h
    ${private_dir}/prom_process_limits_t.h
    ${private_dir}/prom_process_stat.c
    ${private_dir}/prom_process_stat_i.h
    ${private_dir}/prom_process_stat_t.h
    ${private_dir}/prom_procfs_i.h
    ${private_dir}/prom_procfs_t.h
    ${private_dir}/prom_procfs.c
    ${private_dir}/prom_string_builder.c
    ${private_dir}/prom_string_builder_i.h
    ${private_dir}/prom_string_builder_t.h
)

include(FindThreads)

add_library(prom SHARED)

target_compile_options(prom PRIVATE "-Werror" "-Wuninitialized" "-Wall" "-Wno-unused-label" "-std=gnu11")
target_compile_options(prom PUBLIC "-Werror" "-Wuninitialized" "-Wall" "-Wno-unused-label" "-std=gnu11")

target_include_directories(
    prom
    PUBLIC ${public_dir}
    PRIVATE ${private_dir}
)

target_sources(
    prom
    PUBLIC ${public_files}
    PRIVATE ${private_files}
)

target_link_libraries(prom PUBLIC Threads::Threads)

if ($ENV{TEST})
    include(test/CMakeLists.txt)
endif()

set(CPACK_PACKAGE_NAME libprom-dev)
set(CPACK_GENERATOR TGZ;DEB)
set(CPACK_PACKAGE_VENDOR DigitalOcean)
set(CPACK_PACKAGE_VERSION_MAJOR ${MajorVersion})
set(CPACK_PACKAGE_VERSION_MINOR ${MinorVersion})
set(CPACK_PACKAGE_VERSION_PATCH ${PatchVersion})
set(CPACK_PACKAGE_DESCRIPTION_FILE ${CMAKE_CURRENT_SOURCE_DIR}/../README.md)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A prometheus client library")
set(CPACK_PACKAGE_HOMEPAGE_URL https://github.internal.digitalocean.com/timeseries/prometheus-client-c)

include(CPack)
include(GNUInstallDirs)
install(TARGETS prom ARCHIVE)
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom.h`

```c
/*
Copyright 2019 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom.h
 * @brief Include prom.h to include the entire public API
 * @mainpage Welcome to the documentation site for prometheus-client-c!
 * @tableofcontents
 * @section Introduction
 *
 * prometheus-client-c is a small suite of Prometheus client libraries targeted for the C programming language.
 * In this brief tutorial you will learn how to create and register metrics, update metric samples, and expose metrics
 * over HTTP.
 *
 * @section Creating-and-Registering-Metrics Creating and Registering Metrics
 *
 * prometheus-client-c supports the following metric types:
 *
 * * [Counter](https://prometheus.io/docs/concepts/metric_types/#counter)
 * * [Gauge](https://prometheus.io/docs/concepts/metric_types/#gauge)
 * * [Histogram](https://prometheus.io/docs/concepts/metric_types/#histogram)
 *
 * To get started using one of the metric types, declare the metric at file scope. For example:
 *
 * @code{.c}
 *
 * #incldue "prom.h"
 *
 * prom_counter_t *my_counter;
 *
 * @endcode
 *
 * Next, create a metric initialization function. You can create the metric and register it with the default metric
 * collector registry in one chain of functions. A metric collector is responsible for collecting metrics and returning
 * them. A metric collector registry is declared in global scope and contains metric collectors. More on this later...
 *
 * To create a metric and register it with the default metric collector registry in one shot, you may chain the metric
 * constructor into the prom_collector_registry_must_register_metric function. For example:
 *
 * @code{.c}
 *
 * void foo_metric_init(void) {
 *   my_counter = prom_collector_registry_must_register_metric(prom_counter_new("my_counter", "counts things", 0, NULL));
 * }
 *
 * @endcode
 *
 * The first argument to prom_counter_new is the counter name. The second argument is the counter description. The third
 * argument is the number of metric labels. In this case, we will only have one metric sample for this metric so we pass
 * 0 to specify that no labels will be used. The 4th argument is an array of strings storing the metric labels. Since we
 * have none, we pass NULL. A call to foo_metric_init within the program's main function will initialize the metrics
 * for the file we just created to the default prometheus metric collector registery called
 * PROM_COLLECTOR_REGISTRY_DEFAULT
 *
 * @section Updating-Metric-Sample-Values Updating Metric Sample Values
 *
 * Now that we have a metric configured for creation and registration, we can update our metric within any of the
 * functions of the file in which it was declared. For example:
 *
 * @code{.c}
 *
 * void my_lib_do_something(void) {
 *   printf("I did a really important thing!\n");
 *   prom_counter_inc(my_counter, NULL);
 * }
 * @endcode
 *
 * This function will increment the default metric sample for my_counter. Since we are not using metric labels, we pass
 * NULL as the second argument.
 *
 * @section Program-Initialization Program Initialization
 *
 * At the start of the program's main function you need to do two things:
 *
 * * Initialize the default metric collector registry:
 *
 * @code{.c}
 *
 * prom_collector_registry_default_init();
 *
 * @endcode
 *
 * * For each file containing prometheus metrics, call its corresponding metric initialization function
 *
 * @code{.c}
 *
 * foo_metric_init()
 *
 * @endcode
 *
 * After initialization is complete, you may proceed to do work and update your metrics.
 *
 * @section Metric-Exposition-Over-HTTP Metric Exposition Over HTTP
 *
 * @todo Describe how to use libpromhttp to expose metrics over HTTP
 *
 * @section Where-To-Go-From-Here Where to Go From Here?
 *
 * Take a look at the [Files](https://github.internal.digitalocean.com/pages/timeseries/prometheus-client-c/files.html)
 * tab in this documentation site for more information about the public API available to you. Also, you can take a look
 * at the examples directory at the
 * [Github repository](https://github.internal.digitalocean.com/timeseries/prometheus-client-c) for inspiration.
 */

#ifndef PROM_INCLUDED
#define PROM_INCLUDED

#include "prom_alloc.h"
#include "prom_collector.h"
#include "prom_collector_registry.h"
#include "prom_counter.h"
#include "prom_gauge.h"
#include "prom_histogram.h"
#include "prom_histogram_buckets.h"
#include "prom_linked_list.h"
#include "prom_map.h"
#include "prom_metric.h"
#include "prom_metric_sample.h"
#include "prom_metric_sample_histogram.h"

#endif //  PROM_INCLUDED
```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_alloc.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom_alloc.h
 * @brief memory management
 */

#ifndef PROM_ALLOC_H
#define PROM_ALLOC_H

#include <stdlib.h>
#include <string.h>

/**
 * @brief Redefine this macro if you wish to override it. The default value is malloc.
 */
#define prom_malloc malloc

/**
 * @brief Redefine this macro if you wish to override it. The default value is realloc.
 */
#define prom_realloc realloc

/**
 * @brief Redefine this macro if you wish to override it. The default value is strdup.
 */
#define prom_strdup strdup

/**
 * @brief Redefine this macro if you wish to override it. The default value is free.
 */
#define prom_free free

#endif  // PROM_ALLOC_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_collector.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef PROM_COLLECTOR_H
#define PROM_COLLECTOR_H

#include "prom_map.h"
#include "prom_metric.h"

/**
 * @file prom_collector.h
 * @brief A Prometheus collector returns a collection of metrics
 */

/**
 * @brief A prometheus collector calls collect to prepare metrics and return them to the registry to which it is
 * registered.
 */
typedef struct prom_collector prom_collector_t;

/**
 * @brief The function responsible for preparing metric data and returning metrics for a given collector.
 *
 * If you use the default collector registry, this should not concern you. If you are using a custom collector, you may
 * set this function on your collector to do additional work before returning the contained metrics.
 *
 * @param self The target prom_collector_t*
 * @return The prom_map_t* containing the collected metrics
 */
typedef prom_map_t *prom_collect_fn(prom_collector_t *self);

/**
 * @brief Create a collector
 * @param name The name of the collector. The name MUST NOT be default or process.
 * @return The constructed prom_collector_t*
 */
prom_collector_t *prom_collector_new(const char *name);

/**
 *@brief Construct a prom_collector_t* which includes the default process metrics
 * @param limits_path Pass NULL to discover the path to the /proc/[pid]/limits file associated with process ID assigned
 *                    by the host environment. Otherwise, pass a string to said path.
 * @param stat_path Pass NULL to discover the path to the /proc/[pid]/stat file associated with process ID assigned
 *                  by the host environment. Otherwise, pass a string to said path.
 * @return The constructed prom_collector_t*
 */
prom_collector_t *prom_collector_process_new(const char *limits_path, const char *stat_path);

/**
 * @brief Destroy a collector. You MUST set self to NULL after destruction.
 * @param self The target prom_collector_t*
 * @return A non-zero integer value upon failure.
 */
int prom_collector_destroy(prom_collector_t *self);

/**
 * @brief Frees a collector passed as a void pointer. You MUST set self to NULL after destruction.
 * @param gen The target prom_collector_t* represented as a void*
 */
void prom_collector_free_generic(void *gen);

/**
 * @brief Destroys a collector passed as a void pointer. You MUST set self to NULL after destruction.
 * @param gen The target prom_collector_t* represented as a void*
 * @return A non-zero integer value upon failure.
 */
int prom_collector_destroy_generic(void *gen);

/**
 * @brief Add a metric to a collector
 * @param self The target prom_collector_t*
 * @param metric the prom_metric_t* to add to the prom_collector_t* passed as self.
 * @return A non-zero integer value upon failure.
 */
int prom_collector_add_metric(prom_collector_t *self, prom_metric_t *metric);

/**
 * @brief The collect function is responsible for doing any work involving a set of metrics and then returning them
 *        for metric exposition.
 * @param self The target prom_collector_t*
 * @param fn The prom_collect_fn* which will be responsible for handling any metric collection operations before
 *           returning the collected metrics for exposition.
 * @return A non-zero integer value upon failure.
 */
int prom_collector_set_collect_fn(prom_collector_t *self, prom_collect_fn *fn);

#endif  // PROM_COLLECTOR_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_collector_registry.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom_collector_registry.h
 * @brief The collector registry registers collectors for metric exposition.
 */

#ifndef PROM_REGISTRY_H
#define PROM_REGISTRY_H

#include "prom_collector.h"
#include "prom_metric.h"

/**
 * @brief A prom_registry_t is responsible for registering metrics and briding them to the string exposition format
 */
typedef struct prom_collector_registry prom_collector_registry_t;

/**
 * @brief Initialize the default registry by calling prom_collector_registry_init within your program. You MUST NOT
 * modify this value.
 */
extern prom_collector_registry_t *PROM_COLLECTOR_REGISTRY_DEFAULT;

/**
 * @brief Initializes the default collector registry and enables metric collection on the executing process
 * @return A non-zero integer value upon failure
 */
int prom_collector_registry_default_init(void);

/**
 * @brief Constructs a prom_collector_registry_t*
 * @param name The name of the collector registry. It MUST NOT be default.
 * @return The constructed prom_collector_registry_t*
 */
prom_collector_registry_t *prom_collector_registry_new(const char *name);

/**
 * @brief Destroy a collector registry. You MUST set self to NULL after destruction.
 * @param self The target prom_collector_registry_t*
 * @return A non-zero integer value upon failure
 */
int prom_collector_registry_destroy(prom_collector_registry_t *self);

/**
 * @brief Enable process metrics on the given collector registry
 * @param self The target prom_collector_registry_t*
 * @return A non-zero integer value upon failure
 */
int prom_collector_registry_enable_process_metrics(prom_collector_registry_t *self);

/**
 * @brief Registers a metric with the default collector on PROM_DEFAULT_COLLECTOR_REGISTRY
 *
 * The metric to be registered MUST NOT already be registered with the given . If so, the program will
 * halt. It returns a prom_metric_t* to simplify metric creation and registration. Furthermore,
 * PROM_DEFAULT_COLLECTOR_REGISTRY must be registered via prom_collector_registry_default_init() prior to calling this
 * function. The metric will be added to the default registry's default collector.
 *
 * @param metric The metric to register on PROM_DEFAULT_COLLECTOR_REGISTRY*
 * @return The registered prom_metric_t*
 */
prom_metric_t *prom_collector_registry_must_register_metric(prom_metric_t *metric);

/**
 * @brief Registers a metric with the default collector on PROM_DEFAULT_COLLECTOR_REGISTRY. Returns an non-zero integer
 * value on failure.
 *
 * See prom_collector_registry_must_register_metric.
 *
 * @param metric The metric to register on PROM_DEFAULT_COLLECTOR_REGISTRY*
 * @return A non-zero integer value upon failure
 */
int prom_collector_registry_register_metric(prom_metric_t *metric);

/**
 * @brief Register a collector with the given registry. Returns a non-zero integer value on failure.
 * @param self The target prom_collector_registry_t*
 * @param collector The prom_collector_t* to register onto the prom_collector_registry_t* as self
 * @return A non-zero integer value upon failure
 */
int prom_collector_registry_register_collector(prom_collector_registry_t *self, prom_collector_t *collector);

/**
 * @brief Returns a string in the default metric exposition format. The string MUST be freed to avoid unnecessary heap
 * memory growth.
 *
 * Reference: https://prometheus.io/docs/instrumenting/exposition_formats/
 *
 * @param self The target prom_collector_registry_t*
 * @return The string int he default metric exposition format.
 */
const char *prom_collector_registry_bridge(prom_collector_registry_t *self);

/**
 *@brief Validates that the given metric name complies with the specification:
 *
 * Reference: https://prometheus.io/docs/concepts/data_model/#metric-names-and-labels
 *
 * Returns a non-zero integer value on failure.
 *
 * @param self The target prom_collector_registry_t*
 * @param metric_name The metric name to validate
 * @return A non-zero integer value upon failure
 */
int prom_collector_registry_validate_metric_name(prom_collector_registry_t *self, const char *metric_name);

#endif  // PROM_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_counter.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef PROM_COUNTER_H
#define PROM_COUNTER_H

#include <stdlib.h>

#include "prom_metric.h"

/**
 * @file prom_counter.h
 * @brief https://prometheus.io/docs/concepts/metric_types/#counter
 */

/**
 * @brief A prometheus counter.
 *
 * References
 * * See https://prometheus.io/docs/concepts/metric_types/#counter
 */
typedef prom_metric_t prom_counter_t;

/**
 * @brief Construct a prom_counter_t*
 * @param name The name of the metric
 * @param help The metric description
 * @param label_key_count The number of labels associated with the given metric. Pass 0 if the metric does not
 *                        require labels.
 * @param label_keys A collection of label keys. The number of keys MUST match the value passed as label_key_count. If
 *                   no labels are required, pass NULL. Otherwise, it may be convenient to pass this value as a
 *                   literal.
 * @return The constructed prom_counter_t*
 *
 * *Example*
 *
 *     // An example with labels
 *     prom_counter_new("foo", "foo is a counter with labels", 2, (const char**) { "one", "two" });
 *
 *     // An example without labels
 *     prom_counter_new("foo", "foo is a counter without labels", 0, NULL);
 */
prom_counter_t *prom_counter_new(const char *name, const char *help, size_t label_key_count, const char **label_keys);

/**
 * @brief Destroys a prom_counter_t*. You must set self to NULL after destruction. A non-zero integer value will be
 *        returned on failure.
 * @param self A prom_counter_t*
 * @return A non-zero integer value upon failure.
 */
int prom_counter_destroy(prom_counter_t *self);

/**
 * @brief Increment the prom_counter_t by 1. A non-zero integer value will be returned on failure.
 * @param self The target  prom_counter_t*
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the counter's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return A non-zero integer value upon failure.
 *
 * *Example*
 *
 *     // An example with labels
 *     prom_counter_inc(foo_counter, (const char**) { "bar", "bang" });
 **
 *     // An example without labels
 *     prom_counter_inc(foo_counter, NULL);
 */
int prom_counter_inc(prom_counter_t *self, const char **label_values);

/**
 * @brief Add the value to the prom_counter_t*. A non-zero integer value will be returned on failure.
 * @param self The target  prom_counter_t*
 * @param r_value The double to add to the prom_counter_t passed as self. The value MUST be greater than or equal to 0.
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the counter's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return A non-zero integer value upon failure.
 *
 * *Example*
 *
 *     // An example with labels
 *     prom_counter_add(foo_counter, 22, (const char**) { "bar", "bang" });
 *
 *     // An example without labels
 *     prom_counter_add(foo_counter, 22, NULL);
 */
int prom_counter_add(prom_counter_t *self, double r_value, const char **label_values);

#endif  // PROM_COUNTER_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_gauge.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom_gauge.h
 * @brief https://prometheus.io/docs/concepts/metric_types/#gauge
 */

#ifndef PROM_GAUGE_H
#define PROM_GAUGE_H

#include <stdlib.h>

#include "prom_metric.h"

/**
 * @brief A prometheus gauge.
 *
 * References
 * * See https://prometheus.io/docs/concepts/metric_types/#gauge
 */
typedef prom_metric_t prom_gauge_t;

/**
 * @brief Constructs a prom_gauge_t*
 * @param name The name of the metric
 * @param help The metric description
 * @param label_key_count The number of labels associated with the given metric. Pass 0 if the metric does not
 *                        require labels.
 * @param label_keys A collection of label keys. The number of keys MUST match the value passed as label_key_count. If
 *                   no labels are required, pass NULL. Otherwise, it may be convenient to pass this value as a
 *                   literal.
 * @return The constructed prom_guage_t*
 *
 *     // An example with labels
 *     prom_gauge_new("foo", "foo is a gauge with labels", 2, (const char**) { "one", "two" });
 *
 *     // An example without labels
 *     prom_gauge_new("foo", "foo is a gauge without labels", 0, NULL);
 */
prom_gauge_t *prom_gauge_new(const char *name, const char *help, size_t label_key_count, const char **label_keys);

/**
 * @brief Destroys a prom_gauge_t*. You must set self to NULL after destruction. A non-zero integer value will be
 *        returned on failure.
 * @param self The target prom_gauge_t*
 * @return A non-zero integer value upon failure
 */
int prom_gauge_destroy(prom_gauge_t *self);

/**
 * @brief Increment the prom_gauge_t* by 1.
 * @param self The target  prom_gauger_t*
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the gauge's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return A non-zero integer value upon failure
 * *Example*
 *
 *     // An example with labels
 *     prom_gauge_inc(foo_gauge, (const char**) { "bar", "bang" });
 *
 *     // An example without labels
 *     prom_gauge_inc(foo_gauge, NULL);
 */
int prom_gauge_inc(prom_gauge_t *self, const char **label_values);

/**
 * @brief Decrement the prom_gauge_t* by 1.
 * @param self The target  prom_gauger_t*
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the gauge's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return A non-zero integer value upon failure.
 * *Example*
 *
 *     // An example with labels
 *     prom_gauge_dec(foo_gauge, (const char**) { "bar", "bang" });
 *
 *     // An example without labels
 *     prom_gauge_dec(foo_gauge, NULL);
 */
int prom_gauge_dec(prom_gauge_t *self, const char **label_values);

/**
 * @brief Add the value to the prom_gauge_t*.
 * @param self The target prom_gauge_t*
 * @param r_value The double to add to the prom_gauge_t passed as self.
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the gauge's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return A non-zero integer value upon failure.
 *
 * *Example*
 *
 *     // An example with labels
 *     prom_gauge_add(foo_gauge 22, (const char**) { "bar", "bang" });
 *
 *     // An example without labels
 *     prom_gauge_add(foo_gauge, 22, NULL);
 */
int prom_gauge_add(prom_gauge_t *self, double r_value, const char **label_values);

/**
 * @brief Subtract the value to the prom_gauge. A non-zero integer value will be returned on failure.
 * @param self The target prom_gauge_t*
 * @param r_value The double to add to the prom_gauge_t passed as self.
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the gauge's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return A non-zero integer value upon failure.
 *
 * *Example*
 *
 *     // An example with labels
 *     prom_gauge_sub(foo_gauge 22, (const char**) { "bar", "bang" });
 *
 *     // An example without labels
 *     prom_gauge_sub(foo_gauge, 22, NULL);
 */
int prom_gauge_sub(prom_gauge_t *self, double r_value, const char **label_values);

/**
 * @brief Set the value for the prom_gauge_t*
 * @param self The target prom_gauge_t*
 * @param r_value The double to which the prom_gauge_t* passed as self will be set
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the gauge's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return A non-zero integer value upon failure.
 *
 * *Example*
 *
 *     // An example with labels
 *     prom_gauge_set(foo_gauge 22, (const char**) { "bar", "bang" });
 *
 *     // An example without labels
 *     prom_gauge_set(foo_gauge, 22, NULL);
 */
int prom_gauge_set(prom_gauge_t *self, double r_value, const char **label_values);

#endif  // PROM_GAUGE_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_histogram.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom_histogram.h
 * @brief https://prometheus.io/docs/concepts/metric_types/#histogram
 */

#ifndef PROM_HISTOGRAM_INCLUDED
#define PROM_HISTOGRAM_INCLUDED

#include <stdlib.h>

#include "prom_histogram_buckets.h"
#include "prom_metric.h"

/**
 * @brief A prometheus histogram.
 *
 * References
 * * See https://prometheus.io/docs/concepts/metric_types/#histogram
 */
typedef prom_metric_t prom_histogram_t;

/**
 *@brief Construct a prom_histogram_t*
 * @param name The name of the metric
 * @param help The metric description
 * @param buckets The prom_histogram_buckets_t*. See prom_histogram_buckets.h.
 * @param label_key_count is the number of labels associated with the given metric. Pass 0 if the metric does not
 *                        require labels.
 * @param label_keys A collection of label keys. The number of keys MUST match the value passed as label_key_count. If
 *                   no labels are required, pass NULL. Otherwise, it may be convenient to pass this value as a
 *                   literal.
 * @return The constructed prom_histogram_t*
 *
 * *Example*
 *
 *     // An example with labels
 *     prom_histogram_buckets_t* buckets = prom_histogram_buckets_linear(5.0, 5.0, 10);
 *     prom_histogram_new("foo", "foo is a counter with labels", buckets, 2, (const char**) { "one", "two" });
 *
 *     // An example without labels
 *     prom_histogram_buckets_t* buckets = prom_histogram_buckets_linear(5.0, 5.0, 10);
 *     prom_histogram_new("foo", "foo is a counter without labels", buckets, 0, NULL);
 */
prom_histogram_t *prom_histogram_new(const char *name, const char *help, prom_histogram_buckets_t *buckets,
                                     size_t label_key_count, const char **label_keys);

/**
 * @brief Destroy a prom_histogram_t*. self MUSTS be set to NULL after destruction. Returns a non-zero integer value
 *        upon failure.
 * @return Non-zero value upon failure.
 */
int prom_histogram_destroy(prom_histogram_t *self);

/**
 * @brief Observe the prom_histogram_t given the value and labells
 * @param self The target prom_histogram_t*
 * @param value The value to observe
 * @param label_keys A collection of label keys. The number of keys MUST match the value passed as label_key_count. If
 *                   no labels are required, pass NULL. Otherwise, it may be convenient to pass this value as a
 *                   literal.
 * @return Non-zero value upon failure
 */
int prom_histogram_observe(prom_histogram_t *self, double value, const char **label_values);

#endif  // PROM_HISTOGRAM_INCLUDED

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_histogram_buckets.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom_histogram_buckets.h
 * @brief https://prometheus.io/docs/concepts/metric_types/#histogram
 */

#include "stdlib.h"

#ifndef PROM_HISTOGRAM_BUCKETS_H
#define PROM_HISTOGRAM_BUCKETS_H

typedef struct prom_histogram_buckets {
  int count;                  /**< Number of buckets */
  const double *upper_bounds; /**< The bucket values */
} prom_histogram_buckets_t;

/**
 * @brief Construct a prom_histogram_buckets_t*
 * @param count The number of buckets
 * @param bucket The first bucket. A variable number of bucket values may be passed. This quantity MUST equal the value
 *               passed as count.
 * @return The constructed prom_histogram_buckets_t*
 */
prom_histogram_buckets_t *prom_histogram_buckets_new(size_t count, double bucket, ...);

/**
 * @brief the default histogram buckets: .005, .01, .025, .05, .1, .25, .5, 1, 2.5, 5, 10
 */
extern prom_histogram_buckets_t *prom_histogram_default_buckets;

/**
 *@brief Construct a linearly sized prom_histogram_buckets_t*
 * @param start The first inclusive upper bound
 * @param width The distance between each upper bound
 * @param count The total number of buckets. The final +Inf bucket is not counted and not included.
 * @return The constructed prom_histogram_buckets_t*
 */
prom_histogram_buckets_t *prom_histogram_buckets_linear(double start, double width, size_t count);

/**
 * @brief Construct an exponentially sized prom_histogram_buckets_t*
 * @param start The first inclusive upper bound. The value MUST be greater than 0.
 * @param factor The factor to apply to the previous upper bound to produce the next upper bound. The value MUST be
 *                greater than 1.
 * @param count The total number of buckets. The final +Inf bucket is not counted and not included. The value MUST be
 *              greater than or equal to 1
 * @return The constructed prom_histogram_buckets_t*
 */
prom_histogram_buckets_t *prom_histogram_buckets_exponential(double start, double factor, size_t count);

/**
 * @brief Destroy a prom_histogram_buckets_t*. Self MUST be set to NULL after destruction. Returns a non-zero integer
 *        value upon failure.
 * @param self The target prom_histogram_buckets_t*
 * @return Non-zero integer value upon failure
 */
int prom_histogram_buckets_destroy(prom_histogram_buckets_t *self);

/**
 * @brief Get the count of buckets
 * @param self The target prom_histogram_buckets_t*
 * @return The count of buckets
 */
size_t prom_histogram_buckets_count(prom_histogram_buckets_t *self);

#endif  // PROM_HISTOGRAM_BUCKETS_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_linked_list.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef PROM_LIST_H
#define PROM_LIST_H

#include <stdlib.h>

struct prom_linked_list;
/**
 * @brief Provides a generic linked list
 */
typedef struct prom_linked_list prom_linked_list_t;

#endif  // PROM_LIST_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_map.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef PROM_MAP_H
#define PROM_MAP_H

struct prom_map;
typedef struct prom_map prom_map_t;

struct prom_map_node;
typedef struct prom_map_node prom_map_node_t;

#endif  // PROM_MAP_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_metric.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom_metric.h
 * @brief Functions for retrieving metric samples from metrics given an ordered set of labels
 */

#ifndef PROM_METRIC_H
#define PROM_METRIC_H

#include "prom_metric_sample.h"
#include "prom_metric_sample_histogram.h"

struct prom_metric;
/**
 * @brief A prometheus metric.
 *
 * Reference: https://prometheus.io/docs/concepts/data_model
 */
typedef struct prom_metric prom_metric_t;

/**
 * @brief Returns a prom_metric_sample_t*. The order of label_values is significant.
 *
 * You may use this function to cache metric samples to avoid sample lookup. Metric samples are stored in a hash map
 * with O(1) lookups in average case; nonethless, caching metric samples and updating them directly might be
 * preferrable in performance-sensitive situations.
 *
 * @param self The target prom_metric_t*
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the counter's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return A prom_metric_sample_t*
 */
prom_metric_sample_t *prom_metric_sample_from_labels(prom_metric_t *self, const char **label_values);

/**
 * @brief Returns a prom_metric_sample_histogram_t*. The order of label_values is significant.
 *
 * You may use this function to cache metric samples to avoid sample lookup. Metric samples are stored in a hash map
 * with O(1) lookups in average case; nonethless, caching metric samples and updating them directly might be
 * preferrable in performance-sensitive situations.
 *
 * @param self The target prom_histogram_metric_t*
 * @param label_values The label values associated with the metric sample being updated. The number of labels must
 *                     match the value passed to label_key_count in the counter's constructor. If no label values are
 *                     necessary, pass NULL. Otherwise, It may be convenient to pass this value as a literal.
 * @return prom_metric_sample_histogram_t*
 */
prom_metric_sample_histogram_t *prom_metric_sample_histogram_from_labels(prom_metric_t *self,
                                                                         const char **label_values);

#endif  // PROM_METRIC_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_metric_sample.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom_metric_sample.h
 * @brief Functions for interfacting with metric samples directly
 */

#ifndef PROM_METRIC_SAMPLE_H
#define PROM_METRIC_SAMPLE_H

struct prom_metric_sample;
/**
 * @brief Contains the specific metric and value given the name and label set
 * Reference: https://prometheus.io/docs/concepts/data_model/#metric-names-and-labels
 */
typedef struct prom_metric_sample prom_metric_sample_t;

/**
 * @brief Add the r_value to the sample. The value must be greater than or equal to zero.
 * @param self The target prom_metric_sample_t*
 * @param r_value The double to add to prom_metric_sample_t* provided by self
 * @return Non-zero integer value upon failure
 */
int prom_metric_sample_add(prom_metric_sample_t *self, double r_value);

/**
 * @brief Subtract the r_value from the sample.
 *
 * This operation MUST be called a sample derived from a gauge metric.
 * @param self The target prom_metric_sample_t*
 * @param r_value The double to subtract from the prom_metric_sample_t* provided by self
 * @return Non-zero integer value upon failure
 */
int prom_metric_sample_sub(prom_metric_sample_t *self, double r_value);

/**
 * @brief Set the r_value of the sample.
 *
 * This operation MUST be called on a sample derived from a gauge metric.
 * @param self The target prom_metric_sample_t*
 * @param r_value The double which will be set to the prom_metric_sample_t* provided by self
 * @return Non-zero integer value upon failure
 */
int prom_metric_sample_set(prom_metric_sample_t *self, double r_value);

#endif  // PROM_METRIC_SAMPLE_H

```


---
### Archivo: `external/prometheus-client-c/prom/include/prom_metric_sample_histogram.h`

```c
/*
Copyright 2019-2020 DigitalOcean Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/**
 * @file prom_metric_sample_histogram.h
 * @brief Functions for interacting with histogram metric samples directly
 */

#ifndef PROM_METRIC_SAMPLE_HISOTGRAM_H
#define PROM_METRIC_SAMPLE_HISOTGRAM_H

struct prom_metric_sample_histogram;
/**
 * @brief A histogram metric sample
 */
typedef struct prom_metric_sample_histogram prom_metric_sample_histogram_t;

/**
 * @brief Observe the double for the given prom_metric_sample_histogram_observe_t
 * @param self The target prom_metric_sample_histogram_t*
 * @param value The value to observe.
 * @return Non-zero integer value upon failure
 */
int prom_metric_sample_histogram_observe(prom_metric_sample_histogram_t *self, double value);

#endif  // PROM_METRIC_SAMPLE_HISOTGRAM_H

```


---
### Archivo: `external/prometheus-client-c/prom/test/CMakeLists.txt`

```
enable_testing()
set(vendor_dir ${CMAKE_SOURCE_DIR}/../vendor)
set(test_dir ${CMAKE_SOURCE_DIR}/test)

# Unity Dependency
set(unity_version 2.4.3)
set(unity_output ${build_dir}/unity-v${unity_version}.tar.gz)
set(unity_package ${vendor_dir}/unity)
set(unity_src ${vendor_dir}/Unity-${unity_version}/src)

if(NOT EXISTS ${vendor_dir}/Unity-${unity_version})
    execute_process(
        COMMAND curl -L https://github.com/ThrowTheSwitch/Unity/archive/v${unity_version}.tar.gz
        COMMAND tar xzvf - -C ${vendor_dir}
    )
endif()

set(
    unity_files
    ${unity_src}/unity.c
    ${unity_src}/unity.h
    ${unity_src}/unity_internals.h
)

add_library(Unity SHARED)
target_include_directories(Unity PUBLIC ${unity_src})
target_sources(Unity PUBLIC ${unity_files})
target_compile_options(Unity PUBLIC "-D UNITY_INCLUDE_DOUBLE")

# promTest library exposes the headers in src for testing
add_library(promTest STATIC)
target_compile_options(promTest PUBLIC "-g3" "-Wall" "-DPROM_PROCESS_LIMITS_TEST_FILE_PATH=1" "-DPROM_ASSERT_ENABLE" "-DPROM_LOG_ENABLE")
target_include_directories(
    promTest
    PUBLIC ${public_dir} ${private_dir} ${test_dir}
)
target_sources(promTest PUBLIC ${public_files} ${private_files})

include(FindThreads)

function(register_test test_name)
    add_executable(${test_name} ${test_dir}/${test_name}.c ${test_dir}/prom_test_helpers.h ${test_dir}/prom_test_helpers.c)
    target_link_libraries(${test_name} Unity promTest Threads::Threads)
    add_test(
        NAME ${test_name}
        COMMAND ${test_name}
    )
endfunction()

foreach(
    t
    prom_gauge_test
    prom_collector_test
    prom_collector_registry_test
    prom_counter_test
    prom_linked_list_test
    prom_histogram_test
    prom_histogram_buckets_test
    prom_map_test
    prom_metric_formatter_test
    prom_metric_test
    prom_metric_sample_test
    prom_process_limits_test
    prom_string_builder_test
    prom_procfs_test

)
    register_test(${t})
endforeach()

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_collector_registry_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

static void prom_registry_test_init(void);
static void prom_registry_test_destroy(void);

prom_counter_t *test_counter;
prom_gauge_t *test_gauge;
prom_histogram_t *test_histogram;

void test_large_registry(void) {
  prom_collector_registry_default_init();
  for (int i = 0; i < 1000; i++) {
    char metric[6];
    sprintf(metric, "%d", i);
    prom_collector_registry_must_register_metric(prom_counter_new(metric, metric, 0, NULL));
  }
  prom_registry_test_destroy();
}

void test_prom_collector_registry_must_register(void) {
  prom_registry_test_init();
  int r = 0;

  const char *labels[] = {"foo"};
  r = prom_counter_inc(test_counter, labels);
  if (r) TEST_FAIL();
  r = prom_gauge_add(test_gauge, 2.0, labels);
  if (r) TEST_FAIL();

  prom_metric_sample_t *test_sample_a = prom_metric_sample_from_labels(test_counter, labels);
  prom_metric_sample_t *test_sample_b = prom_metric_sample_from_labels(test_gauge, labels);

  TEST_ASSERT_EQUAL_DOUBLE(1.0, test_sample_a->r_value);
  TEST_ASSERT_EQUAL_DOUBLE(2.0, test_sample_b->r_value);
  prom_registry_test_destroy();
}

void test_prom_collector_registry_bridge(void) {
  prom_registry_test_init();
  int r = 0;

  if (test_histogram == NULL) TEST_FAIL_MESSAGE("histogram failed to initialize");

  const char *labels[] = {"foo"};
  prom_counter_inc(test_counter, labels);
  prom_gauge_set(test_gauge, 2.0, labels);
  r = prom_histogram_observe(test_histogram, 3.0, NULL);
  if (r) TEST_FAIL();
  r = prom_histogram_observe(test_histogram, 7.0, NULL);
  if (r) TEST_FAIL();

  const char *result = prom_collector_registry_bridge(PROM_COLLECTOR_REGISTRY_DEFAULT);

  const char *expected[] = {
      "# HELP test_counter counter under test",
      "# TYPE test_counter counter",
      "test_counter{label=\"foo\"}",
      "HELP test_gauge gauge under test",
      "# TYPE test_gauge gauge",
      "test_gauge{label=\"foo\"}",
      "# HELP test_histogram histogram under test",
      "# TYPE test_histogram histogram\ntest_histogram{le=\"5.0\"}",
      "test_histogram{le=\"10.0\"}",
      "test_histogram{le=\"+Inf\"}",
      "test_histogram_count",
      "test_histogram_sum",
      "# HELP process_max_fds Maximum number of open file descriptors.",
      "# TYPE process_max_fds gauge",
      "process_max_fds",
      "# HELP process_virtual_memory_max_bytes Maximum amount of virtual memory available in bytes.",
      "# TYPE process_virtual_memory_max_bytes"};

  for (int i = 0; i < 17; i++) {
    TEST_ASSERT_NOT_NULL(strstr(result, expected[i]));
  }

  free((char *)result);
  result = NULL;

  prom_registry_test_destroy();
}

void test_prom_collector_registry_validate_metric_name(void) {
  prom_registry_test_init();

  TEST_ASSERT_EQUAL_INT(
      0, prom_collector_registry_validate_metric_name(PROM_COLLECTOR_REGISTRY_DEFAULT, "this_is_a_name09"));
  prom_registry_test_destroy();
}

void prom_registry_test_init(void) {
  prom_collector_registry_default_init();
  const char *label[] = {"label"};
  test_counter =
      prom_collector_registry_must_register_metric(prom_counter_new("test_counter", "counter under test", 1, label));
  test_gauge = prom_collector_registry_must_register_metric(prom_gauge_new("test_gauge", "gauge under test", 1, label));
  test_histogram = prom_collector_registry_must_register_metric(prom_histogram_new(
      "test_histogram", "histogram under test", prom_histogram_buckets_linear(5.0, 5.0, 2), 0, NULL));
}

static void prom_registry_test_destroy(void) {
  int r = 0;
  r = prom_collector_registry_destroy(PROM_COLLECTOR_REGISTRY_DEFAULT);
  PROM_COLLECTOR_REGISTRY_DEFAULT = NULL;
  if (r) TEST_FAIL_MESSAGE("failed to destroy PROM_COLLECTOR_REGISTRY_DEFAULT");
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  // RUN_TEST(test_prom_collector_registry_must_register);
  RUN_TEST(test_prom_collector_registry_bridge);
  // RUN_TEST(test_prom_collector_registry_validate_metric_name);
  // RUN_TEST(test_large_registry);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_collector_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_prom_collector(void) {
  prom_collector_t *collector = prom_collector_new("test");
  prom_counter_t *counter = prom_counter_new("test_counter", "counter under test", 0, NULL);
  prom_collector_add_metric(collector, counter);
  prom_map_t *m = collector->collect_fn(collector);
  TEST_ASSERT_EQUAL_INT(1, prom_map_size(m));
  prom_collector_destroy(collector);
  collector = NULL;
}

void test_prom_process_collector(void) {
  prom_collector_t *collector =
      prom_collector_process_new("/code/prom/test/fixtures/limits", "/code/prom/test/fixtures/stat");
  prom_map_t *m = collector->collect_fn(collector);
  TEST_ASSERT_EQUAL_INT(7, prom_map_size(m));
  prom_collector_destroy(collector);
  collector = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_collector);
  RUN_TEST(test_prom_process_collector);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_counter_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <assert.h>

#include "prom_test_helpers.h"

const char *sample_labels_a[] = {"f", "b"};
const char *sample_labels_b[] = {"o", "r"};

void test_counter_inc(void) {
  prom_counter_t *c = prom_counter_new("test_counter", "counter under test", 2, (const char *[]){"foo", "bar"});
  TEST_ASSERT(c);

  prom_counter_inc(c, sample_labels_a);

  prom_metric_sample_t *sample = prom_metric_sample_from_labels(c, sample_labels_a);
  TEST_ASSERT_EQUAL_DOUBLE(1.0, sample->r_value);

  sample = prom_metric_sample_from_labels(c, sample_labels_b);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, sample->r_value);

  prom_counter_destroy(c);
  c = NULL;
}

void test_counter_add(void) {
  prom_counter_t *c = prom_counter_new("test_counter", "counter under test", 2, (const char *[]){"foo", "bar"});
  TEST_ASSERT(c);

  prom_counter_add(c, 100000000.1, sample_labels_a);
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(c, sample_labels_a);
  TEST_ASSERT_EQUAL_DOUBLE(100000000.1, sample->r_value);

  sample = prom_metric_sample_from_labels(c, sample_labels_b);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, sample->r_value);

  prom_counter_destroy(c);
  c = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_counter_inc);
  RUN_TEST(test_counter_add);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_gauge_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

const char *sample_labels_a[] = {"f", "b"};
const char *sample_labels_b[] = {"o", "r"};

void test_gauge_inc(void) {
  prom_gauge_t *g = prom_gauge_new("test_gauge", "gauge under test", 2, (const char *[]){"foo", "bar"});
  TEST_ASSERT(g);

  prom_gauge_inc(g, sample_labels_a);

  prom_metric_sample_t *sample = prom_metric_sample_from_labels(g, sample_labels_a);

  TEST_ASSERT_EQUAL_DOUBLE(1.0, sample->r_value);

  sample = prom_metric_sample_from_labels(g, sample_labels_b);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, sample->r_value);

  prom_gauge_destroy(g);
  g = NULL;
}

void test_gauge_dec(void) {
  prom_gauge_t *g = prom_gauge_new("test_gauge", "gauge under test", 2, (const char *[]){"foo", "bar"});
  TEST_ASSERT(g);

  prom_gauge_dec(g, sample_labels_a);

  prom_metric_sample_t *sample = prom_metric_sample_from_labels(g, sample_labels_a);
  TEST_ASSERT_EQUAL_DOUBLE(-1.0, sample->r_value);

  sample = prom_metric_sample_from_labels(g, sample_labels_b);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, sample->r_value);

  prom_gauge_destroy(g);
  g = NULL;
}

void test_gauge_add(void) {
  prom_gauge_t *g = prom_gauge_new("test_gauge", "gauge under test", 2, (const char *[]){"foo", "bar"});
  TEST_ASSERT(g);

  prom_gauge_add(g, 100000000.1, sample_labels_a);

  prom_metric_sample_t *sample = prom_metric_sample_from_labels(g, sample_labels_a);
  TEST_ASSERT_EQUAL_DOUBLE(100000000.1, sample->r_value);

  sample = prom_metric_sample_from_labels(g, sample_labels_b);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, sample->r_value);

  prom_gauge_destroy(g);
  g = NULL;
}

void test_gauge_sub(void) {
  prom_gauge_t *g = prom_gauge_new("test_gauge", "gauge under test", 2, (const char *[]){"foo", "bar"});
  TEST_ASSERT(g);

  prom_gauge_sub(g, 100000000.1, sample_labels_a);

  prom_metric_sample_t *sample = prom_metric_sample_from_labels(g, sample_labels_a);
  TEST_ASSERT_EQUAL_DOUBLE(-100000000.1, sample->r_value);

  sample = prom_metric_sample_from_labels(g, sample_labels_b);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, sample->r_value);

  prom_gauge_destroy(g);
  g = NULL;
}

void test_gauge_set(void) {
  prom_gauge_t *g = prom_gauge_new("test_gauge", "gauge under test", 2, (const char *[]){"foo", "bar"});
  TEST_ASSERT(g);

  prom_gauge_set(g, 100000000.1, sample_labels_a);

  prom_metric_sample_t *sample = prom_metric_sample_from_labels(g, sample_labels_a);
  TEST_ASSERT_EQUAL_DOUBLE(100000000.1, sample->r_value);

  sample = prom_metric_sample_from_labels(g, sample_labels_b);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, sample->r_value);

  prom_gauge_destroy(g);
  g = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_gauge_inc);
  RUN_TEST(test_gauge_dec);
  RUN_TEST(test_gauge_add);
  RUN_TEST(test_gauge_sub);
  RUN_TEST(test_gauge_set);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_histogram_buckets_test.c`

```c

/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_prom_histogram_buckets_new(void) {
  prom_histogram_buckets_t *result = prom_histogram_buckets_new(3, 1.0, 2.0, 3.0);
  TEST_ASSERT_EQUAL_DOUBLE(1.0, result->upper_bounds[0]);
  TEST_ASSERT_EQUAL_DOUBLE(2.0, result->upper_bounds[1]);
  TEST_ASSERT_EQUAL_DOUBLE(3.0, result->upper_bounds[2]);
  TEST_ASSERT_EQUAL_INT(3, prom_histogram_buckets_count(result));
  prom_histogram_buckets_destroy(result);
  result = NULL;
}

void test_prom_histogram_buckets_linear(void) {
  prom_histogram_buckets_t *result = prom_histogram_buckets_linear(0.0, 1.5, 3);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, result->upper_bounds[0]);
  TEST_ASSERT_EQUAL_DOUBLE(1.5, result->upper_bounds[1]);
  TEST_ASSERT_EQUAL_DOUBLE(3.0, result->upper_bounds[2]);
  TEST_ASSERT_EQUAL_INT(3, prom_histogram_buckets_count(result));
  prom_histogram_buckets_destroy(result);
  result = NULL;
}

void test_prom_histogram_buckets_expontential(void) {
  prom_histogram_buckets_t *result = prom_histogram_buckets_exponential(1, 2, 3);
  TEST_ASSERT_EQUAL_DOUBLE(1.0, result->upper_bounds[0]);
  TEST_ASSERT_EQUAL_DOUBLE(2.0, result->upper_bounds[1]);
  TEST_ASSERT_EQUAL_DOUBLE(4.0, result->upper_bounds[2]);
  TEST_ASSERT_EQUAL_INT(3, prom_histogram_buckets_count(result));
  prom_histogram_buckets_destroy(result);
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_histogram_buckets_new);
  RUN_TEST(test_prom_histogram_buckets_linear);
  RUN_TEST(test_prom_histogram_buckets_expontential);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_histogram_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_prom_histogram(void) {
  prom_histogram_t *h =
      prom_histogram_new("test_histogram", "histogram under test", prom_histogram_buckets_linear(5.0, 5.0, 3), 0, NULL);

  prom_histogram_observe(h, 1.0, NULL);
  prom_histogram_observe(h, 7.0, NULL);
  prom_histogram_observe(h, 11.0, NULL);
  prom_histogram_observe(h, 22.0, NULL);

  prom_metric_sample_histogram_t *h_sample = prom_metric_sample_histogram_from_labels(h, NULL);

  // Test counter for each bucket
  char *bucket_key = prom_metric_sample_histogram_bucket_to_str(5.0);
  const char *l_value = prom_map_get(h_sample->l_values, bucket_key);
  prom_metric_sample_t *sample = (prom_metric_sample_t *)prom_map_get(h_sample->samples, l_value);
  TEST_ASSERT_EQUAL_STRING("test_histogram{le=\"5.0\"}", sample->l_value);
  TEST_ASSERT_EQUAL_DOUBLE(1.0, sample->r_value);
  free((char *)bucket_key);
  bucket_key = NULL;

  bucket_key = prom_metric_sample_histogram_bucket_to_str(10.0);
  l_value = prom_map_get(h_sample->l_values, bucket_key);
  sample = (prom_metric_sample_t *)prom_map_get(h_sample->samples, l_value);
  TEST_ASSERT_EQUAL_STRING("test_histogram{le=\"10.0\"}", sample->l_value);
  TEST_ASSERT_EQUAL_DOUBLE(2.0, sample->r_value);
  free((char *)bucket_key);
  bucket_key = NULL;

  bucket_key = prom_metric_sample_histogram_bucket_to_str(15.0);
  l_value = prom_map_get(h_sample->l_values, bucket_key);
  sample = (prom_metric_sample_t *)prom_map_get(h_sample->samples, l_value);
  TEST_ASSERT_EQUAL_STRING("test_histogram{le=\"15.0\"}", sample->l_value);
  TEST_ASSERT_EQUAL_DOUBLE(3.0, sample->r_value);
  free((char *)bucket_key);
  bucket_key = NULL;

  l_value = prom_map_get(h_sample->l_values, "+Inf");
  sample = (prom_metric_sample_t *)prom_map_get(h_sample->samples, l_value);
  TEST_ASSERT_EQUAL_STRING("test_histogram{le=\"+Inf\"}", sample->l_value);
  TEST_ASSERT_EQUAL_DOUBLE(4.0, sample->r_value);

  // Test total count. Should equal value ini +Inf
  l_value = prom_map_get(h_sample->l_values, "count");
  prom_metric_sample_t *sample_count = (prom_metric_sample_t *)prom_map_get(h_sample->samples, l_value);
  TEST_ASSERT_EQUAL_STRING("test_histogram_count", sample_count->l_value);
  TEST_ASSERT_EQUAL_DOUBLE(4.0, sample_count->r_value);

  // Test sum
  l_value = prom_map_get(h_sample->l_values, "sum");
  sample = (prom_metric_sample_t *)prom_map_get(h_sample->samples, l_value);
  TEST_ASSERT_EQUAL_STRING("test_histogram_sum", sample->l_value);
  TEST_ASSERT_EQUAL_DOUBLE(41.0, sample->r_value);

  prom_histogram_destroy(h);
  h = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_histogram);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_linked_list_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_prom_linked_list_append(void) {
  prom_linked_list_t *l = prom_linked_list_new();
  TEST_ASSERT(l);
  prom_linked_list_set_free_fn(l, prom_linked_list_no_op_free);

  char *one = "one";
  char *two = "two";
  char *three = "three";

  prom_linked_list_append(l, one);
  prom_linked_list_append(l, two);
  prom_linked_list_append(l, three);

  prom_linked_list_node_t *current_node = l->head;
  char *current_str = (char *)current_node->item;
  TEST_ASSERT_EQUAL_STRING("one", current_str);
  current_node = current_node->next;
  current_str = current_node->item;
  TEST_ASSERT_EQUAL_STRING("two", current_str);
  current_node = current_node->next;
  current_str = current_node->item;
  TEST_ASSERT_EQUAL_STRING("three", current_str);

  prom_linked_list_destroy(l);
  l = NULL;
}

void test_prom_linked_list_push(void) {
  prom_linked_list_t *l = prom_linked_list_new();
  TEST_ASSERT(l);
  prom_linked_list_set_free_fn(l, prom_linked_list_no_op_free);

  char *one = "one";
  char *two = "two";
  char *three = "three";

  prom_linked_list_push(l, one);
  prom_linked_list_push(l, two);
  prom_linked_list_push(l, three);

  prom_linked_list_node_t *current_node = l->head;
  char *current_str = (char *)current_node->item;
  TEST_ASSERT_EQUAL_STRING("three", current_str);
  current_node = current_node->next;
  current_str = current_node->item;
  TEST_ASSERT_EQUAL_STRING("two", current_str);
  current_node = current_node->next;
  current_str = current_node->item;
  TEST_ASSERT_EQUAL_STRING("one", current_str);

  prom_linked_list_destroy(l);
  l = NULL;
}

void test_prom_linked_list_remove(void) {
  auto prom_linked_list_compare_t compare_fn(void *item_a, void *item_b) {
    const char *str_a = (const char *)item_a;
    const char *str_b = (const char *)item_b;
    return strcmp(str_a, str_b);
  }

  prom_linked_list_t *list = prom_linked_list_new();
  prom_linked_list_set_free_fn(list, prom_linked_list_no_op_free);
  prom_linked_list_set_compare_fn(list, compare_fn);

  prom_linked_list_append(list, "node_a");
  prom_linked_list_append(list, "node_b");
  prom_linked_list_append(list, "node_c");

  prom_linked_list_remove(list, "node_b");
  const char *result_a = list->head->item;
  TEST_ASSERT_EQUAL_STRING("node_a", result_a);
  const char *result_c = list->head->next->item;
  TEST_ASSERT_EQUAL_STRING("node_c", result_c);

  prom_linked_list_destroy(list);
  list = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_linked_list_append);
  RUN_TEST(test_prom_linked_list_push);
  RUN_TEST(test_prom_linked_list_remove);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_map_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_prom_map(void) {
  prom_map_t *map = prom_map_new();
  prom_map_set(map, "foo", "bar");
  prom_map_set(map, "bing", "bang");
  TEST_ASSERT_EQUAL_STRING("bar", (const char *)prom_map_get(map, "foo"));
  TEST_ASSERT_EQUAL_STRING("bang", (const char *)prom_map_get(map, "bing"));
  TEST_ASSERT_NULL(prom_map_get(map, "nope"));
  TEST_ASSERT_EQUAL_INT(2, prom_map_size(map));

  for (prom_linked_list_node_t *current_node = map->keys->head; current_node != NULL;
       current_node = current_node->next) {
    const char *key = (const char *)current_node->item;

    const char *expected;
    if (strcmp(key, "foo") == 0) {
      expected = "bar";
    } else if (strcmp(key, "bing") == 0) {
      expected = "bang";
    }

    const char *result = prom_map_get(map, key);

    TEST_ASSERT_EQUAL_STRING(expected, result);
  }

  prom_map_destroy(map);
  map = NULL;
}

void test_prom_map_when_large(void) {
  prom_map_t *map = prom_map_new();
  prom_map_set_free_value_fn(map, free);

  // Ensure each inserted key and value are present
  for (int i = 1; i <= 10000; i++) {
    char buf[4];
    sprintf(buf, "%d", i);
    const char *k = (const char *)buf;
    int *set = malloc(sizeof(int));
    *set = i;
    prom_map_set(map, k, (void *)set);
    TEST_ASSERT_EQUAL_INT(i, *((int *)prom_map_get(map, k)));
  }

  // Update one of the keys
  int *at_50 = malloc(sizeof(int));
  *at_50 = 5000;
  prom_map_set(map, "50", (void *)at_50);
  TEST_ASSERT_EQUAL_INT(5000, *((int *)prom_map_get(map, "50")));

  // Ensure each key and value is correct
  for (int i = 1; i <= 10000; i++) {
    char buf[5];
    sprintf(buf, "%d", i);
    const char *k = (const char *)buf;
    int actual = *((int *)prom_map_get(map, k));
    if (i == 50) {
      TEST_ASSERT_EQUAL_INT(5000, actual);
    } else {
      TEST_ASSERT_EQUAL_INT(i, actual);
    }
  }

  // Ensure the size and max_size are correct
  TEST_ASSERT_EQUAL_INT(10000, map->size);
  TEST_ASSERT_EQUAL_INT(32768, map->max_size);

  prom_map_destroy(map);
  map = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_map);
  RUN_TEST(test_prom_map_when_large);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_metric_formatter_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_prom_metric_formatter_load_l_value(void) {
  prom_metric_formatter_t *mf = prom_metric_formatter_new();
  const char *keys[] = {"foo", "bar", "bing"};
  const char *values[] = {"one", "two", "three"};
  prom_metric_formatter_load_l_value(mf, "test", NULL, 3, keys, values);
  char *actual = prom_metric_formatter_dump(mf);
  char *expected = "test{foo=\"one\",bar=\"two\",bing=\"three\"}";
  TEST_ASSERT_NOT_NULL(strstr(actual, expected));

  free(actual);
  actual = NULL;
  prom_metric_formatter_destroy(mf);
  mf = NULL;
}

void test_prom_metric_formatter_load_sample(void) {
  prom_metric_formatter_t *mf = prom_metric_formatter_new();
  const char *l_value = "test{foo=\"one\",bar=\"two\",bing=\"three\"}";
  prom_metric_sample_t *sample = prom_metric_sample_new(PROM_COUNTER, l_value, 22.2);
  prom_metric_formatter_load_sample(mf, sample);
  char *actual = prom_metric_formatter_dump(mf);
  char *expected = "test{foo=\"one\",bar=\"two\",bing=\"three\"}";
  TEST_ASSERT_NOT_NULL(strstr(actual, expected));

  free(actual);
  actual = NULL;
  prom_metric_sample_destroy(sample);
  prom_metric_formatter_destroy(mf);
  mf = NULL;
}

void test_prom_metric_formatter_load_metric(void) {
  prom_metric_formatter_t *mf = prom_metric_formatter_new();
  const char *counter_keys[] = {"foo", "bar"};
  const char *sample_a[] = {"f", "b"};
  const char *sample_b[] = {"o", "r"};
  prom_metric_t *m = prom_metric_new(PROM_COUNTER, "test_counter", "counter under test", 2, counter_keys);
  prom_metric_sample_t *s_a = prom_metric_sample_from_labels(m, sample_a);
  prom_metric_sample_add(s_a, 2.3);
  prom_metric_sample_t *s_b = prom_metric_sample_from_labels(m, sample_b);
  prom_metric_sample_add(s_b, 4.6);
  prom_metric_formatter_load_metric(mf, m);
  const char *result = prom_metric_formatter_dump(mf);

  char *substr =
      "# HELP test_counter counter under test\n# TYPE test_counter counter\ntest_counter{foo=\"f\",bar=\"b\"}";

  TEST_ASSERT_NOT_NULL(strstr(result, substr));

  substr = "\ntest_counter{foo=\"o\",bar=\"r\"}";
  TEST_ASSERT_NOT_NULL(strstr(result, substr));

  free((char *)result);
  result = NULL;
  prom_metric_destroy(m);
  m = NULL;
  prom_metric_formatter_destroy(mf);
  mf = NULL;
}

void test_prom_metric_formatter_load_metrics(void) {
  int r = 0;

  prom_metric_formatter_t *mf = prom_metric_formatter_new();
  const char *counter_keys[] = {};
  prom_collector_registry_default_init();
  prom_metric_t *m_a = prom_metric_new(PROM_COUNTER, "test_counter_a", "counter under test", 0, counter_keys);
  prom_metric_t *m_b = prom_metric_new(PROM_COUNTER, "test_counter_b", "counter under test", 0, counter_keys);
  prom_metric_sample_t *s_a = prom_metric_sample_from_labels(m_a, counter_keys);
  prom_metric_sample_add(s_a, 2.3);
  prom_metric_sample_t *s_b = prom_metric_sample_from_labels(m_b, counter_keys);
  prom_metric_sample_add(s_b, 4.6);
  prom_collector_registry_register_metric(m_a);
  prom_collector_registry_register_metric(m_b);

  prom_metric_formatter_load_metrics(mf, PROM_COLLECTOR_REGISTRY_DEFAULT->collectors);

  const char *result = prom_metric_formatter_dump(mf);
  const char *expected[] = {
      "# HELP test_counter_a counter under test",
      "# TYPE test_counter_a counter",
      "test_counter_a",
      "# HELP test_counter_b counter under test",
      "# TYPE test_counter_b counter",
      "test_counter_b",
      "# HELP process_max_fds Maximum number of open file descriptors.",
      "# TYPE process_max_fds gauge",
      "process_max_fds 1048576",
      "# HELP process_virtual_memory_max_bytes Maximum amount of virtual memory available in bytes.",
      "# TYPE process_virtual_memory_max_bytes gauge",
      "process_virtual_memory_max_bytes -1"};

  for (int i = 0; i < 12; i++) {
    TEST_ASSERT_NOT_NULL(strstr(result, expected[i]));
  }

  free((char *)result);
  result = NULL;

  r = prom_metric_formatter_destroy(mf);
  if (r) {
    TEST_FAIL_MESSAGE("Failed to destroy metric formatter");
  }
  mf = NULL;
  r = prom_collector_registry_destroy(PROM_COLLECTOR_REGISTRY_DEFAULT);
  if (r) {
    TEST_FAIL_MESSAGE("Failed to destroy default collector registry");
  }
  PROM_COLLECTOR_REGISTRY_DEFAULT = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_metric_formatter_load_l_value);
  RUN_TEST(test_prom_metric_formatter_load_sample);
  RUN_TEST(test_prom_metric_formatter_load_metric);
  RUN_TEST(test_prom_metric_formatter_load_metrics);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_metric_sample_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

const char *l_value = "test{foo=\"bar\"}";

void test_prom_metric_sample_add(void) {
  prom_metric_sample_t *s = prom_metric_sample_new(PROM_COUNTER, l_value, 0.0);
  TEST_ASSERT(s);

  prom_metric_sample_add(s, 2.6);
  TEST_ASSERT_EQUAL_DOUBLE(2.6, s->r_value);

  prom_metric_sample_add(s, 29.9);
  TEST_ASSERT_EQUAL_DOUBLE(32.5, s->r_value);

  prom_metric_sample_add(s, 1000001.125);
  TEST_ASSERT_EQUAL_DOUBLE(1000033.625, s->r_value);

  prom_metric_sample_destroy(s);
  s = NULL;
}

void test_prom_metric_sample_sub(void) {
  prom_metric_sample_t *s = prom_metric_sample_new(PROM_GAUGE, l_value, 100.1145321);
  TEST_ASSERT(s);

  prom_metric_sample_sub(s, 99.91);
  TEST_ASSERT_EQUAL_DOUBLE(0.20453210000000865, s->r_value);

  prom_metric_sample_sub(s, 0.20453210000000865);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, s->r_value);

  prom_metric_sample_destroy(s);
  s = NULL;
}

void test_prom_metric_set(void) {
  prom_metric_sample_t *s = prom_metric_sample_new(PROM_GAUGE, l_value, 100.1145321);
  TEST_ASSERT(s);

  prom_metric_sample_set(s, 99.91);
  TEST_ASSERT_EQUAL_DOUBLE(99.91, s->r_value);

  prom_metric_sample_set(s, 0.20453210000000865);
  TEST_ASSERT_EQUAL_DOUBLE(0.20453210000000865, s->r_value);

  prom_metric_sample_destroy(s);
  s = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_metric_sample_add);
  RUN_TEST(test_prom_metric_sample_sub);
  RUN_TEST(test_prom_metric_set);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_metric_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_metric_with_no_labels(void) {
  prom_metric_t *metric = prom_metric_new(PROM_GAUGE, "test_counter", "counter under test", 0, NULL);
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(metric, NULL);
  prom_metric_sample_set(sample, 1.0);
  sample = prom_metric_sample_from_labels(metric, NULL);
  TEST_ASSERT_EQUAL_DOUBLE(1.0, (_Atomic double)sample->r_value);
  prom_metric_destroy(metric);
  metric = NULL;
}

void test_metric_sample_from_labels(void) {
  prom_metric_t *metric = prom_metric_new(PROM_GAUGE, "test_metric", "test counter", 2, (const char *[]){"foo", "bar"});
  const char *values[] = {"bing", "bang"};
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(metric, values);
  prom_metric_sample_set(sample, 1.0);
  sample = prom_metric_sample_from_labels(metric, values);
  TEST_ASSERT_EQUAL_DOUBLE(1.0, (_Atomic double)sample->r_value);
  prom_metric_destroy(metric);
  metric = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_metric_with_no_labels);
  RUN_TEST(test_metric_sample_from_labels);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_process_limits_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "prom_map_i.h"
#include "prom_process_limits_i.h"
#include "prom_process_limits_t.h"
#include "unity.h"

const char *path = "/code/prom/test/fixtures/limits";

void test_prom_process_limits_file_parsing(void) {
  prom_process_limits_file_t *f = prom_process_limits_file_new(path);
  char *result = strstr(f->buf, "Max realtime timeout");
  TEST_ASSERT_NOT_NULL(result);

  prom_map_t *m = prom_process_limits(f);
  if (!m) TEST_FAIL();

  TEST_ASSERT_EQUAL_INT(16, prom_map_size(m));

  prom_process_limits_row_t *row = (prom_process_limits_row_t *)prom_map_get(m, "Max cpu time");
  if (!row) TEST_FAIL();
  TEST_ASSERT_EQUAL_INT(-1, row->soft);
  TEST_ASSERT_EQUAL_INT(-1, row->hard);
  TEST_ASSERT_EQUAL_STRING("Max cpu time", row->limit);
  TEST_ASSERT_EQUAL_STRING("seconds", row->units);

  row = (prom_process_limits_row_t *)prom_map_get(m, "Max file size");
  TEST_ASSERT_EQUAL_INT(-1, row->soft);
  TEST_ASSERT_EQUAL_INT(-1, row->hard);
  TEST_ASSERT_EQUAL_STRING("Max file size", row->limit);
  TEST_ASSERT_EQUAL_STRING("bytes", row->units);

  row = (prom_process_limits_row_t *)prom_map_get(m, "Max data size");
  TEST_ASSERT_EQUAL_INT(-1, row->soft);
  TEST_ASSERT_EQUAL_INT(-1, row->hard);
  TEST_ASSERT_EQUAL_STRING("Max data size", row->limit);
  TEST_ASSERT_EQUAL_STRING("bytes", row->units);

  row = (prom_process_limits_row_t *)prom_map_get(m, "Max stack size");
  TEST_ASSERT_EQUAL_INT(8388608, row->soft);
  TEST_ASSERT_EQUAL_INT(-1, row->hard);
  TEST_ASSERT_EQUAL_STRING("Max stack size", row->limit);
  TEST_ASSERT_EQUAL_STRING("bytes", row->units);

  row = (prom_process_limits_row_t *)prom_map_get(m, "Max processes");
  TEST_ASSERT_EQUAL_INT(-1, row->soft);
  TEST_ASSERT_EQUAL_INT(-1, row->hard);
  TEST_ASSERT_EQUAL_STRING("Max processes", row->limit);
  TEST_ASSERT_EQUAL_STRING("processes", row->units);

  row = (prom_process_limits_row_t *)prom_map_get(m, "Max pending signals");
  TEST_ASSERT_EQUAL_INT(23701, row->soft);
  TEST_ASSERT_EQUAL_INT(23701, row->hard);
  TEST_ASSERT_EQUAL_STRING("Max pending signals", row->limit);
  TEST_ASSERT_EQUAL_STRING("signals", row->units);

  prom_map_destroy(m);
  m = NULL;
  prom_process_limits_file_destroy(f);
  f = NULL;
}

void test_prom_process_limits_rdp_next_token(void) {
  prom_process_limits_file_t f = {.size = 4, .index = 0, .buf = " \t!"};
  prom_process_limits_file_t *fp = &f;
  prom_process_limits_rdp_next_token(fp);

  TEST_ASSERT_EQUAL_INT(2, fp->index);
  TEST_ASSERT_EQUAL_INT('!', fp->buf[fp->index]);
}

void test_prom_process_limits_rdp_match(void) {
  prom_process_limits_file_t f = {.size = 4, .index = 0, .buf = "foo"};
  prom_process_limits_file_t *fp = &f;

  TEST_ASSERT_TRUE(prom_process_limits_rdp_match(fp, "foo"));
}

void test_prom_process_limits_rdp_hard_limit(void) {
  // Test unlimited value
  prom_process_limits_file_t f = {.size = 13, .index = 0, .buf = "unlimited   "};
  prom_process_limits_file_t *fp = &f;

  prom_process_limits_current_row_t *cr = prom_process_limits_current_row_new();
  prom_map_t *m = prom_map_new();

  TEST_ASSERT_TRUE(prom_process_limits_rdp_hard_limit(fp, m, cr));
  TEST_ASSERT_EQUAL_INT(-1, cr->hard);

  prom_process_limits_current_row_clear(cr);

  // Test int value
  fp->buf = "123  ";
  fp->size = 6;
  fp->index = 0;

  TEST_ASSERT_TRUE(prom_process_limits_rdp_hard_limit(fp, m, cr));
  TEST_ASSERT_EQUAL_INT(123, cr->hard);

  prom_map_destroy(m);
  m = NULL;
  prom_process_limits_current_row_destroy(cr);
  cr = NULL;
}

void test_prom_process_limits_rdp_word(void) {
  // Test unlimited value
  prom_process_limits_file_t f = {.size = 13, .index = 0, .buf = "unlimited   "};
  prom_process_limits_file_t *fp = &f;

  prom_process_limits_current_row_t *cr = prom_process_limits_current_row_new();
  prom_map_t *m = prom_map_new();

  TEST_ASSERT_TRUE(prom_process_limits_rdp_word(fp, m, cr));
  TEST_ASSERT_EQUAL_INT(9, fp->index);

  prom_map_destroy(m);
  m = NULL;
  prom_process_limits_current_row_destroy(cr);
  cr = NULL;
}

void test_prom_process_limits_rdp_word_and_space(void) {
  prom_process_limits_file_t f = {.size = 8, .index = 0, .buf = "foo bar"};
  prom_process_limits_file_t *fp = &f;

  prom_process_limits_current_row_t *cr = prom_process_limits_current_row_new();
  prom_map_t *m = prom_map_new();

  TEST_ASSERT_TRUE(prom_process_limits_rdp_word_and_space(fp, m, cr));
  TEST_ASSERT_EQUAL_INT(4, fp->index);
  TEST_ASSERT_EQUAL_INT('b', fp->buf[fp->index]);

  prom_map_destroy(m);
  m = NULL;
  prom_process_limits_current_row_destroy(cr);
  cr = NULL;
}

void test_prom_process_limits_rdp_limit(void) {
  prom_process_limits_file_t f = {.size = 16, .index = 0, .buf = "Max cpu time   "};
  prom_process_limits_file_t *fp = &f;

  prom_process_limits_current_row_t *cr = prom_process_limits_current_row_new();
  prom_map_t *m = prom_map_new();

  TEST_ASSERT_TRUE(prom_process_limits_rdp_limit(fp, m, cr));
  TEST_ASSERT_EQUAL_INT(12, fp->index);
  TEST_ASSERT_EQUAL_INT(' ', fp->buf[fp->index]);
  TEST_ASSERT_EQUAL_STRING("Max cpu time", cr->limit);

  prom_map_destroy(m);
  m = NULL;
  prom_process_limits_current_row_destroy(cr);
  cr = NULL;
}

void test_prom_process_limits_rdp_letter(void) {
  prom_process_limits_file_t f = {.size = 4, .index = 0, .buf = "foo"};
  prom_process_limits_file_t *fp = &f;

  prom_process_limits_current_row_t *cr = prom_process_limits_current_row_new();
  prom_map_t *m = prom_map_new();

  TEST_ASSERT_TRUE(prom_process_limits_rdp_letter(fp, m, cr));

  fp->size = 1;
  fp->index = 0;
  fp->buf = "";

  TEST_ASSERT_FALSE(prom_process_limits_rdp_letter(fp, m, cr));

  fp->size = 2;
  fp->index = 0;
  fp->buf = "2";

  TEST_ASSERT_FALSE(prom_process_limits_rdp_letter(fp, m, cr));

  prom_map_destroy(m);
  m = NULL;
  prom_process_limits_current_row_destroy(cr);
  cr = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_process_limits_rdp_next_token);
  RUN_TEST(test_prom_process_limits_rdp_match);
  RUN_TEST(test_prom_process_limits_rdp_hard_limit);
  RUN_TEST(test_prom_process_limits_rdp_word);
  RUN_TEST(test_prom_process_limits_rdp_word_and_space);
  RUN_TEST(test_prom_process_limits_rdp_limit);
  RUN_TEST(test_prom_process_limits_rdp_letter);

  RUN_TEST(test_prom_process_limits_file_parsing);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_procfs_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_prom_procfs_buf(void) {
  prom_procfs_buf_t *buf = prom_procfs_buf_new("/proc/1/limits");
  TEST_ASSERT_NOT_NULL(buf);
  TEST_ASSERT_NOT_NULL(strstr(buf->buf, "Max realtime timeout"));
  prom_procfs_buf_destroy(buf);
  buf = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_procfs_buf);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_string_builder_test.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

void test_prom_string_builder_add_str(void) {
  prom_string_builder_t *sb = prom_string_builder_new();
  prom_string_builder_add_str(sb, "fooooooooooooooooooooooooooooooooo");
  prom_string_builder_add_str(sb, " baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar");
  TEST_ASSERT_EQUAL_STRING(prom_string_builder_str(sb),
                           "fooooooooooooooooooooooooooooooooo baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar");

  prom_string_builder_destroy(sb);
  sb = NULL;
}

void test_prom_string_builder_add_char(void) {
  prom_string_builder_t *sb = prom_string_builder_new();
  const char *foobar = "foo bar";
  for (int i = 0; i < strlen(foobar); i++) {
    prom_string_builder_add_char(sb, foobar[i]);
  }
  TEST_ASSERT_EQUAL_STRING(prom_string_builder_str(sb), "foo bar");

  prom_string_builder_destroy(sb);
  sb = NULL;
}

void test_prom_string_builder_dump(void) {
  prom_string_builder_t *sb = prom_string_builder_new();
  const char *original = "foo bar";
  prom_string_builder_add_str(sb, original);
  const char *result = prom_string_builder_dump(sb);
  prom_string_builder_clear(sb);
  TEST_ASSERT(original != result);
  TEST_ASSERT_EQUAL_STRING(original, result);

  prom_string_builder_destroy(sb);
  free((char *)result);
  result = NULL;
  sb = NULL;
}

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_prom_string_builder_add_str);
  RUN_TEST(test_prom_string_builder_add_char);
  RUN_TEST(test_prom_string_builder_dump);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_test_helpers.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_test_helpers.h"

```


---
### Archivo: `external/prometheus-client-c/prom/test/prom_test_helpers.h`

```c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "prom.h"
#include "prom_collector_registry_t.h"
#include "prom_collector_t.h"
#include "prom_linked_list_i.h"
#include "prom_linked_list_t.h"
#include "prom_map_i.h"
#include "prom_map_t.h"
#include "prom_metric_formatter_i.h"
#include "prom_metric_formatter_t.h"
#include "prom_metric_i.h"
#include "prom_metric_sample_histogram_i.h"
#include "prom_metric_sample_histogram_t.h"
#include "prom_metric_sample_i.h"
#include "prom_metric_sample_t.h"
#include "prom_metric_t.h"
#include "prom_process_fds_i.h"
#include "prom_process_fds_t.h"
#include "prom_process_limits_i.h"
#include "prom_process_limits_t.h"
#include "prom_process_stat_i.h"
#include "prom_process_stat_t.h"
#include "prom_procfs_i.h"
#include "prom_procfs_t.h"
#include "prom_string_builder_i.h"
#include "prom_string_builder_t.h"
#include "unity.h"

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_assert.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <assert.h>

#ifndef PROM_ASSERT_H
#define PROM_ASSERT_H

#ifdef PROM_ASSERT_ENABLE
#define PROM_ASSERT(i) assert(i);
#else
#define PROM_ASSERT(i)
#endif  // PROM_TEST

#endif  // PROM_ASSERT_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_collector.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <unistd.h>

// Public
#include "prom_alloc.h"
#include "prom_collector.h"
#include "prom_collector_registry.h"

// Private
#include "prom_assert.h"
#include "prom_collector_t.h"
#include "prom_log.h"
#include "prom_map_i.h"
#include "prom_metric_i.h"
#include "prom_process_fds_i.h"
#include "prom_process_fds_t.h"
#include "prom_process_limits_i.h"
#include "prom_process_limits_t.h"
#include "prom_process_stat_i.h"
#include "prom_process_stat_t.h"
#include "prom_string_builder_i.h"

prom_map_t *prom_collector_default_collect(prom_collector_t *self) { return self->metrics; }

prom_collector_t *prom_collector_new(const char *name) {
  int r = 0;
  prom_collector_t *self = (prom_collector_t *)prom_malloc(sizeof(prom_collector_t));
  self->name = prom_strdup(name);
  self->metrics = prom_map_new();
  if (self->metrics == NULL) {
    prom_collector_destroy(self);
    return NULL;
  }
  r = prom_map_set_free_value_fn(self->metrics, &prom_metric_free_generic);
  if (r) {
    prom_collector_destroy(self);
    return NULL;
  }
  self->collect_fn = &prom_collector_default_collect;
  self->string_builder = prom_string_builder_new();
  if (self->string_builder == NULL) {
    prom_collector_destroy(self);
    return NULL;
  }
  self->proc_limits_file_path = NULL;
  self->proc_stat_file_path = NULL;
  return self;
}

int prom_collector_destroy(prom_collector_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;

  int r = 0;
  int ret = 0;

  r = prom_map_destroy(self->metrics);
  if (r) ret = r;
  self->metrics = NULL;

  r = prom_string_builder_destroy(self->string_builder);
  if (r) ret = r;
  self->string_builder = NULL;

  prom_free((char *)self->name);
  self->name = NULL;
  prom_free(self);
  self = NULL;

  return ret;
}

int prom_collector_destroy_generic(void *gen) {
  int r = 0;
  prom_collector_t *self = (prom_collector_t *)gen;
  r = prom_collector_destroy(self);
  self = NULL;
  return r;
}

void prom_collector_free_generic(void *gen) {
  prom_collector_t *self = (prom_collector_t *)gen;
  prom_collector_destroy(self);
}

int prom_collector_set_collect_fn(prom_collector_t *self, prom_collect_fn *fn) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  self->collect_fn = fn;
  return 0;
}

int prom_collector_add_metric(prom_collector_t *self, prom_metric_t *metric) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (prom_map_get(self->metrics, metric->name) != NULL) {
    PROM_LOG("metric already found in collector");
    return 1;
  }
  return prom_map_set(self->metrics, metric->name, metric);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Process Collector

prom_map_t *prom_collector_process_collect(prom_collector_t *self);

prom_collector_t *prom_collector_process_new(const char *limits_path, const char *stat_path) {
  prom_collector_t *self = prom_collector_new("process");
  PROM_ASSERT(self != NULL);
  if (self == NULL) return NULL;

  int r = 0;

  self->proc_limits_file_path = limits_path;
  self->proc_stat_file_path = stat_path;
  self->collect_fn = &prom_collector_process_collect;

  r = prom_process_limits_init();
  if (r) return NULL;

  r = prom_process_stats_init();
  if (r) return NULL;

  r = prom_process_fds_init();
  if (r) return NULL;

  r = prom_collector_add_metric(self, prom_process_max_fds);
  if (r) return NULL;

  r = prom_collector_add_metric(self, prom_process_virtual_memory_max_bytes);
  if (r) return NULL;

  r = prom_collector_add_metric(self, prom_process_cpu_seconds_total);
  if (r) return NULL;

  r = prom_collector_add_metric(self, prom_process_virtual_memory_bytes);
  if (r) return NULL;

  r = prom_collector_add_metric(self, prom_process_resident_memory_bytes);
  if (r) return NULL;

  r = prom_collector_add_metric(self, prom_process_start_time_seconds);
  if (r) return NULL;

  r = prom_collector_add_metric(self, prom_process_open_fds);
  if (r) return NULL;

  return self;
}

prom_map_t *prom_collector_process_collect(prom_collector_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return NULL;

  int r = 0;

  // Allocate and create a *prom_process_limits_file_t
  prom_process_limits_file_t *limits_f = prom_process_limits_file_new(self->proc_limits_file_path);
  if (limits_f == NULL) {
    prom_process_limits_file_destroy(limits_f);
    return NULL;
  }

  // Allocate and create a *prom_map_t from prom_process_limits_file_t. This is the main storage container for the
  // limits metric data
  prom_map_t *limits_map = prom_process_limits(limits_f);
  if (limits_map == NULL) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    return NULL;
  }

  // Retrieve the *prom_process_limits_row_t for Max open files
  prom_process_limits_row_t *max_fds = (prom_process_limits_row_t *)prom_map_get(limits_map, "Max open files");
  if (max_fds == NULL) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    return NULL;
  }

  // Retrieve the *prom_process_limits_row_t for Max address space
  prom_process_limits_row_t *virtual_memory_max_bytes =
      (prom_process_limits_row_t *)prom_map_get(limits_map, "Max address space");
  if (virtual_memory_max_bytes == NULL) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    return NULL;
  }

  // Set the metric values for max_fds and virtual_memory_max_bytes
  r = prom_gauge_set(prom_process_max_fds, max_fds->soft, NULL);
  if (r) return NULL;
  r = prom_gauge_set(prom_process_virtual_memory_max_bytes, virtual_memory_max_bytes->soft, NULL);
  if (r) return NULL;

  // Aloocate and create a *prom_process_stat_file_t
  prom_process_stat_file_t *stat_f = prom_process_stat_file_new(self->proc_stat_file_path);
  if (stat_f == NULL) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    return self->metrics;
  }

  // Allocate and create a *prom_process_stat_t from *prom_process_stat_file_t
  prom_process_stat_t *stat = prom_process_stat_new(stat_f);

  // Set the metrics related to the stat file
  r = prom_gauge_set(prom_process_cpu_seconds_total, ((stat->utime + stat->stime) / sysconf(_SC_CLK_TCK)), NULL);
  if (r) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    prom_process_stat_file_destroy(stat_f);
    prom_process_stat_destroy(stat);
    return NULL;
  }
  r = prom_gauge_set(prom_process_virtual_memory_bytes, stat->vsize, NULL);
  if (r) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    prom_process_stat_file_destroy(stat_f);
    prom_process_stat_destroy(stat);
    return NULL;
  }
  r = prom_gauge_set(prom_process_resident_memory_bytes, stat->rss*sysconf(_SC_PAGE_SIZE), NULL);
  if (r) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    prom_process_stat_file_destroy(stat_f);
    prom_process_stat_destroy(stat);
    return NULL;
  }
  r = prom_gauge_set(prom_process_start_time_seconds, stat->starttime, NULL);
  if (r) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    prom_process_stat_file_destroy(stat_f);
    prom_process_stat_destroy(stat);
    return NULL;
  }
  r = prom_gauge_set(prom_process_open_fds, prom_process_fds_count(NULL), NULL);
  if (r) {
    prom_process_limits_file_destroy(limits_f);
    prom_map_destroy(limits_map);
    prom_process_stat_file_destroy(stat_f);
    prom_process_stat_destroy(stat);
    return NULL;
  }

  // If there is any issue deallocating the following structures, return NULL to indicate failure
  r = prom_process_limits_file_destroy(limits_f);
  if (r) return NULL;
  r = prom_map_destroy(limits_map);
  if (r) return NULL;
  r = prom_process_stat_file_destroy(stat_f);
  if (r) return NULL;
  r = prom_process_stat_destroy(stat);
  if (r) return NULL;

  return self->metrics;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_collector_registry.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <pthread.h>
#include <regex.h>
#include <stdio.h>

// Public
#include "prom_alloc.h"
#include "prom_collector.h"
#include "prom_collector_registry.h"

// Private
#include "prom_assert.h"
#include "prom_collector_registry_t.h"
#include "prom_collector_t.h"
#include "prom_errors.h"
#include "prom_log.h"
#include "prom_map_i.h"
#include "prom_metric_formatter_i.h"
#include "prom_metric_i.h"
#include "prom_metric_t.h"
#include "prom_process_limits_i.h"
#include "prom_string_builder_i.h"

prom_collector_registry_t *PROM_COLLECTOR_REGISTRY_DEFAULT;

prom_collector_registry_t *prom_collector_registry_new(const char *name) {
  int r = 0;

  prom_collector_registry_t *self = (prom_collector_registry_t *)prom_malloc(sizeof(prom_collector_registry_t));

  self->disable_process_metrics = false;

  self->name = prom_strdup(name);
  self->collectors = prom_map_new();
  prom_map_set_free_value_fn(self->collectors, &prom_collector_free_generic);
  prom_map_set(self->collectors, "default", prom_collector_new("default"));

  self->metric_formatter = prom_metric_formatter_new();
  self->string_builder = prom_string_builder_new();
  self->lock = (pthread_rwlock_t *)prom_malloc(sizeof(pthread_rwlock_t));
  r = pthread_rwlock_init(self->lock, NULL);
  if (r) {
    PROM_LOG("failed to initialize rwlock");
    return NULL;
  }
  return self;
}

int prom_collector_registry_enable_process_metrics(prom_collector_registry_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  prom_collector_t *process_collector = prom_collector_process_new(NULL, NULL);
  if (process_collector) {
    prom_map_set(self->collectors, "process", process_collector);
    return 0;
  }
  return 1;
}

int prom_collector_registry_enable_custom_process_metrics(prom_collector_registry_t *self,
                                                          const char *process_limits_path,
                                                          const char *process_stats_path) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) {
    PROM_LOG("prom_collector_registry_t is NULL");
    return 1;
  }
  prom_collector_t *process_collector = prom_collector_process_new(process_limits_path, process_stats_path);
  if (process_collector) {
    prom_map_set(self->collectors, "process", process_collector);
    return 0;
  }
  return 1;
}

int prom_collector_registry_default_init(void) {
  if (PROM_COLLECTOR_REGISTRY_DEFAULT != NULL) return 0;

  PROM_COLLECTOR_REGISTRY_DEFAULT = prom_collector_registry_new("default");
  if (PROM_COLLECTOR_REGISTRY_DEFAULT) {
    return prom_collector_registry_enable_process_metrics(PROM_COLLECTOR_REGISTRY_DEFAULT);
  }
  return 1;
}

int prom_collector_registry_destroy(prom_collector_registry_t *self) {
  if (self == NULL) return 0;

  int r = 0;
  int ret = 0;

  r = prom_map_destroy(self->collectors);
  self->collectors = NULL;
  if (r) ret = r;

  r = prom_metric_formatter_destroy(self->metric_formatter);
  self->metric_formatter = NULL;
  if (r) ret = r;

  r = prom_string_builder_destroy(self->string_builder);
  self->string_builder = NULL;
  if (r) ret = r;

  r = pthread_rwlock_destroy(self->lock);
  prom_free(self->lock);
  self->lock = NULL;
  if (r) ret = r;

  prom_free((char *)self->name);
  self->name = NULL;

  prom_free(self);
  self = NULL;

  return ret;
}

int prom_collector_registry_register_metric(prom_metric_t *metric) {
  PROM_ASSERT(metric != NULL);

  prom_collector_t *default_collector =
      (prom_collector_t *)prom_map_get(PROM_COLLECTOR_REGISTRY_DEFAULT->collectors, "default");

  if (default_collector == NULL) {
    return 1;
  }

  return prom_collector_add_metric(default_collector, metric);
}

prom_metric_t *prom_collector_registry_must_register_metric(prom_metric_t *metric) {
  int err = prom_collector_registry_register_metric(metric);
  if (err != 0) {
    exit(err);
  }
  return metric;
}

int prom_collector_registry_register_collector(prom_collector_registry_t *self, prom_collector_t *collector) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;

  int r = 0;

  r = pthread_rwlock_wrlock(self->lock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_LOCK_ERROR);
    return 1;
  }
  if (prom_map_get(self->collectors, collector->name) != NULL) {
    PROM_LOG("the given prom_collector_t* is already registered");
    int rr = pthread_rwlock_unlock(self->lock);
    if (rr) {
      PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);
      return rr;
    } else {
      return 1;
    }
  }
  r = prom_map_set(self->collectors, collector->name, collector);
  if (r) {
    int rr = pthread_rwlock_unlock(self->lock);
    if (rr) {
      PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);
      return rr;
    } else {
      return r;
    }
  }
  r = pthread_rwlock_unlock(self->lock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);
    return 1;
  }
  return 0;
}

int prom_collector_registry_validate_metric_name(prom_collector_registry_t *self, const char *metric_name) {
  regex_t r;
  int ret = 0;
  ret = regcomp(&r, "^[a-zA-Z_:][a-zA-Z0-9_:]*$", REG_EXTENDED);
  if (ret) {
    PROM_LOG(PROM_REGEX_REGCOMP_ERROR);
    regfree(&r);
    return ret;
  }

  ret = regexec(&r, metric_name, 0, NULL, 0);
  if (ret) {
    PROM_LOG(PROM_REGEX_REGEXEC_ERROR);
    regfree(&r);
    return ret;
  }
  regfree(&r);
  return 0;
}

const char *prom_collector_registry_bridge(prom_collector_registry_t *self) {
  prom_metric_formatter_clear(self->metric_formatter);
  prom_metric_formatter_load_metrics(self->metric_formatter, self->collectors);
  return (const char *)prom_metric_formatter_dump(self->metric_formatter);
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_collector_registry_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_collector_registry_t.h"

#ifndef PROM_COLLECTOR_REGISTRY_I_INCLUDED
#define PROM_COLLECTOR_REGISTRY_I_INCLUDED

int prom_collector_registry_enable_custom_process_metrics(prom_collector_registry_t *self,
                                                          const char *process_limits_path,
                                                          const char *process_stats_path);

#endif  // PROM_COLLECTOR_REGISTRY_I_INCLUDED

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_collector_registry_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_REGISTRY_T_H
#define PROM_REGISTRY_T_H

#include <pthread.h>
#include <stdbool.h>

// Public
#include "prom_collector_registry.h"

// Private
#include "prom_map_t.h"
#include "prom_metric_formatter_t.h"
#include "prom_string_builder_t.h"

struct prom_collector_registry {
  const char *name;
  bool disable_process_metrics;              /**< Disables the collection of process metrics */
  prom_map_t *collectors;                    /**< Map of collectors keyed by name */
  prom_string_builder_t *string_builder;     /**< Enables string building */
  prom_metric_formatter_t *metric_formatter; /**< metric formatter for metric exposition on bridge call */
  pthread_rwlock_t *lock;                    /**< mutex for safety against concurrent registration */
};

#endif  // PROM_REGISTRY_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_collector_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_COLLECTOR_T_H
#define PROM_COLLECTOR_T_H

#include "prom_collector.h"
#include "prom_map_t.h"
#include "prom_string_builder_t.h"

struct prom_collector {
  const char *name;
  prom_map_t *metrics;
  prom_collect_fn *collect_fn;
  prom_string_builder_t *string_builder;
  const char *proc_limits_file_path;
  const char *proc_stat_file_path;
};

#endif  // PROM_COLLECTOR_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_counter.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Public
#include "prom_counter.h"

#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_errors.h"
#include "prom_log.h"
#include "prom_metric_i.h"
#include "prom_metric_sample_i.h"
#include "prom_metric_sample_t.h"
#include "prom_metric_t.h"

prom_counter_t *prom_counter_new(const char *name, const char *help, size_t label_key_count, const char **label_keys) {
  return (prom_counter_t *)prom_metric_new(PROM_COUNTER, name, help, label_key_count, label_keys);
}

int prom_counter_destroy(prom_counter_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  int r = 0;
  r = prom_metric_destroy(self);
  self = NULL;
  return r;
}

int prom_counter_inc(prom_counter_t *self, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->type != PROM_COUNTER) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(self, label_values);
  if (sample == NULL) return 1;
  return prom_metric_sample_add(sample, 1.0);
}

int prom_counter_add(prom_counter_t *self, double r_value, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->type != PROM_COUNTER) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(self, label_values);
  if (sample == NULL) return 1;
  return prom_metric_sample_add(sample, r_value);
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_errors.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define PROM_STDIO_CLOSE_DIR_ERROR "failed to close dir"
#define PROM_STDIO_OPEN_DIR_ERROR "failed to open dir"
#define PROM_METRIC_INCORRECT_TYPE "incorrect metric type"
#define PROM_METRIC_INVALID_LABEL_NAME "invalid label name"
#define PROM_PTHREAD_RWLOCK_DESTROY_ERROR "failed to destroy the pthread_rwlock_t*"
#define PROM_PTHREAD_RWLOCK_INIT_ERROR "failed to initialize the pthread_rwlock_t*"
#define PROM_PTHREAD_RWLOCK_LOCK_ERROR "failed to lock the pthread_rwlock_t*"
#define PROM_PTHREAD_RWLOCK_UNLOCK_ERROR "failed to unlock the pthread_rwlock_t*"
#define PROM_REGEX_REGCOMP_ERROR "failed to compile the regular expression"
#define PROM_REGEX_REGEXEC_ERROR "failed to execute the regular expression"

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_gauge.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Public
#include "prom_gauge.h"

#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_errors.h"
#include "prom_log.h"
#include "prom_metric_i.h"
#include "prom_metric_sample_i.h"
#include "prom_metric_sample_t.h"
#include "prom_metric_t.h"

prom_gauge_t *prom_gauge_new(const char *name, const char *help, size_t label_key_count, const char **label_keys) {
  return (prom_gauge_t *)prom_metric_new(PROM_GAUGE, name, help, label_key_count, label_keys);
}

int prom_gauge_destroy(prom_gauge_t *self) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  r = prom_metric_destroy(self);
  self = NULL;
  return r;
}

int prom_gauge_inc(prom_gauge_t *self, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->type != PROM_GAUGE) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(self, label_values);
  if (sample == NULL) return 1;
  return prom_metric_sample_add(sample, 1.0);
}

int prom_gauge_dec(prom_gauge_t *self, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->type != PROM_GAUGE) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(self, label_values);
  if (sample == NULL) return 1;
  return prom_metric_sample_sub(sample, 1.0);
}

int prom_gauge_add(prom_gauge_t *self, double r_value, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->type != PROM_GAUGE) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(self, label_values);
  if (sample == NULL) return 1;
  return prom_metric_sample_add(sample, r_value);
}

int prom_gauge_sub(prom_gauge_t *self, double r_value, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->type != PROM_GAUGE) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(self, label_values);
  if (sample == NULL) return 1;
  return prom_metric_sample_sub(sample, r_value);
}

int prom_gauge_set(prom_gauge_t *self, double r_value, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->type != PROM_GAUGE) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  prom_metric_sample_t *sample = prom_metric_sample_from_labels(self, label_values);
  if (sample == NULL) return 1;
  return prom_metric_sample_set(sample, r_value);
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_histogram.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Public
#include "prom_histogram.h"

#include "prom_alloc.h"
#include "prom_histogram_buckets.h"

// Private
#include "prom_assert.h"
#include "prom_errors.h"
#include "prom_log.h"
#include "prom_map_i.h"
#include "prom_metric_i.h"
#include "prom_metric_sample_histogram_i.h"
#include "prom_metric_sample_histogram_t.h"
#include "prom_metric_t.h"

prom_histogram_t *prom_histogram_new(const char *name, const char *help, prom_histogram_buckets_t *buckets,
                                     size_t label_key_count, const char **label_keys) {
  prom_histogram_t *self = (prom_histogram_t *)prom_metric_new(PROM_HISTOGRAM, name, help, label_key_count, label_keys);
  if (buckets == NULL) {
    if (!prom_histogram_default_buckets) {
      prom_histogram_default_buckets = prom_histogram_buckets_new(11,
          0.005, 0.01, 0.025, 0.05, 0.1, 0.25, 0.5, 1.0, 2.5, 5.0, 10.0);
    }
    self->buckets = prom_histogram_default_buckets;
  } else {
    // Ensure the bucket values are increasing
    for (int i = 0; i < buckets->count; i++) {
      if (i == 0) {
        continue;
      }
      if (buckets->upper_bounds[i - 1] > buckets->upper_bounds[i]) {
        return NULL;
      }
    }
    self->buckets = buckets;
  }
  return self;
}

int prom_histogram_destroy(prom_histogram_t *self) {
  PROM_ASSERT(self != NULL);

  int r = 0;

  if (self == NULL) return r;
  r = prom_metric_destroy(self);
  if (r) return r;
  self = NULL;
  return r;
}

int prom_histogram_observe(prom_histogram_t *self, double value, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->type != PROM_HISTOGRAM) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  prom_metric_sample_histogram_t *h_sample = prom_metric_sample_histogram_from_labels(self, label_values);
  if (h_sample == NULL) return 1;
  return prom_metric_sample_histogram_observe(h_sample, value);
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_histogram_buckets.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdarg.h>
#include <stdlib.h>

// Public
#include "prom_alloc.h"
#include "prom_histogram_buckets.h"

// Private
#include "prom_assert.h"
#include "prom_log.h"

prom_histogram_buckets_t *prom_histogram_default_buckets = NULL;

prom_histogram_buckets_t *prom_histogram_buckets_new(size_t count, double bucket, ...) {
  prom_histogram_buckets_t *self = (prom_histogram_buckets_t *)prom_malloc(sizeof(prom_histogram_buckets_t));
  self->count = count;
  double *upper_bounds = (double *)prom_malloc(sizeof(double) * count);
  upper_bounds[0] = bucket;
  if (count == 1) {
    self->upper_bounds = upper_bounds;
    return self;
  }
  va_list arg_list;
  va_start(arg_list, bucket);
  for (int i = 1; i < count; i++) {
    upper_bounds[i] = va_arg(arg_list, double);
  }
  va_end(arg_list);
  self->upper_bounds = upper_bounds;
  return self;
}

prom_histogram_buckets_t *prom_histogram_buckets_linear(double start, double width, size_t count) {
  if (count <= 1) return NULL;

  prom_histogram_buckets_t *self = (prom_histogram_buckets_t *)prom_malloc(sizeof(prom_histogram_buckets_t));

  double *upper_bounds = (double *)prom_malloc(sizeof(double) * count);
  upper_bounds[0] = start;
  for (size_t i = 1; i < count; i++) {
    upper_bounds[i] = upper_bounds[i - 1] + width;
  }
  self->upper_bounds = upper_bounds;
  self->count = count;
  return self;
}

prom_histogram_buckets_t *prom_histogram_buckets_exponential(double start, double factor, size_t count) {
  if (count < 1) {
    PROM_LOG("count must be less than 1");
    return NULL;
  }
  if (start <= 0) {
    PROM_LOG("start must be less than or equal to 0");
    return NULL;
  }
  if (factor <= 1) {
    PROM_LOG("factor must be less than or equal to 1");
    return NULL;
  }

  prom_histogram_buckets_t *self = (prom_histogram_buckets_t *)prom_malloc(sizeof(prom_histogram_buckets_t));

  double *upper_bounds = (double *)prom_malloc(sizeof(double) * count);
  upper_bounds[0] = start;
  for (size_t i = 1; i < count; i++) {
    upper_bounds[i] = upper_bounds[i - 1] * factor;
  }
  self->upper_bounds = upper_bounds;
  self->count = count;
  return self;
}

int prom_histogram_buckets_destroy(prom_histogram_buckets_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  prom_free((double *)self->upper_bounds);
  self->upper_bounds = NULL;
  prom_free(self);
  self = NULL;
  return 0;
}

size_t prom_histogram_buckets_count(prom_histogram_buckets_t *self) {
  PROM_ASSERT(self != NULL);
  return self->count;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_linked_list.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Public
#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_linked_list_i.h"
#include "prom_linked_list_t.h"
#include "prom_log.h"

prom_linked_list_t *prom_linked_list_new(void) {
  prom_linked_list_t *self = (prom_linked_list_t *)prom_malloc(sizeof(prom_linked_list_t));
  self->head = NULL;
  self->tail = NULL;
  self->free_fn = NULL;
  self->compare_fn = NULL;
  self->size = 0;
  return self;
}

int prom_linked_list_purge(prom_linked_list_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  prom_linked_list_node_t *node = self->head;
  while (node != NULL) {
    prom_linked_list_node_t *next = node->next;
    if (node->item != NULL) {
      if (self->free_fn) {
        (*self->free_fn)(node->item);
      } else {
        prom_free(node->item);
      }
    }
    prom_free(node);
    node = NULL;
    node = next;
  }
  self->head = NULL;
  self->tail = NULL;
  self->size = 0;
  return 0;
}

int prom_linked_list_destroy(prom_linked_list_t *self) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  int ret = 0;

  r = prom_linked_list_purge(self);
  if (r) ret = r;
  prom_free(self);
  self = NULL;
  return ret;
}

void *prom_linked_list_first(prom_linked_list_t *self) {
  PROM_ASSERT(self != NULL);
  if (self->head) {
    return self->head->item;
  } else {
    return NULL;
  }
}

void *prom_linked_list_last(prom_linked_list_t *self) {
  PROM_ASSERT(self != NULL);
  if (self->tail) {
    return self->tail->item;
  } else {
    return NULL;
  }
}

int prom_linked_list_append(prom_linked_list_t *self, void *item) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  prom_linked_list_node_t *node = (prom_linked_list_node_t *)prom_malloc(sizeof(prom_linked_list_node_t));

  node->item = item;
  if (self->tail) {
    self->tail->next = node;
  } else {
    self->head = node;
  }
  self->tail = node;
  node->next = NULL;
  self->size++;
  return 0;
}

int prom_linked_list_push(prom_linked_list_t *self, void *item) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  prom_linked_list_node_t *node = (prom_linked_list_node_t *)prom_malloc(sizeof(prom_linked_list_node_t));

  node->item = item;
  node->next = self->head;
  self->head = node;
  if (self->tail == NULL) {
    self->tail = node;
  }
  self->size++;
  return 0;
}

void *prom_linked_list_pop(prom_linked_list_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return NULL;
  prom_linked_list_node_t *node = self->head;
  void *item = NULL;
  if (node != NULL) {
    item = node->item;
    self->head = node->next;
    if (self->tail == node) {
      self->tail = NULL;
    }
    if (node->item != NULL) {
      if (self->free_fn) {
        (*self->free_fn)(node->item);
      } else {
        prom_free(node->item);
      }
    }
    node->item = NULL;
    node = NULL;
    self->size--;
  }
  return item;
}

int prom_linked_list_remove(prom_linked_list_t *self, void *item) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  prom_linked_list_node_t *node;
  prom_linked_list_node_t *prev_node = NULL;

  // Locate the node
  for (node = self->head; node != NULL; node = node->next) {
    if (self->compare_fn) {
      if ((*self->compare_fn)(node->item, item) == PROM_EQUAL) {
        break;
      }
    } else {
      if (node->item == item) {
        break;
      }
    }
    prev_node = node;
  }

  if (node == NULL) return 0;

  if (prev_node) {
    prev_node->next = node->next;
  } else {
    self->head = node->next;
  }
  if (node->next == NULL) {
    self->tail = prev_node;
  }

  if (node->item != NULL) {
    if (self->free_fn) {
      (*self->free_fn)(node->item);
    } else {
      prom_free(node->item);
    }
  }

  node->item = NULL;
  prom_free(node);
  node = NULL;
  self->size--;
  return 0;
}

prom_linked_list_compare_t prom_linked_list_compare(prom_linked_list_t *self, void *item_a, void *item_b) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (self->compare_fn) {
    return (*self->compare_fn)(item_a, item_b);
  } else {
    return strcmp(item_a, item_b);
  }
}

size_t prom_linked_list_size(prom_linked_list_t *self) {
  PROM_ASSERT(self != NULL);
  return self->size;
}

int prom_linked_list_set_free_fn(prom_linked_list_t *self, prom_linked_list_free_item_fn free_fn) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  self->free_fn = free_fn;
  return 0;
}

int prom_linked_list_set_compare_fn(prom_linked_list_t *self, prom_linked_list_compare_item_fn compare_fn) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  self->compare_fn = compare_fn;
  return 0;
}

void prom_linked_list_no_op_free(void *item) {}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_linked_list_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_LIST_I_INCLUDED
#define PROM_LIST_I_INCLUDED

// Private
#include "prom_linked_list_t.h"

/**
 * @brief API PRIVATE Returns a pointer to a prom_linked_list
 */
prom_linked_list_t *prom_linked_list_new(void);

/**
 * @brief API PRIVATE removes all nodes from the given prom_linked_list *
 */
int prom_linked_list_purge(prom_linked_list_t *self);

/**
 * @brief API PRIVATE Destroys a prom_linked_list
 */
int prom_linked_list_destroy(prom_linked_list_t *self);

/**
 * @brief API PRIVATE Append an item to the back of the list
 */
int prom_linked_list_append(prom_linked_list_t *self, void *item);

/**
 * @brief API PRIVATE Push an item onto the front of the list
 */
int prom_linked_list_push(prom_linked_list_t *self, void *item);

/**
 * @brief API PRIVATE Pop the first item off of the list
 */
void *prom_linked_list_pop(prom_linked_list_t *self);

/**
 * @brief API PRIVATE Returns the item at the head of the list or NULL if not present
 */
void *prom_linked_list_first(prom_linked_list_t *self);

/**
 * @brief API PRIVATE Returns the item at the tail of the list or NULL if not present
 */
void *prom_linked_list_last(prom_linked_list_t *self);

/**
 * @brief API PRIVATE Removes an item from the linked list
 */
int prom_linked_list_remove(prom_linked_list_t *self, void *item);

/**
 * @brief API PRIVATE Compares two items within a linked list
 */
prom_linked_list_compare_t prom_linked_list_compare(prom_linked_list_t *self, void *item_a, void *node_b);

/**
 * @brief API PRIVATE Get the size
 */
size_t prom_linked_list_size(prom_linked_list_t *self);

/**
 * @brief API PRIVATE Set the free_fn member on prom_linked_list
 */
int prom_linked_list_set_free_fn(prom_linked_list_t *self, prom_linked_list_free_item_fn free_fn);

/**
 * @brief API PRIVATE Set the compare_fn member on the prom_linked_list
 */
int prom_linked_list_set_compare_fn(prom_linked_list_t *self, prom_linked_list_compare_item_fn compare_fn);

/**
 * API PRIVATE
 * @brief does nothing
 */
void prom_linked_list_no_op_free(void *item);

#endif  // PROM_LIST_I_INCLUDED

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_linked_list_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_LIST_T_H
#define PROM_LIST_T_H

#include "prom_linked_list.h"

typedef enum { PROM_LESS = -1, PROM_EQUAL = 0, PROM_GREATER = 1 } prom_linked_list_compare_t;

/**
 * @brief API PRIVATE Frees an item in a prom_linked_list_node
 */
typedef void (*prom_linked_list_free_item_fn)(void *);

/**
 * @brief API PRIVATE Compares two items within a prom_linked_list
 */
typedef prom_linked_list_compare_t (*prom_linked_list_compare_item_fn)(void *item_a, void *item_b);

/**
 * @brief API PRIVATE A struct containing a generic item, represented as a void pointer, and next, a pointer to the
 * next prom_linked_list_node*
 */
typedef struct prom_linked_list_node {
  struct prom_linked_list_node *next;
  void *item;
} prom_linked_list_node_t;

/**
 * @brief API PRIVATE A linked list comprised of prom_linked_list_node* instances
 */
struct prom_linked_list {
  prom_linked_list_node_t *head;
  prom_linked_list_node_t *tail;
  size_t size;
  prom_linked_list_free_item_fn free_fn;
  prom_linked_list_compare_item_fn compare_fn;
};

#endif  // PROM_LIST_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_log.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>

#ifndef PROM_LOG_H
#define PROM_LOG_H

#ifdef PROM_LOG_ENABLE
#define PROM_LOG(msg) printf("%s %s %s %s %d %s\n", __DATE__, __TIME__, __FILE__, __FUNCTION__, __LINE__, msg);
#else
#define PROM_LOG(msg)
#endif  // PROM_LOG_ENABLE

#endif  // PROM_LOG_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_map.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <pthread.h>
#include <stdbool.h>

// Public
#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_errors.h"
#include "prom_linked_list_i.h"
#include "prom_linked_list_t.h"
#include "prom_log.h"
#include "prom_map_i.h"
#include "prom_map_t.h"

#define PROM_MAP_INITIAL_SIZE 32

static void destroy_map_node_value_no_op(void *value) {}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// prom_map_node
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

prom_map_node_t *prom_map_node_new(const char *key, void *value, prom_map_node_free_value_fn free_value_fn) {
  prom_map_node_t *self = prom_malloc(sizeof(prom_map_node_t));
  self->key = prom_strdup(key);
  self->value = value;
  self->free_value_fn = free_value_fn;
  return self;
}

int prom_map_node_destroy(prom_map_node_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  prom_free((void *)self->key);
  self->key = NULL;
  if (self->value != NULL) (*self->free_value_fn)(self->value);
  self->value = NULL;
  prom_free(self);
  self = NULL;
  return 0;
}

void prom_map_node_free(void *item) {
  prom_map_node_t *map_node = (prom_map_node_t *)item;
  prom_map_node_destroy(map_node);
}

prom_linked_list_compare_t prom_map_node_compare(void *item_a, void *item_b) {
  prom_map_node_t *map_node_a = (prom_map_node_t *)item_a;
  prom_map_node_t *map_node_b = (prom_map_node_t *)item_b;

  return strcmp(map_node_a->key, map_node_b->key);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// prom_map
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

prom_map_t *prom_map_new() {
  int r = 0;

  prom_map_t *self = (prom_map_t *)prom_malloc(sizeof(prom_map_t));
  self->size = 0;
  self->max_size = PROM_MAP_INITIAL_SIZE;

  self->keys = prom_linked_list_new();
  if (self->keys == NULL) return NULL;

  // These each key will be allocated once by prom_map_node_new and used here as well to save memory. With that said
  // we will only have to deallocate each key once. That will happen on prom_map_node_destroy.
  r = prom_linked_list_set_free_fn(self->keys, prom_linked_list_no_op_free);
  if (r) {
    prom_map_destroy(self);
    return NULL;
  }

  self->addrs = prom_malloc(sizeof(prom_linked_list_t) * self->max_size);
  self->free_value_fn = destroy_map_node_value_no_op;

  for (int i = 0; i < self->max_size; i++) {
    self->addrs[i] = prom_linked_list_new();
    r = prom_linked_list_set_free_fn(self->addrs[i], prom_map_node_free);
    if (r) {
      prom_map_destroy(self);
      return NULL;
    }
    r = prom_linked_list_set_compare_fn(self->addrs[i], prom_map_node_compare);
    if (r) {
      prom_map_destroy(self);
      return NULL;
    }
  }

  self->rwlock = (pthread_rwlock_t *)prom_malloc(sizeof(pthread_rwlock_t));
  r = pthread_rwlock_init(self->rwlock, NULL);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_INIT_ERROR);
    prom_map_destroy(self);
    return NULL;
  }

  return self;
}

int prom_map_destroy(prom_map_t *self) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  int ret = 0;

  r = prom_linked_list_destroy(self->keys);
  if (r) ret = r;
  self->keys = NULL;

  for (size_t i = 0; i < self->max_size; i++) {
    r = prom_linked_list_destroy(self->addrs[i]);
    if (r) ret = r;
    self->addrs[i] = NULL;
  }
  prom_free(self->addrs);
  self->addrs = NULL;

  r = pthread_rwlock_destroy(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_DESTROY_ERROR)
    ret = r;
  }

  prom_free(self->rwlock);
  self->rwlock = NULL;
  prom_free(self);
  self = NULL;

  return ret;
}

static size_t prom_map_get_index_internal(const char *key, size_t *size, size_t *max_size) {
  size_t index;
  size_t a = 31415, b = 27183;
  for (index = 0; *key != '\0'; key++, a = a * b % (*max_size - 1)) {
    index = (a * index + *key) % *max_size;
  }
  return index;
}

/**
 * @brief API PRIVATE hash function that returns an array index from the given key and prom_map.
 *
 * The algorithm is based off of Horner's method. In a simpler version, you set the return value to 0. Next, for each
 * character in the string, you add the integer value of the current character to the product of the prime number and
 * the current return value, set the result to the return value, then finally return the return value.
 *
 * In this version of the algorithm, we attempt to achieve a probabily of key to index conversion collisions to
 * 1/M (with M being the max_size of the map). This optimizes dispersion and consequently, evens out the performance
 * for gets and sets for each item. Instead of using a fixed prime number, we generate a coefficient for each iteration
 * through the loop.
 *
 * Reference:
 *   * Algorithms in C: Third Edition by Robert Sedgewick, p579
 */
size_t prom_map_get_index(prom_map_t *self, const char *key) {
  return prom_map_get_index_internal(key, &self->size, &self->max_size);
}

static void *prom_map_get_internal(const char *key, size_t *size, size_t *max_size, prom_linked_list_t *keys,
                                   prom_linked_list_t **addrs, prom_map_node_free_value_fn free_value_fn) {
  size_t index = prom_map_get_index_internal(key, size, max_size);
  prom_linked_list_t *list = addrs[index];
  prom_map_node_t *temp_map_node = prom_map_node_new(key, NULL, free_value_fn);

  for (prom_linked_list_node_t *current_node = list->head; current_node != NULL; current_node = current_node->next) {
    prom_map_node_t *current_map_node = (prom_map_node_t *)current_node->item;
    prom_linked_list_compare_t result = prom_linked_list_compare(list, current_map_node, temp_map_node);
    if (result == PROM_EQUAL) {
      prom_map_node_destroy(temp_map_node);
      temp_map_node = NULL;
      return current_map_node->value;
    }
  }
  prom_map_node_destroy(temp_map_node);
  temp_map_node = NULL;
  return NULL;
}

void *prom_map_get(prom_map_t *self, const char *key) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  r = pthread_rwlock_wrlock(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_LOCK_ERROR);
    NULL;
  }
  void *payload =
      prom_map_get_internal(key, &self->size, &self->max_size, self->keys, self->addrs, self->free_value_fn);
  r = pthread_rwlock_unlock(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);
    return NULL;
  }
  return payload;
}

static int prom_map_set_internal(const char *key, void *value, size_t *size, size_t *max_size, prom_linked_list_t *keys,
                                 prom_linked_list_t **addrs, prom_map_node_free_value_fn free_value_fn,
                                 bool destroy_current_value) {
  prom_map_node_t *map_node = prom_map_node_new(key, value, free_value_fn);
  if (map_node == NULL) return 1;

  size_t index = prom_map_get_index_internal(key, size, max_size);
  prom_linked_list_t *list = addrs[index];
  for (prom_linked_list_node_t *current_node = list->head; current_node != NULL; current_node = current_node->next) {
    prom_map_node_t *current_map_node = (prom_map_node_t *)current_node->item;
    prom_linked_list_compare_t result = prom_linked_list_compare(list, current_map_node, map_node);
    if (result == PROM_EQUAL) {
      if (destroy_current_value) {
        free_value_fn(current_map_node->value);
        current_map_node->value = NULL;
      }
      prom_free((char *)current_map_node->key);
      current_map_node->key = NULL;
      prom_free(current_map_node);
      current_map_node = NULL;
      current_node->item = map_node;
      return 0;
    }
  }
  prom_linked_list_append(list, map_node);
  prom_linked_list_append(keys, (char *)map_node->key);
  (*size)++;
  return 0;
}

int prom_map_ensure_space(prom_map_t *self) {
  PROM_ASSERT(self != NULL);
  int r = 0;

  if (self->size <= self->max_size / 2) {
    return 0;
  }

  // Increase the max size
  size_t new_max = self->max_size * 2;
  size_t new_size = 0;

  // Create a new list of keys
  prom_linked_list_t *new_keys = prom_linked_list_new();
  if (new_keys == NULL) return 1;

  r = prom_linked_list_set_free_fn(new_keys, prom_linked_list_no_op_free);
  if (r) return r;

  // Create a new array of addrs
  prom_linked_list_t **new_addrs = prom_malloc(sizeof(prom_linked_list_t) * new_max);

  // Initialize the new array
  for (int i = 0; i < new_max; i++) {
    new_addrs[i] = prom_linked_list_new();
    r = prom_linked_list_set_free_fn(new_addrs[i], prom_map_node_free);
    if (r) return r;
    r = prom_linked_list_set_compare_fn(new_addrs[i], prom_map_node_compare);
    if (r) return r;
  }

  // Iterate through each linked-list at each memory region in the map's backbone
  for (int i = 0; i < self->max_size; i++) {
    // Create a new map node for each node in the linked list and insert it into the new map. Afterwards, deallocate
    // the old map node
    prom_linked_list_t *list = self->addrs[i];
    prom_linked_list_node_t *current_node = list->head;
    while (current_node != NULL) {
      prom_map_node_t *map_node = (prom_map_node_t *)current_node->item;
      r = prom_map_set_internal(map_node->key, map_node->value, &new_size, &new_max, new_keys, new_addrs,
                                self->free_value_fn, false);
      if (r) return r;

      prom_linked_list_node_t *next = current_node->next;
      prom_free(current_node);
      current_node = NULL;
      prom_free((void *)map_node->key);
      map_node->key = NULL;
      prom_free(map_node);
      map_node = NULL;
      current_node = next;
    }
    // We're done deallocating each map node in the linked list, so deallocate the linked-list object
    prom_free(self->addrs[i]);
    self->addrs[i] = NULL;
  }
  // Destroy the collection of keys in the map
  prom_linked_list_destroy(self->keys);
  self->keys = NULL;

  // Deallocate the backbone of the map
  prom_free(self->addrs);
  self->addrs = NULL;

  // Update the members of the current map
  self->size = new_size;
  self->max_size = new_max;
  self->keys = new_keys;
  self->addrs = new_addrs;

  return 0;
}

int prom_map_set(prom_map_t *self, const char *key, void *value) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  r = pthread_rwlock_wrlock(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_LOCK_ERROR);
    return r;
  }

  r = prom_map_ensure_space(self);
  if (r) {
    int rr = 0;
    rr = pthread_rwlock_unlock(self->rwlock);
    if (rr) {
      PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);
      return rr;
    } else {
      return r;
    }
  }
  r = prom_map_set_internal(key, value, &self->size, &self->max_size, self->keys, self->addrs, self->free_value_fn,
                            true);
  if (r) {
    int rr = 0;
    rr = pthread_rwlock_unlock(self->rwlock);
    if (rr) {
      PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);
      return rr;
    } else {
      return r;
    }
  }
  r = pthread_rwlock_unlock(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);
  }
  return r;
}

static int prom_map_delete_internal(const char *key, size_t *size, size_t *max_size, prom_linked_list_t *keys,
                                    prom_linked_list_t **addrs, prom_map_node_free_value_fn free_value_fn) {
  int r = 0;
  size_t index = prom_map_get_index_internal(key, size, max_size);
  prom_linked_list_t *list = addrs[index];
  prom_map_node_t *temp_map_node = prom_map_node_new(key, NULL, free_value_fn);

  for (prom_linked_list_node_t *current_node = list->head; current_node != NULL; current_node = current_node->next) {
    prom_map_node_t *current_map_node = (prom_map_node_t *)current_node->item;
    prom_linked_list_compare_t result = prom_linked_list_compare(list, current_map_node, temp_map_node);
    if (result == PROM_EQUAL) {
      r = prom_linked_list_remove(list, current_node);
      if (r) return r;

      r = prom_linked_list_remove(keys, (char *)current_map_node->key);
      if (r) return r;

      (*size)--;
      break;
    }
  }
  r = prom_map_node_destroy(temp_map_node);
  temp_map_node = NULL;
  return r;
}

int prom_map_delete(prom_map_t *self, const char *key) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  int ret = 0;
  r = pthread_rwlock_wrlock(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_LOCK_ERROR);
    ret = r;
  }
  r = prom_map_delete_internal(key, &self->size, &self->max_size, self->keys, self->addrs, self->free_value_fn);
  if (r) ret = r;
  r = pthread_rwlock_unlock(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);
    ret = r;
  }
  return ret;
}

int prom_map_set_free_value_fn(prom_map_t *self, prom_map_node_free_value_fn free_value_fn) {
  PROM_ASSERT(self != NULL);
  self->free_value_fn = free_value_fn;
  return 0;
}

size_t prom_map_size(prom_map_t *self) {
  PROM_ASSERT(self != NULL);
  return self->size;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_map_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_MAP_I_INCLUDED
#define PROM_MAP_I_INCLUDED

#include "prom_map_t.h"

prom_map_t *prom_map_new(void);

int prom_map_set_free_value_fn(prom_map_t *self, prom_map_node_free_value_fn free_value_fn);

void *prom_map_get(prom_map_t *self, const char *key);

int prom_map_set(prom_map_t *self, const char *key, void *value);

int prom_map_delete(prom_map_t *self, const char *key);

int prom_map_destroy(prom_map_t *self);

size_t prom_map_size(prom_map_t *self);

prom_map_node_t *prom_map_node_new(const char *key, void *value, prom_map_node_free_value_fn free_value_fn);

#endif  // PROM_MAP_I_INCLUDED

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_map_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_MAP_T_H
#define PROM_MAP_T_H

#include <pthread.h>

// Public
#include "prom_map.h"

// Private
#include "prom_linked_list_t.h"

typedef void (*prom_map_node_free_value_fn)(void *);

struct prom_map_node {
  const char *key;
  void *value;
  prom_map_node_free_value_fn free_value_fn;
};

struct prom_map {
  size_t size;                /**< contains the size of the map */
  size_t max_size;            /**< stores the current max_size */
  prom_linked_list_t *keys;   /**< linked list containing containing all keys present */
  prom_linked_list_t **addrs; /**< Sequence of linked lists. Each list contains nodes with the same index */
  pthread_rwlock_t *rwlock;
  prom_map_node_free_value_fn free_value_fn;
};

#endif  // PROM_MAP_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <pthread.h>

// Public
#include "prom_alloc.h"
#include "prom_histogram_buckets.h"

// Private
#include "prom_assert.h"
#include "prom_errors.h"
#include "prom_log.h"
#include "prom_map_i.h"
#include "prom_metric_formatter_i.h"
#include "prom_metric_i.h"
#include "prom_metric_sample_histogram_i.h"
#include "prom_metric_sample_i.h"

char *prom_metric_type_map[4] = {"counter", "gauge", "histogram", "summary"};

prom_metric_t *prom_metric_new(prom_metric_type_t metric_type, const char *name, const char *help,
                               size_t label_key_count, const char **label_keys) {
  int r = 0;
  prom_metric_t *self = (prom_metric_t *)prom_malloc(sizeof(prom_metric_t));
  self->type = metric_type;
  self->name = name;
  self->help = help;
  self->buckets = NULL;

  const char **k = (const char **)prom_malloc(sizeof(const char *) * label_key_count);

  for (int i = 0; i < label_key_count; i++) {
    if (strcmp(label_keys[i], "le") == 0) {
      PROM_LOG(PROM_METRIC_INVALID_LABEL_NAME);
      prom_metric_destroy(self);
      return NULL;
    }
    if (strcmp(label_keys[i], "quantile") == 0) {
      PROM_LOG(PROM_METRIC_INVALID_LABEL_NAME);
      prom_metric_destroy(self);
      return NULL;
    }
    k[i] = prom_strdup(label_keys[i]);
  }
  self->label_keys = k;
  self->label_key_count = label_key_count;
  self->samples = prom_map_new();

  if (metric_type == PROM_HISTOGRAM) {
    r = prom_map_set_free_value_fn(self->samples, &prom_metric_sample_histogram_free_generic);
    if (r) {
      prom_metric_destroy(self);
      return NULL;
    }
  } else {
    r = prom_map_set_free_value_fn(self->samples, &prom_metric_sample_free_generic);
    if (r) {
      prom_metric_destroy(self);
      return NULL;
    }
  }

  self->formatter = prom_metric_formatter_new();
  if (self->formatter == NULL) {
    prom_metric_destroy(self);
    return NULL;
  }
  self->rwlock = (pthread_rwlock_t *)prom_malloc(sizeof(pthread_rwlock_t));
  r = pthread_rwlock_init(self->rwlock, NULL);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_INIT_ERROR);
    return NULL;
  }
  return self;
}

int prom_metric_destroy(prom_metric_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;

  int r = 0;
  int ret = 0;

  if (self->buckets != NULL) {
    r = prom_histogram_buckets_destroy(self->buckets);
    self->buckets = NULL;
    if (r) ret = r;
  }

  r = prom_map_destroy(self->samples);
  self->samples = NULL;
  if (r) ret = r;

  r = prom_metric_formatter_destroy(self->formatter);
  self->formatter = NULL;
  if (r) ret = r;

  r = pthread_rwlock_destroy(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_DESTROY_ERROR);
    ret = r;
  }

  prom_free(self->rwlock);
  self->rwlock = NULL;

  for (int i = 0; i < self->label_key_count; i++) {
    prom_free((void *)self->label_keys[i]);
    self->label_keys[i] = NULL;
  }
  prom_free(self->label_keys);
  self->label_keys = NULL;

  prom_free(self);
  self = NULL;

  return ret;
}

int prom_metric_destroy_generic(void *item) {
  int r = 0;
  prom_metric_t *self = (prom_metric_t *)item;
  r = prom_metric_destroy(self);
  self = NULL;
  return r;
}

void prom_metric_free_generic(void *item) {
  prom_metric_t *self = (prom_metric_t *)item;
  prom_metric_destroy(self);
}

prom_metric_sample_t *prom_metric_sample_from_labels(prom_metric_t *self, const char **label_values) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  r = pthread_rwlock_wrlock(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_LOCK_ERROR);
    return NULL;
  }

#define PROM_METRIC_SAMPLE_FROM_LABELS_HANDLE_UNLOCK() \
  r = pthread_rwlock_unlock(self->rwlock);             \
  if (r) PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);   \
  return NULL;

  // Get l_value
  r = prom_metric_formatter_load_l_value(self->formatter, self->name, NULL, self->label_key_count, self->label_keys,
                                         label_values);
  if (r) {
    PROM_METRIC_SAMPLE_FROM_LABELS_HANDLE_UNLOCK();
  }

  // This must be freed before returning
  const char *l_value = prom_metric_formatter_dump(self->formatter);
  if (l_value == NULL) {
    PROM_METRIC_SAMPLE_FROM_LABELS_HANDLE_UNLOCK();
  }

  // Get sample
  prom_metric_sample_t *sample = (prom_metric_sample_t *)prom_map_get(self->samples, l_value);
  if (sample == NULL) {
    sample = prom_metric_sample_new(self->type, l_value, 0.0);
    r = prom_map_set(self->samples, l_value, sample);
    if (r) {
      PROM_METRIC_SAMPLE_FROM_LABELS_HANDLE_UNLOCK();
    }
  }
  pthread_rwlock_unlock(self->rwlock);
  prom_free((void *)l_value);
  return sample;
}

prom_metric_sample_histogram_t *prom_metric_sample_histogram_from_labels(prom_metric_t *self,
                                                                         const char **label_values) {
  PROM_ASSERT(self != NULL);

  int r = 0;
  r = pthread_rwlock_wrlock(self->rwlock);
  if (r) {
    PROM_LOG(PROM_PTHREAD_RWLOCK_LOCK_ERROR);
    return NULL;
  }

#define PROM_METRIC_SAMPLE_HISTOGRAM_FROM_LABELS_HANDLE_UNLOCK() \
  r = pthread_rwlock_unlock(self->rwlock);                       \
  if (r) {                                                       \
    PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);                  \
    return NULL;                                                 \
  }

  // Load the l_value
  r = prom_metric_formatter_load_l_value(self->formatter, self->name, NULL, self->label_key_count, self->label_keys,
                                         label_values);
  if (r) {
    PROM_METRIC_SAMPLE_HISTOGRAM_FROM_LABELS_HANDLE_UNLOCK();
  }

  // This must be freed before returning
  const char *l_value = prom_metric_formatter_dump(self->formatter);
  if (l_value == NULL) {
    PROM_METRIC_SAMPLE_HISTOGRAM_FROM_LABELS_HANDLE_UNLOCK();
  }

  // Get sample
  prom_metric_sample_histogram_t *sample = (prom_metric_sample_histogram_t *)prom_map_get(self->samples, l_value);
  if (sample == NULL) {
    sample = prom_metric_sample_histogram_new(self->name, self->buckets, self->label_key_count, self->label_keys,
                                              label_values);
    if (sample == NULL) {
      prom_free((void *)l_value);
      PROM_METRIC_SAMPLE_HISTOGRAM_FROM_LABELS_HANDLE_UNLOCK();
    }
    r = prom_map_set(self->samples, l_value, sample);
    if (r) {
      prom_free((void *)l_value);
      pthread_rwlock_unlock(self->rwlock);
      PROM_METRIC_SAMPLE_HISTOGRAM_FROM_LABELS_HANDLE_UNLOCK();
    }
  }
  pthread_rwlock_unlock(self->rwlock);
  prom_free((void *)l_value);
  return sample;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_formatter.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>

// Public
#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_collector_t.h"
#include "prom_linked_list_t.h"
#include "prom_map_i.h"
#include "prom_metric_formatter_i.h"
#include "prom_metric_sample_histogram_t.h"
#include "prom_metric_sample_t.h"
#include "prom_metric_t.h"
#include "prom_string_builder_i.h"

prom_metric_formatter_t *prom_metric_formatter_new() {
  prom_metric_formatter_t *self = (prom_metric_formatter_t *)prom_malloc(sizeof(prom_metric_formatter_t));
  self->string_builder = prom_string_builder_new();
  if (self->string_builder == NULL) {
    prom_metric_formatter_destroy(self);
    return NULL;
  }
  self->err_builder = prom_string_builder_new();
  if (self->err_builder == NULL) {
    prom_metric_formatter_destroy(self);
    return NULL;
  }
  return self;
}

int prom_metric_formatter_destroy(prom_metric_formatter_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;

  int r = 0;
  int ret = 0;

  r = prom_string_builder_destroy(self->string_builder);
  self->string_builder = NULL;
  if (r) ret = r;

  r = prom_string_builder_destroy(self->err_builder);
  self->err_builder = NULL;
  if (r) ret = r;

  prom_free(self);
  self = NULL;
  return ret;
}

int prom_metric_formatter_load_help(prom_metric_formatter_t *self, const char *name, const char *help) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;

  int r = 0;

  r = prom_string_builder_add_str(self->string_builder, "# HELP ");
  if (r) return r;

  r = prom_string_builder_add_str(self->string_builder, name);
  if (r) return r;

  r = prom_string_builder_add_char(self->string_builder, ' ');
  if (r) return r;

  r = prom_string_builder_add_str(self->string_builder, help);
  if (r) return r;

  return prom_string_builder_add_char(self->string_builder, '\n');
}

int prom_metric_formatter_load_type(prom_metric_formatter_t *self, const char *name, prom_metric_type_t metric_type) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;

  int r = 0;

  r = prom_string_builder_add_str(self->string_builder, "# TYPE ");
  if (r) return r;

  r = prom_string_builder_add_str(self->string_builder, name);
  if (r) return r;

  r = prom_string_builder_add_char(self->string_builder, ' ');
  if (r) return r;

  r = prom_string_builder_add_str(self->string_builder, prom_metric_type_map[metric_type]);
  if (r) return r;

  return prom_string_builder_add_char(self->string_builder, '\n');
}

int prom_metric_formatter_load_l_value(prom_metric_formatter_t *self, const char *name, const char *suffix,
                                       size_t label_count, const char **label_keys, const char **label_values) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;

  int r = 0;

  r = prom_string_builder_add_str(self->string_builder, name);
  if (r) return r;

  if (suffix != NULL) {
    r = prom_string_builder_add_char(self->string_builder, '_');
    if (r) return r;

    r = prom_string_builder_add_str(self->string_builder, suffix);
    if (r) return r;
  }

  if (label_count == 0) return 0;

  for (int i = 0; i < label_count; i++) {
    if (i == 0) {
      r = prom_string_builder_add_char(self->string_builder, '{');
      if (r) return r;
    }
    r = prom_string_builder_add_str(self->string_builder, (const char *)label_keys[i]);
    if (r) return r;

    r = prom_string_builder_add_char(self->string_builder, '=');
    if (r) return r;

    r = prom_string_builder_add_char(self->string_builder, '"');
    if (r) return r;

    r = prom_string_builder_add_str(self->string_builder, (const char *)label_values[i]);
    if (r) return r;

    r = prom_string_builder_add_char(self->string_builder, '"');
    if (r) return r;

    if (i == label_count - 1) {
      r = prom_string_builder_add_char(self->string_builder, '}');
      if (r) return r;
    } else {
      r = prom_string_builder_add_char(self->string_builder, ',');
      if (r) return r;
    }
  }
  return 0;
}

int prom_metric_formatter_load_sample(prom_metric_formatter_t *self, prom_metric_sample_t *sample) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;

  int r = 0;

  r = prom_string_builder_add_str(self->string_builder, sample->l_value);
  if (r) return r;

  r = prom_string_builder_add_char(self->string_builder, ' ');
  if (r) return r;

  char buffer[50];
  sprintf(buffer, "%.17g", sample->r_value);
  r = prom_string_builder_add_str(self->string_builder, buffer);
  if (r) return r;

  return prom_string_builder_add_char(self->string_builder, '\n');
}

int prom_metric_formatter_clear(prom_metric_formatter_t *self) {
  PROM_ASSERT(self != NULL);
  return prom_string_builder_clear(self->string_builder);
}

char *prom_metric_formatter_dump(prom_metric_formatter_t *self) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  if (self == NULL) return NULL;
  char *data = prom_string_builder_dump(self->string_builder);
  if (data == NULL) return NULL;
  r = prom_string_builder_clear(self->string_builder);
  if (r) {
    prom_free(data);
    return NULL;
  }
  return data;
}

int prom_metric_formatter_load_metric(prom_metric_formatter_t *self, prom_metric_t *metric) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;

  int r = 0;

  r = prom_metric_formatter_load_help(self, metric->name, metric->help);
  if (r) return r;

  r = prom_metric_formatter_load_type(self, metric->name, metric->type);
  if (r) return r;

  for (prom_linked_list_node_t *current_node = metric->samples->keys->head; current_node != NULL;
       current_node = current_node->next) {
    const char *key = (const char *)current_node->item;
    if (metric->type == PROM_HISTOGRAM) {
      prom_metric_sample_histogram_t *hist_sample =
          (prom_metric_sample_histogram_t *)prom_map_get(metric->samples, key);

      if (hist_sample == NULL) return 1;

      for (prom_linked_list_node_t *current_hist_node = hist_sample->l_value_list->head; current_hist_node != NULL;
           current_hist_node = current_hist_node->next) {
        const char *hist_key = (const char *)current_hist_node->item;
        prom_metric_sample_t *sample = (prom_metric_sample_t *)prom_map_get(hist_sample->samples, hist_key);
        if (sample == NULL) return 1;
        r = prom_metric_formatter_load_sample(self, sample);
        if (r) return r;
      }
    } else {
      prom_metric_sample_t *sample = (prom_metric_sample_t *)prom_map_get(metric->samples, key);
      if (sample == NULL) return 1;
      r = prom_metric_formatter_load_sample(self, sample);
      if (r) return r;
    }
  }
  return prom_string_builder_add_char(self->string_builder, '\n');
}

int prom_metric_formatter_load_metrics(prom_metric_formatter_t *self, prom_map_t *collectors) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  for (prom_linked_list_node_t *current_node = collectors->keys->head; current_node != NULL;
       current_node = current_node->next) {
    const char *collector_name = (const char *)current_node->item;
    prom_collector_t *collector = (prom_collector_t *)prom_map_get(collectors, collector_name);
    if (collector == NULL) return 1;

    prom_map_t *metrics = collector->collect_fn(collector);
    if (metrics == NULL) return 1;

    for (prom_linked_list_node_t *current_node = metrics->keys->head; current_node != NULL;
         current_node = current_node->next) {
      const char *metric_name = (const char *)current_node->item;
      prom_metric_t *metric = (prom_metric_t *)prom_map_get(metrics, metric_name);
      if (metric == NULL) return 1;
      r = prom_metric_formatter_load_metric(self, metric);
      if (r) return r;
    }
  }
  return r;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_formatter_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Reference: https://prometheus.io/docs/instrumenting/exposition_formats/

#ifndef PROM_METRIC_FORMATTER_I_H
#define PROM_METRIC_FORMATTER_I_H

// Private
#include "prom_metric_formatter_t.h"
#include "prom_metric_t.h"

/**
 * @brief API PRIVATE prom_metric_formatter constructor
 */
prom_metric_formatter_t *prom_metric_formatter_new();

/**
 * @brief API PRIVATE prom_metric_formatter destructor
 */
int prom_metric_formatter_destroy(prom_metric_formatter_t *self);

/**
 * @brief API PRIVATE Loads the help text
 */
int prom_metric_formatter_load_help(prom_metric_formatter_t *self, const char *name, const char *help);

/**
 * @brief API PRIVATE Loads the type text
 */
int prom_metric_formatter_load_type(prom_metric_formatter_t *self, const char *name, prom_metric_type_t metric_type);

/**
 * @brief API PRIVATE Loads the formatter with a metric sample L-value
 * @param name The metric name
 * @param suffix The metric suffix. This is applicable to Summary and Histogram metric types.
 * @param label_count The number of labels for the given metric.
 * @param label_keys An array of constant strings.
 * @param label_values An array of constant strings.
 *
 * The number of const char **and prom_label_value must be the same.
 */
int prom_metric_formatter_load_l_value(prom_metric_formatter_t *metric_formatter, const char *name, const char *suffix,
                                       size_t label_count, const char **label_keys, const char **label_values);

/**
 * @brief API PRIVATE Loads the formatter with a metric sample
 */
int prom_metric_formatter_load_sample(prom_metric_formatter_t *metric_formatter, prom_metric_sample_t *sample);

/**
 * @brief API PRIVATE Loads a metric in the string exposition format
 */
int prom_metric_formatter_load_metric(prom_metric_formatter_t *self, prom_metric_t *metric);

/**
 * @brief API PRIVATE Loads the given metrics
 */
int prom_metric_formatter_load_metrics(prom_metric_formatter_t *self, prom_map_t *collectors);

/**
 * @brief API PRIVATE Clear the underlying string_builder
 */
int prom_metric_formatter_clear(prom_metric_formatter_t *self);

/**
 * @brief API PRIVATE Returns the string built by prom_metric_formatter
 */
char *prom_metric_formatter_dump(prom_metric_formatter_t *metric_formatter);

#endif  // PROM_METRIC_FORMATTER_I_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_formatter_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_METRIC_FORMATTER_T_H
#define PROM_METRIC_FORMATTER_T_H

#include "prom_string_builder_t.h"

typedef struct prom_metric_formatter {
  prom_string_builder_t *string_builder;
  prom_string_builder_t *err_builder;
} prom_metric_formatter_t;

#endif  // PROM_METRIC_FORMATTER_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Private
#include "prom_metric_sample_histogram_t.h"
#include "prom_metric_t.h"

#ifndef PROM_METRIC_I_INCLUDED
#define PROM_METRIC_I_INCLUDED

/**
 * @brief API PRIVATE Returns a *prom_metric
 */
prom_metric_t *prom_metric_new(prom_metric_type_t type, const char *name, const char *help, size_t label_key_count,
                               const char **label_keys);

/**
 * @brief API PRIVATE Destroys a *prom_metric
 */
int prom_metric_destroy(prom_metric_t *self);

/**
 * @brief API PRIVATE takes a generic item, casts to a *prom_metric_t and destroys it
 */
int prom_metric_destroy_generic(void *item);

/**
 * @brief API Private takes a generic item, casts to a *prom_metric_t and destroys it. Discards any errors.
 */
void prom_metric_free_generic(void *item);

#endif  // PROM_METRIC_I_INCLUDED

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_sample.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdatomic.h>

// Public
#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_errors.h"
#include "prom_log.h"
#include "prom_metric_sample_i.h"
#include "prom_metric_sample_t.h"

prom_metric_sample_t *prom_metric_sample_new(prom_metric_type_t type, const char *l_value, double r_value) {
  prom_metric_sample_t *self = (prom_metric_sample_t *)prom_malloc(sizeof(prom_metric_sample_t));
  self->type = type;
  self->l_value = prom_strdup(l_value);
  self->r_value = ATOMIC_VAR_INIT(r_value);
  return self;
}

int prom_metric_sample_destroy(prom_metric_sample_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  prom_free((void *)self->l_value);
  self->l_value = NULL;
  prom_free((void *)self);
  self = NULL;
  return 0;
}

int prom_metric_sample_destroy_generic(void *gen) {
  int r = 0;

  prom_metric_sample_t *self = (prom_metric_sample_t *)gen;
  r = prom_metric_sample_destroy(self);
  self = NULL;
  return r;
}

void prom_metric_sample_free_generic(void *gen) {
  prom_metric_sample_t *self = (prom_metric_sample_t *)gen;
  prom_metric_sample_destroy(self);
}

int prom_metric_sample_add(prom_metric_sample_t *self, double r_value) {
  PROM_ASSERT(self != NULL);
  if (r_value < 0) {
    return 1;
  }
  _Atomic double old = atomic_load(&self->r_value);
  for (;;) {
    _Atomic double new = ATOMIC_VAR_INIT(old + r_value);
    if (atomic_compare_exchange_weak(&self->r_value, &old, new)) {
      return 0;
    }
  }
}

int prom_metric_sample_sub(prom_metric_sample_t *self, double r_value) {
  PROM_ASSERT(self != NULL);
  if (self->type != PROM_GAUGE) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  _Atomic double old = atomic_load(&self->r_value);
  for (;;) {
    _Atomic double new = ATOMIC_VAR_INIT(old - r_value);
    if (atomic_compare_exchange_weak(&self->r_value, &old, new)) {
      return 0;
    }
  }
}

int prom_metric_sample_set(prom_metric_sample_t *self, double r_value) {
  if (self->type != PROM_GAUGE) {
    PROM_LOG(PROM_METRIC_INCORRECT_TYPE);
    return 1;
  }
  atomic_store(&self->r_value, r_value);
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_sample_histogram.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <pthread.h>
#include <stdio.h>

// Public
#include "prom_alloc.h"
#include "prom_histogram.h"

// Private
#include "prom_assert.h"
#include "prom_errors.h"
#include "prom_linked_list_i.h"
#include "prom_log.h"
#include "prom_map_i.h"
#include "prom_metric_formatter_i.h"
#include "prom_metric_sample_histogram_i.h"
#include "prom_metric_sample_i.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Static Declarations
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static const char *prom_metric_sample_histogram_l_value_for_bucket(prom_metric_sample_histogram_t *self,
                                                                   const char *name, size_t label_count,
                                                                   const char **label_keys, const char **label_values,
                                                                   double bucket);

static const char *prom_metric_sample_histogram_l_value_for_inf(prom_metric_sample_histogram_t *self, const char *name,
                                                                size_t label_count, const char **label_keys,
                                                                const char **label_values);

static void prom_metric_sample_histogram_free_str_generic(void *gen);

static int prom_metric_sample_histogram_init_bucket_samples(prom_metric_sample_histogram_t *self, const char *name,
                                                            size_t label_count, const char **label_keys,
                                                            const char **label_values);

static int prom_metric_sample_histogram_init_inf(prom_metric_sample_histogram_t *self, const char *name,
                                                 size_t label_count, const char **label_keys,
                                                 const char **label_values);

static int prom_metric_sample_histogram_init_count(prom_metric_sample_histogram_t *self, const char *name,
                                                   size_t label_count, const char **label_keys,
                                                   const char **label_values);

static int prom_metric_sample_histogram_init_summary(prom_metric_sample_histogram_t *self, const char *name,
                                                     size_t label_count, const char **label_keys,
                                                     const char **label_values);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// End static declarations
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

prom_metric_sample_histogram_t *prom_metric_sample_histogram_new(const char *name, prom_histogram_buckets_t *buckets,
                                                                 size_t label_count, const char **label_keys,
                                                                 const char **label_values) {
  // Capture return codes
  int r = 0;

  // Allocate and set self
  prom_metric_sample_histogram_t *self =
      (prom_metric_sample_histogram_t *)prom_malloc(sizeof(prom_metric_sample_histogram_t));

  // Allocate and set the l_value_list
  self->l_value_list = prom_linked_list_new();
  if (self->l_value_list == NULL) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Allocate and set the metric formatter
  self->metric_formatter = prom_metric_formatter_new();
  if (self->metric_formatter == NULL) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Store map of l_value/prom_metric_sample_t
  self->samples = prom_map_new();
  if (self->samples == NULL) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Set the free value function on the samples map
  r = prom_map_set_free_value_fn(self->samples, &prom_metric_sample_free_generic);
  if (r) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Set a map of bucket: l_value
  self->l_values = prom_map_new();  // Store map of bucket/l_value
  if (self->l_values == NULL) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Set the free value function for thhe l_values map
  r = prom_map_set_free_value_fn(self->l_values, prom_metric_sample_histogram_free_str_generic);
  if (r) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  self->buckets = buckets;

  // Allocate and initialize the lock
  self->rwlock = (pthread_rwlock_t *)prom_malloc(sizeof(pthread_rwlock_t));
  r = pthread_rwlock_init(self->rwlock, NULL);
  if (r) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Allocate and initialize bucket metric samples
  r = prom_metric_sample_histogram_init_bucket_samples(self, name, label_count, label_keys, label_values);
  if (r) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Allocate and initialize the +Inf metric sample
  r = prom_metric_sample_histogram_init_inf(self, name, label_count, label_keys, label_values);
  if (r) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Allocate and initialize the count metric sample
  r = prom_metric_sample_histogram_init_count(self, name, label_count, label_keys, label_values);
  if (r) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // Add summary sample
  r = prom_metric_sample_histogram_init_summary(self, name, label_count, label_keys, label_values);
  if (r) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }

  // The value of nodes in this map will be simple prom_metric_sample pointers.
  r = prom_map_set_free_value_fn(self->samples, &prom_metric_sample_free_generic);
  if (r) {
    prom_metric_sample_histogram_destroy(self);
    return NULL;
  }
  return self;
}

static int prom_metric_sample_histogram_init_bucket_samples(prom_metric_sample_histogram_t *self, const char *name,
                                                            size_t label_count, const char **label_keys,
                                                            const char **label_values) {
  PROM_ASSERT(self);
  int r = 0;
  int bucket_count = prom_histogram_buckets_count(self->buckets);

  // For each bucket, create an prom_metric_sample_t with an appropriate l_value and default value of 0.0. The
  // l_value will contain the metric name, user labels, and finally, the le label and bucket value.
  for (int i = 0; i < bucket_count; i++) {
    const char *l_value = prom_metric_sample_histogram_l_value_for_bucket(self, name, label_count, label_keys,
                                                                          label_values, self->buckets->upper_bounds[i]);
    if (l_value == NULL) return 1;

    r = prom_linked_list_append(self->l_value_list, prom_strdup(l_value));
    if (r) return r;

    const char *bucket_key = prom_metric_sample_histogram_bucket_to_str(self->buckets->upper_bounds[i]);
    if (bucket_key == NULL) return 1;

    r = prom_map_set(self->l_values, bucket_key, (char *)l_value);
    if (r) return r;

    prom_metric_sample_t *sample = prom_metric_sample_new(PROM_HISTOGRAM, l_value, 0.0);
    if (sample == NULL) return 1;

    r = prom_map_set(self->samples, l_value, sample);
    if (r) return r;

    prom_free((void *)bucket_key);
  }
  return 0;
}

static int prom_metric_sample_histogram_init_inf(prom_metric_sample_histogram_t *self, const char *name,
                                                 size_t label_count, const char **label_keys,
                                                 const char **label_values) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  const char *inf_l_value =
      prom_metric_sample_histogram_l_value_for_inf(self, name, label_count, label_keys, label_values);
  if (inf_l_value == NULL) return 1;

  r = prom_linked_list_append(self->l_value_list, prom_strdup(inf_l_value));
  if (r) return r;

  r = prom_map_set(self->l_values, "+Inf", (char *)inf_l_value);
  if (r) return r;

  prom_metric_sample_t *inf_sample = prom_metric_sample_new(PROM_HISTOGRAM, (char *)inf_l_value, 0.0);
  if (inf_sample == NULL) return 1;

  return prom_map_set(self->samples, inf_l_value, inf_sample);
}

static int prom_metric_sample_histogram_init_count(prom_metric_sample_histogram_t *self, const char *name,
                                                   size_t label_count, const char **label_keys,
                                                   const char **label_values) {
  PROM_ASSERT(self != NULL);
  int r = 0;

  r = prom_metric_formatter_load_l_value(self->metric_formatter, name, "count", label_count, label_keys, label_values);
  if (r) return r;

  const char *count_l_value = prom_metric_formatter_dump(self->metric_formatter);
  if (count_l_value == NULL) return 1;

  r = prom_linked_list_append(self->l_value_list, prom_strdup(count_l_value));
  if (r) return r;

  r = prom_map_set(self->l_values, "count", (char *)count_l_value);
  if (r) return r;

  prom_metric_sample_t *count_sample = prom_metric_sample_new(PROM_HISTOGRAM, count_l_value, 0.0);
  if (count_sample == NULL) return 1;

  return prom_map_set(self->samples, count_l_value, count_sample);
}

static int prom_metric_sample_histogram_init_summary(prom_metric_sample_histogram_t *self, const char *name,
                                                     size_t label_count, const char **label_keys,
                                                     const char **label_values) {
  PROM_ASSERT(self != NULL);
  int r = 0;

  r = prom_metric_formatter_load_l_value(self->metric_formatter, name, "sum", label_count, label_keys, label_values);
  if (r) return r;

  const char *sum_l_value = prom_metric_formatter_dump(self->metric_formatter);
  if (sum_l_value == NULL) return 1;

  r = prom_linked_list_append(self->l_value_list, prom_strdup(sum_l_value));
  if (r) return r;

  r = prom_map_set(self->l_values, "sum", (char *)sum_l_value);
  if (r) return r;

  prom_metric_sample_t *sum_sample = prom_metric_sample_new(PROM_HISTOGRAM, sum_l_value, 0.0);
  if (sum_sample == NULL) return 1;

  return prom_map_set(self->samples, sum_l_value, sum_sample);
}

int prom_metric_sample_histogram_destroy(prom_metric_sample_histogram_t *self) {
  PROM_ASSERT(self != NULL);
  int r = 0;
  int ret = 0;

  if (self == NULL) return 0;

  r = prom_linked_list_destroy(self->l_value_list);
  self->l_value_list = NULL;
  if (r) ret = r;

  r = prom_map_destroy(self->samples);
  if (r) ret = r;
  self->samples = NULL;

  r = prom_map_destroy(self->l_values);
  if (r) ret = r;
  self->l_values = NULL;

  r = prom_metric_formatter_destroy(self->metric_formatter);
  if (r) ret = r;
  self->metric_formatter = NULL;

  r = pthread_rwlock_destroy(self->rwlock);
  if (r) ret = r;

  prom_free(self->rwlock);
  self->rwlock = NULL;

  prom_free(self);
  self = NULL;
  return ret;
}

int prom_metric_sample_histogram_destroy_generic(void *gen) {
  int r = 0;

  prom_metric_sample_histogram_t *self = (prom_metric_sample_histogram_t *)gen;
  r = prom_metric_sample_histogram_destroy(self);
  self = NULL;
  return r;
}

void prom_metric_sample_histogram_free_generic(void *gen) {
  prom_metric_sample_histogram_t *self = (prom_metric_sample_histogram_t *)gen;
  prom_metric_sample_histogram_destroy(self);
}

int prom_metric_sample_histogram_observe(prom_metric_sample_histogram_t *self, double value) {
  int r = 0;

  r = pthread_rwlock_wrlock(self->rwlock);
  if (r) {
    printf("RETURN CODE: %d\n", r);
    PROM_LOG(PROM_PTHREAD_RWLOCK_LOCK_ERROR);
    return r;
  }

#define PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(r) \
  int rr = 0;                                                 \
  rr = pthread_rwlock_unlock(self->rwlock);                   \
  if (rr) {                                                   \
    PROM_LOG(PROM_PTHREAD_RWLOCK_UNLOCK_ERROR);               \
    return rr;                                                \
  } else {                                                    \
    return r;                                                 \
  }

  // Update the counter for the proper bucket if found
  int bucket_count = prom_histogram_buckets_count(self->buckets);
  for (int i = (bucket_count - 1); i >= 0; i--) {
    if (value > self->buckets->upper_bounds[i]) {
      break;
    }

    const char *bucket_key = prom_metric_sample_histogram_bucket_to_str(self->buckets->upper_bounds[i]);
    if (bucket_key == NULL) {
      PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1)
    }

    const char *l_value = prom_map_get(self->l_values, bucket_key);
    if (l_value == NULL) {
      prom_free((void *)bucket_key);
      PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1)
    }

    prom_metric_sample_t *sample = prom_map_get(self->samples, l_value);
    if (sample == NULL) {
      prom_free((void *)bucket_key);
      PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1)
    }

    prom_free((void *)bucket_key);
    r = prom_metric_sample_add(sample, 1.0);
    if (r) {
      PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(r);
    }
  }

  // Update the +Inf and count samples
  const char *inf_l_value = prom_map_get(self->l_values, "+Inf");
  if (inf_l_value == NULL) {
    PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1);
  }

  prom_metric_sample_t *inf_sample = prom_map_get(self->samples, inf_l_value);
  if (inf_sample == NULL) {
    PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1);
  }

  r = prom_metric_sample_add(inf_sample, 1.0);
  if (r) {
    PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1);
  }

  const char *count_l_value = prom_map_get(self->l_values, "count");
  if (count_l_value == NULL) {
    PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1);
  }

  prom_metric_sample_t *count_sample = prom_map_get(self->samples, count_l_value);
  if (count_sample == NULL) {
    PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1);
  }

  r = prom_metric_sample_add(count_sample, 1.0);
  if (r) {
    PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1);
  }

  // Update the sum sample
  const char *sum_l_value = prom_map_get(self->l_values, "sum");
  if (sum_l_value == NULL) {
    PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1);
  }

  prom_metric_sample_t *sum_sample = prom_map_get(self->samples, sum_l_value);
  if (sum_sample == NULL) {
    PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(1);
  }

  r = prom_metric_sample_add(sum_sample, value);
  PROM_METRIC_SAMPLE_HISTOGRAM_OBSERVE_HANDLE_UNLOCK(r);
  return r;
}

static const char *prom_metric_sample_histogram_l_value_for_bucket(prom_metric_sample_histogram_t *self,
                                                                   const char *name, size_t label_count,
                                                                   const char **label_keys, const char **label_values,
                                                                   double bucket) {
  PROM_ASSERT(self != NULL);
  int r = 0;

#define PROM_METRIC_SAMPLE_HISTOGRAM_L_VALUE_FOR_BUCKET_CLEANUP() \
  for (size_t i = 0; i < label_count + 1; i++) {                  \
    prom_free((char *)new_keys[i]);                               \
    prom_free((char *)new_values[i]);                             \
  }                                                               \
  prom_free(new_keys);                                            \
  prom_free(new_values);

  // Make new array to hold label_keys with le label key
  const char **new_keys = (const char **)prom_malloc((label_count + 1) * sizeof(char *));
  for (size_t i = 0; i < label_count; i++) {
    new_keys[i] = prom_strdup(label_keys[i]);
  }
  new_keys[label_count] = prom_strdup("le");

  // Make new array to hold label_values with le label value
  const char **new_values = (const char **)prom_malloc((label_count + 1) * sizeof(char *));
  for (size_t i = 0; i < label_count; i++) {
    new_values[i] = prom_strdup(label_values[i]);
  }

  new_values[label_count] = prom_metric_sample_histogram_bucket_to_str(bucket);

  r = prom_metric_formatter_load_l_value(self->metric_formatter, name, NULL, label_count + 1, new_keys, new_values);
  if (r) {
    PROM_METRIC_SAMPLE_HISTOGRAM_L_VALUE_FOR_BUCKET_CLEANUP();
    return NULL;
  }
  const char *ret = (const char *)prom_metric_formatter_dump(self->metric_formatter);
  PROM_METRIC_SAMPLE_HISTOGRAM_L_VALUE_FOR_BUCKET_CLEANUP();
  return ret;
}

static const char *prom_metric_sample_histogram_l_value_for_inf(prom_metric_sample_histogram_t *self, const char *name,
                                                                size_t label_count, const char **label_keys,
                                                                const char **label_values) {
  PROM_ASSERT(self != NULL);
  int r = 0;

#define PROM_METRIC_SAMPLE_HISTOGRAM_L_VALUE_FOR_INF_CLEANUP() \
  for (size_t i = 0; i < label_count + 1; i++) {               \
    prom_free((char *)new_keys[i]);                            \
    prom_free((char *)new_values[i]);                          \
  }                                                            \
  prom_free(new_keys);                                         \
  prom_free(new_values);

  // Make new array to hold label_keys with le label key
  const char **new_keys = (const char **)prom_malloc((label_count + 1) * sizeof(char *));
  for (size_t i = 0; i < label_count; i++) {
    new_keys[i] = prom_strdup(label_keys[i]);
  }
  new_keys[label_count] = prom_strdup("le");

  // Make new array to hold label_values with le label value
  const char **new_values = (const char **)prom_malloc((label_count + 1) * sizeof(char *));
  for (size_t i = 0; i < label_count; i++) {
    new_values[i] = prom_strdup(label_values[i]);
  }

  new_values[label_count] = prom_strdup("+Inf");

  r = prom_metric_formatter_load_l_value(self->metric_formatter, name, NULL, label_count + 1, new_keys, new_values);
  if (r) {
    PROM_METRIC_SAMPLE_HISTOGRAM_L_VALUE_FOR_INF_CLEANUP()
    return NULL;
  }
  const char *ret = (const char *)prom_metric_formatter_dump(self->metric_formatter);
  PROM_METRIC_SAMPLE_HISTOGRAM_L_VALUE_FOR_INF_CLEANUP()
  return ret;
}

static void prom_metric_sample_histogram_free_str_generic(void *gen) {
  char *str = (char *)gen;
  prom_free((void *)str);
  str = NULL;
}

char *prom_metric_sample_histogram_bucket_to_str(double bucket) {
  char *buf = (char *)prom_malloc(sizeof(char) * 50);
  sprintf(buf, "%g", bucket);
  if (!strchr(buf, '.')) {
    strcat(buf, ".0");
  }
  return buf;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_sample_histogram_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_METRIC_HISTOGRAM_SAMPLE_I_H
#define PROM_METRIC_HISTOGRAM_SAMPLE_I_H

// Public
#include "prom_metric_sample_histogram.h"

// Private
#include "prom_metric_sample_histogram_t.h"

/**
 * @brief API PRIVATE Create a pointer to a prom_metric_sample_histogram_t
 */
prom_metric_sample_histogram_t *prom_metric_sample_histogram_new(const char *name, prom_histogram_buckets_t *buckets,
                                                                 size_t label_count, const char **label_keys,
                                                                 const char **label_vales);

/**
 * @brief API PRIVATE Destroy a prom_metric_sample_histogram_t
 */
int prom_metric_sample_histogram_destroy(prom_metric_sample_histogram_t *self);

/**
 * @brief API PRIVATE Destroy a void pointer that is cast to a prom_metric_sample_histogram_t*
 */
int prom_metric_sample_histogram_destroy_generic(void *gen);

char *prom_metric_sample_histogram_bucket_to_str(double bucket);

void prom_metric_sample_histogram_free_generic(void *gen);

#endif  // PROM_METRIC_HISTOGRAM_SAMPLE_I_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_sample_histogram_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <pthread.h>

// Public
#include "prom_histogram_buckets.h"
#include "prom_metric_sample_histogram.h"

// Private
#include "prom_map_t.h"
#include "prom_metric_formatter_t.h"

#ifndef PROM_METRIC_HISTOGRAM_SAMPLE_T_H
#define PROM_METRIC_HISTOGRAM_SAMPLE_T_H

struct prom_metric_sample_histogram {
  prom_linked_list_t *l_value_list;
  prom_map_t *l_values;
  prom_map_t *samples;
  prom_metric_formatter_t *metric_formatter;
  prom_histogram_buckets_t *buckets;
  pthread_rwlock_t *rwlock;
};

#endif  // PROM_METRIC_HISTOGRAM_SAMPLE_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_sample_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_metric_sample_t.h"
#include "prom_metric_t.h"

#ifndef PROM_METRIC_SAMPLE_I_H
#define PROM_METRIC_SAMPLE_I_H

/**
 * @brief API PRIVATE Return a prom_metric_sample_t*
 *
 * @param type The type of metric sample
 * @param l_value The entire left value of the metric e.g metric_name{foo="bar"}
 * @param r_value A double representing the value of the sample
 */
prom_metric_sample_t *prom_metric_sample_new(prom_metric_type_t type, const char *l_value, double r_value);

/**
 * @brief API PRIVATE Destroy the prom_metric_sample**
 */
int prom_metric_sample_destroy(prom_metric_sample_t *self);

/**
 * @brief API PRIVATE A prom_linked_list_free_item_fn to enable item destruction within a linked list's destructor
 */
int prom_metric_sample_destroy_generic(void *);

/**
 * @brief API PRIVATE A prom_linked_list_free_item_fn to enable item destruction within a linked list's destructor.
 *
 * This function ignores any errors.
 */
void prom_metric_sample_free_generic(void *gen);

#endif  // PROM_METRIC_SAMPLE_I_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_sample_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_METRIC_SAMPLE_T_H
#define PROM_METRIC_SAMPLE_T_H

#include "prom_metric_sample.h"
#include "prom_metric_t.h"

struct prom_metric_sample {
  prom_metric_type_t type; /**< type is the metric type for the sample */
  char *l_value;           /**< l_value is the full metric name and label set represeted as a string */
  _Atomic double r_value;  /**< r_value is the value of the metric sample */
};

#endif  // PROM_METRIC_SAMPLE_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_metric_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_METRIC_T_H
#define PROM_METRIC_T_H

#include <pthread.h>

// Public
#include "prom_histogram_buckets.h"
#include "prom_metric.h"

// Private
#include "prom_map_i.h"
#include "prom_map_t.h"
#include "prom_metric_formatter_t.h"

/**
 * @brief API PRIVATE Contains metric type constants
 */
typedef enum prom_metric_type { PROM_COUNTER, PROM_GAUGE, PROM_HISTOGRAM, PROM_SUMMARY } prom_metric_type_t;

/**
 * @brief API PRIVATE Maps metric type constants to human readable string values
 */
extern char *prom_metric_type_map[4];

/**
 * @brief API PRIVATE An opaque struct to users containing metric metadata; one or more metric samples; and a metric
 * formatter for locating metric samples and exporting metric data
 */
struct prom_metric {
  prom_metric_type_t type;            /**< metric_type      The type of metric */
  const char *name;                   /**< name             The name of the metric */
  const char *help;                   /**< help             The help output for the metric */
  prom_map_t *samples;                /**< samples          Map comprised of samples for the given metric */
  prom_histogram_buckets_t *buckets;  /**< buckets          Array of histogram bucket upper bound values */
  size_t label_key_count;             /**< label_keys_count The count of labe_keys*/
  prom_metric_formatter_t *formatter; /**< formatter        The metric formatter  */
  pthread_rwlock_t *rwlock;           /**< rwlock           Required for locking on certain non-atomic operations */
  const char **label_keys;            /**< labels           Array comprised of const char **/
};

#endif  // PROM_METRIC_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_fds.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

// Public
#include "prom_alloc.h"
#include "prom_gauge.h"

// Private
#include "prom_errors.h"
#include "prom_log.h"
#include "prom_process_fds_t.h"

prom_gauge_t *prom_process_open_fds;

int prom_process_fds_count(const char *path) {
  int count = 0;
  int r = 0;
  struct dirent *de;
  DIR *d;
  if (path) {
    d = opendir(path);
    if (d == NULL) {
      PROM_LOG(PROM_STDIO_OPEN_DIR_ERROR);
      return -1;
    }
  } else {
    int pid = (int)getpid();
    char p[50];
    sprintf(p, "/proc/%d/fd", pid);
    d = opendir(p);
    if (d == NULL) {
      PROM_LOG(PROM_STDIO_OPEN_DIR_ERROR);
      return -1;
    }
  }

  while ((de = readdir(d)) != NULL) {
    if (strcmp(".", de->d_name) == 0 || strcmp("..", de->d_name) == 0) {
      continue;
    }
    count++;
  }
  r = closedir(d);
  if (r) {
    PROM_LOG(PROM_STDIO_CLOSE_DIR_ERROR);
    return -1;
  }
  return count;
}

int prom_process_fds_init(void) {
  prom_process_open_fds = prom_gauge_new("process_open_fds", "Number of open file descriptors.", 0, NULL);
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_fds_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_PROESS_FDS_I_INCLUDED
#define PROM_PROESS_FDS_I_INCLUDED

int prom_process_fds_count(const char *path);
int prom_process_fds_init(void);

#endif  // PROM_PROESS_FDS_I_INCLUDED

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_fds_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom_gauge.h"

#ifndef PROM_PROESS_FDS_T_H
#define PROM_PROESS_FDS_T_H

extern prom_gauge_t *prom_process_open_fds;

#endif  // PROM_PROESS_FDS_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_limits.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

// Public
#include "prom_alloc.h"
#include "prom_gauge.h"

// Private
#include "prom_assert.h"
#include "prom_map_i.h"
#include "prom_process_limits_i.h"
#include "prom_process_limits_t.h"
#include "prom_procfs_i.h"

const char PROM_PROCESS_LIMITS_RDP_LETTERS[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                                                'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                                                'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                                'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

const char PROM_PROCESS_LIMITS_RDP_DIGITS[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

const char *PROM_PROCESS_LIMITS_RDP_UNLIMITED = "unlimited";

typedef enum prom_process_limit_rdp_limit_type {
  PROM_PROCESS_LIMITS_RDP_SOFT,
  PROM_PROCESS_LIMITS_RDP_HARD
} prom_process_limit_rdp_limit_type_t;

prom_gauge_t *prom_process_virtual_memory_max_bytes;
prom_gauge_t *prom_process_max_fds;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// prom_process_limits_row_t

prom_process_limits_row_t *prom_process_limits_row_new(const char *limit, const int soft, const int hard,
                                                       const char *units) {
  prom_process_limits_row_t *self = (prom_process_limits_row_t *)prom_malloc(sizeof(prom_process_limits_row_t));

  self->limit = prom_strdup(limit);
  self->units = prom_strdup(units);

  self->soft = soft;
  self->hard = hard;

  return self;
}

int prom_process_limits_row_destroy(prom_process_limits_row_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  prom_free((void *)self->limit);
  self->limit = NULL;

  prom_free((void *)self->units);
  self->units = NULL;

  prom_free(self);
  self = NULL;
  return 0;
}

prom_process_limits_current_row_t *prom_process_limits_current_row_new(void) {
  prom_process_limits_current_row_t *self =
      (prom_process_limits_current_row_t *)prom_malloc(sizeof(prom_process_limits_current_row_t));

  self->limit = NULL;
  self->soft = 0;
  self->hard = 0;
  self->units = NULL;
  return self;
}

int prom_process_limits_current_row_set_limit(prom_process_limits_current_row_t *self, char *limit) {
  PROM_ASSERT(self != NULL);
  self->limit = prom_strdup(limit);
  return 0;
}

int prom_process_limits_current_row_set_units(prom_process_limits_current_row_t *self, char *units) {
  PROM_ASSERT(self != NULL);
  self->units = prom_strdup(units);
  return 0;
}

int prom_process_limits_current_row_clear(prom_process_limits_current_row_t *self) {
  PROM_ASSERT(self != NULL);
  if (self->limit) {
    prom_free((void *)self->limit);
    self->limit = NULL;
  }
  if (self->units) {
    prom_free((void *)self->units);
    self->units = NULL;
  }
  self->soft = 0;
  self->hard = 0;
  return 0;
}

int prom_process_limits_current_row_destroy(prom_process_limits_current_row_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  int r = 0;

  r = prom_process_limits_current_row_clear(self);
  prom_free(self);
  self = NULL;
  return r;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// prom_process_limits_file_t

prom_process_limits_file_t *prom_process_limits_file_new(const char *path) {
  if (path) {
    return prom_procfs_buf_new(path);
  } else {
    int pid = (int)getpid();
    char path[255];
    sprintf(path, "/proc/%d/limits", pid);
    return prom_procfs_buf_new(path);
  }
}

int prom_process_limits_file_destroy(prom_process_limits_file_t *self) {
  PROM_ASSERT(self != NULL);
  int r = 0;

  if (self == NULL) return 0;
  r = prom_procfs_buf_destroy(self);
  self = NULL;
  return r;
}

static void prom_process_limits_file_free_map_item_fn(void *gen) {
  prom_process_limits_row_t *row = (prom_process_limits_row_t *)gen;
  prom_process_limits_row_destroy(row);
  row = NULL;
}

/**
 * @brief Returns a map. Each key is a key in /proc/[pid]/limits. Each value is a pointer to a
 * prom_process_limits_row_t. Returns NULL upon failure.
 *
 * EBNF
 *
 * limits_file = first_line , data_line , { data_line } ;
 * first_line = character, { character } , "\n" ;
 * character = " " | letter | digit ;
 * letter = "A" | "B" | "C" | "D" | "E" | "F" | "G"
 *        | "H" | "I" | "J" | "K" | "L" | "M" | "N"
 *        | "O" | "P" | "Q" | "R" | "S" | "T" | "U"
 *        | "V" | "W" | "X" | "Y" | "Z" | "a" | "b"
 *        | "c" | "d" | "e" | "f" | "g" | "h" | "i"
 *        | "j" | "k" | "l" | "m" | "n" | "o" | "p"
 *        | "q" | "r" | "s" | "t" | "u" | "v" | "w"
 *        | "x" | "y" | "z" ;
 * digit = "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9" ;
 * data_line = limit , space, space, { " " }, soft_limit, " ", " ", { " " }, hard_limit, " ", " ", { " " }, { units }, {
 * space_char }, "\n" ; space_char = " " | "\t" ; limit = { word_and_space } , word ; word_and_space = word, " " ; word
 * = letter, { letter } ; soft_limit = ( digit, { digit } ) | "unlimited" ; hard_limit = soft_limit ; units = word ;
 */
prom_map_t *prom_process_limits(prom_process_limits_file_t *f) {
  prom_map_t *m = prom_map_new();
  if (m == NULL) return NULL;
  int r = 0;

  r = prom_map_set_free_value_fn(m, &prom_process_limits_file_free_map_item_fn);
  if (r) {
    prom_map_destroy(m);
    m = NULL;
    return NULL;
  }

  prom_process_limits_current_row_t *current_row = prom_process_limits_current_row_new();
  if (!prom_process_limits_rdp_file(f, m, current_row)) {
    prom_process_limits_current_row_destroy(current_row);
    current_row = NULL;
    prom_map_destroy(m);
    m = NULL;
    return NULL;
  }
  r = prom_process_limits_current_row_destroy(current_row);
  current_row = NULL;
  if (r) return NULL;
  return m;
}

bool prom_process_limits_rdp_file(prom_process_limits_file_t *f, prom_map_t *map,
                                  prom_process_limits_current_row_t *current_row) {
  if (!prom_process_limits_rdp_first_line(f, map, current_row)) return false;

  while (f->index < f->size - 1) {
    if (!prom_process_limits_rdp_data_line(f, map, current_row)) return false;
  }

  return true;
}

bool prom_process_limits_rdp_first_line(prom_process_limits_file_t *f, prom_map_t *map,
                                        prom_process_limits_current_row_t *current_row) {
  while (prom_process_limits_rdp_character(f, map, current_row)) {
  }
  if (f->buf[f->index] == '\n') {
    f->index++;
    return true;
  }
  return false;
}

bool prom_process_limits_rdp_character(prom_process_limits_file_t *f, prom_map_t *map,
                                       prom_process_limits_current_row_t *current_row) {
  if (prom_process_limits_rdp_letter(f, map, current_row)) return true;
  if (prom_process_limits_rdp_digit(f, map, current_row)) return true;
  if (f->buf[f->index] == ' ' && f->buf[f->index] < f->size - 1) {
    f->index++;
    return true;
  }
  return false;
}

bool prom_process_limits_rdp_letter(prom_process_limits_file_t *f, prom_map_t *map,
                                    prom_process_limits_current_row_t *current_row) {
  if (f->index >= f->size - 1) return false;
  unsigned int size = sizeof(PROM_PROCESS_LIMITS_RDP_LETTERS);
  for (int i = 0; i < size; i++) {
    int letter = PROM_PROCESS_LIMITS_RDP_LETTERS[i];
    int in_buff = f->buf[f->index];
    if (letter == in_buff) {
      f->index++;
      return true;
    }
  }
  return false;
}

bool prom_process_limits_rdp_digit(prom_process_limits_file_t *f, prom_map_t *map,
                                   prom_process_limits_current_row_t *current_row) {
  if (f->index >= f->size - 1) return false;
  unsigned int size = sizeof(PROM_PROCESS_LIMITS_RDP_DIGITS);
  for (int i = 0; i < size; i++) {
    int digit = PROM_PROCESS_LIMITS_RDP_DIGITS[i];
    int in_buff = f->buf[f->index];
    if (digit == in_buff) {
      f->index++;
      return true;
    }
  }
  return false;
}

bool prom_process_limits_rdp_data_line(prom_process_limits_file_t *f, prom_map_t *map,
                                       prom_process_limits_current_row_t *current_row) {
  // Process and parse data line, loading relevant data into the current_row
  if (!prom_process_limits_rdp_limit(f, map, current_row)) return false;
  prom_process_limits_rdp_next_token(f);
  if (!prom_process_limits_rdp_soft_limit(f, map, current_row)) return false;
  prom_process_limits_rdp_next_token(f);
  if (!prom_process_limits_rdp_hard_limit(f, map, current_row)) return false;
  prom_process_limits_rdp_next_token(f);
  prom_process_limits_rdp_units(f, map, current_row);

  // Load data from the current row into the map
  const char *limit = (const char *)current_row->limit;
  int soft = current_row->soft;
  int hard = current_row->hard;
  const char *units = (const char *)current_row->units;
  prom_process_limits_row_t *row = prom_process_limits_row_new(limit, soft, hard, units);
  prom_map_set(map, limit, row);
  prom_process_limits_current_row_clear(current_row);

  // Progress to the next token
  prom_process_limits_rdp_next_token(f);
  return true;
}

/**
 * @brief EBNF: space_char = " " | "\t" ;
 */
bool prom_process_limits_rdp_space_char(prom_process_limits_file_t *f, prom_map_t *map,
                                        prom_process_limits_current_row_t *current_row) {
  char c = f->buf[f->index];
  if (c == ' ' || c == '\t') {
    f->index++;
    return true;
  }
  return false;
}

/**
 * @brief EBNF: limit = { word_and_space } , word ;
 */
bool prom_process_limits_rdp_limit(prom_process_limits_file_t *f, prom_map_t *map,
                                   prom_process_limits_current_row_t *current_row) {
  size_t current_index = f->index;
  while (prom_process_limits_rdp_word_and_space(f, map, current_row)) {
  }

  if (prom_process_limits_rdp_word(f, map, current_row)) {
    size_t size = f->index - current_index + 1;  // Add one for \0
    char limit[size];
    for (int i = 0; i < size - 1; i++) {
      limit[i] = f->buf[current_index + i];
    }
    limit[size - 1] = '\0';
    prom_process_limits_current_row_set_limit(current_row, limit);
    return true;
  }
  return false;
}

/**
 * @brief EBNF: word_and_space = letter, { letter }, " " ;
 */
bool prom_process_limits_rdp_word_and_space(prom_process_limits_file_t *f, prom_map_t *map,
                                            prom_process_limits_current_row_t *current_row) {
  size_t current_index = f->index;
  if (prom_process_limits_rdp_word(f, map, current_row) && f->buf[f->index] == ' ') {
    f->index++;
    if (f->index + 1 < f->size && f->buf[f->index + 1] != ' ' && f->buf[f->index + 1] != '\t') {
      return true;
    }
  }
  f->index = current_index;
  return false;
}

bool prom_process_limits_rdp_word(prom_process_limits_file_t *f, prom_map_t *map,
                                  prom_process_limits_current_row_t *current_row) {
  size_t original_index = f->index;
  while (prom_process_limits_rdp_letter(f, map, current_row)) {
  }
  return (f->index - original_index) > 0;
}

static bool prom_process_limits_rdp_generic_limit(prom_process_limits_file_t *f, prom_map_t *map,
                                                  prom_process_limits_current_row_t *current_row,
                                                  prom_process_limit_rdp_limit_type_t type) {
  size_t current_index = f->index;
  int value = 0;
  if (prom_process_limits_rdp_match(f, PROM_PROCESS_LIMITS_RDP_UNLIMITED)) {
    value = -1;
  } else {
    while (prom_process_limits_rdp_digit(f, map, current_row)) {
    }
    size_t num_digits = f->index - current_index + 1;
    if (num_digits <= 0) return false;

    char buf[num_digits + 1];

    for (size_t i = 0; i < num_digits - 1; i++) {
      buf[i] = f->buf[current_index + i];
    }
    buf[num_digits - 1] = '\0';
    value = atoi(buf);
    f->index += num_digits;
  }

  switch (type) {
    case PROM_PROCESS_LIMITS_RDP_SOFT:
      current_row->soft = value;
    case PROM_PROCESS_LIMITS_RDP_HARD:
      current_row->hard = value;
  }

  return true;
}

bool prom_process_limits_rdp_soft_limit(prom_process_limits_file_t *f, prom_map_t *map,
                                        prom_process_limits_current_row_t *current_row) {
  return prom_process_limits_rdp_generic_limit(f, map, current_row, PROM_PROCESS_LIMITS_RDP_SOFT);
}

bool prom_process_limits_rdp_hard_limit(prom_process_limits_file_t *f, prom_map_t *map,
                                        prom_process_limits_current_row_t *current_row) {
  return prom_process_limits_rdp_generic_limit(f, map, current_row, PROM_PROCESS_LIMITS_RDP_HARD);
}

bool prom_process_limits_rdp_units(prom_process_limits_file_t *f, prom_map_t *map,
                                   prom_process_limits_current_row_t *current_row) {
  size_t current_index = f->index;
  if (prom_process_limits_rdp_word(f, map, current_row)) {
    size_t num_chars = f->index - current_index + 1;
    char buf[num_chars];
    for (size_t i = 0; i < num_chars - 1; i++) {
      buf[i] = f->buf[current_index + i];
    }
    buf[num_chars - 1] = '\0';
    prom_process_limits_current_row_set_units(current_row, buf);
    return true;
  }
  return false;
}

int prom_process_limits_rdp_next_token(prom_process_limits_file_t *f) {
  while (f->buf[f->index] == ' ' || f->buf[f->index] == '\n' || f->buf[f->index] == '\t') {
    f->index++;
  }
  return 0;
}

bool prom_process_limits_rdp_match(prom_process_limits_file_t *f, const char *token) {
  size_t current_index = f->index;
  for (size_t i = 0; i < strlen(token); i++) {
    if (f->buf[current_index + i] != token[i]) {
      return false;
    }
  }
  f->index += strlen(token);
  return true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Initializes each gauge metric found in prom_process_t.h
 */
int prom_process_limits_init(void) {
  prom_process_max_fds = prom_gauge_new("process_max_fds", "Maximum number of open file descriptors.", 0, NULL);

  prom_process_virtual_memory_max_bytes = prom_gauge_new(
      "process_virtual_memory_max_bytes", "Maximum amount of virtual memory available in bytes.", 0, NULL);
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_limits_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_PROCESS_I_H
#define PROM_PROCESS_I_H

#include <stdbool.h>

#include "prom_map_t.h"
#include "prom_process_limits_t.h"

/**
 * @brief Initialize the process gauge metrics
 */
int prom_process_init(void);

prom_process_limits_row_t *prom_process_limits_row_new(const char *limit, const int soft, const int hard,
                                                       const char *units);
int prom_process_limits_row_destroy(prom_process_limits_row_t *self);

prom_process_limits_current_row_t *prom_process_limits_current_row_new(void);
int prom_process_limits_current_row_set_limit(prom_process_limits_current_row_t *self, char *limit);
int prom_process_limits_current_row_set_units(prom_process_limits_current_row_t *self, char *units);
int prom_process_limits_current_row_clear(prom_process_limits_current_row_t *self);
int prom_process_limits_current_row_destroy(prom_process_limits_current_row_t *self);

prom_process_limits_file_t *prom_process_limits_file_new(const char *path);
int prom_process_limits_file_destroy(prom_process_limits_file_t *self);

prom_map_t *prom_process_limits(prom_process_limits_file_t *f);
bool prom_process_limits_rdp_file(prom_process_limits_file_t *f, prom_map_t *data,
                                  prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_first_line(prom_process_limits_file_t *f, prom_map_t *data,
                                        prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_character(prom_process_limits_file_t *f, prom_map_t *data,
                                       prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_letter(prom_process_limits_file_t *f, prom_map_t *data,
                                    prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_digit(prom_process_limits_file_t *f, prom_map_t *data,
                                   prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_data_line(prom_process_limits_file_t *f, prom_map_t *data,
                                       prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_limit(prom_process_limits_file_t *f, prom_map_t *data,
                                   prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_word_and_space(prom_process_limits_file_t *f, prom_map_t *data,
                                            prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_word(prom_process_limits_file_t *f, prom_map_t *data,
                                  prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_soft_limit(prom_process_limits_file_t *f, prom_map_t *data,
                                        prom_process_limits_current_row_t *current_row);
;
bool prom_process_limits_rdp_hard_limit(prom_process_limits_file_t *f, prom_map_t *data,
                                        prom_process_limits_current_row_t *current_row);
bool prom_process_limits_rdp_units(prom_process_limits_file_t *f, prom_map_t *data,
                                   prom_process_limits_current_row_t *current_row);

int prom_process_limits_rdp_next_token(prom_process_limits_file_t *f);
bool prom_process_limits_rdp_match(prom_process_limits_file_t *f, const char *token);

int prom_process_limits_init(void);

#endif  // PROM_PROCESS_I_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_limits_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_PROCESS_T_H
#define PROM_PROCESS_T_H

#include "prom_gauge.h"
#include "prom_procfs_t.h"

extern prom_gauge_t *prom_process_open_fds;
extern prom_gauge_t *prom_process_max_fds;
extern prom_gauge_t *prom_process_virtual_memory_max_bytes;

typedef struct prom_process_limits_row {
  const char *limit; /**< Pointer to a string */
  int soft;          /**< Soft value */
  int hard;          /**< Hard value */
  const char *units; /**< Units  */
} prom_process_limits_row_t;

typedef struct prom_process_limits_current_row {
  char *limit; /**< Pointer to a string */
  int soft;    /**< Soft value */
  int hard;    /**< Hard value */
  char *units; /**< Units  */
} prom_process_limits_current_row_t;

typedef prom_procfs_buf_t prom_process_limits_file_t;

#endif  // PROM_PROCESS_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_stat.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

// Public
#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_process_stat_t.h"
#include "prom_procfs_i.h"

prom_gauge_t *prom_process_cpu_seconds_total;
prom_gauge_t *prom_process_virtual_memory_bytes;
prom_gauge_t *prom_process_resident_memory_bytes;
prom_gauge_t *prom_process_start_time_seconds;

prom_process_stat_file_t *prom_process_stat_file_new(const char *path) {
  if (path) {
    return prom_procfs_buf_new(path);
  } else {
    int pid = (int)getpid();
    char path[50];
    sprintf(path, "/proc/%d/stat", pid);
    return prom_procfs_buf_new(path);
  }
}

int prom_process_stat_file_destroy(prom_process_stat_file_t *self) {
  PROM_ASSERT(self != NULL);
  int r = 0;

  r = prom_procfs_buf_destroy(self);
  self = NULL;
  return r;
}

prom_process_stat_t *prom_process_stat_new(prom_process_stat_file_t *stat_f) {
  prom_process_stat_t *self = (prom_process_stat_t *)prom_malloc(sizeof(prom_process_stat_t));
  self->comm = prom_malloc(128);

  sscanf((const char *)stat_f->buf,
         "%d "                          // (1) pid  %d
         "%s "                          // (2) comm  %s
         "%c "                          // (3) state  %c
         "%d "                          // (4) ppid  %d
         "%d "                          // (5) pgrp  %d
         "%d "                          // (6) session  %d
         "%d "                          // (7) tty_nr  %d
         "%d "                          // (8) tpgid  %d
         "%u "                          // (9) flags  %u
         "%lu "                         // (10) minflt  %lu
         "%lu "                         // (11) cminflt  %lu
         "%lu "                         // (12) majflt  %lu
         "%lu "                         // (13) cmajflt  %lu
         "%lu "                         // (14) utime  %lu
         "%lu "                         // (15) stime  %lu
         "%ld "                         // (16) cutime  %ld
         "%ld "                         // (17) cstime  %ld
         "%ld "                         // (18) priority  %ld
         "%ld "                         // (19) nice  %ld
         "%ld "                         // (20) num_threads  %ld
         "%ld "                         // (21) itrealvalue  %ld
         "%llu "                        // (22) starttime  %llu
         "%lu "                         // (23) vsize  %lu
         "%ld "                         // (24) rss  %ld
         "%lu "                         // (25) rsslim  %lu
         "%lu "                         // (26) startcode  %lu  [PT]
         "%lu "                         // (27) endcode  %lu  [PT]
         "%lu "                         // (28) startstack  %lu  [PT]
         "%lu "                         // (29) kstkesp  %lu  [PT]
         "%lu "                         // (30) kstkeip  %lu  [PT]
         "%lu "                         // (31) signal  %lu
         "%lu "                         // (32) blocked  %lu
         "%lu "                         // (33) sigignore  %lu
         "%lu "                         // (34) sigcatch  %lu
         "%lu "                         // (35) wchan  %lu  [PT]
         "%lu "                         // (36) nswap  %lu
         "%lu "                         // (37) cnswap  %lu
         "%d "                          // (38) exit_signal  %d  (since Linux 2.1.22)
         "%d "                          // (39) processor  %d  (since Linux 2.2.8)
         "%u "                          // (40) rt_priority  %u  (since Linux 2.5.19)
         "%u "                          // (41) policy  %u  (since Linux 2.5.19)
         "%llu "                        // (42) delayacct_blkio_ticks  %llu  (since Linux 2.6.18)
         "%lu "                         // (43) guest_time  %lu  (since Linux 2.6.24)
         "%ld "                         // (44) cguest_time  %ld  (since Linux 2.6.24)
         "%lu "                         // (45) start_data  %lu  (since Linux 3.3)  [PT]
         "%lu "                         // (46) end_data  %lu  (since Linux 3.3)  [PT]
         "%lu "                         // (47) start_brk  %lu  (since Linux 3.3)  [PT]
         "%lu "                         // (48) arg_start  %lu  (since Linux 3.5)  [PT]
         "%lu "                         // (49) arg_end  %lu  (since Linux 3.5)  [PT]
         "%lu "                         // (50) env_start  %lu  (since Linux 3.5)  [PT]
         "%lu "                         // (51) env_end  %lu  (since Linux 3.5)  [PT]
         "%d ",                         // (52) exit_code  %d  (since Linux 3.5)  [PT]
         &self->pid,                    // (1) pid  %d
         self->comm,                    // (2) comm  %s
         &self->state,                  // (3) state  %c
         &self->ppid,                   // (4) ppid  %d
         &self->pgrp,                   // (5) pgrp  %d
         &self->session,                // (6) session  %d
         &self->tty_nr,                 // (7) tty_nr  %d
         &self->tpgid,                  // (8) tpgid  %d
         &self->flags,                  // (9) flags  %u
         &self->minflt,                 // (10) minflt  %lu
         &self->cminflt,                // (11) cminflt  %lu
         &self->majflt,                 // (12) majflt  %lu
         &self->cmajflt,                // (13) cmajflt  %lu
         &self->utime,                  // (14) utime  %lu
         &self->stime,                  // (15) stime  %lu
         &self->cutime,                 // (16) cutime  %ld
         &self->cstime,                 // (17) cstime  %ld
         &self->priority,               // (18) priority  %ld
         &self->nice,                   // (19) nice  %ld
         &self->num_threads,            // (20) num_threads  %ld
         &self->itrealvalue,            // (21) itrealvalue  %ld
         &self->starttime,              // (22) starttime  %llu
         &self->vsize,                  // (23) vsize  %lu
         &self->rss,                    // (24) rss  %ld
         &self->rsslim,                 // (25) rsslim  %lu
         &self->startcode,              // (26) startcode  %lu  [PT]
         &self->endcode,                // (27) endcode  %lu  [PT]
         &self->startstack,             // (28) startstack  %lu  [PT]
         &self->kstkesp,                // (29) kstkesp  %lu  [PT]
         &self->kstkeip,                // (30) kstkeip  %lu  [PT]
         &self->signal,                 // (31) signal  %lu
         &self->blocked,                // (32) blocked  %lu
         &self->sigignore,              // (33) sigignore  %lu
         &self->sigcatch,               // (34) sigcatch  %lu
         &self->wchan,                  // (35) wchan  %lu  [PT]
         &self->nswap,                  // (36) nswap  %lu
         &self->cnswap,                 // (37) cnswap  %lu
         &self->exit_signal,            // (38) exit_signal  %d  (since Linux 2.1.22)
         &self->processor,              // (39) processor  %d  (since Linux 2.2.8)
         &self->rt_priority,            // (40) rt_priority  %u  (since Linux 2.5.19)
         &self->policy,                 // (41) policy  %u  (since Linux 2.5.19)
         &self->delayacct_blkio_ticks,  // (42) delayacct_blkio_ticks  %llu  (since Linux 2.6.18)
         &self->guest_time,             // (43) guest_time  %lu  (since Linux 2.6.24)
         &self->cguest_time,            // (44) cguest_time  %ld  (since Linux 2.6.24)
         &self->start_data,             // (45) start_data  %lu  (since Linux 3.3)  [PT]
         &self->end_data,               // (46) end_data  %lu  (since Linux 3.3)  [PT]
         &self->start_brk,              // (47) start_brk  %lu  (since Linux 3.3)  [PT]
         &self->arg_start,              // (48) arg_start  %lu  (since Linux 3.5)  [PT]
         &self->arg_end,                // (49) arg_end  %lu  (since Linux 3.5)  [PT]
         &self->env_start,              // (50) env_start  %lu  (since Linux 3.5)  [PT]
         &self->env_end,                // (51) env_end  %lu  (since Linux 3.5)  [PT]
         &self->exit_code               // (52) exit_code  %d  (since Linux 3.5)  [PT]
  );
  return self;
}

int prom_process_stat_destroy(prom_process_stat_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  prom_free((void *)self->comm);
  prom_free((void *)self);
  self = NULL;
  return 0;
}

/**
 * @brief Initializes each gauge metric
 */
int prom_process_stats_init(void) {
  // /proc/[pid]stat cutime + cstime / 100
  prom_process_cpu_seconds_total =
      prom_gauge_new("process_cpu_seconds_total", "Total user and system CPU time spent in seconds.", 0, NULL);

  // /proc/[pid]/stat Field 23
  prom_process_virtual_memory_bytes =
      prom_gauge_new("process_virtual_memory_bytes", "Virtual memory size in bytes.", 0, NULL);

  // /proc/[pid]/stat Field 24
  prom_process_resident_memory_bytes =
      prom_gauge_new("process_resident_memory_bytes", "Resident memory size in bytes.", 0, NULL);

  prom_process_start_time_seconds =
      prom_gauge_new("process_start_time_seconds", "Start time of the process since unix epoch in seconds.", 0, NULL);
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_stat_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_PROCESS_STATS_I_H
#define PROM_PROCESS_STATS_I_H

#include "prom_process_stat_t.h"

prom_process_stat_file_t *prom_process_stat_file_new(const char *path);
int prom_process_stat_file_destroy(prom_process_stat_file_t *self);
prom_process_stat_t *prom_process_stat_new(prom_process_stat_file_t *stat_f);
int prom_process_stat_destroy(prom_process_stat_t *self);
int prom_process_stats_init(void);

#endif  // PROM_PROCESS_STATS_I_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_process_stat_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_PROCESS_STATS_T_H
#define PROM_PROCESS_STATS_T_H

#include "prom_gauge.h"
#include "prom_procfs_t.h"

extern prom_gauge_t *prom_process_cpu_seconds_total;
extern prom_gauge_t *prom_process_virtual_memory_bytes;
extern prom_gauge_t *prom_process_resident_memory_bytes;
extern prom_gauge_t *prom_process_start_time_seconds;

/**
 * @brief Refer to man proc and search for /proc/[pid]/stat
 */
typedef struct prom_process_stat {
  int pid;                                   // (1) pid  %d
  char *comm;                                // (2) comm  %s
  char state;                                // (3) state  %c
  int ppid;                                  // (4) ppid  %d
  int pgrp;                                  // (5) pgrp  %d
  int session;                               // (6) session  %d
  int tty_nr;                                // (7) tty_nr  %d
  int tpgid;                                 // (8) tpgid  %d
  unsigned flags;                            // (9) flags  %u
  unsigned long minflt;                      // (10) minflt  %lu
  unsigned long cminflt;                     // (11) cminflt  %lu
  unsigned long majflt;                      // (12) majflt  %lu
  unsigned long cmajflt;                     // (13) cmajflt  %lu
  unsigned long utime;                       // (14) utime  %lu
  unsigned long stime;                       // (15) stime  %lu
  long int cutime;                           // (16) cutime  %ld
  long int cstime;                           // (17) cstime  %ld
  long int priority;                         // (18) priority  %ld
  long int nice;                             // (19) nice  %ld
  long int num_threads;                      // (20) num_threads  %ld
  long int itrealvalue;                      // (21) itrealvalue  %ld
  unsigned long long starttime;              // (22) starttime  %llu
  unsigned long vsize;                       // (23) vsize  %lu
  long int rss;                              // (24) rss  %ld
  unsigned long rsslim;                      // (25) rsslim  %lu
  unsigned long startcode;                   // (26) startcode  %lu  [PT]
  unsigned long endcode;                     // (27) endcode  %lu  [PT]
  unsigned long startstack;                  // (28) startstack  %lu  [PT]
  unsigned long kstkesp;                     // (29) kstkesp  %lu  [PT]
  unsigned long kstkeip;                     // (30) kstkeip  %lu  [PT]
  unsigned long signal;                      // (31) signal  %lu
  unsigned long blocked;                     // (32) blocked  %lu
  unsigned long sigignore;                   // (33) sigignore  %lu
  unsigned long sigcatch;                    // (34) sigcatch  %lu
  unsigned long wchan;                       // (35) wchan  %lu  [PT]
  unsigned long nswap;                       // (36) nswap  %lu
  unsigned long cnswap;                      // (37) cnswap  %lu
  int exit_signal;                           // (38) exit_signal  %d  (since Linux 2.1.22)
  int processor;                             // (39) processor  %d  (since Linux 2.2.8)
  unsigned rt_priority;                      // (40) rt_priority  %u  (since Linux 2.5.19)
  unsigned policy;                           // (41) policy  %u  (since Linux 2.5.19)
  unsigned long long delayacct_blkio_ticks;  // (42) delayacct_blkio_ticks
  unsigned long guest_time;                  // (43) guest_time  %lu  (since Linux 2.6.24)
  long int cguest_time;                      // (44) cguest_time  %ld  (since Linux 2.6.24)
  unsigned long start_data;                  // (45) start_data  %lu  (since Linux 3.3)  [PT]
  unsigned long end_data;                    // (46) end_data  %lu  (since Linux 3.3)  [PT]
  unsigned long start_brk;                   // (47) start_brk  %lu  (since Linux 3.3)  [PT]
  unsigned long arg_start;                   // (48) arg_start  %lu  (since Linux 3.5)  [PT]
  unsigned long arg_end;                     // (49) arg_end  %lu  (since Linux 3.5)  [PT]
  unsigned long env_start;                   // (50) env_start  %lu  (since Linux 3.5)  [PT]
  unsigned long env_end;                     // (51) env_end  %lu  (since Linux 3.5)  [PT]
  int exit_code;                             // (52) exit_code  %d  (since Linux 3.5)  [PT]
} prom_process_stat_t;

typedef prom_procfs_buf_t prom_process_stat_file_t;

#endif  // PROM_PROCESS_STATS_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_procfs.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

// Public
#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_log.h"
#include "prom_procfs_i.h"

static int prom_procfs_ensure_buf_size(prom_procfs_buf_t *self) {
  PROM_ASSERT(self != NULL);
  if (self->allocated >= self->size + 1) return 0;
  while (self->allocated < self->size + 1) self->allocated <<= 1;
  self->buf = (char *)prom_realloc(self->buf, self->allocated);
  return 0;
}

prom_procfs_buf_t *prom_procfs_buf_new(const char *path) {
  int r = 0;

  FILE *f = fopen(path, "r");
  char errbuf[100];

  if (f == NULL) {
    strerror_r(errno, errbuf, 100);
    PROM_LOG(errbuf);
    return NULL;
  }

#define PROM_PROCFS_BUF_NEW_HANDLE_F_CLOSE(f) \
  r = fclose(f);                              \
  if (r) {                                    \
    strerror_r(errno, errbuf, 100);           \
    PROM_LOG(errbuf);                         \
  }

  unsigned short int initial_size = 32;
  prom_procfs_buf_t *self = prom_malloc(sizeof(prom_procfs_buf_t));
  self->buf = prom_malloc(initial_size);
  self->size = 0;
  self->index = 0;
  self->allocated = initial_size;

  for (int current_char = getc(f), i = 0; current_char != EOF; current_char = getc(f), i++) {
    r = prom_procfs_ensure_buf_size(self);
    if (r) {
      prom_procfs_buf_destroy(self);
      self = NULL;
      PROM_PROCFS_BUF_NEW_HANDLE_F_CLOSE(f);
      return NULL;
    }
    self->buf[i] = current_char;
    self->size++;
  }
  r = prom_procfs_ensure_buf_size(self);
  if (r) {
    prom_procfs_buf_destroy(self);
    self = NULL;
    PROM_PROCFS_BUF_NEW_HANDLE_F_CLOSE(f);
    return NULL;
  }

  self->buf[self->size] = '\0';
  self->size++;

  PROM_PROCFS_BUF_NEW_HANDLE_F_CLOSE(f);
  if (r) return NULL;
  return self;
}

int prom_procfs_buf_destroy(prom_procfs_buf_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  prom_free(self->buf);
  prom_free(self);
  self = NULL;
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_procfs_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_PROCFS_I_H
#define PROM_PROCFS_I_H

#include "prom_procfs_t.h"

prom_procfs_buf_t *prom_procfs_buf_new(const char *path);

int prom_procfs_buf_destroy(prom_procfs_buf_t *self);

#endif  // PROM_PROCFS_I_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_procfs_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_PROCFS_T_H
#define PROM_PROCFS_T_H

typedef struct prom_procfs_buf {
  size_t allocated;
  size_t size;
  size_t index;
  char *buf;
} prom_procfs_buf_t;

#endif  // PROM_PROCFS_T_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_string_builder.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stddef.h>

// Public
#include "prom_alloc.h"

// Private
#include "prom_assert.h"
#include "prom_string_builder_i.h"
#include "prom_string_builder_t.h"

// The initial size of a string created via prom_string_builder
#define PROM_STRING_BUILDER_INIT_SIZE 32

// prom_string_builder_init prototype declaration
int prom_string_builder_init(prom_string_builder_t *self);

struct prom_string_builder {
  char *str;        /**< the target string  */
  size_t allocated; /**< the size allocated to the string in bytes */
  size_t len;       /**< the length of str */
  size_t init_size; /**< the initialize size of space to allocate */
};

prom_string_builder_t *prom_string_builder_new(void) {
  int r = 0;

  prom_string_builder_t *self = (prom_string_builder_t *)prom_malloc(sizeof(prom_string_builder_t));
  self->init_size = PROM_STRING_BUILDER_INIT_SIZE;
  r = prom_string_builder_init(self);
  if (r) {
    prom_string_builder_destroy(self);
    return NULL;
  }

  return self;
}

int prom_string_builder_init(prom_string_builder_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  self->str = (char *)prom_malloc(self->init_size);
  *self->str = '\0';
  self->allocated = self->init_size;
  self->len = 0;
  return 0;
}

int prom_string_builder_destroy(prom_string_builder_t *self) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 0;
  prom_free(self->str);
  self->str = NULL;
  prom_free(self);
  self = NULL;
  return 0;
}

/**
 * @brief API PRIVATE Grows the size of the string given the value we want to add
 *
 * The method continuously shifts left until the new size is large enough to accommodate add_len. This private method
 * is called in methods that need to add one or more characters to the underlying string.
 */
static int prom_string_builder_ensure_space(prom_string_builder_t *self, size_t add_len) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (add_len == 0 || self->allocated >= self->len + add_len + 1) return 0;
  while (self->allocated < self->len + add_len + 1) self->allocated <<= 1;
  self->str = (char *)prom_realloc(self->str, self->allocated);
  return 0;
}

int prom_string_builder_add_str(prom_string_builder_t *self, const char *str) {
  PROM_ASSERT(self != NULL);
  int r = 0;

  if (self == NULL) return 1;
  if (str == NULL || *str == '\0') return 0;

  size_t len = strlen(str);
  r = prom_string_builder_ensure_space(self, len);
  if (r) return r;

  memcpy(self->str + self->len, str, len);
  self->len += len;
  self->str[self->len] = '\0';
  return 0;
}

int prom_string_builder_add_char(prom_string_builder_t *self, char c) {
  PROM_ASSERT(self != NULL);
  int r = 0;

  if (self == NULL) return 1;
  r = prom_string_builder_ensure_space(self, 1);
  if (r) return r;

  self->str[self->len] = c;
  self->len++;
  self->str[self->len] = '\0';
  return 0;
}

int prom_string_builder_truncate(prom_string_builder_t *self, size_t len) {
  PROM_ASSERT(self != NULL);
  if (self == NULL) return 1;
  if (len >= self->len) return 0;

  self->len = len;
  self->str[self->len] = '\0';
  return 0;
}

int prom_string_builder_clear(prom_string_builder_t *self) {
  PROM_ASSERT(self != NULL);
  prom_free(self->str);
  self->str = NULL;
  return prom_string_builder_init(self);
}

size_t prom_string_builder_len(prom_string_builder_t *self) {
  PROM_ASSERT(self != NULL);
  return self->len;
}

char *prom_string_builder_dump(prom_string_builder_t *self) {
  PROM_ASSERT(self != NULL);
  // +1 to accommodate \0
  char *out = (char *)prom_malloc((self->len + 1) * sizeof(char));
  memcpy(out, self->str, self->len + 1);
  return out;
}

char *prom_string_builder_str(prom_string_builder_t *self) {
  PROM_ASSERT(self != NULL);
  return self->str;
}

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_string_builder_i.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_STRING_BUILDER_I_H
#define PROM_STRING_BUILDER_I_H

#include <stddef.h>

#include "prom_string_builder_t.h"

/**
 * API PRIVATE
 * @brief Constructor for prom_string_builder
 */
prom_string_builder_t *prom_string_builder_new(void);

/**
 * API PRIVATE
 * @brief Destroys a prom_string_builder*
 */
int prom_string_builder_destroy(prom_string_builder_t *self);

/**
 * API PRIVATE
 * @brief Adds a string
 */
int prom_string_builder_add_str(prom_string_builder_t *self, const char *str);

/**
 * API PRIVATE
 * @brief Adds a char
 */
int prom_string_builder_add_char(prom_string_builder_t *self, char c);

/**
 * API PRIVATE
 * @brief Clear the string
 */
int prom_string_builder_clear(prom_string_builder_t *self);

/**
 * API PRIVATE
 * @brief Remove data from the end
 */
int prom_string_buillder_truncate(prom_string_builder_t *self, size_t len);

/**
 * API PRIVATE
 * @brief Returns the length of the string
 */
size_t prom_string_builder_len(prom_string_builder_t *self);

/**
 * API PRIVATE
 * @brief Returns a copy of the string. The returned string must be deallocated when no longer needed.
 */
char *prom_string_builder_dump(prom_string_builder_t *self);

/**
 * API PRIVATE
 * @brief Getter for str member
 */
char *prom_string_builder_str(prom_string_builder_t *self);

#endif  // PROM_STRING_BUILDER_I_H

```


---
### Archivo: `external/prometheus-client-c/prom/src/prom_string_builder_t.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROM_STRING_BUILDER_T_H
#define PROM_STRING_BUILDER_T_H

struct prom_string_builder;
/**
 * @brief API PRIVATE A structure with functions responsible for building a string
 */
typedef struct prom_string_builder prom_string_builder_t;

#endif  // PROM_STRING_BUILDER_T_H

```


---
### Archivo: `external/prometheus-client-c/autolib/autolib.sh`

```bash
#!/usr/bin/env bash

lib="$(dirname ${BASH_SOURCE[0]})"

source "${lib}/output.sh"
source "${lib}/build.sh"
source "${lib}/docker.sh"
source "${lib}/env.sh"
source "${lib}/test.sh"

```


---
### Archivo: `external/prometheus-client-c/autolib/build.sh`

```bash
#!/usr/bin/env bash

lib="$(dirname ${BASH_SOURCE[0]})"

source "${lib}/env.sh"
source "${lib}/output.sh"

# build all libraries
autolib_build() {
  local lib=$1
  local build_test=$2

  if [[ ! -d ${lib}/build ]]; then
    mkdir ${lib}/build || {
      autolib_output_error "Failed to create build directory"
      return 1
    }
  fi
  pushd ${lib}/build > /dev/null || return $?
    autolib_output_banner "${lib}: CMake Build Stage"
    # YOU MUST set TEST to 1 in order to build the tests
    TEST=$build_test cmake -v .. || {
      autolib_output_error "${lib}: CMake Failure"
      return 1
    }
    autolib_output_banner "${lib}: Make Build Stage"
    make || {
      autolib_output_error "${lib} Make Failure"
      return 1
    }
  popd > /dev/null || return $?
}
```


---
### Archivo: `external/prometheus-client-c/autolib/docker.sh`

```bash
#!/usr/bin/env bash

lib="$(dirname ${BASH_SOURCE[0]})"
source "${lib}/output.sh"

PROJECT_ROOT=$(pushd "$(dirname ${BASH_SOURCE[0]})/.." > /dev/null; echo $PWD; popd > /dev/null)

autolib_new_debian_template(){
  cat <<'EOF'
FROM __DOCKER_IMAGE__

RUN set -x && \
    apt-get update && \
    apt-get install -y apt-utils software-properties-common clang-format && \
    add-apt-repository ppa:ubuntu-toolchain-r/test && \
    apt-get update -y && \
    apt-get install -y curl tar build-essential git pkg-config gdb valgrind gcc-10 libmicrohttpd-dev doxygen graphviz && \
    rm -f /usr/bin/gcc && \
    ln -s /usr/bin/gcc-10 /usr/bin/gcc && \
    curl -sL https://github.com/Kitware/CMake/releases/download/v3.14.5/cmake-3.14.5-Linux-x86_64.tar.gz | tar xzf - -C /opt && \
    cp /opt/cmake-3.14.5-Linux-x86_64/bin/* /usr/local/bin/ && \
    cp -R /opt/cmake-3.14.5-Linux-x86_64/share/cmake-3.14 /usr/local/share/ && \
    curl -sL https://dl.google.com/go/go1.13.1.linux-amd64.tar.gz 2> /dev/null | tar xzf - -C /usr/local && \
    mkdir -p /gopath/{src,bin} && \
    printf 'export GOPATH=/gopath\nexport PATH=$PATH:/usr/local/go/bin:/gopath/bin\n' > /root/.bash_profile && \
    printf '#!/usr/bin/env bash\nsource /root/.bash_profile\nexec /bin/bash $@\n' > /entrypoint && \
    chmod +x /entrypoint && \
    GOPATH=/gopath /usr/local/go/bin/go get github.com/prometheus/prom2json && \
    GOPATH=/gopath /usr/local/go/bin/go install github.com/prometheus/prom2json/cmd/prom2json && \
    GOPATH=/gopath /usr/local/go/bin/go get github.com/git-chglog/git-chglog && \
    GOPATH=/gopath /usr/local/go/bin/go install github.com/git-chglog/git-chglog/cmd/git-chglog && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /code
ENTRYPOINT ["/entrypoint"]

EOF
}

autolib_old_debian_template(){
  cat <<'EOF'
FROM __DOCKER_IMAGE__

ENV GCC_VERSION 10.1.0

RUN set -x && \
    apt-get update && \
    apt-get install -y apt-utils clang-format && \
    apt-get install -y curl tar build-essential git pkg-config gdb valgrind gcc libmicrohttpd-dev doxygen graphviz && \
    curl -sL https://github.com/Kitware/CMake/releases/download/v3.14.5/cmake-3.14.5-Linux-x86_64.tar.gz | tar xzf - -C /opt && \
    cp /opt/cmake-3.14.5-Linux-x86_64/bin/* /usr/local/bin/ && \
    cp -R /opt/cmake-3.14.5-Linux-x86_64/share/cmake-3.14 /usr/local/share/ && \
    curl -sL https://dl.google.com/go/go1.13.1.linux-amd64.tar.gz 2> /dev/null | tar xzf - -C /usr/local && \
    mkdir -p /gopath/{src,bin} && \
    printf 'export GOPATH=/gopath\nexport PATH=$PATH:/usr/local/go/bin:/gopath/bin\n' > /root/.bash_profile && \
    printf '#!/usr/bin/env bash\nsource /root/.bash_profile\nexec /bin/bash $@\n' > /entrypoint && \
    chmod +x /entrypoint && \
    GOPATH=/gopath /usr/local/go/bin/go get github.com/prometheus/prom2json && \
    GOPATH=/gopath /usr/local/go/bin/go install github.com/prometheus/prom2json/cmd/prom2json && \
    GOPATH=/gopath /usr/local/go/bin/go get github.com/git-chglog/git-chglog && \
    GOPATH=/gopath /usr/local/go/bin/go install github.com/git-chglog/git-chglog/cmd/git-chglog && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /code
ENTRYPOINT ["/entrypoint"]

EOF
}

autolib_debian_jessie_template() {
  cat <<EOF
FROM __DOCKER_IMAGE__

ENV GCC_VERSION 10.1.0

RUN set -x && \
    apt-get update && \
    apt-get install -y apt-utils && \
    apt-get install -y curl tar build-essential git pkg-config gdb valgrind gcc libmicrohttpd-dev doxygen graphviz && \
    curl -sL https://github.com/Kitware/CMake/releases/download/v3.14.5/cmake-3.14.5-Linux-x86_64.tar.gz | tar xzf - -C /opt && \
    cp /opt/cmake-3.14.5-Linux-x86_64/bin/* /usr/local/bin/ && \
    cp -R /opt/cmake-3.14.5-Linux-x86_64/share/cmake-3.14 /usr/local/share/ && \
    curl -sL https://dl.google.com/go/go1.13.1.linux-amd64.tar.gz 2> /dev/null | tar xzf - -C /usr/local && \
    mkdir -p /gopath/{src,bin} && \
    printf 'export GOPATH=/gopath\nexport PATH=$PATH:/usr/local/go/bin:/gopath/bin\n' > /root/.bash_profile && \
    printf '#!/usr/bin/env bash\nsource /root/.bash_profile\nexec /bin/bash $@\n' > /entrypoint && \
    chmod +x /entrypoint && \
    GOPATH=/gopath /usr/local/go/bin/go get github.com/prometheus/prom2json && \
    GOPATH=/gopath /usr/local/go/bin/go install github.com/prometheus/prom2json/cmd/prom2json && \
    GOPATH=/gopath /usr/local/go/bin/go get github.com/git-chglog/git-chglog && \
    GOPATH=/gopath /usr/local/go/bin/go install github.com/git-chglog/git-chglog/cmd/git-chglog && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /code
ENTRYPOINT ["/entrypoint"]


EOF
}

autolib_write_dockerfile(){
  local docker_image="$1"
  local r
  case "$docker_image" in
    ( ubuntu:20.04 | ubuntu:18.04 ) {
       autolib_new_debian_template | sed "s/__DOCKER_IMAGE__/$docker_image/g" > ${PROJECT_ROOT}/docker/Dockerfile || {
        r=$?
        autolib_output_error "failed to generate dockerfile"
        return $r
      }
    } ;;
    ( ubuntu:16.04 | debian:buster | debian:stretch ) {
      autolib_old_debian_template | sed "s/__DOCKER_IMAGE__/$docker_image/g" > ${PROJECT_ROOT}/docker/Dockerfile || {
        r=$?
        autolib_output_error "failed to generate dockerfile"
        return $r
      }
    } ;;
    ( debian:jessie ) {
       autolib_debian_jessie_template | sed "s/__DOCKER_IMAGE__/$docker_image/g" > ${PROJECT_ROOT}/docker/Dockerfile || {
        r=$?
        autolib_output_error "failed to generate dockerfile"
        return $r
      }
    } ;;
    ( * ) {
      r=1
      autolib_output_error "unsupported DOCKER_IMAGE: $docker_image"
      return $r
    } ;;
  esac
}
```


---
### Archivo: `external/prometheus-client-c/autolib/env.sh`

```bash
#!/usr/bin/env bash

autolib_check_dev(){
  local dev=${DEV:=0}
  if (( dev == 0 )); then
    autolib_output_err "Not executing in the Docker environment"
    return 1
  fi
}
```


---
### Archivo: `external/prometheus-client-c/autolib/output.sh`

```bash
#!/usr/bin/env bash

# Print a stage. Pass a string to be enveloped in a banner.
autolib_output_banner(){
  echo -e "\n\033[1m########################################################################\033[0m" >&2
  echo -e "\033[1m> $@\033[0m" >&2
  echo -e "\033[1m########################################################################\033[0m\n" >&2
}

autolib_output_error() {
  echo -e "\033[1;31mERROR: $@\033[0m" >&2
}

autolib_output_success() {
  echo -e "\033[1;32mSUCCESS: $@\033[0m" >&2
}

autolib_output_warn() {
  echo -e "\033[1;33mWARN: $@\033[0m" >&2
}
```


---
### Archivo: `external/prometheus-client-c/autolib/test.sh`

```bash
#!/usr/bin/env bash

lib="$(dirname ${BASH_SOURCE[0]})"

source "${lib}/output.sh"

autolib_test() {
  local library="$1"
  local r
  pushd ${lib}/build > /dev/null || return $?
    autolib_output_banner "${library}: Starting Tests"
    ARGS=' --track-origins=yes --output-on-failure=yes --verbose' make test && {
      r=$?
      autolib_output_success "${library}: Test Pass"
    } || {
      r=$?
      autolib_output_error "${library}: Test Failure"
    }
  popd > /dev/null || return $?
  return $r
}

autolib_mem_test() {
  local library="$1"
  local r
  pushd ${library} > /dev/null || return $?
    autolib_output_banner "${library}: Starting MemTests"
    while read test_file; do
      valgrind --leak-check=full --error-exitcode=1 --num-callers=30 "$test_file" && {
        r=$?
        autolib_output_success "${library} ${test_file}: MemTest Pass"
      } || {
        r=$?
        autolib_output_error "${library} ${test_file}: MemTest Failure"
      }
    done < <(find build -maxdepth 1 -regex ".*prom.*test$")
  popd > /dev/null || return $?
  return $r
}
```


---
### Archivo: `external/prometheus-client-c/.github/workflows/ci.yaml`

```yaml
name: CI
# This workflow is triggered on pushes to the repository.
on:
  - push
  - pull_request

jobs:
  ubuntu-20-04:
    name: ubuntu-20-04
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - name: test
        env:
          DOCKER_IMAGE: ubuntu:20.04
          CI: 1
        run: make
  ubuntu-18-04:
    name: ubuntu-18-04
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - name: test
        env:
          DOCKER_IMAGE: ubuntu:18.04
          CI: 1
        run: make
  ubuntu-16-04:
    name: ubuntu-16-04
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - name: test
        env:
          DOCKER_IMAGE: ubuntu:16.04
          CI: 1
        run: make
  debian-buster:
    name: debian-buster
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - name: test
        env:
          DOCKER_IMAGE: debian:buster
          CI: 1
        run: make
  debian-stretch:
    name: debian-stretch
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - name: test
        env:
          DOCKER_IMAGE: debian:stretch
          CI: 1
        run: make
  debian-jessie:
    name: debian-jessie
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - name: test
        env:
          DOCKER_IMAGE: debian:jessie
          CI: 1
        run: make
```


---
### Archivo: `external/prometheus-client-c/promhttp/CMakeLists.txt`

```
cmake_minimum_required(VERSION 3.14.5)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    OUTPUT_VARIABLE Version
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\1/g"
    OUTPUT_VARIABLE MajorVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\2/"
    OUTPUT_VARIABLE MinorVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\3/"
    OUTPUT_VARIABLE PatchVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

project(libpromhttp VERSION ${Version} LANGUAGES C)

set(build_dir ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(public_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(private_dir ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(prom_include_dir ${CMAKE_CURRENT_SOURCE_DIR}/../prom/include)
set(public_files ${public_dir}/promhttp.h)
set(private_files ${private_dir}/promhttp.c)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../prom/build)

include(FindThreads)

add_library(promhttp SHARED)

target_include_directories(
    promhttp
    PUBLIC ${public_dir} /usr/include ${prom_include_dir}
    PRIVATE ${private_dir}
)

target_sources(
    promhttp
    PUBLIC ${public_files}
    PRIVATE ${private_files}
)

find_library(prom prom HINTS ${CMAKE_CURRENT_SOURCE_DIR}/../prom/build)
find_library(microhttpd microhttpd)

target_compile_options(promhttp PRIVATE "-Werror" "-Wuninitialized" "-Wall" "-Wno-unused-label" "-std=gnu11")
target_compile_options(promhttp PUBLIC "-Werror" "-Wuninitialized" "-Wall" "-Wno-unused-label" "-std=gnu11")

target_link_libraries(promhttp PUBLIC Threads::Threads prom microhttpd)

set(CPACK_PACKAGE_NAME libpromhttp-dev)
set(CPACK_GENERATOR TGZ;DEB)
set(CPACK_PACKAGE_VENDOR DigitalOcean)
set(CPACK_PACKAGE_VERSION_MAJOR ${MajorVersion})
set(CPACK_PACKAGE_VERSION_MINOR ${MinorVersion})
set(CPACK_PACKAGE_VERSION_PATCH ${PatchVersion})
set(CPACK_PACKAGE_DESCRIPTION_FILE ${CMAKE_CURRENT_SOURCE_DIR}/../README.md)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A library providing a lightweight HTTP Server for Prometheus metric scraping")
set(CPACK_PACKAGE_HOMEPAGE_URL https://github.internal.digitalocean.com/timeseries/prometheus-client-c)
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libprom-dev (= ${Version})")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libmicrohttpd-dev")

include(CPack)
include(GNUInstallDirs)
install(TARGETS promhttp ARCHIVE)
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

```


---
### Archivo: `external/prometheus-client-c/promhttp/include/promhttp.h`

```c
/*
 Copyright 2019-2020 DigitalOcean Inc.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/**
 * @file promhttp.h
 * @brief Provides a HTTP endpoint for metric exposition
 * References:
 *   * MHD_FLAG: https://www.gnu.org/software/libmicrohttpd/manual/libmicrohttpd.html#microhttpd_002dconst
 *   * MHD_AcceptPolicyCallback:
 * https://www.gnu.org/software/libmicrohttpd/manual/libmicrohttpd.html#index-_002aMHD_005fAcceptPolicyCallback
 */

#include <string.h>

#include "microhttpd.h"
#include "prom_collector_registry.h"

/**
 * @brief Sets the active registry for metric scraping.
 *
 * @param active_registery The target prom_collector_registry_t*. If null is passed, the default registry is used.
 *                         The registry MUST be initialized.
 */
void promhttp_set_active_collector_registry(prom_collector_registry_t *active_registry);

/**
 *  @brief Starts a daemon in the background and returns a pointer to an HMD_Daemon.
 *
 * References:
 *  * https://www.gnu.org/software/libmicrohttpd/manual/libmicrohttpd.html#microhttpd_002dinit
 *
 * @return struct MHD_Daemon*
 */
struct MHD_Daemon *promhttp_start_daemon(unsigned int flags, unsigned short port, MHD_AcceptPolicyCallback apc,
                                         void *apc_cls);

```


---
### Archivo: `external/prometheus-client-c/promhttp/src/promhttp.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <string.h>

#include "microhttpd.h"
#include "prom.h"

prom_collector_registry_t *PROM_ACTIVE_REGISTRY;

void promhttp_set_active_collector_registry(prom_collector_registry_t *active_registry) {
  if (!active_registry) {
    PROM_ACTIVE_REGISTRY = PROM_COLLECTOR_REGISTRY_DEFAULT;
  } else {
    PROM_ACTIVE_REGISTRY = active_registry;
  }
}

enum MHD_Result promhttp_handler(void *cls, struct MHD_Connection *connection, const char *url, const char *method,
                     const char *version, const char *upload_data, size_t *upload_data_size, void **con_cls) {
  if (strcmp(method, "GET") != 0) {
    char *buf = "Invalid HTTP Method\n";
    struct MHD_Response *response = MHD_create_response_from_buffer(strlen(buf), (void *)buf, MHD_RESPMEM_PERSISTENT);
    int ret = MHD_queue_response(connection, MHD_HTTP_BAD_REQUEST, response);
    MHD_destroy_response(response);
    return ret;
  }
  if (strcmp(url, "/") == 0) {
    char *buf = "OK\n";
    struct MHD_Response *response = MHD_create_response_from_buffer(strlen(buf), (void *)buf, MHD_RESPMEM_PERSISTENT);
    int ret = MHD_queue_response(connection, MHD_HTTP_OK, response);
    MHD_destroy_response(response);
    return ret;
  }
  if (strcmp(url, "/metrics") == 0) {
    const char *buf = prom_collector_registry_bridge(PROM_ACTIVE_REGISTRY);
    struct MHD_Response *response = MHD_create_response_from_buffer(strlen(buf), (void *)buf, MHD_RESPMEM_MUST_FREE);
    int ret = MHD_queue_response(connection, MHD_HTTP_OK, response);
    MHD_destroy_response(response);
    return ret;
  }
  char *buf = "Bad Request\n";
  struct MHD_Response *response = MHD_create_response_from_buffer(strlen(buf), (void *)buf, MHD_RESPMEM_PERSISTENT);
  int ret = MHD_queue_response(connection, MHD_HTTP_BAD_REQUEST, response);
  MHD_destroy_response(response);
  return ret;
}

struct MHD_Daemon *promhttp_start_daemon(unsigned int flags, unsigned short port, MHD_AcceptPolicyCallback apc,
                                         void *apc_cls) {
  return MHD_start_daemon(flags, port, apc, apc_cls, &promhttp_handler, NULL, MHD_OPTION_END);
}

```


---
### Archivo: `external/prometheus-client-c/promtest/CMakeLists.txt`

```
cmake_minimum_required(VERSION 3.14.5)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    OUTPUT_VARIABLE Version
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\1/g"
    OUTPUT_VARIABLE MajorVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\2/"
    OUTPUT_VARIABLE MinorVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
    COMMAND cat ${CMAKE_CURRENT_SOURCE_DIR}/../VERSION
    COMMAND sed --regexp-extended "s/([0-9]+)\.([0-9])+\.([0-9]+)/\\3/"
    OUTPUT_VARIABLE PatchVersion
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

project(promtest VERSION ${Version} LANGUAGES C)

set(prom_deb ${CMAKE_CURRENT_SOURCE_DIR}/../prom/libprom-dev-${Version}-Linux.deb)
set(promhttp_deb ${CMAKE_CURRENT_SOURCE_DIR}/../promhttp/libpromhttp-dev-${Version}-Linux.deb)

execute_process(
    COMMAND dpkg -i ${prom_deb}
    RESULT_VARIABLE prom_install_result
)

if(${prom_install_result} GREATER 0)
    message(FATAL_ERROR "failed to install ${prom_deb}")
endif()

execute_process(
    COMMAND dpkg -i ${promhttp_deb}
    RESULT_VARIABLE promhttp_install_result
)

if(${promhttp_install_result} GREATER 0)
    message(FATAL_ERROR "failed to install ${promhttp_deb}")
endif()

enable_testing()
set(vendor_dir ${CMAKE_SOURCE_DIR}/../vendor)
set(test_dir ${CMAKE_SOURCE_DIR}/test)

# Unity Dependency
set(unity_version 2.4.3)
set(unity_output ${build_dir}/unity-v${unity_version}.tar.gz)
set(unity_package ${vendor_dir}/unity)
set(unity_src ${vendor_dir}/Unity-${unity_version}/src)

if(NOT EXISTS ${vendor_dir}/Unity-${unity_version})
    execute_process(
        COMMAND curl -L https://github.com/ThrowTheSwitch/Unity/archive/v${unity_version}.tar.gz
        COMMAND tar xzvf - -C ${vendor_dir}
    )
endif()

set(
    unity_files
    ${unity_src}/unity.c
    ${unity_src}/unity.h
    ${unity_src}/unity_internals.h
)

add_library(Unity SHARED)
target_include_directories(Unity PUBLIC ${unity_src})
target_sources(Unity PUBLIC ${unity_files})
target_compile_options(Unity PUBLIC "-D UNITY_INCLUDE_DOUBLE")


# Parson dependency
set(parson_src ${vendor_dir}/parson)

if (NOT EXISTS ${vendor_dir}/parson)
    execute_process(
        COMMAND git clone https://github.com/kgabis/parson ${vendor_dir}/parson
    )
endif()

set(
    parson_files
    ${parson_src}/parson.c
    ${parson_src}/parson.h
)

add_library(parson SHARED)
target_include_directories(parson PUBLIC ${parson_src})
target_sources(parson PUBLIC ${parson_files})

include(FindThreads)

add_executable(
    promtest
    ${test_dir}/promtest.c
    ${test_dir}/promtest_helpers.c
    ${test_dir}/promtest_helpers.h
    ${test_dir}/promtest_counter.c
    ${test_dir}/promtest_counter.h
    ${test_dir}/promtest_gauge.c
    ${test_dir}/promtest_gauge.h
    ${test_dir}/promtest_histogram.c
    ${test_dir}/promtest_histogram.h
)
target_link_libraries(promtest microhttpd prom promhttp Unity parson Threads::Threads)
target_include_directories(promtest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_test(
    NAME promtest
    COMMAND promtest
)

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "promtest_counter.h"
#include "promtest_gauge.h"
#include "promtest_histogram.h"
#include "promtest_helpers.h"
#include "unity.h"

int main(int argc, const char **argv) {
  UNITY_BEGIN();
  RUN_TEST(promtest_counter);
  RUN_TEST(promtest_gauge);
  RUN_TEST(promtest_histogram);
  return UNITY_END();
}

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest_counter.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "promtest_counter.h"

#include <pthread.h>

#include "parson.h"
#include "prom.h"
#include "promhttp.h"
#include "promtest_helpers.h"
#include "unity.h"

static void *promtest_counter_handler(void *data);
static int promtest_parse_counter_output(const char *output, char **value);
prom_counter_t *foo_counter;

/**
 * @brief For each thread in a threadpool of 10 we increment a single counter 1
 * million times
 *
 * The purpose of this test is to check for deadlock and race conditions
 */
void promtest_counter(void) {
  if (promtest_counter_setup()) {
    TEST_FAIL_MESSAGE("failed to setup promtest_counter");
  }

  void *retvals[PROMTEST_THREAD_POOL_SIZE];
  pthread_t thread_pool[PROMTEST_THREAD_POOL_SIZE];

  // Start each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (pthread_create(&(thread_pool[i]), NULL, promtest_counter_handler, NULL)) {
      TEST_FAIL_MESSAGE("failed to create thread");
    }
  }

  // Join each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (pthread_join(thread_pool[i], (void **)&(retvals[i]))) {
      TEST_FAIL_MESSAGE("thread failed to join");
    }
  }

  // verify clean exit for each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (*((int *)retvals[i]) != 0) {
      TEST_FAIL_MESSAGE("thread did not exit properly");
    }
  }

  // scrape the endpoint
  FILE *f = popen("prom2json http://0.0.0.0:8000/metrics", "r");
  if (f == NULL) {
    TEST_FAIL_MESSAGE("shell out failed");
  }
  promtest_popen_buf_t *buf = promtest_popen_buf_new(f);
  if (promtest_popen_buf_read(buf)) {
    TEST_FAIL_MESSAGE("failed to scrape endpoint");
  }

  const char *output = strdup(buf->buf);
  if (promtest_popen_buf_destroy(buf)) {
    TEST_FAIL_MESSAGE("failed to duplicate buf");
  }

  // Parse the output
  char *value = (char *)malloc(sizeof(char) * 100);
  if (promtest_parse_counter_output(output, &value)) {
    TEST_FAIL_MESSAGE("failed to parse output");
  }

  // Assert
  TEST_ASSERT_EQUAL_STRING("5e+06", value);
  if (promtest_counter_teardown()) {
    TEST_FAIL_MESSAGE("failed to teardown promtest_counter");
  }

  free(value);
}

int promtest_counter_setup(void) {
  // Initialize the default collector registry
  prom_collector_registry_default_init();

  // Set the counter
  foo_counter =
      prom_collector_registry_must_register_metric(prom_counter_new("foo_counter", "counter for foo", 0, NULL));

  // Set the collector registry on the handler to the default registry
  promhttp_set_active_collector_registry(NULL);

  // Start the HTTP server
  promtest_daemon = promhttp_start_daemon(MHD_USE_SELECT_INTERNALLY, 8000, NULL, NULL);

  if (promtest_daemon == NULL)
    return 1;
  else
    return 0;
}

int promtest_counter_teardown(void) {
  // Destroy the default registry. This effectively deallocates all metrics
  // registered to it, including itself
  prom_collector_registry_destroy(PROM_COLLECTOR_REGISTRY_DEFAULT);
  PROM_COLLECTOR_REGISTRY_DEFAULT = NULL;

  // Stop the HTTP server
  MHD_stop_daemon(promtest_daemon);

  return 0;
}

/**
 * @brief The entrypoint to a worker thread within the prom_counter_test
 */
static void *promtest_counter_handler(void *data) {
  for (int i = 0; i < 1000000; i++) {
    prom_counter_inc(foo_counter, NULL);
  }
  int *retval = (int *)malloc(sizeof(int));
  *retval = 0;
  return (void *)retval;
}

/**
 * @brief Parse the output and set the value of the foo_counter metric.
 *
 * We must past a pointer to a char* so the value gets updated
 */
static int promtest_parse_counter_output(const char *output, char **value) {
  // Parse the JSON output
  JSON_Value *root = json_parse_string(output);
  if (json_value_get_type(root) != JSONArray) {
    TEST_FAIL_MESSAGE("JSON Parse error...expected JSONArray type");
  }

  JSON_Array *collection = json_value_get_array(root);
  if (collection == NULL) {
    TEST_FAIL_MESSAGE("Failed to extract array from JSON_Value");
  }

  for (int i = 0; i < json_array_get_count(collection); i++) {
    JSON_Object *obj = json_array_get_object(collection, i);
    if (obj == NULL) {
      TEST_FAIL_MESSAGE("failed to retrieve single object within JSON_Array");
    }
    const char *name = json_object_get_string(obj, "name");
    if (strcmp(name, "foo_counter")) {
      continue;
    }
    JSON_Array *samples = json_object_dotget_array(obj, "metrics");
    if (samples == NULL) {
      TEST_FAIL_MESSAGE("failed to retrieve metrics from JSON_Object");
    }
    if (json_array_get_count(samples) < 1) {
      TEST_FAIL_MESSAGE("No samples found");
    }
    JSON_Object *sample = json_array_get_object(samples, 0);
    if (sample == NULL) {
      TEST_FAIL_MESSAGE("failed to get metric sample");
    }
    *value = (char *)json_object_get_string(sample, "value");
  }
  if (strlen(*value) == 0) {
    return 1;
  }
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest_counter.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom.h"

#ifndef PROMTEST_COUNTER_H
#define PROMTEST_COUNTER_H

extern prom_counter_t *foo_counter;

int promtest_counter_setup(void);
int promtest_counter_teardown(void);

void promtest_counter(void);

#endif  // PROMTEST_COUNTER_H

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest_gauge.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "promtest_gauge.h"

#include <pthread.h>

#include "parson.h"
#include "prom.h"
#include "promhttp.h"
#include "promtest_helpers.h"
#include "unity.h"

static void *promtest_gauge_handler(void *data);
static int promtest_parse_gauge_output(const char *output, char **value);
prom_gauge_t *foo_gauge;

/**
 * @brief For each thread in a threadpool of 10 we increment a single gauge 1
 * million times
 *
 * The purpose of this test is to check for deadlock and race conditions
 */
void promtest_gauge(void) {
  if (promtest_gauge_setup()) {
    TEST_FAIL_MESSAGE("failed to setup promtest_gauge");
  }

  void *retvals[PROMTEST_THREAD_POOL_SIZE];
  pthread_t thread_pool[PROMTEST_THREAD_POOL_SIZE];

  // Start each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (pthread_create(&(thread_pool[i]), NULL, promtest_gauge_handler, NULL)) {
      TEST_FAIL_MESSAGE("failed to create thread");
    }
  }

  // Join each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (pthread_join(thread_pool[i], (void **)&(retvals[i]))) {
      TEST_FAIL_MESSAGE("thread failed to join");
    }
  }

  // verify clean exit for each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (*((int *)retvals[i]) != 0) {
      TEST_FAIL_MESSAGE("thread did not exit properly");
    }
  }

  // scrape the endpoint
  FILE *f = popen("prom2json http://0.0.0.0:8000/metrics", "r");
  if (f == NULL) {
    TEST_FAIL_MESSAGE("shell out failed");
  }
  promtest_popen_buf_t *buf = promtest_popen_buf_new(f);
  if (promtest_popen_buf_read(buf)) {
    TEST_FAIL_MESSAGE("failed to scrape endpoint");
  }

  const char *output = strdup(buf->buf);
  if (promtest_popen_buf_destroy(buf)) {
    TEST_FAIL_MESSAGE("failed to duplicate buf");
  }

  // Parse the output
  char *value = (char *)malloc(sizeof(char) * 100);
  if (promtest_parse_gauge_output(output, &value)) {
    TEST_FAIL_MESSAGE("failed to parse output");
  }

  // Assert
  TEST_ASSERT_EQUAL_STRING("5e+06", value);
  if (promtest_gauge_teardown()) {
    TEST_FAIL_MESSAGE("failed to teardown promtest_gauge");
  }

  free(value);
}

int promtest_gauge_setup(void) {
  // Initialize the default collector registry
  prom_collector_registry_default_init();

  // Set the gauge
  foo_gauge = prom_collector_registry_must_register_metric(prom_gauge_new("foo_gauge", "gauge for foo", 0, NULL));

  // Set the collector registry on the handler to the default registry
  promhttp_set_active_collector_registry(NULL);

  // Start the HTTP server
  promtest_daemon = promhttp_start_daemon(MHD_USE_SELECT_INTERNALLY, 8000, NULL, NULL);

  if (promtest_daemon == NULL)
    return 1;
  else
    return 0;
}

int promtest_gauge_teardown(void) {
  // Destroy the default registry. This effectively deallocates all metrics
  // registered to it, including itself
  prom_collector_registry_destroy(PROM_COLLECTOR_REGISTRY_DEFAULT);

  PROM_COLLECTOR_REGISTRY_DEFAULT = NULL;

  // Stop the HTTP server
  MHD_stop_daemon(promtest_daemon);

  return 0;
}

/**
 * @brief The entrypoint to a worker thread within the prom_gauge_test
 */
static void *promtest_gauge_handler(void *data) {
  for (int i = 0; i < 1000000; i++) {
    prom_gauge_inc(foo_gauge, NULL);
  }
  int *retval = (int *)malloc(sizeof(int));
  *retval = 0;
  return (void *)retval;
}

/**
 * @brief Parse the output and set the value of the foo_gauge metric.
 *
 * We must past a pointer to a char* so the value gets updated
 */
static int promtest_parse_gauge_output(const char *output, char **value) {
  // Parse the JSON output
  JSON_Value *root = json_parse_string(output);
  if (json_value_get_type(root) != JSONArray) {
    TEST_FAIL_MESSAGE("JSON Parse error...expected JSONArray type");
  }

  JSON_Array *collection = json_value_get_array(root);
  if (collection == NULL) {
    TEST_FAIL_MESSAGE("Failed to extract array from JSON_Value");
  }

  for (int i = 0; i < json_array_get_count(collection); i++) {
    JSON_Object *obj = json_array_get_object(collection, i);
    if (obj == NULL) {
      TEST_FAIL_MESSAGE("failed to retrieve single object within JSON_Array");
    }
    const char *name = json_object_get_string(obj, "name");
    if (strcmp(name, "foo_gauge")) {
      continue;
    }
    JSON_Array *samples = json_object_dotget_array(obj, "metrics");
    if (samples == NULL) {
      TEST_FAIL_MESSAGE("failed to retrieve metrics from JSON_Object");
    }
    if (json_array_get_count(samples) < 1) {
      TEST_FAIL_MESSAGE("No samples found");
    }
    JSON_Object *sample = json_array_get_object(samples, 0);
    if (sample == NULL) {
      TEST_FAIL_MESSAGE("failed to get metric sample");
    }
    *value = (char *)json_object_get_string(sample, "value");
  }
  if (strlen(*value) == 0) {
    return 1;
  }
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest_gauge.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom.h"

#ifndef PROMTEST_GAUGE_H
#define PROMTEST_GAUGE_H

extern prom_gauge_t *foo_gauge;

int promtest_gauge_setup(void);
int promtest_gauge_teardown(void);

void promtest_gauge(void);

#endif  // PROMTEST_GAUGE_H

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest_helpers.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "promtest_helpers.h"

#include <stdio.h>
#include <stdlib.h>

#include "prom.h"

struct MHD_Daemon *promtest_daemon;

promtest_popen_buf_t *promtest_popen_buf_new(FILE *f) {
  promtest_popen_buf_t *self = (promtest_popen_buf_t *)malloc(sizeof(promtest_popen_buf_t));
  self->buf = malloc(32);
  self->size = 32;
  self->allocated = 32;
  self->f = f;
  return self;
}

int promtest_popen_buf_ensure_space(promtest_popen_buf_t *self) {
  if (self->allocated >= self->size + 1) return 0;
  while (self->allocated < self->size + 1) self->allocated <<= 1;
  self->buf = (char *)prom_realloc(self->buf, self->allocated);
  return 0;
}

int promtest_popen_buf_destroy(promtest_popen_buf_t *self) {
  if (self == NULL) {
    return 0;
  }
  free((void *)self->buf);
  self->buf = NULL;
  free((void *)self);
  self = NULL;
  return 0;
}

int promtest_popen_buf_read(promtest_popen_buf_t *self) {
  for (int current_char = fgetc(self->f), i = 0; current_char != EOF; current_char = fgetc(self->f), i++) {
    promtest_popen_buf_ensure_space(self);
    self->buf[i] = current_char;
    self->size++;
  }
  promtest_popen_buf_ensure_space(self);
  self->buf[self->size] = '\0';
  self->size++;
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest_helpers.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>

#ifndef PROMTTEST_HELPERS_H
#define PROMTTEST_HELPERS_H

#define PROMTEST_THREAD_POOL_SIZE 5

extern struct MHD_Daemon *promtest_daemon;

typedef struct promtest_popen_buf {
  char *buf;
  int size;
  int allocated;
  FILE *f;
} promtest_popen_buf_t;

promtest_popen_buf_t *promtest_popen_buf_new(FILE *f);
int promtest_popen_buf_destroy(promtest_popen_buf_t *self);
int promtest_popen_buf_read(promtest_popen_buf_t *self);
int promtest_popen_buf_ensure_space(promtest_popen_buf_t *self);

#endif  // PROMTEST_HELPERS_H

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest_histogram.c`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "promtest_histogram.h"

#include <pthread.h>

#include "parson.h"
#include "prom.h"
#include "promhttp.h"
#include "promtest_helpers.h"
#include "unity.h"

static void *promtest_histogram_handler(void *data);
static int promtest_parse_histogram_output(const char *output, char **value);
prom_histogram_t *foo_histogram;

/**
 * @brief For each thread in a threadpool of 10 we increment a single histogram 1
 * million times
 *
 * The purpose of this test is to check for deadlock and race conditions
 */
void promtest_histogram(void) {
  if (promtest_histogram_setup()) {
    TEST_FAIL_MESSAGE("failed to setup promtest_histogram");
  }

  void *retvals[PROMTEST_THREAD_POOL_SIZE];
  pthread_t thread_pool[PROMTEST_THREAD_POOL_SIZE];

  // Start each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (pthread_create(&(thread_pool[i]), NULL, promtest_histogram_handler, NULL)) {
      TEST_FAIL_MESSAGE("failed to create thread");
    }
  }

  // Join each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (pthread_join(thread_pool[i], (void **)&(retvals[i]))) {
      TEST_FAIL_MESSAGE("thread failed to join");
    }
  }

  // verify clean exit for each thread
  for (int i = 0; i < PROMTEST_THREAD_POOL_SIZE; i++) {
    if (*((int *)retvals[i]) != 0) {
      TEST_FAIL_MESSAGE("thread did not exit properly");
    }
  }

  // scrape the endpoint
  FILE *f = popen("prom2json http://0.0.0.0:8000/metrics", "r");
  if (f == NULL) {
    TEST_FAIL_MESSAGE("shell out failed");
  }
  promtest_popen_buf_t *buf = promtest_popen_buf_new(f);
  if (promtest_popen_buf_read(buf)) {
    TEST_FAIL_MESSAGE("failed to scrape endpoint");
  }

  const char *output = strdup(buf->buf);
  if (promtest_popen_buf_destroy(buf)) {
    TEST_FAIL_MESSAGE("failed to duplicate buf");
  }

  // Parse the output
  char *value = (char *)malloc(sizeof(char) * 100);
  if (promtest_parse_histogram_output(output, &value)) {
    TEST_FAIL_MESSAGE("failed to parse output");
  }

  // Assert
  //TEST_ASSERT_EQUAL_STRING("5e+06", value);
  TEST_ASSERT_EQUAL_STRING("5000000", value);
  if (promtest_histogram_teardown()) {
    TEST_FAIL_MESSAGE("failed to teardown promtest_histogram");
  }

  free(value);
}

int promtest_histogram_setup(void) {
  // Initialize the default collector registry
  prom_collector_registry_default_init();

  // Set the histogram
  foo_histogram =
      prom_collector_registry_must_register_metric(prom_histogram_new("foo_histogram", "histogram for foo", prom_histogram_default_buckets, 0, NULL));

  // Set the collector registry on the handler to the default registry
  promhttp_set_active_collector_registry(NULL);

  // Start the HTTP server
  promtest_daemon = promhttp_start_daemon(MHD_USE_SELECT_INTERNALLY, 8000, NULL, NULL);

  if (promtest_daemon == NULL)
    return 1;
  else
    return 0;
}

int promtest_histogram_teardown(void) {
  // Destroy the default registry. This effectively deallocates all metrics
  // registered to it, including itself
  prom_collector_registry_destroy(PROM_COLLECTOR_REGISTRY_DEFAULT);
  PROM_COLLECTOR_REGISTRY_DEFAULT = NULL;

  // Stop the HTTP server
  MHD_stop_daemon(promtest_daemon);

  return 0;
}

/**
 * @brief The entrypoint to a worker thread within the prom_histogram_test
 */
static void *promtest_histogram_handler(void *data) {
  for (int i = 0; i < 1000000; i++) {
    prom_histogram_observe(foo_histogram, i/1000.0, NULL);
  }
  int *retval = (int *)malloc(sizeof(int));
  *retval = 0;
  return (void *)retval;
}

/**
 * @brief Parse the output and set the value of the foo_histogram metric.
 *
 * We must past a pointer to a char* so the value gets updated
 */
static int promtest_parse_histogram_output(const char *output, char **value) {
  // Parse the JSON output
  JSON_Value *root = json_parse_string(output);
  if (json_value_get_type(root) != JSONArray) {
    TEST_FAIL_MESSAGE("JSON Parse error...expected JSONArray type");
  }

  JSON_Array *collection = json_value_get_array(root);
  if (collection == NULL) {
    TEST_FAIL_MESSAGE("Failed to extract array from JSON_Value");
  }

  for (int i = 0; i < json_array_get_count(collection); i++) {
    JSON_Object *obj = json_array_get_object(collection, i);
    if (obj == NULL) {
      TEST_FAIL_MESSAGE("failed to retrieve single object within JSON_Array");
    }
    const char *name = json_object_get_string(obj, "name");
    if (strcmp(name, "foo_histogram")) {
      continue;
    }
    JSON_Array *samples = json_object_dotget_array(obj, "metrics");
    if (samples == NULL) {
      TEST_FAIL_MESSAGE("failed to retrieve metrics from JSON_Object");
    }
    if (json_array_get_count(samples) < 1) {
      TEST_FAIL_MESSAGE("No samples found");
    }
    JSON_Object *sample = json_array_get_object(samples, 0);
    if (sample == NULL) {
      TEST_FAIL_MESSAGE("failed to get metric sample");
    }
    *value = (char *)json_object_get_string(sample, "count");
    break;
  }
  if (strlen(*value) == 0) {
    return 1;
  }
  return 0;
}

```


---
### Archivo: `external/prometheus-client-c/promtest/test/promtest_histogram.h`

```c
/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom.h"

#ifndef PROMTEST_HISTOGRAM_H
#define PROMTEST_HISTOGRAM_H

extern prom_histogram_t *foo_histogram;

int promtest_histogram_setup(void);
int promtest_histogram_teardown(void);

void promtest_histogram(void);

#endif  // PROMTEST_HISTOGRAM_H

```


---
### Archivo: `src/main.c`

```c
/**
 * @file main.c
 * @brief Entry point for the system monitor.
 *
 * Initializes and manages threads for metric collection and exposure.
 */

#include "constants.h"
#include "metric_exposer.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * @brief Main function of the application.
 *
 * This function initializes the metrics and the HTTP server in a separate thread.
 * It then enters an infinite loop to periodically update system metrics.
 *
 * @param argc Number of command-line arguments (unused).
 * @param argv Array of command-line arguments (unused).
 * @return Returns EXIT_SUCCESS on normal termination, or EXIT_FAILURE on error.
 */
int main(int argc, char* argv[])
{
    // Ignore unused arguments to prevent compiler warnings.
    (void)argc;
    (void)argv;

    if (initialize_metrics() != EXIT_SUCCESS)
    {
        fprintf(stderr, "Failed to initialize metrics. Aborting.\n");
        return EXIT_FAILURE;
    }

    pthread_t server_thread_id;
    if (pthread_create(&server_thread_id, NULL, expose_metrics_thread, NULL) != 0)
    {
        fprintf(stderr, "Error: Could not create HTTP server thread.\n");
        destroy_mutex();
        return EXIT_FAILURE;
    }

    // Main loop to update metrics periodically.
    while (true)
    {
        update_cpu_gauge();
        update_memory_gauge();
        update_context_switches_gauge();
        update_disk_io_gauges();
        update_network_gauges();
        update_process_count_gauge();
        sleep(UPDATE_INTERVAL_SECONDS);
    }

    // This section is unreachable in the current design, but it's good practice.
    pthread_join(server_thread_id, NULL);
    destroy_mutex();

    return EXIT_SUCCESS;
}

```


---
### Archivo: `src/metric_exposer.c`

```c
#include "metric_exposer.h"
#include "constants.h"
#include <stdbool.h>

/** Mutex for thread synchronization */
static pthread_mutex_t metrics_mutex;

/** Prometheus gauge for CPU usage percentage */
static prom_gauge_t* cpu_usage_gauge;
/** Prometheus gauge for memory usage percentage */
static prom_gauge_t* memory_usage_gauge;
/** Prometheus gauge for total disk sectors read */
static prom_gauge_t* disk_reads_gauge;
/** Prometheus gauge for total disk sectors written */
static prom_gauge_t* disk_writes_gauge;
/** Prometheus gauge for total received network bytes */
static prom_gauge_t* network_rx_bytes_gauge;
/** Prometheus gauge for total transmitted network bytes */
static prom_gauge_t* network_tx_bytes_gauge;
/** Prometheus gauge for network receive errors */
static prom_gauge_t* network_rx_errors_gauge;
/** Prometheus gauge for network transmit errors */
static prom_gauge_t* network_tx_errors_gauge;
/** Prometheus gauge for network collisions */
static prom_gauge_t* network_collisions_gauge;
/** Prometheus gauge for the number of running processes */
static prom_gauge_t* process_count_gauge;
/** Prometheus gauge for the total number of context switches */
static prom_gauge_t* context_switches_gauge;

void update_cpu_gauge(void)
{
    double usage = get_cpu_usage();
    if (usage >= 0.0)
    {
        pthread_mutex_lock(&metrics_mutex);
        prom_gauge_set(cpu_usage_gauge, usage, NULL);
        pthread_mutex_unlock(&metrics_mutex);
    }
    else
    {
        fprintf(stderr, "Failed to get CPU usage\n");
    }
}

void update_memory_gauge(void)
{
    double usage = get_memory_usage();
    if (usage >= 0.0)
    {
        pthread_mutex_lock(&metrics_mutex);
        prom_gauge_set(memory_usage_gauge, usage, NULL);
        pthread_mutex_unlock(&metrics_mutex);
    }
    else
    {
        fprintf(stderr, "Failed to get memory usage\n");
    }
}

void update_context_switches_gauge(void)
{
    unsigned long long ctxt = get_context_switches();
    if (ctxt != METRICS_ERROR_ULL)
    {
        pthread_mutex_lock(&metrics_mutex);
        prom_gauge_set(context_switches_gauge, (double)ctxt, NULL);
        pthread_mutex_unlock(&metrics_mutex);
    }
    else
    {
        fprintf(stderr, "Failed to get context switch count\n");
    }
}

void update_disk_io_gauges(void)
{
    unsigned long long reads = 0, writes = 0;
    get_disk_io(&reads, &writes);

    pthread_mutex_lock(&metrics_mutex);
    prom_gauge_set(disk_reads_gauge, (double)reads, NULL);
    prom_gauge_set(disk_writes_gauge, (double)writes, NULL);
    pthread_mutex_unlock(&metrics_mutex);
}

void update_network_gauges(void)
{
    unsigned long long rx_bytes = 0, tx_bytes = 0, rx_errors = 0, tx_errors = 0, collisions = 0;
    get_network_stats(&rx_bytes, &tx_bytes, &rx_errors, &tx_errors, &collisions);

    pthread_mutex_lock(&metrics_mutex);
    prom_gauge_set(network_rx_bytes_gauge, (double)rx_bytes, NULL);
    prom_gauge_set(network_tx_bytes_gauge, (double)tx_bytes, NULL);
    prom_gauge_set(network_rx_errors_gauge, (double)rx_errors, NULL);
    prom_gauge_set(network_tx_errors_gauge, (double)tx_errors, NULL);
    prom_gauge_set(network_collisions_gauge, (double)collisions, NULL);
    pthread_mutex_unlock(&metrics_mutex);
}

void update_process_count_gauge(void)
{
    int process_count = get_running_processes();
    if (process_count != METRICS_ERROR_INT)
    {
        pthread_mutex_lock(&metrics_mutex);
        prom_gauge_set(process_count_gauge, (double)process_count, NULL);
        pthread_mutex_unlock(&metrics_mutex);
    }
    else
    {
        fprintf(stderr, "Failed to get process count\n");
    }
}

void* expose_metrics_thread(void* arg)
{
    (void)arg; // Unused argument

    promhttp_set_active_collector_registry(NULL);

    struct MHD_Daemon* daemon = promhttp_start_daemon(MHD_USE_SELECT_INTERNALLY, METRICS_PORT, NULL, NULL);
    if (daemon == NULL)
    {
        fprintf(stderr, "Error: Could not start HTTP server on port %d\n", METRICS_PORT);
        return NULL;
    }

    printf("Metrics server started on http://localhost:%d/metrics\n", METRICS_PORT);

    // This thread's only job is to keep the server alive.
    // The main thread will handle metric updates.
    while (true)
    {
        sleep(UPDATE_INTERVAL_SECONDS);
    }

    // This part is unreachable in the current design
    MHD_stop_daemon(daemon);
    return NULL;
}

int initialize_metrics(void)
{
    if (pthread_mutex_init(&metrics_mutex, NULL) != 0)
    {
        fprintf(stderr, "Error: Mutex initialization failed\n");
        return EXIT_FAILURE;
    }

    if (prom_collector_registry_default_init() != 0)
    {
        fprintf(stderr, "Error: Could not initialize Prometheus registry\n");
        return EXIT_FAILURE;
    }

    // Create all gauge metrics
    cpu_usage_gauge = prom_gauge_new("cpu_usage_percentage", "Current CPU usage percentage.", NO_LABELS, NULL);
    memory_usage_gauge = prom_gauge_new("memory_usage_percentage", "Current memory usage percentage.", NO_LABELS, NULL);
    disk_reads_gauge = prom_gauge_new("disk_io_reads_total", "Total number of sectors read.", NO_LABELS, NULL);
    disk_writes_gauge = prom_gauge_new("disk_io_writes_total", "Total number of sectors written.", NO_LABELS, NULL);
    network_rx_bytes_gauge =
        prom_gauge_new("network_receive_bytes_total", "Total bytes received over the network.", NO_LABELS, NULL);
    network_tx_bytes_gauge =
        prom_gauge_new("network_transmit_bytes_total", "Total bytes transmitted over the network.", NO_LABELS, NULL);
    network_rx_errors_gauge =
        prom_gauge_new("network_receive_errors_total", "Total network receive errors.", NO_LABELS, NULL);
    network_tx_errors_gauge =
        prom_gauge_new("network_transmit_errors_total", "Total network transmit errors.", NO_LABELS, NULL);
    network_collisions_gauge = prom_gauge_new("network_collisions_total", "Total network collisions.", NO_LABELS, NULL);
    process_count_gauge =
        prom_gauge_new("running_processes", "Number of currently running processes.", NO_LABELS, NULL);
    context_switches_gauge =
        prom_gauge_new("context_switches_total", "Total number of context switches.", NO_LABELS, NULL);

    // Register all metrics
    prom_collector_registry_must_register_metric(cpu_usage_gauge);
    prom_collector_registry_must_register_metric(memory_usage_gauge);
    prom_collector_registry_must_register_metric(disk_reads_gauge);
    prom_collector_registry_must_register_metric(disk_writes_gauge);
    prom_collector_registry_must_register_metric(network_rx_bytes_gauge);
    prom_collector_registry_must_register_metric(network_tx_bytes_gauge);
    prom_collector_registry_must_register_metric(network_rx_errors_gauge);
    prom_collector_registry_must_register_metric(network_tx_errors_gauge);
    prom_collector_registry_must_register_metric(network_collisions_gauge);
    prom_collector_registry_must_register_metric(process_count_gauge);
    prom_collector_registry_must_register_metric(context_switches_gauge);

    return EXIT_SUCCESS;
}

void destroy_mutex(void)
{
    pthread_mutex_destroy(&metrics_mutex);
}

```


---
### Archivo: `src/metrics.c`

```c
#include "metrics.h"
#include <stdbool.h>

double get_memory_usage(void)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    unsigned long long total_mem = 0, free_mem = 0, available_mem = 0;
    bool available_found = false;

    fp = fopen("/proc/meminfo", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/meminfo");
        return METRICS_ERROR_VALUE;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        if (sscanf(buffer, "MemTotal: %llu kB", &total_mem) == 1)
        {
            continue;
        }
        // Prefer MemAvailable for a more accurate representation of free memory
        if (sscanf(buffer, "MemAvailable: %llu kB", &available_mem) == 1)
        {
            available_found = true;
            break;
        }
        // Fallback to MemFree if MemAvailable is not present
        if (sscanf(buffer, "MemFree: %llu kB", &free_mem) == 1)
        {
            continue;
        }
    }
    fclose(fp);

    if (total_mem == 0)
    {
        fprintf(stderr, "Error: Could not read total memory from /proc/meminfo\n");
        return METRICS_ERROR_VALUE;
    }

    double used_mem;
    if (available_found)
    {
        used_mem = total_mem - available_mem;
    }
    else
    {
        // Fallback calculation if MemAvailable is not present
        used_mem = total_mem - free_mem;
    }

    return (used_mem / total_mem) * 100.0;
}

double get_cpu_usage(void)
{
    static unsigned long long prev_user = 0, prev_nice = 0, prev_system = 0, prev_idle = 0, prev_iowait = 0,
                              prev_irq = 0, prev_softirq = 0, prev_steal = 0;
    unsigned long long user, nice, system, idle, iowait, irq, softirq, steal;

    FILE* fp = fopen("/proc/stat", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/stat");
        return METRICS_ERROR_VALUE;
    }

    char buffer[BUFFER_SIZE];
    if (fgets(buffer, sizeof(buffer), fp) == NULL)
    {
        perror("Error reading /proc/stat");
        fclose(fp);
        return METRICS_ERROR_VALUE;
    }
    fclose(fp);

    int ret = sscanf(buffer, "cpu  %llu %llu %llu %llu %llu %llu %llu %llu", &user, &nice, &system, &idle, &iowait,
                     &irq, &softirq, &steal);
    if (ret < CPU_STAT_FIELDS)
    {
        fprintf(stderr, "Error parsing /proc/stat\n");
        return METRICS_ERROR_VALUE;
    }

    unsigned long long prev_idle_total = prev_idle + prev_iowait;
    unsigned long long idle_total = idle + iowait;

    unsigned long long prev_non_idle = prev_user + prev_nice + prev_system + prev_irq + prev_softirq + prev_steal;
    unsigned long long non_idle = user + nice + system + irq + softirq + steal;

    unsigned long long prev_total = prev_idle_total + prev_non_idle;
    unsigned long long total = idle_total + non_idle;

    unsigned long long total_delta = total - prev_total;
    unsigned long long idle_delta = idle_total - prev_idle_total;

    // Update static previous values for the next call
    prev_user = user;
    prev_nice = nice;
    prev_system = system;
    prev_idle = idle;
    prev_iowait = iowait;
    prev_irq = irq;
    prev_softirq = softirq;
    prev_steal = steal;

    if (total_delta == 0)
    {
        // Avoid division by zero, can happen on the first call or if no time has passed.
        return 0.0;
    }

    return ((double)(total_delta - idle_delta) / total_delta) * 100.0;
}

unsigned long long get_context_switches(void)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    unsigned long long ctxt = 0;

    fp = fopen("/proc/stat", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/stat");
        return METRICS_ERROR_ULL; // Return error value
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        if (sscanf(buffer, "ctxt %llu", &ctxt) == 1)
        {
            fclose(fp);
            return ctxt;
        }
    }

    fclose(fp);
    fprintf(stderr, "Error: Could not find 'ctxt' in /proc/stat\n");
    return METRICS_ERROR_ULL;
}

void get_disk_io(unsigned long long* reads, unsigned long long* writes)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    *reads = 0;
    *writes = 0;

    fp = fopen("/proc/diskstats", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/diskstats");
        return;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        char device_name[BUFFER_SIZE];
        unsigned long long read_sectors, write_sectors;
        // Fields: 1-major, 2-minor, 3-dev, 4-reads, 5-merged, 6-sectors_read, ... 8-writes, ... 10-sectors_written
        sscanf(buffer, "%*d %*d %s %*u %*u %llu %*u %*u %*u %llu", device_name, &read_sectors, &write_sectors);

        *reads += read_sectors;
        *writes += write_sectors;
    }

    fclose(fp);
}

void get_network_stats(unsigned long long* rx_bytes, unsigned long long* tx_bytes, unsigned long long* rx_errors,
                       unsigned long long* tx_errors, unsigned long long* collisions)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    *rx_bytes = 0;
    *tx_bytes = 0;
    *rx_errors = 0;
    *tx_errors = 0;
    *collisions = 0;

    fp = fopen("/proc/net/dev", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/net/dev");
        return;
    }

    // Skip the first two header lines
    fgets(buffer, sizeof(buffer), fp);
    fgets(buffer, sizeof(buffer), fp);

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        char interface_name[BUFFER_SIZE];
        unsigned long long r_bytes, t_bytes, r_err, t_err, colls;

        // Simplified parsing for required fields
        sscanf(buffer, "%[^:]: %llu %*u %llu %*u %*u %*u %*u %*u %llu %*u %llu %*u %*u %llu", interface_name, &r_bytes,
               &r_err, &t_bytes, &t_err, &colls);

        *rx_bytes += r_bytes;
        *tx_bytes += t_bytes;
        *rx_errors += r_err;
        *tx_errors += t_err;
        *collisions += colls;
    }

    fclose(fp);
}

int get_running_processes(void)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    int running_procs = METRICS_ERROR_INT;

    fp = fopen("/proc/stat", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/stat");
        return METRICS_ERROR_INT;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        if (sscanf(buffer, "procs_running %d", &running_procs) == 1)
        {
            fclose(fp);
            return running_procs;
        }
    }

    fclose(fp);
    fprintf(stderr, "Error: Could not find 'procs_running' in /proc/stat\n");
    return METRICS_ERROR_INT;
}

```

