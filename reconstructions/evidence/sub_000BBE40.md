# sub_000BBE40

- Function task: [#4187](https://github.com/soldieg/ReBLACK-XBOX/issues/4187).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BBE40-0x000BBEA2 inclusive, contiguous, 99 bytes; evidence `ev_4cfa166dfd2172bc86c646d94ee52318a43cee1579c13e8a20b7063262f2e4cc`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BBE40`, 99 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (99/99 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 99 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5309fbc3fd33eee994453d82f571018ed942da06444aa1a997e9d67731a555d5`; candidate object SHA-256: `1dd6ab2d607f3ed91af03e3067b77d93d597d772ab6467b62565b748b86bfa9b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4187](https://github.com/soldieg/ReBLACK-XBOX/issues/4187).
- Fresh REA/Ghidra 12.1.3 body: 0xbbe40–0xbbea2 inclusive, contiguous, 99 bytes; analysis evidence `ev_4cfa166dfd2172bc86c646d94ee52318a43cee1579c13e8a20b7063262f2e4cc`.
- Fresh REA byte read: complete 99/99 bytes; SHA-256 matches the named candidate; evidence `ev_89e0f1481b2cdc8168bfdf1722df3e7ef38c5d2124f313f80bd36c5b93e16362`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
