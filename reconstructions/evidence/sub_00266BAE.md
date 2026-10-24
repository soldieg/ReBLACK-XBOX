# sub_00266BAE

- Function task: [#3317](https://github.com/soldieg/ReBLACK-XBOX/issues/3317).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x00266BAEâ€“0x00266C1D inclusive, contiguous, 112 bytes; evidence `ev_bd41ad0c9c764f6af3f2a765e018256ebc101884d1c7f61d611abc9c5fac2256`.
- Static Ghidra references: 6 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00266BAE`, 112 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (112/112 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 112 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6c69690607c68ba384c52e0d9b8e061c122f5d50e4f62aed0c15774e6ab13a84`; candidate object SHA-256: `274270579550a25c425aaab82a8dd0c8b08740f0f49c2ecddf10398a82fd85e5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
