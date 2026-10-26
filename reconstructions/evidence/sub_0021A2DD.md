# sub_0021A2DD

- Function task: [#3249](https://github.com/soldieg/ReBLACK-XBOX/issues/3249).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021A2DDâ€“0x0021A329 inclusive, contiguous, 77 bytes; evidence `ev_eca702bfb85136c1b246fef231c65028f413f84acaa8538ce8ca476cfe89a02b`.
- Static Ghidra references: 3 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021A2DD`, 77 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (77/77 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 77 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0c7706ee882219db1a5089dbcf957aba626c259ee13435d980e977b64d63fb46`; candidate object SHA-256: `25416fecd1eb1639fa2d7508c53d16450d2b5b1194d57f1b553364bdf6ed6703`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
