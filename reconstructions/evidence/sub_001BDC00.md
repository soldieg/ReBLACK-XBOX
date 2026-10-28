# sub_001BDC00

- Function task: [#1494](https://github.com/soldieg/ReBLACK-XBOX/issues/1494).
- Function range from REA/Ghidra dossier: 0x001BDC00-0x001BDC3F inclusive, contiguous, 64 bytes.
- Function dossier evidence: ev_2e81fa9d79d4fbb39fe5d8fdd6b3c325f803492737958ce0a1c6e5528dc4c4df.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BDC00, 64 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BDC00.obj from the identified progress snapshot; SHA-256 7e0d6b644321d8f45b9eb2e38f6d2ba1ad1fb78967f3499b1a0ff16a7b8fa9da; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ADC00.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ACF80.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 1e9ae2d1e8d61ab504b84c108231617ba0a795a5646a6cf46ec3addfa030ef36.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 64/64 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 02e137666e1caad888563b171da04f7e9975a0d38361cb0fdc938d15bdd74771.
- Compiled .text$mn SHA-256: 0d68ecc988b3251e493b3c9a65c3fd0f36e6ccc1e60a3f68d34243e614db62f8.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1494](https://github.com/soldieg/ReBLACK-XBOX/issues/1494); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_7b3c83c4e8ebe3517a30a9d107c4c2812f1355803582107d80168f2fab09d41a`; complete REA byte-read Evidence: `ev_c1d3608a111f3a026e2d40872dc2dfa3944bd685a7764d229feb1b2d9494e4fe`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 64 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `054f13f77e964600316cfde587bdc232cb3b90d05b23c69e34bfcadb38a18daa`; candidate COFF SHA-256: `7e0d6b644321d8f45b9eb2e38f6d2ba1ad1fb78967f3499b1a0ff16a7b8fa9da`; compiled COFF SHA-256: `028b6bab588f987e45f94a7b39f97a45a31374056a2024bc24e39b33de063dfb`; ObjDiff report SHA-256: `2d4b667be99c32eb50bedd4f03ccb150c1d3ec56c76e79e002c0e082b84abb57`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
