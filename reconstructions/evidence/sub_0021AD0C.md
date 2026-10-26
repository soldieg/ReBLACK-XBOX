# sub_0021AD0C — batch 61

- Function task: [#6419](https://github.com/soldieg/ReBLACK-XBOX/issues/6419).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0021AD0C–0x0021ADA7 inclusive, contiguous, 156 bytes.
- Split body: all 156 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0021AD0C with the same 156-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 2 site(s): SUB_0021B1EC, SUB_0021B350.
- Resolved direct callees: SUB_00217FDF, SUB_002181FE, SUB_00219E33, SUB_0021AB09.
- Unresolved computed/indirect call sites in this function: 3; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0021AD0C; function size 156 bytes.
- Source SHA-256: 05c4566340a8725ef21cdf6cd5fa01a6b1ab09d2ff46e7f83bddfe02d408c68d.
- Candidate object SHA-256: 18bff452b6ac29afdac73a76674384da5d22fa46606fc5ae89fdec24ecc36344.
- Compiled object SHA-256: eb8fb80230be89288c7000df921f2cf2a826a9183c122e73a11ce33a53630737.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
