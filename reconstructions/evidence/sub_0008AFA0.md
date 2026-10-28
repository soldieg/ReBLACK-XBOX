# sub_0008AFA0

- Function task: [#3924](https://github.com/soldieg/ReBLACK-XBOX/issues/3924).
- Batch: 38 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x0008AFA0-0x0008AFE3 inclusive, contiguous, 68 bytes; evidence `ev_bea3e0d7b32fad8ee0c5fd707e47fed5fd4d0ca1c66384a4982d40e51f71aea9`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0008AFA0`, 68 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (68/68 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 68 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0871a8b2917c407c384bec8dcca6c1025fc6c752e1c51d6e67020c5d3b996ab6`; candidate object SHA-256: `f58cab15fe2c9f85a06818c91fe944377e2b7e92ece6a06d3a316840660bcf15`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 98 revalidation — 2026-10-28

- Task: [#3924](https://github.com/soldieg/ReBLACK-XBOX/issues/3924).
- Fresh REA/Ghidra 12.1.3 body: 0x8afa0–0x8afe3 inclusive, contiguous, 68 bytes; analysis evidence `ev_bea3e0d7b32fad8ee0c5fd707e47fed5fd4d0ca1c66384a4982d40e51f71aea9`.
- Fresh REA byte read: complete 68/68 bytes; SHA-256 matches the named candidate; evidence `ev_0d35f47ab691aedaa09d0e3a331d4e7dcbb8e8d891e81896bf1a99d2bfe33222`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
