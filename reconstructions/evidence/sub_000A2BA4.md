# sub_000A2BA4

- Function task: [#775](https://github.com/soldieg/ReBLACK-XBOX/issues/775).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A2BA4-0x000A2C35 inclusive, contiguous, 146 bytes.
- Call graph dossier: ev_c9123bc80649adce56022180c79dd812c73d1ec6b114ba7f9730332f661e483f; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A2BA4, 146 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A2BA4.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x92BA4.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_9b8ce352ab329ce286d80f4445c2b024d430407cd6d2ce8a101001a943140f48; complete read 146/146 bytes.
- Source SHA-256: 8dfacc940a722be9e2dc767e48b5393402f414f8e238ba1cf25cfe347ba82a44.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 146/146 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 1768c7f65fdb10c1aefa62bd7b8d5c45795266da9d9d021a6027a2dd98e33f08.
- Compiled object SHA-256: d2b85ac4114076bbe70f5f98804d0fede55aa6e9e70de74a2a77172f29729ce2.
- Compiled .text$mn SHA-256: 413c69a62589cae71aa7dbee87c6037e0b62304cc1f1742060f60e56307263da.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
