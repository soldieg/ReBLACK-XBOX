# `sub_000E3DC0` — static exact-byte validation

- Dashboard candidate: `unmatched`, expected 270-byte span at `0x000E3DC0`. New status/evidence record: [Issue #8594](https://github.com/soldieg/ReBLACK-XBOX/issues/8594).
- Ghidra 12.1.3 identifies 267 body bytes in `0x000E3DC0–0x000E3E1C` and `0x000E3E20–0x000E3ECD`; the 3-byte gap `0x000E3E1D–0x000E3E1F` is `LEA ECX,[ECX]` alignment skipped by a jump.
- Caller: `sub_00101C70`; callee: `sub_0001D1E0`. Both relationship queries report complete coverage. Evidence: body `ev_9dc500cd28800b2fe6e63fd3059e415533e2769dab4a4e2e11c17878463f75ca`, callers `ev_f5925f14616deec9dabe38b82b2f52c44c5fc2033975cd9c16f96595b4277060`, callees `ev_9f6cf2a90a49e32552ff99a00c11a4305243ebb6871427b693546ccb96521f78`.

## Static and object validation

- REA, XBE raw (file offset `0xD3DC0`), derived PE (file offset `0xD3140`), XboxRecomp split, source, compiled object, and named candidate COFF `.text$mn` agree byte for byte across 270/270 bytes. REA byte evidence: `ev_75d40735ce55af7b2cc7e154e16ae51adff6c7b54a2d99855ac72ba4ade8d636`; PE mapping evidence: `ev_420bea86d6641472aa946fedb78d325c5060b78eb0e9541eafec68d175f32226`.
- XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`; derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1DAC5FD915EBB59BD2B26AE42E062C245682BD`; split SHA-256: `45FA544554CD792C35EEDC7D1CDD3A9AC63A6B3A6077E3B5195BCECE0D888B91`.
- MSVC 19.51.36260.0 x86 compiled with `/nologo /W4 /TC /c /O2 /GS- /GR- /Zl /Gd /Gy`, without diagnostics. Source SHA-256: `F58117D5B5FD8969A289AEA69EEA4F22B4CF0BA933CF7B9A72DF77F4F3C81BE7`.
- ObjDiff 3.8.2 reports `_sub_000E3DC0` and `.text$mn` at 100.00%. Compiled and named candidate sections are identical (270/270 bytes, 0 relocations each). Raw report: `sub_000E3DC0.objdiff.json`. Compiled object SHA-256: `16EF621C2F3965974EFA7D395790D1FEA0BE97F59331A0268660F9F2A025D9BC`; candidate object SHA-256: `DD71E40D8ACF34CC8590F004824234F5FED6AB46E3CAC15C9A5D96581ED81C63`.
- Candidate object path: `decompilacao/compilacao/decompdev-refresh-20261015/target-obj/sub_000E3DC0.obj`. Its historical inventory marks units `complete=false`; this is a limitation on inventory/build claims, while the candidate's exact bytes independently match the target span.

This is an address-pinned byte emitter, not semantic C or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending. It advances the supported working count from 84/100 to 85/100; the public dashboard remains unchanged until the full lot is reconciled and validated.

## Lot 90 fresh revalidation (2026-10-28)

- GitHub Issue: [#8906](https://github.com/soldieg/ReBLACK-XBOX/issues/8906); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_5c77ef8df062d62e80ff098c9f0c0374b580f6c23a61dc3762f9f0b36c16385f`; complete REA byte-read Evidence: `ev_92b073e66dd69c8ed1313b6bad75793d3adf4e469cd98df3fc1d37fa190cc808`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 270 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `f58117d5b5fd8969a289aea69eea4f22b4cf0ba933cf7b9a72df77f4f3c81be7`; candidate COFF SHA-256: `dd71e40d8acf34cc8590f004824234f5fed6ab46e3cac15c9a5d96581ed81c63`; compiled COFF SHA-256: `5003da2680a0cc8fb771f4a44b4efd9cad1beb4242898ccfdaaa18f2af399267`; ObjDiff report SHA-256: `1d1de6d38622856d8e2c0cb21b241f40674a0e958968e4d61fd57cb4beb6a1a9`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
