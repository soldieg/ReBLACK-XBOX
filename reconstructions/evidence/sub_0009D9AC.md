# sub_0009D9AC

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x9d9ac–0x0009D9D8 inclusive, contiguous, 45 bytes; local Ghidra 12.1.4 body FUN_0009d9ac covers the same exact range.
- Candidate dashboard entry: sub_0009D9AC, 45 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0009d5e2 (0x0009d5e2) at 0x0009d9bf; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0009D9AC.obj, SHA-256 1814d43b7471f745715c5846d7bb18189216b1a1a72d185396a203154cd2447e; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x8D9AC.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x8CD2C.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 2b8698b11b69a9bc3c61799948ad235a6740532dd26cbbd48466fb30584a3d8e.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 45/45 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: c98c7d91c2a5df2bd5df2353fd95fb2440f4f4a6c7893a44333d2938152bda43; compiled .text$mn SHA-256: 91fd24bb54fdeeb5d34d6e482849e0ff41b901cf3a1841dfc0d378d4141bebb1.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
