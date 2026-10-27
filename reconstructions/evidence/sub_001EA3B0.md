# sub_001EA3B0

- Function task: [#8408](https://github.com/soldieg/ReBLACK-XBOX/issues/8408).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001EA3B0–0x001EA413 inclusive, 100 bytes, 34 instructions; Evidence ev_78b162be06ae1abb405b067a6f11077a131ebb568571280934a23d3e77eb2b09.
- Static Ghidra relationship facets: 0 procedure callers and 1 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 4a1dff449a302bf42c396e261969ed2d433ce8217a2e8b56670f9f319fe46ba8.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001EA3B0.obj, symbol _sub_001EA3B0, 100 bytes.
- Candidate and compiled COFF .text$mn: identical (100/100 bytes); relocations 0/0; SHA-256 4a1dff449a302bf42c396e261969ed2d433ce8217a2e8b56670f9f319fe46ba8.
- Source SHA-256: da4d1fd976d7c75dae3cb77a409c9fc5d78a64c827ec6644293b7ecdbdfbd3ed.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
