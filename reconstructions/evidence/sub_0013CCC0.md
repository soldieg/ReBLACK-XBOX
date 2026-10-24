# sub_0013CCC0

- Function task: [#1002](https://github.com/soldieg/ReBLACK-XBOX/issues/1002).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0013CCC0-0x0013CCEB inclusive, contiguous, 44 bytes.
- Call graph dossier: ev_c4300d8d85d5357afdaad42274e98dbd0b1bec678e1b54eea7a9d5c062853fc5; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0013CCC0, 44 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0013CCC0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x12CCC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_b8c282c2d468688d7e712165656c2d88a989f97684d81155e71fe2d05d1abbf4; complete read 44/44 bytes.
- Source SHA-256: ae4cd3061711454c928c5d6a0a7d446727cb6e5d54f85bfd2c6bd9c166732b83.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 44/44 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 661ac4fd2759a959a2d592fa96408ded7ced7d3f6d09395c351da2a95203e5f4.
- Compiled object SHA-256: 64616da329b5c194b97f6cce426f1154bcf253df5a575fcda1a5f18ec5304d28.
- Compiled .text$mn SHA-256: 6fcaa745b814ff8457051ea9d5b5657258da2cc7d4ba27cc9284ae880f9dc784.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
