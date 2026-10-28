# sub_000A90AD

- Function task: [#4136](https://github.com/soldieg/ReBLACK-XBOX/issues/4136).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A90AD-0x000A90D7 inclusive, contiguous, 43 bytes; evidence `ev_3907fb3289facf7d30dc8df1692904a8f3a9298765475a991353335c4ab0800f`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A90AD`, 43 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (43/43 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 43 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9351a3edde2003c63e62ca7f98d7eebaf1f98107cd62062d4f7e0af8c5288906`; candidate object SHA-256: `76f074d5be5a0f3aa88cd713d37399fbcfe3e28ec88edd8be93c8c7bac664f1a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4136](https://github.com/soldieg/ReBLACK-XBOX/issues/4136).
- Fresh REA/Ghidra 12.1.3 body: 0xa90ad–0xa90d7 inclusive, contiguous, 43 bytes; analysis evidence `ev_3907fb3289facf7d30dc8df1692904a8f3a9298765475a991353335c4ab0800f`.
- Fresh REA byte read: complete 43/43 bytes; SHA-256 matches the named candidate; evidence `ev_9a098547df35783631dcaeed04d36443f1166e2ef9e8cd96168714eeb14a1450`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 2 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
