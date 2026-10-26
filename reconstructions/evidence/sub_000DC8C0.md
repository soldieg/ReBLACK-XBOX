# sub_000DC8C0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xdc8c0–0x000DC95D inclusive, contiguous, 158 bytes; local Ghidra 12.1.4 body FUN_000dc8c0 covers the same exact range.
- Candidate dashboard entry: sub_000DC8C0, 158 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00015d00 (0x00015d00) at 0x000dc911, FUN_000dbd10 (0x000dbd10) at 0x000dc933; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DC8C0.obj, SHA-256 7d3f6639c79adee561c9000f5d7ef94e874cd4718fe0fbddd0beb427f02cf6b8; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCC8C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCBC40.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 708f963471523de4bcc2411c42bdf98ff03b6242bbfd66a7cb1cdd157e60d651.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 158/158 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 338bc1b7c06ac4bfe689888fee82d918499209067a14e44f22b546c4c5f930ff; compiled .text$mn SHA-256: 56d9fa8ca95beb0a8179a52ecb4571603cc1ced8dfde5468d955a2a8e0a0e51a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
