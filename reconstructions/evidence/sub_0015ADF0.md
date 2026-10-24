# sub_0015ADF0

- Function task: [#1108](https://github.com/soldieg/ReBLACK-XBOX/issues/1108).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0015ADF0-0x0015AE99 inclusive, contiguous, 170 bytes.
- Call graph dossier: ev_d8fcbf2ef6c4c4e1715f626f6aa0b21d468f944269594fe0a70eae7092669686; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0015ADF0, 170 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0015ADF0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x14ADF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_fa523404ed8a892f93ad3318697266fc5f43ba3f4dbecfe05e6226df65d5b1bf; complete read 170/170 bytes.
- Source SHA-256: 52744f1bef7ccd1e6cb9288b1ea181597fedeb27c9b4270eb9c23f5dbcdbd650.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 170/170 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 04247b84b2d483f6ee870bcd9f64fbd83a7796debd8dcac57308ebd5a1664db0.
- Compiled object SHA-256: dc5c8b8a064919eccd14af62dc4778f827029aef491fcf259af7e53803f4e8f2.
- Compiled .text$mn SHA-256: 39f534db81040a99f4cc293f7f43f261eda919157984df800e70f68ed30d715c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
