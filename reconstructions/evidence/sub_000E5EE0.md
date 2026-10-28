# sub_000E5EE0

- Candidate: dashboard row `sub_000E5EE0`, candidate object `sub_000E5EE0.obj`, 51 bytes.
- Observed body: one contiguous Ghidra range `0xE5EE0–0xE5F12` (51 bytes); callers `0xF79E0`, `0xF7AC0`, `0xFD050`, `0x1037A0`, `0x103900`, `0x10D8D0`, `0x10F180`; no outgoing calls observed.
- REA/Ghidra dossier: `ev_26f6823ad5d8e90eb56c48d51604b2475bdb5953c536e279db545c9ee62c1ec0`; complete body read: `ev_c4090709b670f06df8164d6160121916ceff3edb97f5a95934c4a4e27bb07a0b`.
- MSVC 19.51.36260.0 x86, `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy`: compiled without diagnostics.
- ObjDiff 3.8.2 against candidate `sub_000E5EE0.obj`: function symbol `_sub_000E5EE0` = **100%**, `.text$mn` 51/51 bytes.
- REA bytes = original XBE raw = XboxRecomp split, 51/51 bytes; SHA-256 `d2f4a8613c6692342a9635ee27d2cb79d97b16537d3dcd6eb88364fc99d9abda`.
- Caller ABI and object layout remain unknown. Xbox link, post-link XBE diff and runtime remain pending.

## Lot 83 fresh revalidation (2026-10-28)

- GitHub Issue: [#264](https://github.com/soldieg/ReBLACK-XBOX/issues/264).
- Fresh Ghidra boundary and relationship evidence: `ev_89c3f241861728eef43ec6fa8f4a820ea62edc6803f31c78d443a19c1f0ac1cd`; REA complete-byte read: `ev_4f257442568a26183690c97a348c4686d6324bf9bdd2b8d53aab1c5c4c034993`.
- XBE, derived PE, XboxRecomp split, named candidate COFF body, and freshly compiled MSVC x86 body all match for 51 bytes; SHA-256: `d2f4a8613c6692342a9635ee27d2cb79d97b16537d3dcd6eb88364fc99d9abda`.
- Candidate and compiled COFF `.text$mn` sections match byte for byte; relocations: 0/0.
- MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /Zl /Gd /Gy`; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Static byte-emitter result only. Full Xbox link, post-link XBE diff, runtime, and gameplay remain pending; semantic behavior and formal ABI are not inferred.
