# sub_001DDF50 — batch 61

- Function task: [#6372](https://github.com/soldieg/ReBLACK-XBOX/issues/6372).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x001DDF50–0x001DDF92 inclusive, contiguous, 67 bytes.
- Split body: all 67 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x001DDF50 with the same 67-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 8 site(s): SUB_001DDFA0, SUB_001E3D10, SUB_001E3FA0, SUB_001E4FB0, SUB_001E5410, SUB_001E5710, SUB_001E8D80, SUB_001E8F20.
- Resolved direct callees: SUB_000E0820, SUB_00187900.
- Unresolved computed/indirect call sites in this function: 1; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_001DDF50; function size 67 bytes.
- Source SHA-256: 6af68e16039d3ca2e3d9bbb47739a8615ab4e9af144a093962ef78cd6a28eab6.
- Candidate object SHA-256: 3ac0584b934c5cbae5396d5d462b55682f9b53b237528f00f80d8f082254a1ec.
- Compiled object SHA-256: a5e86deb03134ff7a5522b64bc229920c4cf7feadff57174dc8ed63dcfe6e385.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
