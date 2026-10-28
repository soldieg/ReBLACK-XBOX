# sub_000A3EC8

- Function task: [#4080](https://github.com/soldieg/ReBLACK-XBOX/issues/4080).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A3EC8-0x000A3EE9 inclusive, contiguous, 34 bytes; evidence `ev_fc9f7177018a0b7b7ccd7d2e5a911ba477427c7d4b9cfdcac3c2de5d85940ca8`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A3EC8`, 34 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (34/34 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 34 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dc2d812d6f1d0683f0c30537133e7ff35f0d243364037e6e1e20f2362e786d42`; candidate object SHA-256: `c21d7e4b586aeaa9790b9672e64ba6d040367d9c0df5024ce48d07ec17dda458`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4080](https://github.com/soldieg/ReBLACK-XBOX/issues/4080).
- Fresh REA/Ghidra 12.1.3 body: 0xa3ec8–0xa3ee9 inclusive, contiguous, 34 bytes; analysis evidence `ev_fc9f7177018a0b7b7ccd7d2e5a911ba477427c7d4b9cfdcac3c2de5d85940ca8`.
- Fresh REA byte read: complete 34/34 bytes; SHA-256 matches the named candidate; evidence `ev_7afcb9a1bf733597b338e60f2c0fd2ac4a75047359acee783f0375c024c4f732`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 2 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
