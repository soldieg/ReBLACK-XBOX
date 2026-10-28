# sub_000BAA00 — static exact-byte evidence

Issue: #8535. Its unique ordinal in lot 82 is pending roster reconciliation and is not claimed here.

- Ghidra 12.1.3 body: instructions at `0xBAA00–0xBAA1C` and `0xBAA20–0xBAAA6`; 164 instruction bytes across a 167-byte span, including a 3-byte alignment instruction.
- Direct callers: `sub_001489D0`, `sub_00148BF0`, `sub_00148EC0`, `sub_00149340`, `sub_0014A8C0`, `sub_0014A9D0`, `sub_0014C820`, `sub_0014DD50`, `sub_0014E180`. Direct callees: `sub_0008DF20`, `sub_0008E140`; unresolved direct calls: 0.
- Static bytes match across the original XBE, mapped derived PE, Ghidra body, XboxRecomp split, named candidate object, and compiled x86 object (167/167 bytes).
- MSVC 19.51.36260 x86 compiled the instruction-level reconstruction; ObjDiff 3.8.2 reports 100.00% for `_sub_000BAA00` and `.text$mn`.
- This establishes static instruction/byte equality only. It does not establish semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime, or gameplay.
