# sub_000CFFA0 — static exact-byte evidence

Issue #8562. Validação estática individual permanece válida; o ordinal do lote 82 aguarda reconciliação do roster inicial de 74. Checkpoint sustentado: 83/100.

- Fresh REA/Ghidra 12.1.3 evidence `ev_e4a066bfe545c506d1601e7fce9343c35a589054015dba82c73b440fe313d69c` reconfirms 442 body bytes across two ranges within a 445-byte span. Direct caller: `sub_000D0450`; direct callee: `sub_000C8F40`; unresolved direct calls: 0.
- All 445 bytes match across the original XBE, mapped derived PE, Ghidra, XboxRecomp split, named candidate object, and compiled x86 object.
- MSVC 19.51.36260 x86 compiled the address-pinned reconstruction; ObjDiff 3.8.2 reports 100.00% for `_sub_000CFFA0` and `.text$mn`.
- Static byte equality only; semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime, and gameplay are not established.
