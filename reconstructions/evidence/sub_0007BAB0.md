# sub_0007BAB0

- Function task: [#588](https://github.com/soldieg/ReBLACK-XBOX/issues/588).
- Confirmed REA/Ghidra 12.1.3 body: 0x0007BAB0-0x0007BB09 inclusive, contiguous, 90 bytes.
- Call graph dossier: ev_d46482ed60e878d739565e5e10c749940d3a656d8056a707246796809daa8300; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: sub_0007BAB0, 90 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0007BAB0.obj from the 2026-10-15 snapshot (complete=false), SHA-256 a9809bdd2ef2075c7e70502cdfff5747115b54880a3279fd45e59a968102a0a1.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x6BAB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA/Ghidra dossier evidence: ev_d46482ed60e878d739565e5e10c749940d3a656d8056a707246796809daa8300.
- REA byte-read evidence: ev_e1ca29565519f733cd89b3bbf7d9a7bacc6f1dbaf6a257324b5bedb91ea7ef8e; complete read 90/90 bytes.
- Source SHA-256: b3a8a74dabea772ff4ade3b2b04fb2b99ea3b14a57322c920e2a70af51edd03f.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 90/90 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: a9809bdd2ef2075c7e70502cdfff5747115b54880a3279fd45e59a968102a0a1.
- Compiled object SHA-256: 63094c0f201cc6bbc7863521ec09c191e6b3506c2eecab2e5177c1f6d3b1fa7f.
- Compiled .text$mn SHA-256: 9ed390d6241637deb8455a4bc19e91561e599c144767ee62ff29689b8dec593b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
