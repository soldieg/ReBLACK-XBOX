# sub_000BC3A0

- Function task: [#883](https://github.com/soldieg/ReBLACK-XBOX/issues/883).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BC3A0-0x000BC49A inclusive, contiguous, 251 bytes.
- Call graph dossier: ev_3c76037fad5a8cd2678e82c2f49dbef3ea7be0c36fce846c0d114cc379795a9b; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BC3A0, 251 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BC3A0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAC3A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_6e576e556f30fb2f1763cd18e58a20cbff85707a055fff59a638a3ea27247d77; complete read 251/251 bytes.
- Source SHA-256: 8e6127219510b8e38a1f01e0bc94daf6a7f9606743c1800291dc883e22247081.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 251/251 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 3c9d64f47a7063b44b439b234a873ddf120445cfef256d9e65b84480d37b073a.
- Compiled object SHA-256: c93945fc919e2da8c0429a55f2c548aa5925c90a47cd154039ec85d595336321.
- Compiled .text$mn SHA-256: 5d7612c62d8af909c241bb4f8402f1059554c1923365ab810440c59082eeeaaa.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
