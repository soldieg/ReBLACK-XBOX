# sub_0018DFD0

- Function task: [#1277](https://github.com/soldieg/ReBLACK-XBOX/issues/1277).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0018DFD0-0x0018E179 inclusive, contiguous, 426 bytes.
- Call graph dossier: ev_5b09eb468fa51e04c70f82f544077a38362b72c684865577b51ed9b6ddb0809c; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0018DFD0, 426 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0018DFD0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x17DFD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_3edc67acd31bb33746fcd0ea5651231f7d84e229dedad4630ef47a70a1457f50; complete read 426/426 bytes.
- Source SHA-256: da1303a029482b84728e300cb054befb3d4a0e7bb3a60d6c0bc17dd28ebfefc5.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 426/426 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 804f86d479f071eb366db78e3d47f237d84d87b25ae9cf776652393f44d40875.
- Compiled object SHA-256: 476b8a25a25c50c05cdf482d6ac59bd04986743e14a415f7b240b45bd95ba7a9.
- Compiled .text$mn SHA-256: 0fb6f406d39772d58142717f6a516446e93df858d35ef6dba2c88bb7b9ea33d8.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
