# sub_00218AAA — batch 61

- Function task: [#6391](https://github.com/soldieg/ReBLACK-XBOX/issues/6391).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x00218AAA–0x00218AFA inclusive, contiguous, 81 bytes.
- Split body: all 81 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x00218AAA with the same 81-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_00219773.
- Resolved direct callees: SUB_002181FE, SUB_00220688.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_00218AAA; function size 81 bytes.
- Source SHA-256: 75992ec1efbd30c48c33967ac8d97423bc315a3573b76f593b67ec094d5023ac.
- Candidate object SHA-256: 294bf15de89f724be7cef1d973b8b65b0117b9044f94b504cf936546e8c2abcf.
- Compiled object SHA-256: c1833035f3f1dcff30d6c1c49aa2289ce03d8fcbd4306d2f9e4600fd8e81be14.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
