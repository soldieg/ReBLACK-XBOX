# sub_0017AEB0

- Function task: [#1159](https://github.com/soldieg/ReBLACK-XBOX/issues/1159).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0017AEB0-0x0017AF17 inclusive, contiguous, 104 bytes.
- Call graph dossier: ev_0f9a7af75de09b46a1f0853baad294105201d7095c3a60c63187b4c7fcfc6266; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0017AEB0, 104 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0017AEB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x16AEB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_49335bbae7966f53ec4eecccd12cad858de5dbf8a6917c91c95822ac1364d854; complete read 104/104 bytes.
- Source SHA-256: d0220d3da8bd17c9fde39d9ab6e2bdd3c8bc200c6159bd2a1a4076d71d458893.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 104/104 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 085e6fee49c23a05827ce4ec1f078dc7d5caae1719e2b4d1faefe9ce55b6432d.
- Compiled object SHA-256: dd987090327d8a5b96255e28b498ae057150291e4969662001fec4359ac58a66.
- Compiled .text$mn SHA-256: 5ac3a3471b34be48c3cd852a46d1837febad6ae8381e29813e3688ac0d75cd78.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
