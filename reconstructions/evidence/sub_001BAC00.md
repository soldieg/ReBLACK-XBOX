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
