# sub_000CFA20

- Function task: [#949](https://github.com/soldieg/ReBLACK-XBOX/issues/949).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000CFA20-0x000CFA64 inclusive, contiguous, 69 bytes.
- Call graph dossier: ev_8cd57696c3c2b809c52850fcaafaf53991243820c585fe98c3fa3f8954d19070; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000CFA20, 69 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000CFA20.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xBFA20.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_dcde2222999637a541b7c768b2f622638e5591c3ec71b3e43612fa2cf96fe6ba; complete read 69/69 bytes.
- Source SHA-256: e5a76dd2ab0d94e34cff2dfcdadc26d252cef6bb02a0ec5c82ad9a4dc46733e3.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 69/69 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 3e4122d6f043211f77ff52273fe38ca362eb605e7ab6d8bd6dd91fb41652c4ed.
- Compiled object SHA-256: eb4851d91779d43d3beed5ecac3bf2366ae35bbbe3b5b4f52debccf21a67f26e.
- Compiled .text$mn SHA-256: 16390ab6a9f7612e56cf854175ef565dfcc53ce83f2a671c4813cfbc858ea6d3.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
