# sub_000A9DAC

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa9dac–0x000A9DF7 inclusive, contiguous, 76 bytes; local Ghidra 12.1.4 body __fclose_lk covers the same exact range.
- Candidate dashboard entry: sub_000A9DAC, 76 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __flush (0x000a7462) at 0x000a9dbc, __freebuf (0x000aae76) at 0x000a9dc4, __close (0x000aaddb) at 0x000a9dcc, FUN_000a3791 (0x000a3791) at 0x000a9de5; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A9DAC.obj, SHA-256 99993598664e15043023f73b6f31e303c1bda88d65604d29873718c81fcad4f6; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x99DAC.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9912C.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 2c02e2966e4d3d1a518bed69f240565b559e15971854152134bc6204487a7410.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 76/76 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: e343d33775dd29c6e87daba2f8605bc65a50e120de56a8fb4223911803f3f8a4; compiled .text$mn SHA-256: 5bc9cdac5d4cee5d903f962e1d98040af3facd9ffce40493b8e7cd75a2c6a3ec.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
