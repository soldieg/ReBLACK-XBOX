# sub_000A92EB

- Function task: [#822](https://github.com/soldieg/ReBLACK-XBOX/issues/822).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A92EB-0x000A9365 inclusive, contiguous, 123 bytes.
- Call graph dossier: ev_ef3dcc8f05d141df089648a16e89ed0f62117581fdd3386729d846b178c98d19; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A92EB, 123 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A92EB.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x992EB.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_077eff60d2a35ba2db061efb17bb94af805d137ee41477eabd11dc01cad921cb; complete read 123/123 bytes.
- Source SHA-256: cac87bba21fc6298f4483766a7b9a921e47f6b4c9485265f74784d372ab0c57a.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 123/123 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 14bbcfa7828ba6dbc1f59dbada6e89dca81412a47b34489c5907c538e3dece23.
- Compiled object SHA-256: 8119691c7c15d487e5d8e8cfcf95139963c935592cb1370585b486805b62caca.
- Compiled .text$mn SHA-256: bf887c4635d3952bebe9e15f1a5c4a1a93cd28080f38bf864c93d8daf24a7ff9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
