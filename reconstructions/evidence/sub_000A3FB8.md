# sub_000A3FB8

- Function task: [#4082](https://github.com/soldieg/ReBLACK-XBOX/issues/4082).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A3FB8-0x000A3FCB inclusive, contiguous, 20 bytes; evidence `ev_d4972e4bb40e5227575e0de3fbd495dc6acd2432f848b88c948b65f626ef1693`.
- Static Ghidra references: 4 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A3FB8`, 20 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (20/20 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 20 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4c94081cb19105037466ccff0e4d7b365e2f6b3894d02a949fd354b502f5d911`; candidate object SHA-256: `0dce389bb7c3a8c38b246472a1b2988f24dd0e5d47bfd6a98b215e7108562fe0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4082](https://github.com/soldieg/ReBLACK-XBOX/issues/4082).
- Fresh REA/Ghidra 12.1.3 body: 0xa3fb8–0xa3fcb inclusive, contiguous, 20 bytes; analysis evidence `ev_d4972e4bb40e5227575e0de3fbd495dc6acd2432f848b88c948b65f626ef1693`.
- Fresh REA byte read: complete 20/20 bytes; SHA-256 matches the named candidate; evidence `ev_350b2256e837ef23df625f62d7f1825841a620cc42afca4f41eef4342a4fc46b`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 4 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
