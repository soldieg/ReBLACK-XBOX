# sub_000DC7E0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xdc7e0–0x000DC8B8 inclusive, contiguous, 217 bytes; local Ghidra 12.1.4 body FUN_000dc7e0 covers the same exact range.
- Candidate dashboard entry: sub_000DC7E0, 217 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DC7E0.obj, SHA-256 1281fdfd7a92d7474c8599744474b291ac6dc329a3be067b7db43817c6a4c294; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCC7E0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCBB60.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f852b152f178182c7d7d16680fa44ade0d88546155f1ea60c0eec6e25217b6b1.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 217/217 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 0f413e9cc9dcd174dfdf098d42ddb3177da546a204a2ecd5c2c7552d2da972f9; compiled .text$mn SHA-256: cc7bc32d090e4bc48ecee2eb6f5974a7f06bd1c2e2e0bd9c91061a88cdc0ab80.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
