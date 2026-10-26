# sub_0005FFA0

- Function task: [#5744](https://github.com/soldieg/ReBLACK-XBOX/issues/5744).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0x5ffb2, 0x5ffdc, 0x6005d, 0x6008f, 0x6009c, 0x600d6; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x0005FFA0-0x00060194 inclusive, contiguous, 501 bytes; evidence `ev_53a031cadfe2f198acb6da1dd29533d52f36c3c5e1252af331b66e035f20a4de`.
- Static Ghidra references: 1 caller sites, 7 resolved direct callees; call instructions without a resolved target: 6. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 6 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_0005FFA0`, 501 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (501/501 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 501 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `edea487f6a5a1b971b4bce725be2a6419e6341a8346c67f3820c6252628f4b09`; candidate object SHA-256: `8adfc890597ba5bde43616c5284112aefbf5f294df410534c9f5e52e68bb8d57`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
