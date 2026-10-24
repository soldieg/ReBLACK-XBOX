# sub_0027FC6F

- Function task: [#3546](https://github.com/soldieg/ReBLACK-XBOX/issues/3546).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027FC6Fâ€“0x0027FC83 inclusive, contiguous, 21 bytes; evidence `ev_0c2abbb9ae5838f6dfc0559a4984ae21b8f190edf2fd0ac3d89ddd5ff1a4c9a2`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027FC6F`, 21 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (21/21 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 21 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `91fc601ac305cb589f2755361ee005232b3f7d7119b27b8d7e753e3e93e24973`; candidate object SHA-256: `be9bef6400a4a2291a135a7a66be5cc625c02ac270ce472505905e9fbf0a34cd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
