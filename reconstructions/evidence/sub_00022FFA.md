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


## Lot 95 revalidation (2026-10-28)

- Function task: [#3659](https://github.com/soldieg/ReBLACK-XBOX/issues/3659); no overlap with Lots 43–94.
- Fresh Ghidra 12.1.3 boundary: `0x00022FFA–0x00023079` inclusive, contiguous, 128 bytes; callers/callees coverage complete; 1 caller(s), 3 callee(s), zero unresolved direct calls. Evidence: `ev_5b780510fb67e94b221f693c5713b03d8a420bfed937fe9e29b05413b5dad873`.
- REA read: complete, 128/128 bytes; matches the candidate and the XBE raw, derived PE, and XboxRecomp split. Span SHA-256: `4e3abc9137ce963dbe00783e632a0156eebe0afed92aec707753b633dd31ca10`.
- MSVC 19.51.36260 x86 `/nologo /W4 /TC /c /O2 /GS- /GR- /Zl /Gd /Gy`: passed without warnings or errors. Candidate and compiled `.text$mn` match byte for byte; relocations: 0/0.
- ObjDiff 3.8.2: symbol 100.00%, `.text$mn` section 100.00% against the named target candidate. The function is already `current-exact` in the dashboard snapshot; no duplicate exactification row was added.
- The source is an address-pinned byte emitter. These results do not establish semantic C, formal ABI recovery, Xbox linking, post-link XBE equality, runtime, or gameplay.
