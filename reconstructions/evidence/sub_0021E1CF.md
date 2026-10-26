# sub_0021E1CF — batch 61

- Function task: [#6443](https://github.com/soldieg/ReBLACK-XBOX/issues/6443).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0021E1CF–0x0021E23B inclusive, contiguous, 109 bytes.
- Split body: all 109 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0021E1CF with the same 109-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_0021E474.
- Resolved direct callees: SUB_00217FF0, SUB_00218012.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0021E1CF; function size 109 bytes.
- Source SHA-256: d9204c810be8bbbe1df45ec9a7b3581672804fb17a7ed6fa50af0d18d46c0713.
- Candidate object SHA-256: db191df42eddd8ba8951c159ed8bd52226da705f2b7175174d6de084cc805e63.
- Compiled object SHA-256: 5fac2970eb8aec2f887f5600a1da00986cecc77cc2c58404e3f414345e17f1e8.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
