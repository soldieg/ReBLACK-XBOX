# sub_0007DAB0

- Function task: [#3882](https://github.com/soldieg/ReBLACK-XBOX/issues/3882).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0007DAB0-0x0007DAF7 inclusive, contiguous, 72 bytes; evidence `ev_8125d4170e202b97f9df84d6bfd60fa4d24713242fbde44d81b96aecdf0b0449`.
- Static Ghidra references: 1 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0007DAB0`, 72 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (72/72 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 72 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b300bdc3a61756bd9cec12f69ecca29d81a78e43bc4a5399ae435f519e968f03`; candidate object SHA-256: `e67ae5c6e6018d7a9353de7785345b5fdfecb9e84f765a97cb017adc177cb264`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 97 revalidation — 2026-10-28

- Task: [#3882](https://github.com/soldieg/ReBLACK-XBOX/issues/3882).
- Fresh REA/Ghidra 12.1.3 body: 0x7dab0–0x7daf7 inclusive, contiguous, 72 bytes; analysis evidence `ev_8125d4170e202b97f9df84d6bfd60fa4d24713242fbde44d81b96aecdf0b0449`.
- Fresh REA byte read: complete 72/72 bytes; SHA-256 matches the named candidate; evidence `ev_22a1ea9c31a1fc57a5505ffe39ffeb3926be8c3bd6dfcc4acc7d139ff612e169`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 8 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
