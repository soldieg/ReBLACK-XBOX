# sub_0009DAA8

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x9daa8–0x0009DB2A inclusive, contiguous, 131 bytes; local Ghidra 12.1.4 body FUN_0009daa8 covers the same exact range.
- Candidate dashboard entry: sub_0009DAA8, 131 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0009d567 (0x0009d567) at 0x0009dac4; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0009DAA8.obj, SHA-256 db81e819a3ab0412073314fc7c0d58b8a1c9d9ee5b2a023480df8a91a1856b0c; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x8DAA8.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x8CE28.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 06778685d4b452bbf7acd8037f8a3ab161a7067c8aa4ad6e042f3264388552fb.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 131/131 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: f6ff8b7db752687673b6aa1753b32ef6bbc4706ea45ff18ce79afcf65c835677; compiled .text$mn SHA-256: 5699957fadfa0b93c6cf2b1c1d58d3b6bbe29e4b4fc4f7bca21d1ca67c3feb29.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
