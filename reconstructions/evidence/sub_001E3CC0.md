# sub_001E3CC0

- Function task: [#5291](https://github.com/soldieg/ReBLACK-XBOX/issues/5291).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001E3CC0-0x001E3D0B inclusive, contiguous, 76 bytes; evidence `ev_e907bb360b242836ba2e63c69469da19622339e1d30ef3844384bf273fbd77ba`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001E3CC0`, 76 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (76/76 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 76 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b835b6bfc01e87eefef3f094dbf9f577fedecb5dc8d30a25001cf078efa8a493`; candidate object SHA-256: `7569121b38c8e9ed32663716fd7b8c0e444cecc25664c592f494e9b41c64005f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
