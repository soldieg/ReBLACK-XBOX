# sub_000ACD40

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xacd40–0x000ACDD0 inclusive, contiguous, 145 bytes; local Ghidra 12.1.4 body FUN_000acd40 covers the same exact range.
- Candidate dashboard entry: sub_000ACD40, 145 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0008b420 (0x0008b420) at 0x000acd4f, FUN_000b00c0 (0x000b00c0) at 0x000acd5f; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000ACD40.obj, SHA-256 1924dffc183848cb9beea59c6f0da3bcbd5f021274cf46e7da758b822b95dfa0; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9CD40.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9C0C0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 643a59bdfea3ea3aefa35491d624de7183cb74a00ec4b1a215e96ec78734b200.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 145/145 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: ad2c972cb94df3db95b5aea57e9ee20cdb4142e7952cbb5fdc3c52f53e25e470; compiled .text$mn SHA-256: 4fdb4e233e7fa152463b0676034a50257016a44fa801548797e7fe49c5bdb826.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
