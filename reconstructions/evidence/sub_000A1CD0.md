# sub_000A1CD0

- Function task: [#770](https://github.com/soldieg/ReBLACK-XBOX/issues/770).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A1CD0-0x000A1D08 inclusive, contiguous, 57 bytes.
- Call graph dossier: ev_d9b201a5970d3a12a4bcd3b8a909b318fef548a483d3293e9c4cdfe0e6de27e7; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A1CD0, 57 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A1CD0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x91CD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_f1c0078ac4edbef7159b6da20dd74d707dc5969bf948c4596d85a54fa6f99d8d; complete read 57/57 bytes.
- Source SHA-256: a3bd6862d1e3c91683f1081ebf2f908c888016a84a10c729c025645c61d5b342.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 57/57 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 4a5e79de92826b05a5d5605f6d51e1dd1d4df7607dedaa6f55065f9e67de6f45.
- Compiled object SHA-256: 2cc628c26cce2e2abe1aaa979a36a2385341c2561a7e8bfc3decff0dc3daefc3.
- Compiled .text$mn SHA-256: 591725832adb8343cdb0b00cb336d17f54bf82c34875ede3bece382072dd0644.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
