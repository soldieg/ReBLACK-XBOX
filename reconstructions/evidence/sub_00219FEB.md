# sub_00219FEB — batch 61

- Function task: [#6405](https://github.com/soldieg/ReBLACK-XBOX/issues/6405).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x00219FEB–0x0021A03C inclusive, contiguous, 82 bytes.
- Split body: all 82 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x00219FEB with the same 82-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_0021A18B.
- Resolved direct callees: SUB_002181FE, SUB_00219BCA.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_00219FEB; function size 82 bytes.
- Source SHA-256: 2e67aeeaae798ed07c7e5a3907c692e9f4c5642997e5780f15827e20290d2fa8.
- Candidate object SHA-256: 19fb16dac3f9d58e075c697b749991a7b8c2bc8cab2ff424040ed37f478b6ac2.
- Compiled object SHA-256: 651dafd4fd866cf8ac5881740325311d0900109218e375d3b79667c3de0699bf.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
