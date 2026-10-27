# sub_000CFFA0 — static exact-byte evidence

Issue #8562. The unique ordinal in lot 82 remains pending roster reconciliation.

- Ghidra 12.1.3 observes 442 body bytes across two ranges within a 445-byte span. Direct caller: `sub_000D0450`; direct callee: `sub_000C8F40`; unresolved direct calls: 0.
- All 445 bytes match across the original XBE, mapped derived PE, Ghidra, XboxRecomp split, named candidate object, and compiled x86 object.
- MSVC 19.51.36260 x86 compiled the address-pinned reconstruction; ObjDiff 3.8.2 reports 100.00% for `_sub_000CFFA0` and `.text$mn`.
- Static byte equality only; semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime, and gameplay are not established.
