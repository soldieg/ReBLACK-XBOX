# sub_000BD9B0 — static exact-byte evidence

Issue: #8541. Validação estática individual permanece válida; o ordinal do lote 82 aguarda reconciliação do roster inicial de 74. Checkpoint sustentado: 83/100.

- Ghidra 12.1.3 observes 541 instruction bytes across `0xBD9B0–0xBDB64` and `0xBDB70–0xBDBD7`, within a 552-byte span containing an 11-byte gap after an unconditional jump.
- Direct caller: `sub_000BDD60`. Direct callee: `sub_00017650`. Unresolved direct calls: 0.
- All 552 bytes match across the original XBE, mapped derived PE, Ghidra, XboxRecomp split, named candidate object, and compiled x86 object.
- MSVC 19.51.36260 x86 compiled the address-pinned reconstruction; ObjDiff 3.8.2 reports 100.00% for `_sub_000BD9B0` and `.text$mn`.
- This establishes static byte equality only. It does not establish semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime, or gameplay.
