# sub_000A6EA7

- Function task: [#4117](https://github.com/soldieg/ReBLACK-XBOX/issues/4117).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A6EA7-0x000A6EE2 inclusive, contiguous, 60 bytes; evidence `ev_6e11cd54d46b5984b160918b548f2910de529bb758705e820248dcc1f7b0986f`.
- Static Ghidra references: 4 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A6EA7`, 60 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (60/60 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 60 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `27c2806311056abc3841b706391f9ba4c0c14e641041f7d8c15fb3e79fe705e4`; candidate object SHA-256: `822b07e887a01785f6f199befc013548d235a29e2d03fb8e368bac3c5c09e935`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
