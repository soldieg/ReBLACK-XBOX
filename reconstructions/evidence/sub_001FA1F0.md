# sub_001FA1F0

- Function task: [#8416](https://github.com/soldieg/ReBLACK-XBOX/issues/8416).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001FA1F0–0x001FA2F5 inclusive, 262 bytes, 82 instructions; Evidence ev_16c3e3cbf748b4f9aefab49b68ca1897a0429afcb2019d4598eab299b5ef63cc.
- Static Ghidra relationship facets: 0 procedure callers and 0 direct callees observed; 3 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 3ab43d5086428c1324e724484c35c6e419f57506995f57cdef2bfda76cce9782.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001FA1F0.obj, symbol _sub_001FA1F0, 262 bytes.
- Candidate and compiled COFF .text$mn: identical (262/262 bytes); relocations 0/0; SHA-256 3ab43d5086428c1324e724484c35c6e419f57506995f57cdef2bfda76cce9782.
- Source SHA-256: a7a551873ab2d26a291d8e54b9485a1fe8b7cf6d75b68a1a38ab2535d99ab08c.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
