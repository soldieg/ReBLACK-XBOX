# sub_000A2D0C

- Function task: [#777](https://github.com/soldieg/ReBLACK-XBOX/issues/777).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A2D0C-0x000A2D4C inclusive, contiguous, 65 bytes.
- Call graph dossier: ev_f2638c3943251606302ba5acd2322cd94354421be3e024b37813cc2688e1645a; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A2D0C, 65 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A2D0C.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x92D0C.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_012652a06d66d89b92f8339d402a7f2d0c9989123a813437ab9e82a042efe31d; complete read 65/65 bytes.
- Source SHA-256: ffb6987aceaadbdddfda4cf16ea647d512c8a00ce9bbe80ef938b63f97158331.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 65/65 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 9c8c1d218de50e209db3bb84db0cf16c4287e49601b8bfe825e7accc007296b1.
- Compiled object SHA-256: 47cfb7379f6ab105c36b7b4c94bb2060fcd3ee6cdc32653d2fdeae9c264f658a.
- Compiled .text$mn SHA-256: 10a53c6d2c7a4b1eb2bf0213ec7cbef4b63bac4d7d97799377dccde1906854b8.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
