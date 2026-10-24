# sub_0008DEF0

- Function task: [#677](https://github.com/soldieg/ReBLACK-XBOX/issues/677).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DEF0-0x0008DF07 inclusive, contiguous, 24 bytes.
- Call graph dossier: ev_37c4fd7333aaecc450ed0997dcee101d4a5282506adfe995e0643e8e919f4f1d; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DEF0, 24 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DEF0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DEF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_c128493789a37e3fbc93895ea7c2289d6b4fe0600a50740906949efae8a5b3d1; complete read 24/24 bytes.
- Source SHA-256: 6d202c4e784be7e01366aadf149552cf4536f876ffd17b6e98141befd886d1d1.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 24/24 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 25c67aa2ccb0281a4c465e376d4bf057e7894419ab6cb5060ae4782ba5023f2d.
- Compiled object SHA-256: bbdd11d0c0eb419450c7a14b0c80a52fcc915aee7087a612486f0837e1d56674.
- Compiled .text$mn SHA-256: 374230accac72fff9e260e69138839b28cc5bb80170e941c7c38adc31a1b75bf.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
