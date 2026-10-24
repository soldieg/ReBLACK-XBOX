# sub_0018DBB0

- Function task: [#2598](https://github.com/soldieg/ReBLACK-XBOX/issues/2598).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018DBB0–0x0018DC8C inclusive, contiguous, 221 bytes; evidence `ev_9a3de11e8cb6f7de6e7ac84cac085d51703739f8cdad02f80d1c2dad15f39c66`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018DBB0`, 221 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (221/221 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 221 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `fb7a03fbc8cbe918a987a507aafa666cd4e319614b7fe3cad797aedace190f4a`; candidate object SHA-256: `51a644d254a777d44bdf7d633dae585e1f2586c00d23b10dd0f3bea63184e88c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
