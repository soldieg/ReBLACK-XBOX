# sub_0019CDB0

- Function task: [#5076](https://github.com/soldieg/ReBLACK-XBOX/issues/5076).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019CDB0-0x0019CE6D inclusive, contiguous, 190 bytes; evidence `ev_ef6b3db9feb535f6a4e7bce688a25cd2bc5ca49d72bd62c6df02bc22c8a4b444`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019CDB0`, 190 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (190/190 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 190 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `be3fad4d508b82c74aea86d0052086a4aa8f5ed692d35dca69ab2fe099a1a6bd`; candidate object SHA-256: `7046eb31d6ab0eb334e2a81460c5897314ed44020a1f256d9f5274c5825d0e28`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
