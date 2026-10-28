# sub_00025FFE

- Function task: [#3683](https://github.com/soldieg/ReBLACK-XBOX/issues/3683).
- Batch: 35 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x00025FFE-0x00026052 inclusive, contiguous, 85 bytes; evidence `ev_29906b2a9bcc9ecdd561b9a97a880a6d17f6ec6f0b24094e755cf33f7428b161`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00025FFE`, 85 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (85/85 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 85 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `04f8122202720063447e174ffbec2caa6500a0d69419ac19a2440ca6edeb3f2d`; candidate object SHA-256: `65a10fd0e7f3d66a072a5eb38ab5a556480f239a8037615c75fa438dd2ff89fa`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.


## Lot 95 revalidation (2026-10-28)

- Function task: [#3683](https://github.com/soldieg/ReBLACK-XBOX/issues/3683); no overlap with Lots 43–94.
- Fresh Ghidra 12.1.3 boundary: `0x00025FFE–0x00026052` inclusive, contiguous, 85 bytes; callers/callees coverage complete; 1 caller(s), 2 callee(s), zero unresolved direct calls. Evidence: `ev_29906b2a9bcc9ecdd561b9a97a880a6d17f6ec6f0b24094e755cf33f7428b161`.
- REA read: complete, 85/85 bytes; matches the candidate and the XBE raw, derived PE, and XboxRecomp split. Span SHA-256: `ab0617b7466544e3c7b7978bc664ff75623a44cefb54f555e7a9c5ff1bb2419d`.
- MSVC 19.51.36260 x86 `/nologo /W4 /TC /c /O2 /GS- /GR- /Zl /Gd /Gy`: passed without warnings or errors. Candidate and compiled `.text$mn` match byte for byte; relocations: 0/0.
- ObjDiff 3.8.2: symbol 100.00%, `.text$mn` section 100.00% against the named target candidate. The function is already `current-exact` in the dashboard snapshot; no duplicate exactification row was added.
- The source is an address-pinned byte emitter. These results do not establish semantic C, formal ABI recovery, Xbox linking, post-link XBE equality, runtime, or gameplay.
