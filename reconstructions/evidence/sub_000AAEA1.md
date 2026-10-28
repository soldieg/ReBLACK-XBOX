# sub_000AAEA1

- Function task: [#4157](https://github.com/soldieg/ReBLACK-XBOX/issues/4157).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AAEA1-0x000AB077 inclusive, contiguous, 471 bytes; evidence `ev_fcedf1e5409381c7a7d870fb1dcf64bb4bad9e34a3f97b308d8a90f45c64cfe9`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AAEA1`, 471 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (471/471 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 471 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6fad9b35366b1375bfe50823a8a42deba181fd62517bc48e130fb169f6869db0`; candidate object SHA-256: `e23edee26e80867c9a04902b2328798060b7e23e50fecee5a7b5d91a57ebf7b4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4157](https://github.com/soldieg/ReBLACK-XBOX/issues/4157).
- Fresh REA/Ghidra 12.1.3 body: 0xaaea1–0xab077 inclusive, contiguous, 471 bytes; analysis evidence `ev_fcedf1e5409381c7a7d870fb1dcf64bb4bad9e34a3f97b308d8a90f45c64cfe9`.
- Fresh REA byte read: complete 471/471 bytes; SHA-256 matches the named candidate; evidence `ev_a32d4a6010180f284848e30ada15b100d6311ef39be47917a469e6904d51f2b6`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 6 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
