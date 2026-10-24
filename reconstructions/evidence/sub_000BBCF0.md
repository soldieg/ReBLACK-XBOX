# sub_000BBCF0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xbbcf0–0x000BBDF9 inclusive, contiguous, 266 bytes; local Ghidra 12.1.4 body FUN_000bbcf0 covers the same exact range.
- Candidate dashboard entry: sub_000BBCF0, 266 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00011920 (0x00011920) at 0x000bbda7, FUN_00011990 (0x00011990) at 0x000bbdb9, FUN_00011af0 (0x00011af0) at 0x000bbdc2; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BBCF0.obj, SHA-256 6a68bd88a0ea08216fe86aeb06445167d4692770550b0529731e704997daa41f; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xABCF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAB070.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 01872ee79e89e6fed60078df90d9a9fa484bd51e579f387d9a2a930d37006e21.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 266/266 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 71430285036b707d44fa312cbb8ed793ace8ab6dfb2b3a2be81133d01639712d; compiled .text$mn SHA-256: 8d797a9984fac5d66a5ddc8a3b323b04c24f1fbda607d9e689775f08c410bb61.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
