# sub_000BA6F0

- Function task: [#4179](https://github.com/soldieg/ReBLACK-XBOX/issues/4179).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BA6F0-0x000BA730 inclusive, contiguous, 65 bytes; evidence `ev_99cc79e65ae138c6820a32058e26392eb94d9371911092feff8da8cc3e18d569`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BA6F0`, 65 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (65/65 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 65 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `45dbf6ce5b45341083aaa60454ee577c956e585daf2b56adfe9a610d402954f6`; candidate object SHA-256: `ea43261da349a63466a2dcc1e0dd7147898f12aada0923211d0798448e6eb2d2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
