# sub_000CCDA0

- Function task: [#942](https://github.com/soldieg/ReBLACK-XBOX/issues/942).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000CCDA0-0x000CD035 inclusive, contiguous, 662 bytes.
- Call graph dossier: ev_fe2dc23560c29b5dd93322a96c7239947f2ef8bd097a71be620b405427916528; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000CCDA0, 662 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000CCDA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xBCDA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_633d716cd5bd5cfe8cc942580a2bdd30cbc537eeb47dfcca24c86da38e77fa58; complete read 662/662 bytes.
- Source SHA-256: 960b50bf48241323dda6bd9af910a24e1ac944370fa4831310ae8fcd25552a04.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 662/662 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 0d9a2fab5b3dc9233c52aee05b664280bae1e8e6c32f45d3220f19e7efefb645.
- Compiled object SHA-256: 11d81c1396bf26af060bb6542594962d6e965ae9443d1493ae1a4f01ad1e5829.
- Compiled .text$mn SHA-256: 851f5641aabc9514cf853bb36a92bb60c76234392be438bb6b2ece3d17745ef9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
