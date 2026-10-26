# sub_0021E0DD

- Function task: [#5402](https://github.com/soldieg/ReBLACK-XBOX/issues/5402).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021E0DD-0x0021E1AD inclusive, contiguous, 209 bytes; evidence `ev_c1857dc6233486b94835dfaab3b31bc17dfef8babffa692d07d360726196b54f`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021E0DD`, 209 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (209/209 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 209 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6f0910f4c75ef36cc31a11039379cd7e9a2e15f79870cd35d163dd8bc34bfd82`; candidate object SHA-256: `9ea7123aa8b634b84058b8666072087d6ba4144b61360bceb4c1fd1620506280`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
