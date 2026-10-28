# sub_000A88EC

- Function task: [#4130](https://github.com/soldieg/ReBLACK-XBOX/issues/4130).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A88EC-0x000A89A9 inclusive, contiguous, 190 bytes; evidence `ev_862c31a47e48bdb58a5257644c45f3123e92ff9405cc92fe9eabb5f474954cca`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A88EC`, 190 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (190/190 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 190 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6d6bf2517067a6d11e00e52f294f0b172579cfe19970727eaf2149c8c9565a24`; candidate object SHA-256: `96116c0871298be95574b34ccb8513ce7069649d7a03be57aa6f52920d59213e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4130](https://github.com/soldieg/ReBLACK-XBOX/issues/4130).
- Fresh REA/Ghidra 12.1.3 body: 0xa88ec–0xa89a9 inclusive, contiguous, 190 bytes; analysis evidence `ev_862c31a47e48bdb58a5257644c45f3123e92ff9405cc92fe9eabb5f474954cca`.
- Fresh REA byte read: complete 190/190 bytes; SHA-256 matches the named candidate; evidence `ev_46f6735c53f82dead2eea4d4180b7eee63898242760e01382f5788e756b38642`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 4 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
