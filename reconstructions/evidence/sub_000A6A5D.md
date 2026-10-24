# sub_000A6A5D

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa6a5d–0x000A6A8F inclusive, contiguous, 51 bytes; local Ghidra 12.1.4 body __ctrandisp1 covers the same exact range.
- Candidate dashboard entry: sub_000A6A5D, 51 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __fload (0x000a6a90) at 0x000a6a6d, __trandisp1 (0x000a6cc4) at 0x000a6a83, FUN_000a690f (0x000a690f) at 0x000a6a88; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A6A5D.obj, SHA-256 86a450b74b7bff372e45325e0894b1813b457920d94235eca135324951ed9d1e; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x96A5D.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x95DDD.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 776e6aba9b519a00fd8b7982cca09f0b220a29d743661d05a6a7fd695eec1d8d.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 51/51 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 00374c3c1d799d4fa4a404c281265edd1e053ed055395e493c8fbf00c76eeb4c; compiled .text$mn SHA-256: 36723195c8d57b7c138a2ba96973feb81b07a9ebdd3fcd43c37d9177008e99e7.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
