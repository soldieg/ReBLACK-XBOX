# sub_001BEF10

- Function task: [#1515](https://github.com/soldieg/ReBLACK-XBOX/issues/1515).
- Function range from REA/Ghidra dossier: 0x001BEF10-0x001BEFB0 inclusive, contiguous, 161 bytes.
- Function dossier evidence: ev_d9ad51ab84c4219725e0cb8eae77368727ca11d69ac1db796d72de52b58f76be.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BEF10, 161 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BEF10.obj from the identified progress snapshot; SHA-256 b7a4b9d13110717a63c2ca809404dbd61c3373561ccac1bfb6a9295267d931eb; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AEF10.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AE290.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 1a9a45fb3ad5fbc26210ce2d10e4942b6d0f9a064fccce59acf5b866817c658a.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 161/161 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 97f34311ed8629842ca96c6f5f051bb521a7b3a79293edc4aeed8f8f61b64642.
- Compiled .text$mn SHA-256: 4c51e8c6f1b781e2ea67d1290f0dfda12a2c2baf65bdebe90abf4c73c05de016.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
