# sub_0004BBF0

- Function task: [#3774](https://github.com/soldieg/ReBLACK-XBOX/issues/3774).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0004BBF0-0x0004BDC3 inclusive, contiguous, 468 bytes; evidence `ev_55e1af089694d5737dc892f25c29a2ff49a1052c0c8fcefea4bcbfc0bc038627`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0004BBF0`, 468 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (468/468 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 468 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7e9b95ec51f6d37422a2d906ee5ed1bdf2029dce5193694e4d493948409ca2da`; candidate object SHA-256: `72b6c85df6c584c198393c25c30ad2fb91406e77dc54fc3b135cced95262175b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 96 revalidation — 2026-10-28

- Task: [#3774](https://github.com/soldieg/ReBLACK-XBOX/issues/3774).
- Fresh REA/Ghidra 12.1.3 body: 0x4bbf0–0x4bdc3 inclusive, contiguous, 468 bytes; analysis evidence `ev_90c81b5839c7e874999ec5e6c47eb0913da217a0f3c66a12e5407e68ec95d1a2`.
- Fresh REA byte read: complete 468/468 bytes; SHA-256 matches the named candidate; evidence `ev_0da8e7132fa9600697514f16f0d2a7e206d5fcd236e4a12880160a5fc940a25f`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
