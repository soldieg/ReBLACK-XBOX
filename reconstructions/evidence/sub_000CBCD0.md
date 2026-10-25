# sub_000CBCD0

- Function task: [#4250](https://github.com/soldieg/ReBLACK-XBOX/issues/4250).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CBCD0-0x000CBD97 inclusive, contiguous, 200 bytes; evidence `ev_56e4aee6245b71ea48acbc7d17cf63b4fb924627f7dc9cb1fccf78c462b20918`.
- Static Ghidra references: 19 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CBCD0`, 200 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (200/200 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 200 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5d33a576de7a58a8de2eb835dac33d662e61f682e4618063ace03986278e33c5`; candidate object SHA-256: `27732be35d5a958d8ef662a3d643f2ea833c77bb088e03aedcaf1c89658d7e31`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
