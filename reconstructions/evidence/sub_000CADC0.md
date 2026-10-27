# sub_000CADC0 — static exact-byte evidence

Issue #8557. Its unique ordinal in lot 82 remains pending roster reconciliation.

- Ghidra 12.1.3 observes 373 body bytes across two ranges within a 384-byte span. Direct caller: `sub_0020B6E0`; direct callees: `sub_000916E0`, `sub_00091810`, `sub_00091820`, `sub_00091980`; unresolved direct calls: 0.
- All 384 bytes match across the original XBE, mapped derived PE, Ghidra, XboxRecomp split, candidate object, and compiled x86 object.
- MSVC 19.51.36260 x86 compiled the address-pinned reconstruction; ObjDiff 3.8.2 reports 100.00% for `_sub_000CADC0` and `.text$mn`.
- Static byte equality only; semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime and gameplay are not established.
