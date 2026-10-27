# sub_001CEB80

- Function task: [#8398](https://github.com/soldieg/ReBLACK-XBOX/issues/8398).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001CEB80–0x001CEC53 inclusive, 212 bytes, 66 instructions; Evidence ev_5e7de2d71e38d9ba07bb01f15323a3b4d5161d65bc7c3614ffe5bdbfbb072a7b.
- Static Ghidra relationship facets: 0 procedure callers and 1 direct callees observed; 3 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 1cbe3f76ba3a43d98441eb9179c7ea0ebed044ed35d1ff94f47b9c5e95d5cc30.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001CEB80.obj, symbol _sub_001CEB80, 212 bytes.
- Candidate and compiled COFF .text$mn: identical (212/212 bytes); relocations 0/0; SHA-256 1cbe3f76ba3a43d98441eb9179c7ea0ebed044ed35d1ff94f47b9c5e95d5cc30.
- Source SHA-256: 4e5275fda81a6a1afff0812935d11c881e924bb294df236e970813e33d41621b.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
