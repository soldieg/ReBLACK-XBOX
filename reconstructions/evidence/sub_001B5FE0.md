# sub_001B5FE0

- Function task: [#1328](https://github.com/soldieg/ReBLACK-XBOX/issues/1328).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x001B5FE0-0x001B6003 inclusive, contiguous, 36 bytes.
- Call graph dossier: ev_a58c86f772be3adcabab69c1c0367ca009748998dc802d6958590f6b1493e4ac; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_001B5FE0, 36 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001B5FE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x1A5FE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_0ea92f5f1d06f1ddc5202edd5b0c5781a041db56e4fb022a8602ba0b12ed3bd6; complete read 36/36 bytes.
- Source SHA-256: 385d40a296db1b755e094de577642229b7b606f9187071a7b1d1203e9a0a803d.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 36/36 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: bd85a9525f17e937e26c141e4ef264953353df7b8be185f935e7b20dc63457ed.
- Compiled object SHA-256: dcbee953fc93323e12ed0bce5929ae1e8f433d8c1934192a3a98c57cc53dce27.
- Compiled .text$mn SHA-256: d6dd0590096907165a16444198c8899baca6c28542bb65c8478d8e2c361414fc.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
