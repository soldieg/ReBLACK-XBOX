# sub_0009EE4C

- Function task: [#4037](https://github.com/soldieg/ReBLACK-XBOX/issues/4037).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009EE4C-0x0009EE66 inclusive, contiguous, 27 bytes; evidence `ev_12292a805410ebe281d132928d93e71c8bb6c453f5a1f7d28a691f248ae14abd`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009EE4C`, 27 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (27/27 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 27 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6b15276ee2b86bd295d80e41a1736ff1405e23f79b894fe378617b46d36873b2`; candidate object SHA-256: `028198a7e2ea209a7e790e5f86236621bf1413ca0483635a01501705351f2fca`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4037](https://github.com/soldieg/ReBLACK-XBOX/issues/4037).
- Fresh REA/Ghidra 12.1.3 body: 0x9ee4c–0x9ee66 inclusive, contiguous, 27 bytes; analysis evidence `ev_12292a805410ebe281d132928d93e71c8bb6c453f5a1f7d28a691f248ae14abd`.
- Fresh REA byte read: complete 27/27 bytes; SHA-256 matches the named candidate; evidence `ev_7890e83cbe0796ac2e92554740dcf61d9c16eb8d7dd84ac7dcdb31afc23a2e01`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
