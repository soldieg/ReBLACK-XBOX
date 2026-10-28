# sub_0009BBC0

- Function task: [#4005](https://github.com/soldieg/ReBLACK-XBOX/issues/4005).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009BBC0-0x0009BC3E inclusive, contiguous, 127 bytes; evidence `ev_897f17579394cea7ce78132a5ca2d30482e75eafeae186673cedb19bbe89e6f8`.
- Static Ghidra references: 3 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009BBC0`, 127 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (127/127 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 127 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `71f49ffffa23ca5da6ae1a3a663d7ad5fd7eaadc4cc4b67466a572ce5b1536ec`; candidate object SHA-256: `a842f9f5cb3c7c1db4d049fb41e828cc81f63d5fe41eb3baecd9d7d079bd24b7`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4005](https://github.com/soldieg/ReBLACK-XBOX/issues/4005).
- Fresh REA/Ghidra 12.1.3 body: 0x9bbc0–0x9bc3e inclusive, contiguous, 127 bytes; analysis evidence `ev_897f17579394cea7ce78132a5ca2d30482e75eafeae186673cedb19bbe89e6f8`.
- Fresh REA byte read: complete 127/127 bytes; SHA-256 matches the named candidate; evidence `ev_00809c6f5859fec64e6c841d506c5492dc219e896ff573988d4b01ac50e357db`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 3 caller sites, 4 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
