# sub_000CF4D0

- Function task: [#946](https://github.com/soldieg/ReBLACK-XBOX/issues/946).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000CF4D0-0x000CF5BC inclusive, contiguous, 237 bytes.
- Call graph dossier: ev_b29b8b9ac8b4f2a7e494a2e1d702d2b561106eb2113e98ddfd0a83f987dbe4c8; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000CF4D0, 237 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000CF4D0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xBF4D0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_d3af13c744ee6955b99f0cf0c51e0456cc56030a5dafcb9c6be0575eff49e67e; complete read 237/237 bytes.
- Source SHA-256: 0e09290c2e250ed612412dfbe8c627b125c9ab43074fea28425654c5ad5f1f20.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 237/237 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 875d30d1293683982b533ee84b3584a72dd197f1c824ff6bb760b714235563a4.
- Compiled object SHA-256: 4f138930516f33735e341fffcfcdd36cc15b811563b9c3be35837f3471b93701.
- Compiled .text$mn SHA-256: 1d9c22f7758a7c800c2c3df697967d58decc5855374d3f00a4c6ed11ebdba066.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
