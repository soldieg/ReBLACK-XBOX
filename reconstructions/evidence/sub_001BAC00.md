# sub_001BAC00

- Function task: [#1469](https://github.com/soldieg/ReBLACK-XBOX/issues/1469).
- Function range from REA/Ghidra dossier: 0x001BAC00-0x001BAE6E inclusive, contiguous, 623 bytes.
- Function dossier evidence: ev_fdc808e026bbde85d124ba664df2b5d73ebe706db5fb854b4316710760930f61.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BAC00, 623 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BAC00.obj from the identified progress snapshot; SHA-256 a5319487bf628881f0cfec413b9a30f30b1a671bb76c5099b6e560fac31b9f78; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AAC00.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A9F80.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 8ccf6b9a52e88c920853a350a730b78edbf52da54a9ef4a7e00deb89dba32bfa.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 623/623 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: d50ca94d4dbabcfaf700ebaa5ca69649b0a74915227232e3baad1b1a0eab31f0.
- Compiled .text$mn SHA-256: 489d153d758be6bb566e18257826068ac5b300aef52b7eb0707a8af7f98898bd.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1469](https://github.com/soldieg/ReBLACK-XBOX/issues/1469); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_d5ca10c3d9658f5a9a8ccce3916f9a8b92e11206bb48ae419885f07166334d22`; complete REA byte-read Evidence: `ev_9c7991eff6f5df7dfbd16cf9b04d79f199fa59d2e87a615c24cff074751d55b0`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 623 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `e5e08e53b8a1cdd367dadd9ca517adebebd657973f267291ba81f17dde17e44b`; candidate COFF SHA-256: `a5319487bf628881f0cfec413b9a30f30b1a671bb76c5099b6e560fac31b9f78`; compiled COFF SHA-256: `865406708e14e5c953ab36c15459b59007c6f11158da7c84560799504811f936`; ObjDiff report SHA-256: `90a0237822eef9c3451ae69283f3f1f42544b2a27f51fb3e2541f8db2b30c243`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
