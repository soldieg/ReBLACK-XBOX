# sub_000BEF40

- Function task: [#887](https://github.com/soldieg/ReBLACK-XBOX/issues/887).
- Function range: 0xbef40–0x000BEFB0 inclusive, contiguous, 113 bytes; local Ghidra 12.1.4 body FUN_000bef40 covers the same exact range.
- Candidate dashboard entry: sub_000BEF40, 113 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BEF40.obj, SHA-256 3a43529f92d530466994367b1ece03537a40542298d804b38adf37d7446ea8eb; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAEF40.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAE2C0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 661978db73988a58b4d7e54804a05c3f0c8eca5da293ff3ae73fa3bba2f6fbd7.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 113/113 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: f710eab27194215ab64cc838f68a3708ef59aea06265a7762074b43d202d5786; compiled .text$mn SHA-256: 4719b498b2b4bbab6eec802e2f5448652350d821c36f7e4ec126daa3d0a2415e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
