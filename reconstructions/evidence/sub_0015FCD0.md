# sub_0015FCD0

- Function task: [#1139](https://github.com/soldieg/ReBLACK-XBOX/issues/1139).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0015FCD0-0x0015FD4B inclusive, contiguous, 124 bytes.
- Call graph dossier: ev_14ed3c69556c02b93a228c253e4a7165a7fb902e3f31b25fe4433f2b01fb778c; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0015FCD0, 124 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0015FCD0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x14FCD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_433b487f3c09b02b91117a7c3c3a3a78859da7d40ec9d1d548f60e5e5e021b1a; complete read 124/124 bytes.
- Source SHA-256: 045975b1e2288cfab24317ff775942f7a1293446ad1418174210e70f5410b15f.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 124/124 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: fca2b366f95eb70fd6279545cfe055ad796f1827c46149eae12bd610c235739b.
- Compiled object SHA-256: 1fdcc8d40235a9ba5287f4fd340c40dbc8b3a0d441ab4acbedcd50b5afd76909.
- Compiled .text$mn SHA-256: d32eec42bd096739348d9ce293862a74bf480c8c853b688feaa0f89a0874f078.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
