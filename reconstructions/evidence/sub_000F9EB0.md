# sub_000F9EB0

- Function task: [#4419](https://github.com/soldieg/ReBLACK-XBOX/issues/4419).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x000F9EB0-0x000FA0D2 inclusive, contiguous, 547 bytes; evidence `ev_11fe0191afc26cab4a3adf2252a5c4cca8ff2964c697629fe63fa6c3fa1369e5`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000F9EB0`, 547 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (547/547 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 547 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c6a4228905f7a170ac4460ea5f6bb01a6823d88ee30d0a7dab7f1be7d1ef6af3`; candidate object SHA-256: `1f3638bb7291f80d0b07ef750c649505a90e1fa2a25517940462b76b313630d4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
