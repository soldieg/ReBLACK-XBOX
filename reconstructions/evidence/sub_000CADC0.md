# sub_000CADC0 — static exact-byte evidence

Issue #8557. Counted as function 99/100: the queue Issue was created after the initial 74/100 checkpoint and is the only Issue found for this function name.

- Fresh REA/Ghidra 12.1.3 evidence `ev_7ea42dd3b2c5123bbc556424a5b110cfcc3fb346357f239889ddbeac2880178d` confirms 373 body bytes across two ranges within a 384-byte span. Direct caller: `sub_0020B6E0`; direct callees: `sub_000916E0`, `sub_00091810`, `sub_00091820`, `sub_00091980`; unresolved direct calls: 0.
- All 384 bytes match across the original XBE, mapped derived PE, Ghidra, XboxRecomp split, candidate object, and compiled x86 object.
- MSVC 19.51.36260 x86 compiled the address-pinned reconstruction; ObjDiff 3.8.2 reports 100.00% for `_sub_000CADC0` and `.text$mn`.
- Static byte equality only; semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime and gameplay are not established.
