# `sub_0007EDB0`

- Function range: `0x0007EDB0–not recorded` (61 bytes).
- Public source SHA-256: `B80FC7AD6513CE078C44D4EA7885DC1F919A84AE1C4B919B2F26E51993CA5154`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `862626A38E4323F54544E6CE75A08112768F68CC3672C81FC9D3B00132BE4E62`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_0a3b4b3aa61405cca895fe08962eb3b2b3cb59343d9dd3bfc0ded3fa14173ad4, ev_a3e45db17a93feccae5a934abd5f5772c4db0927d294e0e8916c3e0e805d9b46, ev_157cee69c8959f13fd290361c944892d3cb572e86b5b75c5502d119e3b598b8d, analyze_function.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

### Lot 94 static revalidation (2026-10-28)

Issue: [#9021](https://github.com/soldieg/ReBLACK-XBOX/issues/9021). Fresh Ghidra 12.1.3 confirms one contiguous 61-byte body at 0x0007EDB0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_d2527a1ffc915591d1ae51e1f2776676dca1500b6d5446f906def45afe5e58d2`, REA bytes `ev_a08eae595dc5f811f9d3c9cc1960d32d5da74a140d525eb6311638064df04db9`. Relationship coverage: partial; 1 resolved callers, 4 resolved callees, 1 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
