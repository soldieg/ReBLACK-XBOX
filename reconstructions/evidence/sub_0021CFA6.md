# sub_0021CFA6 — batch 61

- Function task: [#6433](https://github.com/soldieg/ReBLACK-XBOX/issues/6433).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0021CFA6–0x0021CFFA inclusive, contiguous, 85 bytes.
- Split body: all 85 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0021CFA6 with the same 85-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_0021D042.
- Resolved direct callees: SUB_0021C69A, SUB_0021CE89.
- Unresolved computed/indirect call sites in this function: 1; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0021CFA6; function size 85 bytes.
- Source SHA-256: 162b90a796ccef198aa7919ebf2d600eaf0d7cccb54718c738080648d162d713.
- Candidate object SHA-256: 64bce6cc6e4fe0eb4c242ba72c9c2854a6282b7b93462adb8f25bd5e2231bfb8.
- Compiled object SHA-256: df8eac463b869caf3a93d7720cf528db958e28ce8e58d45da06257b3dc936ec6.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
