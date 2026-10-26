# sub_0008CED0

- Function task: [#5774](https://github.com/soldieg/ReBLACK-XBOX/issues/5774).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0x8cede; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x0008CED0-0x0008CEF6 inclusive, contiguous, 39 bytes; evidence `ev_9c37b2de2ff1f5d03a2321e29aa1e67a2966466493bce90e2680b4c7822df48a`.
- Static Ghidra references: 1 caller sites, 1 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_0008CED0`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e718bad52af0afa849d7b7c9b342be30e38e050bdf7396ded6673d5e315c15f6`; candidate object SHA-256: `e6f81c15f00e5805044d038064eb8cbb0e8f1f47dc8d7eb8080c5b024393c51d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
