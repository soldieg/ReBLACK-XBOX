# sub_0004FAA0

- Function task: [#3785](https://github.com/soldieg/ReBLACK-XBOX/issues/3785).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0004FAA0-0x0004FABE inclusive, contiguous, 31 bytes; evidence `ev_4cff3f92eeab977ed37df3bfa7a236783f7826e9c812678084ab8bd52b0842cf`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0004FAA0`, 31 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (31/31 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 31 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3b2bd78074b99749c91bf99acca806d29b6cac8bd2be2a5d23675a87ef2943f1`; candidate object SHA-256: `864a61945955b72deae646ae81a39f2f43f02ad997940c5c345fa57a9c4ae6f1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 96 revalidation — 2026-10-28

- Task: [#3785](https://github.com/soldieg/ReBLACK-XBOX/issues/3785).
- Fresh REA/Ghidra 12.1.3 body: 0x4faa0–0x4fabe inclusive, contiguous, 31 bytes; analysis evidence `ev_5f97ee74d2cb7dc13fee544ace007190929d13acc0984842b16288f73d4e59fb`.
- Fresh REA byte read: complete 31/31 bytes; SHA-256 matches the named candidate; evidence `ev_e70e76ee111a88b4a23af6b7f2d0ae5bb69b605c6c22675d2d11471105ee5ed3`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
