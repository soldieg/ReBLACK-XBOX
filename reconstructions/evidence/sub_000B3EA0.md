# sub_000B3EA0

- Function task: [#851](https://github.com/soldieg/ReBLACK-XBOX/issues/851).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000B3EA0-0x000B3EB6 inclusive, contiguous, 23 bytes.
- Call graph dossier: ev_95d8bf0e57e3103ea040e1629774d500d126c7865a91d7f85b79a8c5fff59e4d; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000B3EA0, 23 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000B3EA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xA3EA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_39b69131edc8b06db521238d4c1232b202c3bbf3583a09f320ab60f39d065cf7; complete read 23/23 bytes.
- Source SHA-256: 5e057f5a3ae38b268a9646412a38a2a0ac93e58bf4a8d44a27f5885311601a78.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 23/23 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 2d798873194cf3d18d8b639684e7264b88e885b4085302d439ef160dba334a7e.
- Compiled object SHA-256: 9f78b6d629db770f5ebdf8e5c70a26b8ee60db9a15ba43eaddaca1a88e631938.
- Compiled .text$mn SHA-256: c63a1ec14246cd929b3bd852996ca053445c6d4010d69be4341f550ac4639b02.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
