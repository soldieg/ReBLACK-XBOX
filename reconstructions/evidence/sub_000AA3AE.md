# sub_000AA3AE

- Function task: [#4150](https://github.com/soldieg/ReBLACK-XBOX/issues/4150).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AA3AE-0x000AA3F6 inclusive, contiguous, 73 bytes; evidence `ev_9b314c362995135930d99cf1134f6c3b8ab2a456df905b46ec3942724d5f903d`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AA3AE`, 73 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (73/73 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 73 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `321e462da7299d8848c61a83f6964c0c370b67189976ead97d0a494e77ad37a8`; candidate object SHA-256: `22e2589a0e403e11d40e2a9d8e79e6758ddea506bc13cdf3bff13a21fcef37ca`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
