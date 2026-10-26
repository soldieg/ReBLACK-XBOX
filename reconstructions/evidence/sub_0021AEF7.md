# sub_0021AEF7 — batch 61

- Function task: [#6424](https://github.com/soldieg/ReBLACK-XBOX/issues/6424).
- Batch: 61 of 100; 100 functions.
- Ghidra 12.1.3 body: 0x0021AEF7–0x0021AF55 inclusive, contiguous, 95 bytes.
- Split body: all 95 bytes and the instruction boundaries match the Ghidra body.
- Raw-static screen: included at 0x0021AEF7 with the same 95-byte size in the 2026-10-26 scan (7,157 exact rows among 13,676 candidates).
- Direct callers recorded: 1 site(s): SUB_0021B2D7.
- Resolved direct callees: SUB_002181FE, SUB_0021A8C8.
- Unresolved computed/indirect call sites in this function: 2; target and ABI remain pending.
- Ownerless inbound references: 0; inbound data references: 0; unknown direct callees: 0.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate sub_0021AEF7; function size 95 bytes.
- Source SHA-256: 0429638c5e327ac9916c5b9fa210311dd01da49a5dd5c76841e6c7c79827a175.
- Candidate object SHA-256: 0c76b4a16b3df5efe32c0f498dd4ec32e94bdac3612012e37c2bd18bff341dd6.
- Compiled object SHA-256: a2cb692a8236c44efe791b0fca0947d87c8a1c19bb1c5c0171e5110175455508.

The source is an address-pinned byte emitter. The static result does not claim semantic C equivalence or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending.
