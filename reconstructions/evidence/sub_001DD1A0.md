# sub_001DD1A0

- Function task: [#8401](https://github.com/soldieg/ReBLACK-XBOX/issues/8401).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001DD1A0–0x001DD277 inclusive, 216 bytes, 55 instructions; Evidence ev_1ad0996bd2c0ab2667c906eb9963c1c8b3bf2002beb2defe945ce659c040b03e.
- Static Ghidra relationship facets: 0 procedure callers and 3 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 caa1ee8e2ba51ff61ebd716533edbba502c73d089c252443ffe757fa3789eff3.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001DD1A0.obj, symbol _sub_001DD1A0, 216 bytes.
- Candidate and compiled COFF .text$mn: identical (216/216 bytes); relocations 0/0; SHA-256 caa1ee8e2ba51ff61ebd716533edbba502c73d089c252443ffe757fa3789eff3.
- Source SHA-256: beefd7e4b8d30b47fb624199717a5c30b5e5c2d887eb3c6ae3abcd6278b3a5d7.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
