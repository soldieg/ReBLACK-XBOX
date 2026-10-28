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

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1487](https://github.com/soldieg/ReBLACK-XBOX/issues/1487); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_ac01db471eacba7587d8db9e879476fc9c931c9564ee347030357de1af40a47f`; complete REA byte-read Evidence: `ev_6aeb249cb6806e560d19bc6e90b2f7c79191c44f54d90317f80ce8a00db83031`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 49 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `29ca66cc1f297e6bab9d3df8edbd05933d6d53645585fcca4ceaeee8262e41ef`; candidate COFF SHA-256: `450788bda5b202f976ebabee9da2fa8128043fc89f8ef712b1348f96125d6b83`; compiled COFF SHA-256: `7cd3ede672f318c24d9077acc0aa8a1c6c5cb373aaf973acb763f9ffe216ada9`; ObjDiff report SHA-256: `f176a72053750e8d4034f77739c36b17d81cc063b5aff2af8e36528699530564`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
