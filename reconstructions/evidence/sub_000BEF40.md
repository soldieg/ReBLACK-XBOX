# sub_000BEF40

- Function task: [#887](https://github.com/soldieg/ReBLACK-XBOX/issues/887).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BEF40-0x000BEFB0 inclusive, contiguous, 113 bytes.
- Call graph dossier: ev_774c719b21660bba0b21a684742db2e1bc07622f4838201108aca69c70a4201c; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BEF40, 113 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BEF40.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAEF40.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_8cdac7c405f812d1f661dc59e82687787d47692fc94b511fd0e89b0bc98f0514; complete read 113/113 bytes.
- Source SHA-256: 661978db73988a58b4d7e54804a05c3f0c8eca5da293ff3ae73fa3bba2f6fbd7.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 113/113 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 3a43529f92d530466994367b1ece03537a40542298d804b38adf37d7446ea8eb.
- Compiled object SHA-256: 3c25374a6f8e533419579e809c970661a2d1e25b9c3714443c18ec9b5f61a25b.
- Compiled .text$mn SHA-256: 4719b498b2b4bbab6eec802e2f5448652350d821c36f7e4ec126daa3d0a2415e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
