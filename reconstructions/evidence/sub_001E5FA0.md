# sub_001E5FA0

- Function task: [#8406](https://github.com/soldieg/ReBLACK-XBOX/issues/8406).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001E5FA0–0x001E676B inclusive, 1996 bytes, 437 instructions; Evidence ev_2831902ece0728e24ec596eb177752cf0afa6cc1a786511460dd9c4ff651599f.
- Static Ghidra relationship facets: 0 procedure callers and 13 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 3182b62256a359333f5e3a6f8acac3aa26370a438121f88915fccaad43dd2fea.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001E5FA0.obj, symbol _sub_001E5FA0, 1996 bytes.
- Candidate and compiled COFF .text$mn: identical (1996/1996 bytes); relocations 0/0; SHA-256 3182b62256a359333f5e3a6f8acac3aa26370a438121f88915fccaad43dd2fea.
- Source SHA-256: 44fc1d1441a2e2c5f55a7cb4f87db137cbf743c61862bd4f51566802670d0a04.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
