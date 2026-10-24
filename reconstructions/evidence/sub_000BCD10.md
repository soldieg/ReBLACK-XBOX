# sub_000BCD10

- Function task: [#884](https://github.com/soldieg/ReBLACK-XBOX/issues/884).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BCD10-0x000BD275 inclusive, contiguous, 1382 bytes.
- Call graph dossier: ev_3862050a7d62372c911d10c31a9ac8a49b744cb4419e1c596c8e46f548b7736c; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BCD10, 1382 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BCD10.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xACD10.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_6afd5e3e6db12b830d01fcf1004740caad47c60eecf6961f190f8a4ad1567c52; complete read 1382/1382 bytes.
- Source SHA-256: f72ec77237839be8deac79225293899e603db34955319c81751044fe644fc6c3.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 1382/1382 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: d6719fdfb0a050f4fb58a92b7b82574480eaf537efdffdf4c5ebdd1597bd6500.
- Compiled object SHA-256: b41dacc27c1cd8ee65678d6701d85f62b9c335f95b7177830971c3b7cb78605e.
- Compiled .text$mn SHA-256: 5099fd00375cd13eb6175c137c53c4148589ac65fb30565cfb62e1452d0c675a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
