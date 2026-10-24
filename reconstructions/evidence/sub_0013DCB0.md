# sub_0013DCB0

- Function task: [#1016](https://github.com/soldieg/ReBLACK-XBOX/issues/1016).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0013DCB0-0x0013DCF9 inclusive, contiguous, 74 bytes.
- Call graph dossier: ev_90d544e21d62f7821b924659433edb7dcee3c36dd9b4cd70aba5e3ba0d368fe6; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0013DCB0, 74 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0013DCB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x12DCB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_b700f8c761abf2f85ce9aea69b6a24fef6668aa01094f79759206da89318143d; complete read 74/74 bytes.
- Source SHA-256: 2ebaee6fec1f19ef1ec3555fc37422ae677d38e9b3f7755f0844a6c8ce731f08.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 74/74 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 0bc07f87dac7b5cfb5fd5bb5e5938368b003d8e6daf5d19348cf24b2eecec314.
- Compiled object SHA-256: 0f3f3a12461b79a664263a05564b648d057582f394198aeabc2f282945a823d8.
- Compiled .text$mn SHA-256: 57a0623a7de31cf2df9b4ed82e5e812ead8c2566b1690e97ab2ea1d305befb05.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
