# sub_000CB6B0

- Function task: [#938](https://github.com/soldieg/ReBLACK-XBOX/issues/938).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000CB6B0-0x000CB9FA inclusive, contiguous, 843 bytes.
- Call graph dossier: ev_ca192d8de283ffa4f2eb625790b51c2201698fb7816f1a9fd737af5489d3a325; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000CB6B0, 843 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000CB6B0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xBB6B0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_859dd6d2b16b35a6788b4b1536f1d7d15cc88948343d369cb6768775d7af6d2c; complete read 843/843 bytes.
- Source SHA-256: b1cfdd37540e81bac576c8b9e41cd2d3af47f73d4fa1fac1407df965712b998b.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 843/843 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 47e6bbb0ddf1a633ef4171b5e8df30be390485ad54d6de5ad7c6edfb73a90352.
- Compiled object SHA-256: 44ed1b7f1b3c6a06d8e5e70400f03cac0612af7b081c3046a6e6ab9f567b183f.
- Compiled .text$mn SHA-256: 6acf7f9d1df8319fee11665c19f2b9ffb008d43b0902490d5a0e5164e92c419a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
