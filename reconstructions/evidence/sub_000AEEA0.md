# sub_000AEEA0

- Function task: [#834](https://github.com/soldieg/ReBLACK-XBOX/issues/834).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000AEEA0-0x000AEEBA inclusive, contiguous, 27 bytes.
- Call graph dossier: ev_f927365fc6d872459ba95a853bc4a1b12bda431213ea4d4cdb0deaab52c63d26; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000AEEA0, 27 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000AEEA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x9EEA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_1145d65cdf8d34fa60e2b493a0f2eeee7ca067535df55ffea63c24e1ca083379; complete read 27/27 bytes.
- Source SHA-256: 953284d91dd2d911624df4796173b6a9f456af096bce43f0a2f2e5101c53e9b2.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 27/27 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 4fd851b1507e758e8de24dab4c1310bba395b7974607c8c52776d3a8318f9d63.
- Compiled object SHA-256: efd2dca4febc80917125489bb0d558062df4d74c9a7c884c6907e14992905b56.
- Compiled .text$mn SHA-256: 6a04d6a85c868fa51b6754bf721d01b0ef6a1c2926c42e95dc686d146abf626b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
