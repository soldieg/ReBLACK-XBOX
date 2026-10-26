# sub_0018BCB0

- Function task: [#1266](https://github.com/soldieg/ReBLACK-XBOX/issues/1266).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0018BCB0-0x0018BD4C inclusive, contiguous, 157 bytes.
- Call graph dossier: ev_e53d77777004d1b4d4160e17f0741b28390292ab94f2ad18c4ba512a49ef7519; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0018BCB0, 157 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0018BCB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x17BCB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_ad39ae8c6e5f18e2d4d475fe3ef0243e7aae7bce28d92307f3926b7e3cbe276c; complete read 157/157 bytes.
- Source SHA-256: c7154d2e6c616337c11365574a2817fe065fb03869b8e5e1fcf712b8cd66a2cc.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 157/157 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8b8658bd285eb14bdfd1e4dac963f7a53af0589afdc228d917acaf2dde33b758.
- Compiled object SHA-256: 0960215196ce574487a62558138f229283b9aecc14d466b6d049bec1e9900ac8.
- Compiled .text$mn SHA-256: 8d3fee2bf29e3d0110625f0d5e17a17e4e4a5c77ffc1584c7d7b40b8e2f5e619.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
