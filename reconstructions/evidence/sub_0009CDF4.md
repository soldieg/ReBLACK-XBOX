# sub_0009CDF4

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x9cdf4–0x0009CE23 inclusive, contiguous, 48 bytes; local Ghidra 12.1.4 body FUN_0009cdf4 covers the same exact range.
- Candidate dashboard entry: sub_0009CDF4, 48 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0009cd97 (0x0009cd97) at 0x0009ce0f; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0009CDF4.obj, SHA-256 36b4ea343780020a9f34f95414c2f336b171662874a555ce00145d0ce03ae4f7; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x8CDF4.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x8C174.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: c5b37f995dae94c74f75ef41439c0f74ebdeb1a664cc310fc2402ebdea39af1f.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 48/48 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: ab646c273b5dde43f07ad115a516c188de6d007bc45992f2e834e1208881fe5b; compiled .text$mn SHA-256: 30ea393c7892ad4491e5a6184272c8f7af871a171c23608c82e1b693f3733883.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
