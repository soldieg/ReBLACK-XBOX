# sub_001B4CC0

- Function task: [#8387](https://github.com/soldieg/ReBLACK-XBOX/issues/8387).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001B4CC0–0x001B4CF0 inclusive, 49 bytes, 22 instructions; Evidence ev_fa7594bf0784cf62c83ecc461b9cef744a13565875cb935ac9cf4900be3a58bd.
- Static Ghidra relationship facets: 0 procedure callers and 0 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 8799976abcb9e0e87e9e220c906cdaf9bd23c6b314e72d9cdfec3777b4d02d1b.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001B4CC0.obj, symbol _sub_001B4CC0, 49 bytes.
- Candidate and compiled COFF .text$mn: identical (49/49 bytes); relocations 0/0; SHA-256 8799976abcb9e0e87e9e220c906cdaf9bd23c6b314e72d9cdfec3777b4d02d1b.
- Source SHA-256: 364f52602ca2c27d89592c83b310b42b0003247c83ad420ccb180f54d0df58eb.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
