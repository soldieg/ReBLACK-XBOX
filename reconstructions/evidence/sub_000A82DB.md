# sub_000A82DB

- Function task: [#5800](https://github.com/soldieg/ReBLACK-XBOX/issues/5800).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xa82e9; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000A82DB-0x000A832C inclusive, contiguous, 82 bytes; evidence `ev_2b9027eff249300cd432e51eef0ea1487e324ef068596a08efe0a6149f93ea55`.
- Static Ghidra references: 0 caller sites, 1 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body., Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_000A82DB`, 82 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (82/82 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 82 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5046e43171cf731e3f670f161c4ccfbc57e727b90f59ca840ad44c466d7234fb`; candidate object SHA-256: `f4c0e4b204c1ea813f0997278e0a703f1ac8752a923c6e35494dc35550521fef`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
