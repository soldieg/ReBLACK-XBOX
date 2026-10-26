# sub_0021AFE3 — batch 61

- Function task: [#6423](https://github.com/soldieg/ReBLACK-XBOX/issues/6423).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0021AFE3–0x0021B055 inclusive, contiguous, 115 bytes.
- Split body: all 115 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0021AFE3 with the same 115-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_0021B2A2.
- Resolved direct callees: SUB_002181FE, SUB_0021A8C8.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0021AFE3; function size 115 bytes.
- Source SHA-256: 5a8c5078965cef27b5a9032ebc2580f5d94424a7818f1faf9e063ee8f68936c2.
- Candidate object SHA-256: 4a5fe19a0b00b9ae1734e946b6683829c6969cb5bb32553689b04421d56413a1.
- Compiled object SHA-256: 12b4bf4a72bc104566c04d7ca6b2b3e1b2f33b86b318b010e5decd42a03d82bc.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
