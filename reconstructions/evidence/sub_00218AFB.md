# sub_00218AFB — batch 61

- Function task: [#6390](https://github.com/soldieg/ReBLACK-XBOX/issues/6390).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x00218AFB–0x00218B49 inclusive, contiguous, 79 bytes.
- Split body: all 79 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x00218AFB with the same 79-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_00219797.
- Resolved direct callees: SUB_002181FE, SUB_002207A1.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_00218AFB; function size 79 bytes.
- Source SHA-256: 630d2739b83b9153be421c2b6c7892907a9a6b30f9c0758029bd111006063abb.
- Candidate object SHA-256: cbac632b48f378f6dfc0bbe7335704ee5f6d817224317e41c9b47f6faae62a0f.
- Compiled object SHA-256: ee2ef4893eedbb825fdec090bafde56c5a801b5e7649f339314fecb0c4cc839e.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
