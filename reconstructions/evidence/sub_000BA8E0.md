# sub_000BA8E0

- Function task: [#4180](https://github.com/soldieg/ReBLACK-XBOX/issues/4180).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BA8E0-0x000BA91E inclusive, contiguous, 63 bytes; evidence `ev_ca24021cd5629227c3ded9b7c4d40f01e40b4f61097807a682c0c2445d86bdb0`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BA8E0`, 63 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (63/63 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 63 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d7e7d074df240a91f275f163df24d583d6156344588b95f9dbbcd44c8e94c06d`; candidate object SHA-256: `c8daf70e8d07572925a80dd56e0077af53606d0897afcfdcf1a5e385cf46679c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
