# sub_0007DBC0

- Function task: [#3885](https://github.com/soldieg/ReBLACK-XBOX/issues/3885).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0007DBC0-0x0007DC5D inclusive, contiguous, 158 bytes; evidence `ev_b7eb66c0264693c09b8b690eb75203e2fa4cca7b5878ee138d9e8c2e9f1bda80`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0007DBC0`, 158 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (158/158 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 158 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7be337b59839fde490e32190380d3e3e7cb164508842bd53d98cbf604a1e41ca`; candidate object SHA-256: `3ead14ce76c2b83a03a4efa3764966f59eec64352ab97b829cb8d392c3fd9a52`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 97 revalidation — 2026-10-28

- Task: [#3885](https://github.com/soldieg/ReBLACK-XBOX/issues/3885).
- Fresh REA/Ghidra 12.1.3 body: 0x7dbc0–0x7dc5d inclusive, contiguous, 158 bytes; analysis evidence `ev_b7eb66c0264693c09b8b690eb75203e2fa4cca7b5878ee138d9e8c2e9f1bda80`.
- Fresh REA byte read: complete 158/158 bytes; SHA-256 matches the named candidate; evidence `ev_54d9320ce2d6208a1f05ea5f209cbaf95305d60d330c41e5495df5f7d662cf69`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
