# sub_001B7EF0

- Function task: [#1452](https://github.com/soldieg/ReBLACK-XBOX/issues/1452).
- Function range from REA/Ghidra dossier: 0x001B7EF0-0x001B7F6A inclusive, contiguous, 123 bytes.
- Function dossier evidence: ev_35266b4e6ce17913265c4c42f692872cb8245416ae9af802ff140eee1732fc87.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001B7EF0, 123 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001B7EF0.obj from the identified progress snapshot; SHA-256 0347529c5c63c0869cdcb39089492e6c5369374d88375e29f8faec177f4e9455; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1A7EF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A7270.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 09ec1847c03787cfbd3edd2c403ef45ab0d89b5272907a8d86e32e405a511f17.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 123/123 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 227aef880f14edaa79f08a4a38f171b0a66bf330cd6a663713a1911c0d5804f2.
- Compiled .text$mn SHA-256: d980d7844d5bd6dc240924f2a5a3352087738891e7062958931bc5ddc5b4362a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1452](https://github.com/soldieg/ReBLACK-XBOX/issues/1452); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_ee67c3c7b9f5f8e1dd268017083ee54342ea11c88d5d22d0462fc07b3a724461`; complete REA byte-read Evidence: `ev_d11919226a6a27f86e934688deb2d265bac0f04b3b5fe59e0461097ba272dd97`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 123 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `274b6c89d9ea13ccf42636b3034d4455c5b48b604c9c406d1c220b8b7f50e809`; candidate COFF SHA-256: `0347529c5c63c0869cdcb39089492e6c5369374d88375e29f8faec177f4e9455`; compiled COFF SHA-256: `d4c108a6dd3a7af1db27e5220ba0884761c2b2b08232acf95a4df0215ef1266e`; ObjDiff report SHA-256: `486b5d180fc71bff3a36c3461f41a10c29cc8394234326d1981193cd164aad29`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
