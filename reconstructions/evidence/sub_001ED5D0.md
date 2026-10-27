# sub_001ED5D0

- Function task: [#8409](https://github.com/soldieg/ReBLACK-XBOX/issues/8409).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001ED5D0–0x001ED6FB inclusive, 300 bytes, 85 instructions; Evidence ev_a7be20ddf16cda55d4a9afc0da13807625fe360d1c1f92fb52649897a8b21d3c.
- Static Ghidra relationship facets: 0 procedure callers and 3 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 7a7d5ca5948347a8715d83f62b4d7029b4bcb85a4613b882f5d0741efc310c60.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001ED5D0.obj, symbol _sub_001ED5D0, 300 bytes.
- Candidate and compiled COFF .text$mn: identical (300/300 bytes); relocations 0/0; SHA-256 7a7d5ca5948347a8715d83f62b4d7029b4bcb85a4613b882f5d0741efc310c60.
- Source SHA-256: 8873f0543cd5e26b608ead568c56edee307c3211a3950ddbd0b91c149689856a.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
