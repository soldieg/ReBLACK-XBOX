# sub_000AFEE0

- Function task: [#835](https://github.com/soldieg/ReBLACK-XBOX/issues/835).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000AFEE0-0x000AFEFF inclusive, contiguous, 32 bytes.
- Call graph dossier: ev_8221678e5c750f4e70d2c2332cdf5740cf4c1069cde470921c9f4ba169a4207f; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000AFEE0, 32 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000AFEE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x9FEE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_54a727ea469afb281a4acf23fa3f1a36a09cbd0c53e31af78e0035c6e0e361de; complete read 32/32 bytes.
- Source SHA-256: 21baeed97ef278e022f380b3a154135168dfb51f52ef16fe6ce7d9a3dfdd865a.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 32/32 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 7b02210f24fdb83ac81d7fbaeada3c0a02a5b2049371eb503e0cac75a3c5a231.
- Compiled object SHA-256: 0373c1c3feb290c23dcfa4a55361e3aaa898e0fd303ed774157e748fc9f3f45d.
- Compiled .text$mn SHA-256: ff5a00f0d861f8d2ad704cd58555a31c0d94feaa9ceb1b51603dc7d6e21be943.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
