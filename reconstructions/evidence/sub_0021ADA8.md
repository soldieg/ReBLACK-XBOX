# sub_0021ADA8 — batch 61

- Function task: [#6417](https://github.com/soldieg/ReBLACK-XBOX/issues/6417).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0021ADA8–0x0021AE38 inclusive, contiguous, 145 bytes.
- Split body: all 145 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0021ADA8 with the same 145-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_0021B53D.
- Resolved direct callees: SUB_00217FDF, SUB_002181FE, SUB_0021A52E, SUB_0021AC4A.
- Unresolved computed/indirect call sites in this function: 3; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0021ADA8; function size 145 bytes.
- Source SHA-256: 6727ac2c0162496a34b97a38dbc54f47db9a4edc33ec9f8132f9b0529b22690b.
- Candidate object SHA-256: 5f4738422d4966098cfc47ac6ac1ec2de0d844dcd7deed3edfda9193bd7e8ab9.
- Compiled object SHA-256: cd8a3aabe1714881603e8eca4382bba5dbf3bd8b08e66c995df5bda3496581e5.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
