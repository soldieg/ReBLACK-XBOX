# sub_000DBA70

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xdba70–0x000DBA95 inclusive, contiguous, 38 bytes; local Ghidra 12.1.4 body FUN_000dba70 covers the same exact range.
- Candidate dashboard entry: sub_000DBA70, 38 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0007c820 (0x0007c820) at 0x000dba75; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DBA70.obj, SHA-256 da5832300dc201ffedbcbaf37e640ad8a86f49841ec37c44b78c0a6f83e66c40; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCBA70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCADF0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: b855d313a7d07bdaef7d8b3399d0bf38c1c6fe7282dc05abfcba0661cb45e375.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 38/38 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 2fbccc4d033162b7e4822904852a7a8b6c2c3bcf885f06d2e77b0d196b977f55; compiled .text$mn SHA-256: a72ccba34fbf5375bdfa88245cd29777e3f6074485dd0c4cbf785dff310f6663.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
