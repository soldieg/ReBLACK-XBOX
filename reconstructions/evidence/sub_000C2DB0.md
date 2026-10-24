# sub_000C2DB0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xc2db0–0x000C2E3E inclusive, contiguous, 143 bytes; local Ghidra 12.1.4 body FUN_000c2db0 covers the same exact range.
- Candidate dashboard entry: sub_000C2DB0, 143 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000C2DB0.obj, SHA-256 08493ea977414c6a0038dc4888ba9b6e3d9de1566e0c5291fe56718726ca5c00; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xB2DB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xB2130.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 38bf1a2979c51cda6eb920d6075d2c1f4c4de320997d4af9b3874365d082edea.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 143/143 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 7d0f9b64b532642d8f2a06e7b9e710811573901e0bbde9470e959217a7e3d6dd; compiled .text$mn SHA-256: f622ba7527539d6db1c3b49dd17c1973a0ad6c69fa031b99554b754a7c495e75.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
