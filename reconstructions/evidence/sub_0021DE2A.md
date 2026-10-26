# sub_0021DE2A

- Function task: [#5391](https://github.com/soldieg/ReBLACK-XBOX/issues/5391).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021DE2A-0x0021DEB7 inclusive, contiguous, 142 bytes; evidence `ev_6ac24b3c6f631f4aee5d4d891bc8272f39b76262f0cc70c4e138d604703f0461`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: none recorded.
- Target candidate: `sub_0021DE2A`, 142 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (142/142 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 142 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c33e9571b55ea83713df8ecc2e9c3c77c3d8647cdc11361e4eafdb643c26fc7f`; candidate object SHA-256: `e519adfbffd8613a422159ad93487ab3d562c23e666b75951ec924bde70f5c0f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
