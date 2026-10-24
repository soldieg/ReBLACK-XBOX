# sub_001A7CA0

- Function task: [#2685](https://github.com/soldieg/ReBLACK-XBOX/issues/2685).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001A7CA0–0x001A7D2B inclusive, contiguous, 140 bytes; evidence `ev_4571778251546ebf3be4992803cb7674911317908b2dbd8f707e22986b213e78`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001A7CA0`, 140 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (140/140 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 140 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aac2f357750fca7ae34624660a623c2dd75d902dfefdef886d61468ab135b556`; candidate object SHA-256: `b4ba8df9bd9e3853b8405075790e3a9a99da7e152899c460d6a3a71198988568`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
