# sub_0027FF9F

- Function task: [#3550](https://github.com/soldieg/ReBLACK-XBOX/issues/3550).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027FF9Fâ€“0x0027FFB1 inclusive, contiguous, 19 bytes; evidence `ev_862ab657cfc478920ade58be0a36a28b494f0c912b1f399f0dfe123fd5869fc1`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027FF9F`, 19 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (19/19 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 19 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7f4e3d34f722027d2f68c2c50954ebaa8bbb4edac8f3ab23d8fefea235b85859`; candidate object SHA-256: `d140dd3fa54668f29b8dcd405308b2d2537362f8bb96a1cf939d37225596f9a2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
