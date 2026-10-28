# sub_001C1CA0

- Function task: [#1517](https://github.com/soldieg/ReBLACK-XBOX/issues/1517).
- Function range from REA/Ghidra dossier: 0x001C1CA0-0x001C1CEF inclusive, contiguous, 80 bytes.
- Function dossier evidence: ev_bdfbc3c3b324012815a42e255a47ce9d9c0902b6f08d515c1ae172ac1f80b45d.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001C1CA0, 80 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001C1CA0.obj from the identified progress snapshot; SHA-256 082e951e6a1fd508d0b3dd3721a831b99ee8998a14c5384cc4835a740fb89a14; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1B1CA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1B1020.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 7655e4562a9107a7174acfbe86e466e09e2508883e3c03a428f35f627cda853d.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 80/80 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: aab20616037c1e38fed6390710653c3dcf9c45a116d092f678a4321faeb00c87.
- Compiled .text$mn SHA-256: 7f288dc562f89f6358024477cb1ae5c5feba8b074b7d1c186c1a1be48d824931.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1517](https://github.com/soldieg/ReBLACK-XBOX/issues/1517); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_dbc7045e7a69a35d07961265f33cf6e0f50a441bf64311652805998e9b6da1d6`; complete REA byte-read Evidence: `ev_177bc29aed847ee2e70229a16750e1e53d0f8351e58a58440f642505fe81025f`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 80 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `ec03bcf9770876fe215875de8eb54c5f6a29a0913b38466e64c5e88d0bd3088e`; candidate COFF SHA-256: `082e951e6a1fd508d0b3dd3721a831b99ee8998a14c5384cc4835a740fb89a14`; compiled COFF SHA-256: `e3d5977eefb15c585dc2516b886e5473fecb3df803f8e4215a39df31f3e1068e`; ObjDiff report SHA-256: `8aaa49b653fe44a708feb795ccaf560e723c0f84d68bfb178df5b10a610cecef`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
