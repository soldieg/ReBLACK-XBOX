# sub_000E5FE0 — batch 61

- Function task: [#265](https://github.com/soldieg/ReBLACK-XBOX/issues/265).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x000E5FE0–0x000E6078 inclusive, contiguous, 153 bytes.
- Split body: all 153 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x000E5FE0 with the same 153-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 4 site(s): SUB_000E7870, SUB_000F8390, SUB_000F8400, SUB_000F8900.
- Resolved direct callees: SUB_000E3930, SUB_000E5880.
- Unresolved computed/indirect call sites in this function: 0; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_000E5FE0; function size 153 bytes.
- Source SHA-256: 76adfb98556e44f9f7bd937819128567bb8ed260c53dd069054dc62fa2e765df.
- Candidate object SHA-256: 49f62a158c9a3f4fb6c75bb28802cad06d6a20f8afdeca2a8e415bf2f8217d88.
- Compiled object SHA-256: 309e25d3a7a52f15c623da7d50eeb6a99ec6f35ef75f54a7479cfd30891ae035.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
