# sub_000AEE60

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaee60–0x000AEE7F inclusive, contiguous, 32 bytes; local Ghidra 12.1.4 body FUN_000aee60 covers the same exact range.
- Candidate dashboard entry: sub_000AEE60, 32 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000865e0 (0x000865e0) at 0x000aee79; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AEE60.obj, SHA-256 9c16c92b66ce0ccecefdd81ce50d00837785f79079f1e36aac4e51ea3142ba97; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9EE60.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9E1E0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 29e3b1f3fe040a9daf48f9eed44913c71c29cd60549c755be00029964fdd7a12.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 32/32 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 5a1efff1e88bd81c965a529cc2b4d51947824e0195e1387d31e6a4b195bc6b25; compiled .text$mn SHA-256: 318449bcb2e53fb3ee3e6d3d95b0dc8997bbdba93efc039a42790ba13e1b47d8.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
