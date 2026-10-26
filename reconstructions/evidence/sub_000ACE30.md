# sub_000ACE30

- Function task: [#4164](https://github.com/soldieg/ReBLACK-XBOX/issues/4164).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000ACE30-0x000ACF2C inclusive, contiguous, 253 bytes; evidence `ev_9f2c4721b2278c8f288577c4cbeb03ecac47475e6501f48d958648f8bbf19830`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000ACE30`, 253 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (253/253 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 253 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2ce21c17f08072d45091b95417bca6c028735d0fc94646ecf699fa4fcd65d20d`; candidate object SHA-256: `f6830f02da96f85e772a9a18bb914d267b8b1e1ad91fa6d2a52a12f97f372eb9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
