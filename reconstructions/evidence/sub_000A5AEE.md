# sub_000A5AEE

- Function task: [#4105](https://github.com/soldieg/ReBLACK-XBOX/issues/4105).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A5AEE-0x000A5B2A inclusive, contiguous, 61 bytes; evidence `ev_152d9efba3440a77eee429f38c9f46f017e2d8956039dee6c56ad148db96edaf`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A5AEE`, 61 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (61/61 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 61 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `994740c24cc40e57e71b0dfcd8bc3e2cd2312e4e301d78b9523607d5ddd19777`; candidate object SHA-256: `21ae56906085117f8a5c1fdb71558910764a7f2856669e24951f85b0c8b9552f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4105](https://github.com/soldieg/ReBLACK-XBOX/issues/4105).
- Fresh REA/Ghidra 12.1.3 body: 0xa5aee–0xa5b2a inclusive, contiguous, 61 bytes; analysis evidence `ev_152d9efba3440a77eee429f38c9f46f017e2d8956039dee6c56ad148db96edaf`.
- Fresh REA byte read: complete 61/61 bytes; SHA-256 matches the named candidate; evidence `ev_15934731a074a4fbdfc7c7d4e264e6ef1bfc50c1f1ac34b389de174ece397142`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
