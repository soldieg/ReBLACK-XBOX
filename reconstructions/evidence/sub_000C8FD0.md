# sub_000C8FD0

- Function task: [#935](https://github.com/soldieg/ReBLACK-XBOX/issues/935).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000C8FD0-0x000C9043 inclusive, contiguous, 116 bytes.
- Call graph dossier: ev_38c40355c1e129522425f053c84421f21bb5267de70b4b9b9c220f23e9f09430; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000C8FD0, 116 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000C8FD0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xB8FD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_d8de2dc4ad68f72a788519f373e967fb4b61c8eb0e706dc2504805853ca341db; complete read 116/116 bytes.
- Source SHA-256: c9a32745e3647d936fecd01db2a906613e3a6fd0d4986aedc442bc3d7ec18c1c.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 116/116 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: fef091ebf26b2c0aeacdcb3819b2161232760f1fb8ed24664020463e5cd1e444.
- Compiled object SHA-256: 68a26b097f09e6b782d017d1c3ca188262e1d3efe8cb026ade94e2947037611a.
- Compiled .text$mn SHA-256: 150257597a3c2210385485be60e5545c11052b2fda05e528b4d3b1b15b7f29a4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
