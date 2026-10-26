# sub_0021DD5C — batch 61

- Function task: [#6442](https://github.com/soldieg/ReBLACK-XBOX/issues/6442).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0021DD5C–0x0021DE29 inclusive, contiguous, 206 bytes.
- Split body: all 206 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0021DD5C with the same 206-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_00218F42.
- Resolved direct callees: SUB_00217FC0, SUB_00217FF0, SUB_00218012, SUB_0021D140, SUB_0021DAA4, SUB_0021F40F, SUB_0021FE50.
- Unresolved computed/indirect call sites in this function: 3; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0021DD5C; function size 206 bytes.
- Source SHA-256: d7f3994e0beff39039044c0373d8aca448a1fb57c084ef348f96866ad5dfd4e0.
- Candidate object SHA-256: 63a546288a139a842ac869e69318204a7a0ebe975fc05f4496c72b4cd470b6d9.
- Compiled object SHA-256: f2aa0bde415f9008b6c05641d492d4d5e857790f0846d7c1dbbc43bc028d8d9d.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
