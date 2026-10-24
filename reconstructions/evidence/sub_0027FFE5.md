# sub_0027FFE5

- Function task: [#3551](https://github.com/soldieg/ReBLACK-XBOX/issues/3551).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027FFE5â€“0x00280051 inclusive, contiguous, 109 bytes; evidence `ev_07f1d938df307f1f4e9c5147a290819b57b759f7fdc67e8c5c8805588125dc7a`.
- Static Ghidra references: 5 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027FFE5`, 109 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (109/109 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 109 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2bc6e0a7e0699f5e94bdbc387a9bdd890dbf17e48549cdbc030e7c38e48407c2`; candidate object SHA-256: `a98c3d047c411b91c96c01bc4357f896885d91b40fa76a71c1eb5bb891e99b76`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
