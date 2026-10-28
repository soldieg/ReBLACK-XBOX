# sub_0009FD9D

- Function task: [#4045](https://github.com/soldieg/ReBLACK-XBOX/issues/4045).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009FD9D-0x0009FDD9 inclusive, contiguous, 61 bytes; evidence `ev_23c8d8b5e9954f3c5dfa99c5d445c9f1e725962e72b7c6e33cca07a2b3595e61`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009FD9D`, 61 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (61/61 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 61 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `174fa12554a8f901af1dcc36928737cf29d91240828f8a86882849129184c28c`; candidate object SHA-256: `61ff0092411884e6944e3833a09284a3f7cd9f7837b17529fcf927dfae14a223`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4045](https://github.com/soldieg/ReBLACK-XBOX/issues/4045).
- Fresh REA/Ghidra 12.1.3 body: 0x9fd9d–0x9fdd9 inclusive, contiguous, 61 bytes; analysis evidence `ev_23c8d8b5e9954f3c5dfa99c5d445c9f1e725962e72b7c6e33cca07a2b3595e61`.
- Fresh REA byte read: complete 61/61 bytes; SHA-256 matches the named candidate; evidence `ev_184ce3650c18979ff440cfdca434bfe7695763c2951cf70300c575a7eb8c582c`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
