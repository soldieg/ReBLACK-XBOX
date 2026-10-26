# sub_0009DEDD

- Function task: [#4023](https://github.com/soldieg/ReBLACK-XBOX/issues/4023).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009DEDD-0x0009DF54 inclusive, contiguous, 120 bytes; evidence `ev_1f95b13d0988a5dda9714903c033f3ef48a35fe7e828b7f4b4936326d9dbe728`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009DEDD`, 120 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (120/120 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 120 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bcb24ac1f254d47dca77e9f7b4e4390f14162ef41071a48a0ec35cc7c3a3581e`; candidate object SHA-256: `bd531295f0f53dbe038fecfe2353c5a49415cc81a77d27bf4f9114b546ef1640`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
