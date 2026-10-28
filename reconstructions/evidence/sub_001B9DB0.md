# sub_001B9DB0

- Function task: [#1461](https://github.com/soldieg/ReBLACK-XBOX/issues/1461).
- Function range from REA/Ghidra dossier: 0x001B9DB0-0x001B9DF6 inclusive, contiguous, 71 bytes.
- Function dossier evidence: ev_8ce62ff020dcac45334d8ed8f2a3186bc15f356e36eeb0caeba788bd1fa5e66a.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001B9DB0, 71 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001B9DB0.obj from the identified progress snapshot; SHA-256 b5a79065cb8ad8f7f72785c28cac6eade6b630d4d6a47005c5661f347413d5b6; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1A9DB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A9130.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 759fac43f38d1651af9b9f72c21e12ac4a4dd26e549451151ff43edf1ec2a5e8.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 71/71 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 066961a373e2c1e7e10cccd0f98600e3174c45eb4d11ac7f9546fc73a49ea442.
- Compiled .text$mn SHA-256: f8a696040fb924014e3ca7b2c3c76602d8126cc6d318993f566e0bc0783516a6.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1461](https://github.com/soldieg/ReBLACK-XBOX/issues/1461); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_98f2449659fd6f3151b3816c9c03a8776e8a2c451160b40379b355138618a7f1`; complete REA byte-read Evidence: `ev_ef0a5954340a4374f503b7d5da15a0761084afc69ebbc3001995de5c79116ee5`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 71 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `1bbd05b17d1abf2e59812193ff73fc3f17337cc5c741b55fef004a983f4762d9`; candidate COFF SHA-256: `b5a79065cb8ad8f7f72785c28cac6eade6b630d4d6a47005c5661f347413d5b6`; compiled COFF SHA-256: `c93af749cf23c359c530d9130c076dfe689d03ad80b5fa520359296270d1a20e`; ObjDiff report SHA-256: `a56386d409413b17632abf7d971e79aaecca4d02aa9332bc04e60a633590635c`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
