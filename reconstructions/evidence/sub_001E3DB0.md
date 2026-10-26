# sub_001E3DB0 — batch 61

- Function task: [#6373](https://github.com/soldieg/ReBLACK-XBOX/issues/6373).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x001E3DB0–0x001E3F21 inclusive, contiguous, 370 bytes.
- Split body: all 370 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x001E3DB0 with the same 370-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 4 site(s): SUB_001E3F30, SUB_001E8AF0, SUB_001E8B30, SUB_001E8C50.
- Resolved direct callees: SUB_0015F3E0, SUB_00187900, SUB_001CA450, SUB_001CFBE0, SUB_001DF300.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_001E3DB0; function size 370 bytes.
- Source SHA-256: 8552b7a2d950374ba56985f4942a94aa773495ca3c842a362af115a754a6146c.
- Candidate object SHA-256: 2b3618d7683b3d555571305c331e3722704c4f409b18eb3c404548d40d25d318.
- Compiled object SHA-256: 319522d5c840a23c96ebfbdf559cf6e7ef81a63799633979670b7906653bfa26.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
