# sub_000AFF00

- Function task: [#836](https://github.com/soldieg/ReBLACK-XBOX/issues/836).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000AFF00-0x000AFF27 inclusive, contiguous, 40 bytes.
- Call graph dossier: ev_ec5cf7066cafd9b07b297fed600bace56a5d17fb28929238986e8a1b5d0097b4; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000AFF00, 40 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000AFF00.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x9FF00.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_5ec0f4bc507395288993c0d20f0e99f4c2f02fe5486f7969c12071f68e4bd588; complete read 40/40 bytes.
- Source SHA-256: 38ae34ac5d88492e7740e3f03f3d33795d4b8e6a96edf3c18528547ea68ee314.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 40/40 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8418d7d3bfadf0dc36785f1c322bc0f989f32f7dd00c1be1272a9a1d3cd615ca.
- Compiled object SHA-256: 563e07a151f4129ec372fc6123329c47abf9ac94701e42d97a6f2b49e78c3121.
- Compiled .text$mn SHA-256: 27b16f66edd6c3b4505791f0712a2b9d6cc3852ebffba57c4f04893b96c5c37c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
