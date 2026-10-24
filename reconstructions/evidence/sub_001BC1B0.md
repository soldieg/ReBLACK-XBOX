# sub_001BC1B0

- Function task: [#1487](https://github.com/soldieg/ReBLACK-XBOX/issues/1487).
- Function range from REA/Ghidra dossier: 0x001BC1B0-0x001BC1E0 inclusive, contiguous, 49 bytes.
- Function dossier evidence: ev_234d22f36a57df3abc835c835bc2fb62618fff8be8f86d787481e4479f382599.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BC1B0, 49 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BC1B0.obj from the identified progress snapshot; SHA-256 450788bda5b202f976ebabee9da2fa8128043fc89f8ef712b1348f96125d6b83; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AC1B0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AB530.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: ce6398b77a86d925f645bd46955774d14ac2c0d718c17b2010051108236d8106.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 49/49 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: bea23a2ee5c0e4edc72110f66f54f62706b55dd31ab5ff0553e829f23d72dfce.
- Compiled .text$mn SHA-256: b09f5353d873be57f0dbae5e3d163962af26f28cc28bfe8850401f9843597a41.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
