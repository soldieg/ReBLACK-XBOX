# sub_001B6BC0

- Function task: [#1337](https://github.com/soldieg/ReBLACK-XBOX/issues/1337).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x001B6BC0-0x001B6BEF inclusive, contiguous, 48 bytes.
- Call graph dossier: ev_35f33269a0452564a434887f9a5fa77feddfd6eb394b6d793332e80e791a54fd; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_001B6BC0, 48 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001B6BC0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x1A6BC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_7a89a769bd36a4ade41db46a007acadd4c9711f11e355871b633fd3f41cf3e64; complete read 48/48 bytes.
- Source SHA-256: 40dea899c4df0a1c8ec6c82d789824507d6b7095017859818c6776bf02f87be6.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 48/48 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 3a7a753849bfa93be48677f33b614a94ee0abc5a2a0f85695a4f6442698a7021.
- Compiled object SHA-256: 08b19b3d5be03a87addac26583677fed6627fd24a429de883852211ae8c0b122.
- Compiled .text$mn SHA-256: 123f14ddae2be1fdc3e41a82798f18d531c80ab3bb8076f4e1045a63376384e9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
