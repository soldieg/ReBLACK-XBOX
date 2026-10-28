# sub_000C3BB0 — static exact-byte evidence

Issue: #8551. Its unique ordinal in lot 82 remains pending roster reconciliation.

- Ghidra 12.1.3 observes 311 instruction bytes across three ranges within a 322-byte span, with gaps after unconditional jumps.
- Ghidra's formal incoming calls: `sub_00017BC0`, `sub_00017CC0`, `sub_00125640`. Direct callee: `sub_000BFA90`. Unresolved direct calls inside the analyzed body: 0.
- Split discrepancy remains open: `sub_0011F120.s` records `CALL 0xC3BB0` at `0x11F652` (`E8 59 45 FA FF`). REA confirms those bytes in the derived PE (`ev_0fc33dbd38b47c480a32b846c827bf40c5f621bd2ad8bccac51035bebc093b02`), but Ghidra marks the instruction undecodable (`ev_1dcd3a51d3851ea7c8273c6f4370b764c7a0c198b832e4bae4650a00c3b5c618`) and finds no containing procedure (`ev_2f3f1a24afa7fa7f9b5d96c4944b0c9ee23b655a3c154d1534dbcb99200ea696`). This does not establish an executable caller; `sub_0011F120` has no canonical C/evidence here. Keep caller coverage/ABI and the unique ordinal pending.
- All 322 bytes match across the original XBE, mapped derived PE, Ghidra, XboxRecomp split, named candidate object, and compiled x86 object.
- MSVC 19.51.36260 x86 compiled the address-pinned reconstruction; ObjDiff 3.8.2 reports 100.00% for `_sub_000C3BB0` and `.text$mn`.
- Static equality only; semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime and gameplay are not established.
