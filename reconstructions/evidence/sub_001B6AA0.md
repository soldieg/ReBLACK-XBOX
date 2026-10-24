# sub_001B6AA0

- Function task: [#1340](https://github.com/soldieg/ReBLACK-XBOX/issues/1340).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x001B6AA0-0x001B6B0B inclusive, contiguous, 108 bytes.
- Call graph dossier: ev_f0fe262f2ab93d32a0ec45d8d98f2664861f563e1e40ebe4e5d78b10556f9a1a; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_001B6AA0, 108 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001B6AA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x1A6AA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_db8ed4bea56336f874e1d49b5d4427f6745804fc1c22301bdbf2278004d595bb; complete read 108/108 bytes.
- Source SHA-256: c193e5c56cabd86bcb4b2eb89cfe3461c7f92906460eab950cefb272a3bf0ef7.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 108/108 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: d3a46704a238c1525ac4875b2913e8f3179d561a50aaa4cd55250c204b23fdc5.
- Compiled object SHA-256: 3fde2bf23808d5baecad8477170b562fb5667640718cf4caeffe92a392263234.
- Compiled .text$mn SHA-256: 2b190ae57865dc48e0f2f326a49e272ea8a135ef7485495f17b0af543afbb9f4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
