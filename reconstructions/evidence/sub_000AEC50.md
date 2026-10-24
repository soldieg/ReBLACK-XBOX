# sub_000AEC50

- Function task: [#833](https://github.com/soldieg/ReBLACK-XBOX/issues/833).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000AEC50-0x000AEC82 inclusive, contiguous, 51 bytes.
- Call graph dossier: ev_5321ebeba8569d942cc74cb25c463c063f610f822068db5d3a1bb386bb82b358; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000AEC50, 51 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000AEC50.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x9EC50.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_4e86a2fea80a2a8593fd0743b2aa9546a85116822508758e538d64f24f1ec84d; complete read 51/51 bytes.
- Source SHA-256: 03598c1785416b5513a77998c26395d5d8766eaf54a49fa4350209bbe46fae20.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 51/51 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 6428434d1fe8f7d68cae633172c05c863fe1c45ee48aa1386da2421f40edd9f2.
- Compiled object SHA-256: 6f5420ab5156a94448f0d5b689fee2e22750a6ac0001b87e6941aef2251e3f9f.
- Compiled .text$mn SHA-256: 7bacb9738c34f855b67e9d2d49ed5f5f8805e054cd18733e35eb919c2ed7b7e2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
