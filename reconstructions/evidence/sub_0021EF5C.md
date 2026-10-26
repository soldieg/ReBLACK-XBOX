# sub_0021EF5C — batch 61

- Function task: [#6444](https://github.com/soldieg/ReBLACK-XBOX/issues/6444).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0021EF5C–0x0021EFAF inclusive, contiguous, 84 bytes.
- Split body: all 84 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0021EF5C with the same 84-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 3 site(s): SUB_0021DEB8, SUB_0021F774, SUB_00220ACC.
- Resolved direct callees: SUB_0021EE73.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0021EF5C; function size 84 bytes.
- Source SHA-256: 6285b7159ec16e60cae2c805912cb1b0cc5ac11701b2f4836b1273ef3a382afd.
- Candidate object SHA-256: c8adfd03a86e6e579933185a6bb3d6310d432aa173cbe409eb293af71264142a.
- Compiled object SHA-256: 5d864cde7b98ec443a7f15174fa4a75ba74259a165e638bd2af7c6c22b9696a2.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
