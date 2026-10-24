# sub_000A2D4D

- Function task: [#778](https://github.com/soldieg/ReBLACK-XBOX/issues/778).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A2D4D-0x000A2D62 inclusive, contiguous, 22 bytes.
- Call graph dossier: ev_a50e955ab2daa6de603bc2083314fb211d958a6faeff6e0a76f5579963765a31; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A2D4D, 22 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A2D4D.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x92D4D.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_05e5f802d8e39996b99c974e8659a220b6a88c114dfa25ac2a5f16d4884fb968; complete read 22/22 bytes.
- Source SHA-256: a4d874baa230769f7342f18fadf484ff115905c35af29910928b0a23b5f6d242.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 22/22 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: f647419d8c8147ddf03d7d1fe125767d264c167602d56ec29c1b310d13031492.
- Compiled object SHA-256: 05067853fac1f3af1522b61dbf7d1a27c0bed11044fa6e6c263f2357ccedf1ae.
- Compiled .text$mn SHA-256: ab4bab194aae7751eae686a11b9b3777dd65c29138d9a7d064cc8a88cb137299.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
