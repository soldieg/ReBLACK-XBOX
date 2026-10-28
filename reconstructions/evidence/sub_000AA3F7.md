# sub_000AA3F7

- Function task: [#4151](https://github.com/soldieg/ReBLACK-XBOX/issues/4151).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AA3F7-0x000AA437 inclusive, contiguous, 65 bytes; evidence `ev_138e3b153fcacabf01675d59e3bbe184aa2aa0fb044cd3b7f1a15b08a0ef97c5`.
- Static Ghidra references: 4 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AA3F7`, 65 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (65/65 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 65 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `abccef226a8182e638005b48d65d1089764688b17f8cf968cfc896bd0601a65a`; candidate object SHA-256: `8012e56ed23529c65f2615b020285b016e2115311a31b515f6d6c99aa054eb8c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4151](https://github.com/soldieg/ReBLACK-XBOX/issues/4151).
- Fresh REA/Ghidra 12.1.3 body: 0xaa3f7–0xaa437 inclusive, contiguous, 65 bytes; analysis evidence `ev_138e3b153fcacabf01675d59e3bbe184aa2aa0fb044cd3b7f1a15b08a0ef97c5`.
- Fresh REA byte read: complete 65/65 bytes; SHA-256 matches the named candidate; evidence `ev_d8bafdfe01a22fbb9c360eb1ba6a2ad478a1b2f3e7b828fa031e4921d591623e`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 4 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
