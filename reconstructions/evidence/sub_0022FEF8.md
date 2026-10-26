# sub_0022FEF8

- Function task: [#5623](https://github.com/soldieg/ReBLACK-XBOX/issues/5623).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0022FEF8-0x0022FF2D inclusive, contiguous, 54 bytes; evidence `ev_ada35f714c22f6b4c739bb222392adafaac6ce73236945380be64cc4c27c31c3`.
- Static Ghidra references: 1 caller sites, 2 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0022FEF8`, 54 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (54/54 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 54 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ff40be2274c4c853cd84cf1e9bcbbdc0131313d9cb3f3192b98de0609b66b285`; candidate object SHA-256: `8093ba020dab0297941c044137d0188ca7c5e929761273929ebf521b9c090936`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
