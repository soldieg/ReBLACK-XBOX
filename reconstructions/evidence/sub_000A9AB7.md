# sub_000A9AB7

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa9ab7–0x000A9B35 inclusive, contiguous, 127 bytes; local Ghidra 12.1.4 body FUN_000a9ab7 covers the same exact range.
- Candidate dashboard entry: sub_000A9AB7, 127 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: _memmove (0x000a24e0) at 0x000a9b29; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A9AB7.obj, SHA-256 5c2e69c3a778f29d72c19cac5c882544b3409827dc699bb2431c673a992e7fa9; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x99AB7.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x98E37.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 880379b56f4c553179f5f1835fc281e1a24e4243955d5b4aece599ff8ff7aa16.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 127/127 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: cf31b685d75a097a280873cd4c278f12f92605dcc992a86434ee67b10ad24dab; compiled .text$mn SHA-256: 940a55ead698d8d512aebd063dde6d99828e4ebb46c1d1285cc1d75bf2695db8.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
