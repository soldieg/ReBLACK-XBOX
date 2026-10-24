# sub_0007CCD0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x7ccd0–0x0007CDE1 inclusive, contiguous, 274 bytes; local Ghidra 12.1.4 body FUN_0007ccd0 covers the same exact range.
- Candidate dashboard entry: sub_0007CCD0, 274 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00075760 (0x00075760) at 0x0007ccf2, FUN_0007bfc0 (0x0007bfc0) at 0x0007cd3c, FUN_000757c0 (0x000757c0) at 0x0007cd85, FUN_0007bfc0 (0x0007bfc0) at 0x0007cdcf; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0007CCD0.obj, SHA-256 3c7c8525ca89071f40d933f0a2c511a0c795dc4510427eaa63492e7cad14d161; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x6CCD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x6C050.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 8c31e77f187c63d14a874ac6e3ffe61f42d6228772aac4cccdb95282d1b58a36.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 274/274 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 6f00a5bd9f68307b1e74b8d9e11d8def68af2772c345e747ba9b15418a57c614; compiled .text$mn SHA-256: d03003ca4c9340aaf1314aa93fe36839deb07b45fa422183781f41c3d3d07b11.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
