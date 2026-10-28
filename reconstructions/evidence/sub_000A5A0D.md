# sub_000A5A0D

- Function task: [#4100](https://github.com/soldieg/ReBLACK-XBOX/issues/4100).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A5A0D-0x000A5A15 inclusive, contiguous, 9 bytes; evidence `ev_94169f4fd63c2d1bdd36e32b20461518d82a0e90c4611f6e2759e81ddb7c03a5`.
- Static Ghidra references: 17 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A5A0D`, 9 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (9/9 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 9 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dcfa624954ec5137012f205aa86447ca0eed5b67b6080a62a66dc50ea0a8d7c2`; candidate object SHA-256: `82040ea744a41d6f87664836fbbeeba7a03b669a4b29454f9b6b1cf296a14dda`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4100](https://github.com/soldieg/ReBLACK-XBOX/issues/4100).
- Fresh REA/Ghidra 12.1.3 body: 0xa5a0d–0xa5a15 inclusive, contiguous, 9 bytes; analysis evidence `ev_94169f4fd63c2d1bdd36e32b20461518d82a0e90c4611f6e2759e81ddb7c03a5`.
- Fresh REA byte read: complete 9/9 bytes; SHA-256 matches the named candidate; evidence `ev_2938613d6913bb9a265970c9f2ba27065adeb8f25a92c1ff2f5d2a0299ea5853`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 17 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
