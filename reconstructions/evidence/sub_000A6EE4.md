# sub_000A6EE4

- Function task: [#809](https://github.com/soldieg/ReBLACK-XBOX/issues/809).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A6EE4-0x000A6EF8 inclusive, contiguous, 21 bytes.
- Call graph dossier: ev_4ec8e04b8becee32459cb80334de91c8bfbe0103a664c37aacd40ac8d6af8836; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A6EE4, 21 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A6EE4.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x96EE4.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_1b663b8ed455304f2a0d877604b554765cabf94d74ab8a87571d0a5f929c0f62; complete read 21/21 bytes.
- Source SHA-256: 06179ec70d9db5e96fa2d378ffb4468f0a86c0cf4f0138ad6c4d6eebb4c77f63.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 21/21 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 065785b6ac000d9d45d9ef32d0b6e75dc5410c090bee6770080230d0feb6f876.
- Compiled object SHA-256: 0281af33b15fb81918a8fbc8adc2a32b412bc134e844eb639374077fdd072220.
- Compiled .text$mn SHA-256: 2dce0bc1ec224128643a743b9a3cab6795651b19324ae7b387a872b7d615ab3b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
