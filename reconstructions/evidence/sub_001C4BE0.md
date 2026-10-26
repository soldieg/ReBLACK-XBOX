# sub_001C4BE0

- Function task: [#6040](https://github.com/soldieg/ReBLACK-XBOX/issues/6040). Batch 57; newly validated static reconstruction, not yet included in a complete lot PR.
- Ghidra 12.1.3 confirms the contiguous body `0x001C4BE0–0x001C4C22` (67 bytes). One DATA reference is at `0x001CCB83` in `sub_001CCA60`; the caller passes the callback address to `_qsort` at `0x000A20F0`.
- The `_qsort` body pushes two item pointers before each indirect callback call, cleans 8 stack bytes, and branches on EAX. This supports the callback stack/return contract observed here; no higher-level comparator semantics are claimed.
- Static equality: XBE raw = derived PE = Ghidra memory = XboxRecomp split-addressed bytes = named candidate `.text$mn` = compiled MSVC x86 `.text$mn`, 67/67 bytes. No split conflicts. Span SHA-256: `fd42d1cfd6b04260cee203333d21208df349b79315dde10f0915adb8ef95ee7c`.
- XBE `.text` raw offset: `0x1B4BE0`; derived PE `.text` raw offset: `0x1B4060`.
- MSVC 19.51.36260 x86 compiled without warnings using `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. Candidate and compiled COFF relocations: zero.
- ObjDiff 3.8.2: 100.00% against `_sub_001C4BE0`; both symbols are 67 bytes.
- Source is an address-pinned byte emitter, not semantic C or formal ABI recovery. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
