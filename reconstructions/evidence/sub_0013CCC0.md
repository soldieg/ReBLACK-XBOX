# sub_0013CCC0 — batch 61

- Function task: [#1002](https://github.com/soldieg/ReBLACK-XBOX/issues/1002).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0013CCC0–0x0013CCEB inclusive, contiguous, 44 bytes.
- Split body: all 44 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0013CCC0 with the same 44-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 2 site(s): SUB_00144080, SUB_0014D0B0.
- Resolved direct callees: none.
- Unresolved computed/indirect call sites in this function: 0; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0013CCC0; function size 44 bytes.
- Source SHA-256: b03176e9fd92d10e69d496704d9131adfda560132963ae5313bdf3db5108d5b0.
- Candidate object SHA-256: 661ac4fd2759a959a2d592fa96408ded7ced7d3f6d09395c351da2a95203e5f4.
- Compiled object SHA-256: 9db43e79fdac115932825c99655c187f7467aff7db58ef333821ae75d3002f33.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
