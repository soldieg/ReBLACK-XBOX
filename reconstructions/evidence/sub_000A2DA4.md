# sub_000A2DA4

- Function task: [#780](https://github.com/soldieg/ReBLACK-XBOX/issues/780).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A2DA4-0x000A2DDE inclusive, contiguous, 59 bytes.
- Call graph dossier: ev_112bb514262f49836702b2159cbf3dfe96329ff4ca2aeadff3796f3549f48712; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A2DA4, 59 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A2DA4.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x92DA4.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_3ceb4425544a134d2e75ad32fa74dedc6469f890e81ea06602ffc7a48aaa77d1; complete read 59/59 bytes.
- Source SHA-256: c9df0819548ee1b245f2ecdbb338ce5e2f729bc41e84b4e18aaf92efb25014be.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 59/59 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 59a9056329b5c345d3bb918a81613941ad429ccbf59abf98802283337b749a8c.
- Compiled object SHA-256: 37b2b3d07a22a68ab407fba14b6f1572fc96f3cb8449330d28bbdb30780018ae.
- Compiled .text$mn SHA-256: 0c8018cbf9223bfb7b33d63499bf75d208955efbd63722b6ae70848f3c0ad3a5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
