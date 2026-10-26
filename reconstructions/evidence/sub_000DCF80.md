# sub_000DCF80

- Function task: [#5024](https://github.com/soldieg/ReBLACK-XBOX/issues/5024).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x000DCF80-0x000DD272 inclusive, contiguous, 755 bytes; evidence `ev_f2a36976b6f9f2df93fe90076a9249699230897d4f6cd1f53744364191c34497`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body..
- Target candidate: `sub_000DCF80`, 755 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (755/755 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 755 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6f7198e71ee251aadae6e324d6bb1c5aaea1d3799d3b4853bee4e676a0bc215f`; candidate object SHA-256: `76a159bf4388743f211d4e1aa7f4c241b6b8c0a7788c785630f0a5e74a9deec5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
