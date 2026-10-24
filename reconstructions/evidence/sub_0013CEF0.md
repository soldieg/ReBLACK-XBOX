# sub_0013CEF0

- Function task: [#998](https://github.com/soldieg/ReBLACK-XBOX/issues/998).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0013CEF0-0x0013CF18 inclusive, contiguous, 41 bytes.
- Call graph dossier: ev_40b9e3450e8a63cb1606d29a68bb5f0292ef8a337c99aea068fd75a2d7e3a92a; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0013CEF0, 41 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0013CEF0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x12CEF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_4e01af2b2908a3785c4e2200cfc27b6ce5be6c12e369b17c674dce31a4cb90e6; complete read 41/41 bytes.
- Source SHA-256: 0c4731e1a7e7d59b72d0ae316fda020bfd637fc39a9cc6fe65fd7f7f9f719a91.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 41/41 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: aed79f9cbd93efec8d200cb8be1f485bfa39ff5e07228d40fd78c68173e8a08d.
- Compiled object SHA-256: 01399b5dcadd2a4fefe21b7737b6ba304143bcd31a1d66428b76194f663f48ab.
- Compiled .text$mn SHA-256: 534a3ca5c20350e37772c6725fac109aa49d11581c0cde5f2739147fc3408246.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
