# sub_000BB8A0

- Function task: [#4185](https://github.com/soldieg/ReBLACK-XBOX/issues/4185).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BB8A0-0x000BB8CC inclusive, contiguous, 45 bytes; evidence `ev_4b46255f7f23ed2723667a232d3ca4234706fffa49ffe2882a649bbc4766da14`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BB8A0`, 45 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (45/45 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 45 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `74e56fe5edbf273282f3a1b7679ab153c4bd44499857ef464ebe9b5fdb7eade2`; candidate object SHA-256: `34218af86737a4767ef65f2e25d19bd37b6fabd2c77e13055d147a1085c8f4a4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4185](https://github.com/soldieg/ReBLACK-XBOX/issues/4185).
- Fresh REA/Ghidra 12.1.3 body: 0xbb8a0–0xbb8cc inclusive, contiguous, 45 bytes; analysis evidence `ev_4b46255f7f23ed2723667a232d3ca4234706fffa49ffe2882a649bbc4766da14`.
- Fresh REA byte read: complete 45/45 bytes; SHA-256 matches the named candidate; evidence `ev_3a31067afb71b45987c8b06f49e0161efb13c373bcf37e0b2942d6485e97c487`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
