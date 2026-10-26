# sub_00022FFA

- Function task: [#3659](https://github.com/soldieg/ReBLACK-XBOX/issues/3659).
- Batch: 35 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x00022FFA-0x00023079 inclusive, contiguous, 128 bytes; evidence `ev_5b780510fb67e94b221f693c5713b03d8a420bfed937fe9e29b05413b5dad873`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00022FFA`, 128 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (128/128 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 128 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ba8cc99a2a0bdf26a80dbff3170dd2d6f5dc09b9bf44e57ff3dbbda6b686a44d`; candidate object SHA-256: `30db98b70dafbeaaf44cd3892555f2a933d0811f7e97642ba657c0b50cf83cde`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
