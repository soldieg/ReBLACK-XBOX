# sub_000A6D2B

- Function task: [#807](https://github.com/soldieg/ReBLACK-XBOX/issues/807).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A6D2B-0x000A6DB6 inclusive, contiguous, 140 bytes.
- Call graph dossier: ev_8e31d77df19316f1f2bbe9cc1014e7d977da72df3f5181fa6082c1fd937af4db; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A6D2B, 140 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A6D2B.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x96D2B.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_e5bfed7aaee482716f3ea344b57a5ae5e01886c28d91f4718dbf5b7f44daf704; complete read 140/140 bytes.
- Source SHA-256: e76825c9d9755bd2f360de2a27bfa27f2bdcf3e76038cef9dfb1d3ac7b36268e.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 140/140 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 093bf5f35aa43685aabcb04771c88eaba4a7c9d330d5e060c0385692f8d0dff5.
- Compiled object SHA-256: 7adbd43b0316569428a98e2d94afd971958f31b68e7adaa5ed83e0ce0063be7a.
- Compiled .text$mn SHA-256: 32e56c11de45599890910c8dd4cb3d9dbe5a7c32df2e6e856a3928901a37baa7.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
