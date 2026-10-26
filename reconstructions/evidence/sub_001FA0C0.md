# sub_001FA0C0

- Function task: [#5347](https://github.com/soldieg/ReBLACK-XBOX/issues/5347).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001FA0C0-0x001FA122 inclusive, contiguous, 99 bytes; evidence `ev_54121bf68ccdfbc447a17a705d3fe519e631d04dfef8af566ad0e70aa91ed717`.
- Static Ghidra references: 0 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001FA0C0`, 99 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (99/99 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 99 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `70ea276eef241b8e7f4d20cfca6fb2e53ae85b06be7e7ac612add401f6482407`; candidate object SHA-256: `9d558796ddc8cb4beb0d4fc2aab6769a1ab22cab846304c0243bc8cf70e5723d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
