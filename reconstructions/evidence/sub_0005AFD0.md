# sub_0005AFD0

- Function task: [#493](https://github.com/soldieg/ReBLACK-XBOX/issues/493).
- Confirmed REA/Ghidra 12.1.3 body: 0x0005AFD0-0x0005B01B inclusive, contiguous, 76 bytes.
- Call graph: 1 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: sub_0005AFD0, 76 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-23).
- Candidate object: candidate/sub_0005AFD0.obj from the 2026-10-15 snapshot (complete=false), SHA-256 4a30e286cece5732dbf54389efe02a9a3cadf47f0d0de63e5da02ca875d4ba11.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x4AFD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA/Ghidra dossier evidence: ev_1af4c70d548dfde610dc85f4517ec02b15f9566fbedce4633d409c6405f19608.
- REA byte-read evidence: ev_4f8eb87fae44d22b5d7163ecb4b1ccc7636d9672b61b577d5de26e69f7a66070; complete read 76/76 bytes.
- Source SHA-256: a2fa10e0844f32bc3928877a380650293ce03056e35ea5584c4bfff3063c5885.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 76/76 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 4a30e286cece5732dbf54389efe02a9a3cadf47f0d0de63e5da02ca875d4ba11.
- Compiled object SHA-256: 2bad6865de8148eee283430ee494d95f8c21882b06a0d1d05e62cced0d4e3191.
- Compiled .text$mn SHA-256: 8a933aa2ef37bd1d31983f9694607b4e6cb6ec586c85b3bd1ff39b426159363b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
