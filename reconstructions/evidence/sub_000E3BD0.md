# sub_000E3BD0

- Candidate: dashboard row `sub_000E3BD0`, candidate object `sub_000E3BD0.obj`, 32 bytes.
- Observed body: one contiguous Ghidra range `0xE3BD0–0xE3BEF` (32 bytes); caller `0x10A3C0`; no outgoing calls observed.
- REA/Ghidra dossier: `ev_a303e5aaf4d3efe54cc23fa6d2405f806b7ae20b4d1a328e9312809d4a3e4734`; complete body read: `ev_89009a21761ed1d52fd2755653e372a133cc84afba2a9bca74c5b767fa164301`.
- Adjacent data read `0xE3BF0–0xE3C33`: `ev_d5a7a5f16993904460a3b54b6050c97b750fe401b0c8071e60f1624a1856a6eb`. The jump-table destinations observed there are local true/false return sites `0xE3BEA` and `0xE3BED`.
- MSVC 19.51.36260.0 x86, `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy`: compiled without diagnostics.
- ObjDiff 3.8.2 against candidate `sub_000E3BD0.obj`: function symbol `_sub_000E3BD0` = **100%**, `.text$mn` 32/32 bytes.
- REA bytes = original XBE raw = XboxRecomp split, 32/32 bytes; SHA-256 `2a852dfa6e45c5cae9e8ff03b787d684ac6553358e1c7527ff2e695eed4fb3e7`.
- Source-level input type and caller ABI remain unknown. Xbox link, post-link XBE diff and runtime remain pending.

## Lot 83 fresh revalidation (2026-10-28)

- GitHub Issue: [#241](https://github.com/soldieg/ReBLACK-XBOX/issues/241).
- Fresh Ghidra boundary and relationship evidence: `ev_280496ffc28e9f0d311c0c2a5d99ba9aa1f74276debaf72544ed7241cfad4485`; REA complete-byte read: `ev_402788ac5c645448e44ef137c280b519f0f553865ad37c515d4a07aa9802b44c`.
- XBE, derived PE, XboxRecomp split, named candidate COFF body, and freshly compiled MSVC x86 body all match for 32 bytes; SHA-256: `2a852dfa6e45c5cae9e8ff03b787d684ac6553358e1c7527ff2e695eed4fb3e7`.
- Candidate and compiled COFF `.text$mn` sections match byte for byte; relocations: 0/0.
- MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /Zl /Gd /Gy`; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Static byte-emitter result only. Full Xbox link, post-link XBE diff, runtime, and gameplay remain pending; semantic behavior and formal ABI are not inferred.
