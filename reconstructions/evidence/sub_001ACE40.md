# sub_001ACE40

- Function task: [#8384](https://github.com/soldieg/ReBLACK-XBOX/issues/8384).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001ACE40–0x001ACEB7 inclusive, 120 bytes, 41 instructions; Evidence ev_043f4aebe3149db28d6376c8f0b4cb9da1c092e60c8988228c76c9679414c571.
- Static Ghidra relationship facets: 0 procedure callers and 1 direct callees observed; 1 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 95e0bca4cc8e82cb73e2028038979ff40ec393369be7c88ebcd0053b4268e80a.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001ACE40.obj, symbol _sub_001ACE40, 120 bytes.
- Candidate and compiled COFF .text$mn: identical (120/120 bytes); relocations 0/0; SHA-256 95e0bca4cc8e82cb73e2028038979ff40ec393369be7c88ebcd0053b4268e80a.
- Source SHA-256: 4f0d09e640af05a6953cb332d42d0495aaa4133b41c8d3d0a08389094ebeeaf9.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
