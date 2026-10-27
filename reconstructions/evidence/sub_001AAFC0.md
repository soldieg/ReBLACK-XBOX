# sub_001AAFC0

- Function task: [#8383](https://github.com/soldieg/ReBLACK-XBOX/issues/8383).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001AAFC0–0x001AB054 inclusive, 149 bytes, 55 instructions; Evidence ev_c0119c4222ce4d81517c4e836a26c4452e2e1b0dd0865a4c0bdb9b4102ed0bb3.
- Static Ghidra relationship facets: 0 procedure callers and 3 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 8ea5fe60c6f6611f8e63faf9e36d732858a3a82f11c94f9b219e33751e12e3af.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001AAFC0.obj, symbol _sub_001AAFC0, 149 bytes.
- Candidate and compiled COFF .text$mn: identical (149/149 bytes); relocations 0/0; SHA-256 8ea5fe60c6f6611f8e63faf9e36d732858a3a82f11c94f9b219e33751e12e3af.
- Source SHA-256: 5fcd427035d455d3415dea8c7d08e5753df49689a248b3ec407aaf4296cfb699.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
