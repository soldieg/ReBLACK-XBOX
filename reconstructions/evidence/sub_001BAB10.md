# sub_001BAB10

- Function task: [#1468](https://github.com/soldieg/ReBLACK-XBOX/issues/1468).
- Function range from REA/Ghidra dossier: 0x001BAB10-0x001BAB52 inclusive, contiguous, 67 bytes.
- Function dossier evidence: ev_d86ed8c61bed44646f2e9a9f6d66d5ece5704c3eb56608aa634d3ab401871919.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BAB10, 67 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BAB10.obj from the identified progress snapshot; SHA-256 2066677bfbc22dd01bbaa5eb52e72b2c357fed79dd16d3f0055cbc282245ff18; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AAB10.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A9E90.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 4f8e76eab6b1819e192983c07ba815f4c8fc0d6c4c12e0c42895c9b0eb4db085.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 67/67 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: ba447d407c067707f7a45a6faa99b9c1de3a4af46b05d12c3616ef97ab2d3c7d.
- Compiled .text$mn SHA-256: 09896fa19b0557bebaa0b7e9a4bc1c25799ebd1859cf4e58bcce8f9bce3e4150.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1468](https://github.com/soldieg/ReBLACK-XBOX/issues/1468); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_54c5f8fe0c88047e85bdc9ea6bedbec12478ea696d4045a04b702ac9c67d7496`; complete REA byte-read Evidence: `ev_65449d403049b6cf4034df3d988bf2e4f31b151828aab489b97b7de9c6d4bc95`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 67 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `5eaefa4d65c1957a339ea2be31bbed5cd3eb36a49ef2f0604be9ddfed82288ea`; candidate COFF SHA-256: `2066677bfbc22dd01bbaa5eb52e72b2c357fed79dd16d3f0055cbc282245ff18`; compiled COFF SHA-256: `fb922b0550ee2ebd7228915f5fef95f3cc012df250391949ce5501b6a49cf8f9`; ObjDiff report SHA-256: `a20e439a9987fc51a38e12885beb57a651a1ae5fb8ef41175da2e37a3f3b75aa`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
