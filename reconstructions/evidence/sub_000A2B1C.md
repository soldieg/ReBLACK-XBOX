# sub_000A2B1C

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa2b1c–0x000A2B44 inclusive, contiguous, 41 bytes; local Ghidra 12.1.4 body _isspace covers the same exact range.
- Candidate dashboard entry: sub_000A2B1C, 41 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a5967 (0x000a5967) at 0x000a2b2b; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A2B1C.obj, SHA-256 917d157333dd6c2a7ad4016373a1a27afdf90d831e2500c4c65acd32ceb4f4a9; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x92B1C.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x91E9C.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 2e250361cb4b192002404df85d069525de27902214e97f5d43ac6773d2d88669.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 41/41 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 7fab3a42a0e72a68210846ad68562350472ecb68c1ab1af161edd16b4cef26d6; compiled .text$mn SHA-256: ab98b787effb9e47c58ec62c8a528e8f9c6fb88fa20bd95f00e321ccc8862b56.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
