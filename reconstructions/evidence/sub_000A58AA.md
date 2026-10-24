# sub_000A58AA

- Function task: [#802](https://github.com/soldieg/ReBLACK-XBOX/issues/802).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A58AA-0x000A58FF inclusive, contiguous, 86 bytes.
- Call graph dossier: ev_2090c2ca83cf01750b1e75b741b70bf8ee20708b61262fcd588b716e4a517fcd; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A58AA, 86 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A58AA.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x958AA.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_bb2ebb0c40c166857bcea972d2cc39bff6d53263a40bb3ffe6afda62e562fbd1; complete read 86/86 bytes.
- Source SHA-256: 24c04e1f0a0bd5bb3465c9bc195b3237dfa25895ffd5d5f12468016a6bca6dd7.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 86/86 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: e793236784f2a3f9ebc72bc01e29b3e7cf2ce5562960c796b5e23ded4d887d10.
- Compiled object SHA-256: 59be311c3fb147d2e4badcf7f5fd3e047260e44913bcd831b83192779b1adcb7.
- Compiled .text$mn SHA-256: 4887ab7017c11d943197ba5d2b212b637c94766205ff30cdc350d419f1d21f82.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
