# sub_001ED2B0

- Function task: [#8413](https://github.com/soldieg/ReBLACK-XBOX/issues/8413).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001ED2B0–0x001ED5C2 inclusive, 787 bytes, 201 instructions; Evidence ev_e4b174a02f13e35b4682c4580dfed72d193d719914652e6b73de5e1b60d6fffa.
- Static Ghidra relationship facets: 0 procedure callers and 2 direct callees observed; 2 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 75c9a318b2c0aac13a03732f8da35d8760db306bc36ec135a0e1e06e69a488e4.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001ED2B0.obj, symbol _sub_001ED2B0, 787 bytes.
- Candidate and compiled COFF .text$mn: identical (787/787 bytes); relocations 0/0; SHA-256 75c9a318b2c0aac13a03732f8da35d8760db306bc36ec135a0e1e06e69a488e4.
- Source SHA-256: 7aa2c1d8d0a4d91a2bc5bfe6517084a6c9944b9c9dfb56ddaf3d716c23cf2026.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
