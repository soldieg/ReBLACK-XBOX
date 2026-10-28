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

## Lot 88 fresh revalidation (2026-10-28)

- GitHub Issue: [#8708](https://github.com/soldieg/ReBLACK-XBOX/issues/8708); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_9a70626539204f70daeee5274a9f4f09aff687f21637c1ec4a33bd8c89c3d6fb`; complete REA byte-read Evidence: `ev_2625fcc704403f2bae9d36d43978d9ce191903d77ac09b00adcb9dfb5021888d`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 90 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `10d771b735272b67faf92e2ed67ae396671d34c3ab9c82568b654b6e509b8509`; candidate COFF SHA-256: `a9809bdd2ef2075c7e70502cdfff5747115b54880a3279fd45e59a968102a0a1`; compiled COFF SHA-256: `98698596f88c86a7e363d463b52250965a5234270e24daaa0847d45e5d719cef`; ObjDiff report SHA-256: `504126adb81fd1a23af2439b76b2f7a7e5ea02640e21c9b3aafc026c4e4d8f2c`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
