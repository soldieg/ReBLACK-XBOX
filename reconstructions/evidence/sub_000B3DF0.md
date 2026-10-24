# sub_000B3DF0

- Function task: [#846](https://github.com/soldieg/ReBLACK-XBOX/issues/846).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000B3DF0-0x000B3E06 inclusive, contiguous, 23 bytes.
- Call graph dossier: ev_4bc79e5384f3633cd72232e0a676e78aded48fbdb205fd5d4668f13fb6d767cb; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000B3DF0, 23 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000B3DF0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xA3DF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_c5670a9bcca19e0d534dcfcad4a02f11b0502c7c5a7a3efed28b5da3ca6d6c69; complete read 23/23 bytes.
- Source SHA-256: bf921cbbe8b0647c8a9077be4b6047862c2d6756b2644bb61fa9bc1011ec6b94.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 23/23 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 08a0d1ae987052cf399325919df176eea72ed3acb9fa8a48c253317356c3eded.
- Compiled object SHA-256: 8c3c8a3a370b622205b7fff68dc335b61227b9468316f2c7f285f4ae637b51fb.
- Compiled .text$mn SHA-256: c63a1ec14246cd929b3bd852996ca053445c6d4010d69be4341f550ac4639b02.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
