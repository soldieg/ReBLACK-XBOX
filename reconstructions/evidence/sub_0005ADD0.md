# sub_0005ADD0

- Function task: [#5728](https://github.com/soldieg/ReBLACK-XBOX/issues/5728).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0x5ae32, 0x5ae46, 0x5ae99; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x0005ADD0-0x0005AEBE inclusive, contiguous, 239 bytes; evidence `ev_384ba09675385f12759096f089d7c9c65e66d3709933136f4248acde16440bb0`.
- Static Ghidra references: 1 caller sites, 4 resolved direct callees; call instructions without a resolved target: 3. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 3 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_0005ADD0`, 239 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (239/239 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 239 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `30a6a5943ac0a71d071821c66b4ad9fe2050b6e72b0cbb9f76334848dae4bdea`; candidate object SHA-256: `c4830fde085ffa7fd13e6e2494c2bdd03c3c7f1c78e0a3550a844858c9d3dd45`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
