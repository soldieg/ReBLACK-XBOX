# sub_001BAA40

- Function task: [#1466](https://github.com/soldieg/ReBLACK-XBOX/issues/1466).
- Function range from REA/Ghidra dossier: 0x001BAA40-0x001BAAB8 inclusive, contiguous, 121 bytes.
- Function dossier evidence: ev_4f7757c5fd266cc8ba682050a057d34d7ee96e0da9a80319ca547798fc3c2570.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BAA40, 121 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BAA40.obj from the identified progress snapshot; SHA-256 5fcf3c0c0a82f29a9840783ac034cf0a00367c1c57fef997898d68e516064d98; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AAA40.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A9DC0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: f017b7e81cee54bd3add964ac28d6e0f0472c4b5cbdf5d54d0bf21fa3ab96f17.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 121/121 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 6998e98d9bee858318aa08f52c25d03e5ea023f4c8d9df16a28acb3af78931f1.
- Compiled .text$mn SHA-256: a66fe7e0af31eaa30dbaab51f02b6b795587d035e93ad6395e93b4445ae7ce6e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
