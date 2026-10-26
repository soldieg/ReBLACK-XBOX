# sub_001CD7A0 — batch 61

- Function task: [#6370](https://github.com/soldieg/ReBLACK-XBOX/issues/6370).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x001CD7A0–0x001CDA08 inclusive, contiguous, 617 bytes.
- Split body: all 617 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x001CD7A0 with the same 617-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 2 site(s): SUB_001CDA10, SUB_001D0E40.
- Resolved direct callees: SUB_00011B30, SUB_00011B90, SUB_00015930, SUB_001BE1D0.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_001CD7A0; function size 617 bytes.
- Source SHA-256: 4f25f2920c2bafa2955e1ae03d117b37fa3913a730c3cb0f80900ec345074b47.
- Candidate object SHA-256: d361eb986e132d656b7e6af937927c1b767544e535f43e40da0014c2fe81046a.
- Compiled object SHA-256: 5e29c0c039347c8148b557da7ebf4818bffb899e1051bab7ab860d49bbaa5a34.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
