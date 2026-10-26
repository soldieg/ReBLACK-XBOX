# sub_00218CCE — batch 61

- Function task: [#6396](https://github.com/soldieg/ReBLACK-XBOX/issues/6396).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x00218CCE–0x00218D1E inclusive, contiguous, 81 bytes.
- Split body: all 81 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x00218CCE with the same 81-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_0021982F.
- Resolved direct callees: SUB_002181FE, SUB_00220831.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_00218CCE; function size 81 bytes.
- Source SHA-256: 59e41684e8c2ae6900711a9e303a633c2a46e9e3c1c42f9b3f2c51034032b6b7.
- Candidate object SHA-256: 4d429be33dc42e8d5c008010b578424179a1fc692d558a79e5ff2341aa4f344b.
- Compiled object SHA-256: f07fb836155cd4727b2a33dabb4bcf9ded241b2dce0cccdfe23d9461cf209e00.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
