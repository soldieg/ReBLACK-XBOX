# sub_000DAC10

- Function task: [#4339](https://github.com/soldieg/ReBLACK-XBOX/issues/4339).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DAC10-0x000DAFF5 inclusive, contiguous, 998 bytes; evidence `ev_29dcc1f570a52e951f4334b5f816059f9b307e94f22ccd19d1699a99987a2b70`.
- Static Ghidra references: 4 caller sites, 14 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DAC10`, 998 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (998/998 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 998 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `79caafb86aaa2ea8203e6d578cf806e7fe30d93f35ebb6e7d4db68d96e91043c`; candidate object SHA-256: `8491716e8a8fbecc68c704a31f546375c2c223d5440e7c897ccc3e4828910e72`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
