# sub_0021A1CF

- Function task: [#3247](https://github.com/soldieg/ReBLACK-XBOX/issues/3247).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021A1CFâ€“0x0021A1EE inclusive, contiguous, 32 bytes; evidence `ev_efebeb79aa99d6bb49c85f9cd488ecc74448957a25afe57092ee5bc79558b326`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021A1CF`, 32 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (32/32 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 32 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `72d15814bf0b44d887fdba4c805949ef8e0ae5d028128325f4bdcc0df728d1e1`; candidate object SHA-256: `9ffaead024eb1962938c74427af3da112baade1501c098cd477012791ffafe66`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
