# sub_0009CDCE

- Function task: [#750](https://github.com/soldieg/ReBLACK-XBOX/issues/750).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0009CDCE-0x0009CDEC inclusive, contiguous, 31 bytes.
- Call graph dossier: ev_a5413e998b5b0aee434b49b75495e7f245dad8a377c53e48c773953acb3140fc; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0009CDCE, 31 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0009CDCE.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x8CDCE.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_f17e02e1bbd04256d2c0480060857733c042300dd1411c6bea88b01f0e0b42b7; complete read 31/31 bytes.
- Source SHA-256: 90c1bd57c752997ef01e8d7f4e6e0d6881dd936fc67f71f54dd3b128c74ac7d8.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 31/31 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: d14750f14c5bcc19d2223f0183bd044fb5dcf58001595ecead47e36cce052405.
- Compiled object SHA-256: d1f54663b9c822503d71a424382ec10ef2db75dd47d15d32645dbab24abcf5a2.
- Compiled .text$mn SHA-256: c60cf7b916e17ea3868dfb0375a04d9c321ab92ae950fda01ca08598617c0cc7.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
