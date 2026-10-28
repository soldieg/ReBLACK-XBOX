# sub_000CEFC0 — static exact-byte evidence

Issue #8560. Its unique ordinal in lot 82 remains pending roster reconciliation. No formal ABI claim: Ghidra observes no caller or external incoming reference.

- Ghidra 12.1.3 observes 330 body bytes in two ranges within a 336-byte span. Direct callees are `sub_000C78B0` and `sub_000C80D0`; unresolved direct calls: 0.
- All 336 bytes match across the original XBE, mapped derived PE, Ghidra, XboxRecomp split, named candidate object and compiled x86 object.
- MSVC 19.51.36260 x86 compiled the address-pinned reconstruction; ObjDiff 3.8.2 reports 100.00% for `_sub_000CEFC0` and `.text$mn`.
- Static equality only; semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime and gameplay are not established.
