# sub_001DDA70

- Function task: [#5254](https://github.com/soldieg/ReBLACK-XBOX/issues/5254).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DDA70-0x001DDC15 inclusive, contiguous, 422 bytes; evidence `ev_79e8b4072bb2e9ed436a2a08a989ced8156825a1fd3a5023d8df67dc28ba7461`.
- Static Ghidra references: 1 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DDA70`, 422 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (422/422 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 422 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `50a15d0c4ac66c27a03c572feec050a4d5f35a7f6ea146b348f50dd799ef66bc`; candidate object SHA-256: `95bdbcc427bbd005f36f8fc52541af2fd3867f1b69d07894bcca528a066de3f4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
