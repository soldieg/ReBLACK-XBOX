# sub_001BE7E0

- Function task: [#1506](https://github.com/soldieg/ReBLACK-XBOX/issues/1506).
- Function range from REA/Ghidra dossier: 0x001BE7E0-0x001BE801 inclusive, contiguous, 34 bytes.
- Function dossier evidence: ev_648368e93cceacb54c16ba76d46c310d5a68f96c9bf4eabc462305733538fcfa.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BE7E0, 34 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BE7E0.obj from the identified progress snapshot; SHA-256 3c73351e731f9c2ac0fcbebea81880ad571815168d4c832842858503031505ec; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AE7E0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ADB60.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 049fc442d09ae8515442178132e35f6e7c8b0b11bf2002dcaf4d7a083b96b5d8.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 34/34 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 728c96d126fc775c4cbf3b1f42c230e3eada035c748de90f87ea39c250b21540.
- Compiled .text$mn SHA-256: 22c35592585aa78f7237fa35fb6e6edb1811b95cbacdf0d0258caa2af741adeb.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
