# sub_000CCB00

- Function task: [#4255](https://github.com/soldieg/ReBLACK-XBOX/issues/4255).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CCB00-0x000CCB29 inclusive, contiguous, 42 bytes; evidence `ev_37eb4f4b1652045798a58009879819933082e3c3729cd18aaf39c6bf0a797f35`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CCB00`, 42 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (42/42 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 42 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `36bd905fa349f1e428ddb694072b5697021b5cc94194cad4ca07db861cd6cb34`; candidate object SHA-256: `5d0446ca197587d2db2bbcd1458565d993e094cd60cdacb5ea760f61bb59acab`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
