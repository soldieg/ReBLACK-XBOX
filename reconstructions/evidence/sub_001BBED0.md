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
