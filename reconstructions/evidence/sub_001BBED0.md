# sub_001BBED0

- Function task: [#1483](https://github.com/soldieg/ReBLACK-XBOX/issues/1483).
- Function range from REA/Ghidra dossier: 0x001BBED0-0x001BBF38 inclusive, contiguous, 105 bytes.
- Function dossier evidence: ev_3f3e5b92b1b409e9f1290c11132944dc1a5dc4bc6560fbd2dab7e8433e565e76.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BBED0, 105 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BBED0.obj from the identified progress snapshot; SHA-256 04ebb56a8ed935b93fd5274f9c9578a12f64546802009eacc79870474eb2a797; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ABED0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AB250.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 989da1249916cae77e6f4bc5522cbb464fef0f770c43a39ec5f5daa21fe91f9f.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 105/105 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 0ff9dd1c906e542fbeff8528e783b7eb4d44523950f5b6b9bfd1eb7b26d3e3e2.
- Compiled .text$mn SHA-256: ea262ad18b709c21ae69bcd946fb752c5980145ee8aaf2b8107ebf93af3a32ca.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1483](https://github.com/soldieg/ReBLACK-XBOX/issues/1483); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_9add6c4c8e974f3e40758f6447401ba6645c325fe0278edf50cfc2cf65a5a7ad`; complete REA byte-read Evidence: `ev_375d1115e90f4233f5a79880db0cf1eee9a6f15335bfa9c3e031c91241f4e8ef`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 105 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `1fa8a83375ae86a5ba661a546b8c1ff5d9f144873dc04be4932cba91533f0c0f`; candidate COFF SHA-256: `04ebb56a8ed935b93fd5274f9c9578a12f64546802009eacc79870474eb2a797`; compiled COFF SHA-256: `9647c9054ab7b694c14ee5c26bb46291af20f5babdbdd6a8ac5e38219f8e4f33`; ObjDiff report SHA-256: `f39593710ec6c030e662df3caf6322e8dead68b5b491d8ca1a37ef56b32d4b5a`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
