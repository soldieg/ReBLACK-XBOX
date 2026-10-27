# sub_0027E4FE

- Function task: [#8458](https://github.com/soldieg/ReBLACK-XBOX/issues/8458).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x0027E4FE–0x0027E587 inclusive, 138 bytes, 47 instructions; Evidence ev_2315f62d8369d0a9fa0f944c6f1e35177ca65f6e1ae3fe1525df2559c908200e.
- Static Ghidra relationship facets: 0 procedure callers and 6 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 112011cc5eb07a0cb77e0a7898a7426231b81bc2983bf69d52d50daac758d465.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_0027E4FE.obj, symbol _sub_0027E4FE, 138 bytes.
- Candidate and compiled COFF .text$mn: identical (138/138 bytes); relocations 0/0; SHA-256 112011cc5eb07a0cb77e0a7898a7426231b81bc2983bf69d52d50daac758d465.
- Source SHA-256: 4088ed78786cd14ea97a2dc2ce158620def458079c615969566f2e8cc658d98c.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
