# sub_0009CF1E

- Function task: [#751](https://github.com/soldieg/ReBLACK-XBOX/issues/751).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0009CF1E-0x0009CF69 inclusive, contiguous, 76 bytes.
- Call graph dossier: ev_f4210c1f3043c95bf5841ca9c5b4549fac66adf87cca18436ec992356a6cd2b4; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0009CF1E, 76 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0009CF1E.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x8CF1E.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_fe18fbf89e01e6342863592c4eb7a761a38e4c658998bd32f4640369765602d4; complete read 76/76 bytes.
- Source SHA-256: 7dfb87989c13670b7474c8f9a9169b821653a9e278e8c4a3108dba6645e4afa5.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 76/76 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8993e85341d718c936e11d5e3fa7295d5dd9217b3884fecd8688e991c275dcf1.
- Compiled object SHA-256: 1c623cb4230d673ef5273de315ba5e7eb32d53d5d6975de758e76d50207f1e22.
- Compiled .text$mn SHA-256: 3b5425d27898c5ff6857b263ceb8f844ed43e81add79c2a482e0ec63fdedf7c4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
