# sub_000A6F6C

- Function task: [#813](https://github.com/soldieg/ReBLACK-XBOX/issues/813).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A6F6C-0x000A6F81 inclusive, contiguous, 22 bytes.
- Call graph dossier: ev_8893230a1f77c904c7d452a53db15733838c3f2c8e295a5e79ac59f8e44edbe6; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A6F6C, 22 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A6F6C.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x96F6C.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_564ccb95ca098a1f8a2d45281cbecf167c13667de364d8989a2d9f669c8845c1; complete read 22/22 bytes.
- Source SHA-256: 21eb62a93640e0beb037907cfd4fb54c53f1aaa1f8db0b1a73e9b63965a96046.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 22/22 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: da45e87ceaf3e0c38e80b57d1ab2bf0d7b5a8164de1d197ec7a595428d2648eb.
- Compiled object SHA-256: ce93ede7490416ffb7ea34c806bb0eebb3d75dc60d7f03f234d77584f167cf2c.
- Compiled .text$mn SHA-256: 4adcaaeddff7fc3980a56d0f0bd062f443e97ac27181910e7fc475851b93b5d9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
