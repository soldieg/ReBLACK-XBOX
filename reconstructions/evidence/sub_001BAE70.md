# sub_001BAE70

- Function task: [#1470](https://github.com/soldieg/ReBLACK-XBOX/issues/1470).
- Function range from REA/Ghidra dossier: 0x001BAE70-0x001BAF29 inclusive, contiguous, 186 bytes.
- Function dossier evidence: ev_af118d698ff233c15a96b821f9b868732f3c5133bbf3dc6e2face2edbd904c15.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BAE70, 186 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BAE70.obj from the identified progress snapshot; SHA-256 ebd63e428f048214bd4d05aa12044e04bb48be5ef36260eef7fab002685a0d93; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AAE70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AA1F0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 8c3500b373ea62e5e92a2aa280f3873d1509c73eacacefdd1f54f87423410147.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 186/186 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 43aa7b992a242a9026f2cef06ddae9c67443678fbad1b73ba5c42f04e08aef82.
- Compiled .text$mn SHA-256: 83a7c477b509591039517aaaaf2b0e8a0e95f2475f1f19de7ad0678b183111ff.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
