# sub_000A50AE

- Function task: [#4093](https://github.com/soldieg/ReBLACK-XBOX/issues/4093).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A50AE-0x000A5351 inclusive, contiguous, 676 bytes; evidence `ev_080fbeed75d9a601a89c2af81459dab07e0ae360a79fc09f204ff92b0b1da12d`.
- Static Ghidra references: 2 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A50AE`, 676 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (676/676 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 676 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `323306d66e5403ef98c9125dc611739f64a5b48bc2489465f2e693acb04420f8`; candidate object SHA-256: `3f5c47007ce6e2959457bc6129975a72c052a2121511fd5ec3ec30a632dd0925`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
