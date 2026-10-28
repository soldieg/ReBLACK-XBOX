# sub_0002ABE0

- Function task: [#3693](https://github.com/soldieg/ReBLACK-XBOX/issues/3693).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0002ABE0-0x0002ABF9 inclusive, contiguous, 26 bytes; evidence `ev_3c9de1485e8959eeebd6f6d07e0175b93628759e7e370181cc4b4d7268d2b4d6`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0002ABE0`, 26 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (26/26 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 26 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2afdde49dec4c19235a19c12d0e74cb270c720325944eba93979dee181523cba`; candidate object SHA-256: `0b1e6d8ce2ade4ade57707538525537048ba31c94bbc65b2c841734d3cbacba2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 96 revalidation — 2026-10-28

- Task: [#3693](https://github.com/soldieg/ReBLACK-XBOX/issues/3693).
- Fresh REA/Ghidra 12.1.3 body: 0x2abe0–0x2abf9 inclusive, contiguous, 26 bytes; analysis evidence `ev_3a60aa3a7c59d47943f98314c8cdc3c6a8c1dcfff5b8bbcd4f727b8e1dddc90d`.
- Fresh REA byte read: complete 26/26 bytes; SHA-256 matches the named candidate; evidence `ev_6b7e6fc7b48ad53364be217aa640853ad8d09aceb6108b3aee18e27d891de40c`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
