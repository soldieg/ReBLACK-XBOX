# sub_000F3AE0

- Function task: [#5896](https://github.com/soldieg/ReBLACK-XBOX/issues/5896).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xf3b06; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000F3AE0-0x000F3B19 inclusive, contiguous, 58 bytes; evidence `ev_52f14944be855702c626069cff4b52b161f24f28aebb8625857289f73761d2a4`.
- Static Ghidra references: 0 caller sites, 1 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe6ba0 (FUN_000e6ba0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000F3AE0`, 58 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (58/58 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 58 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `57c0c6252ea7e14007b5120cf8ac8ea6b878767123927ee1a272406460cf9c3e`; candidate object SHA-256: `5560b9ccd0ed2660e0ef97e243beb5299b3e4125908ba55149cc155fd64ae495`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
