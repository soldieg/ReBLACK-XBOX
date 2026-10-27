# sub_001CA5D0

- Function task: [#8396](https://github.com/soldieg/ReBLACK-XBOX/issues/8396).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001CA5D0–0x001CA873 inclusive, 676 bytes, 186 instructions; Evidence ev_3e02e4dd8f87a2ab8f98a7a3772fadfae33c81ad9c50bf6df3ad5d45818cc4a4.
- Static Ghidra relationship facets: 0 procedure callers and 4 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 944b680ea3be5b3b31dd2b98d4d6b86554c2133881d33c13e7e354cf40387c09.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001CA5D0.obj, symbol _sub_001CA5D0, 676 bytes.
- Candidate and compiled COFF .text$mn: identical (676/676 bytes); relocations 0/0; SHA-256 944b680ea3be5b3b31dd2b98d4d6b86554c2133881d33c13e7e354cf40387c09.
- Source SHA-256: 55b3360f698cabc3313f9573c24759edc34bda3b5fe1007e19e67a49af6f41a6.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
