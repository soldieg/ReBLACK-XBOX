# sub_0005FAF0

- Function task: [#3833](https://github.com/soldieg/ReBLACK-XBOX/issues/3833).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0005FAF0-0x0005FF44 inclusive, contiguous, 1109 bytes; evidence `ev_67320d04907dafbe216b616956ba092f2d5bec7346cb2fe1f61cf906f33921fb`.
- Static Ghidra references: 0 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0005FAF0`, 1109 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1109/1109 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1109 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `96079e3020abf70cb3e47cbf7d4ba58ab4aafcb00264d6ae245d0b8083cc0af1`; candidate object SHA-256: `47cc8c459f2a337ee22c78f9a51eaf9ffef3c21a8ee50321fd8ed588d5dcdfe6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 97 revalidation — 2026-10-28

- Task: [#3833](https://github.com/soldieg/ReBLACK-XBOX/issues/3833).
- Fresh REA/Ghidra 12.1.3 body: 0x5faf0–0x5ff44 inclusive, contiguous, 1109 bytes; analysis evidence `ev_67320d04907dafbe216b616956ba092f2d5bec7346cb2fe1f61cf906f33921fb`.
- Fresh REA byte read: complete 1109/1109 bytes; SHA-256 matches the named candidate; evidence `ev_e840fd3b715a1e33205af9373f0aaac2db9bd9b21a99d6c100efc33ca39a20fd`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 6 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
