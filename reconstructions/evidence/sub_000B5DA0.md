# sub_000B5DA0

- Function task: [#5007](https://github.com/soldieg/ReBLACK-XBOX/issues/5007).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x000B5DA0-0x000B5DCE inclusive, contiguous, 47 bytes; evidence `ev_c617c68333c08435ebe1cc5ca458c8d4c415149ea17d13ecafdc6677555b74be`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_000B5DA0`, 47 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (47/47 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 47 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1ffe6b68c2435212e6b47fde6d893b59322375e72210611be955d2f4a195e074`; candidate object SHA-256: `83a1fef131266725ebf281da93b9395ef5f7f7f3639e592401bda403970bb7fc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
