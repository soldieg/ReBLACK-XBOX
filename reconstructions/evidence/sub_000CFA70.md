# sub_000CFA70

- Function task: [#4269](https://github.com/soldieg/ReBLACK-XBOX/issues/4269).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CFA70-0x000CFB4D inclusive, contiguous, 222 bytes; evidence `ev_9a7c07696f9156b8aa198afc5925ecc75a67432f786350bb61a1b74eb16b0b4a`.
- Static Ghidra references: 8 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CFA70`, 222 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (222/222 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 222 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `25195d14d26ed8099d99aa9898d598e59dc8a881d11726d5c20bb03e95854d2b`; candidate object SHA-256: `cf65c0d26879c22941cd95e83881ccb8ae60de27f2f43f579bf5436bf1fd3856`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
