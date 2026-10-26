# sub_0021B1EC

- Function task: [#3265](https://github.com/soldieg/ReBLACK-XBOX/issues/3265).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021B1ECâ€“0x0021B20F inclusive, contiguous, 36 bytes; evidence `ev_b584b970f31f5aa6c9fb57300ef0e7247e5dc4c2c1f3eb4b8fe5922cb7069154`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021B1EC`, 36 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (36/36 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 36 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7553136092051e3f57859e834489afbe9248847570270020fa0b89498042abdb`; candidate object SHA-256: `30faf5bf3f99012cb8020506674f4da7183268dc12d6aea22ef5660af4e2e429`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
