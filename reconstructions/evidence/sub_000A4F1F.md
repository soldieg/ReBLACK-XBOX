# sub_000A4F1F

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa4f1f–0x000A4F27 inclusive, contiguous, 9 bytes; local Ghidra 12.1.4 body FUN_000a4f1f covers the same exact range.
- Candidate dashboard entry: sub_000A4F1F, 9 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a734b (0x000a734b) at 0x000a4f21; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A4F1F.obj, SHA-256 35b59945ba924d9519e0d04e23c2c30341c4fe6b1e25a8c4d5fb730684ce58d0; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x94F1F.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9429F.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 428d4af18a91c5b7ff8e53e994da9ae91f884b04e9f638f2448bc11dac827597.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 9/9 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: d22540a35f546e54bd5c4d2f257ef7c6a543d182daee24cd4363b6c2d3f096b6; compiled .text$mn SHA-256: 18917adb13e43d19f44a7961051c6a00fdea015afdb630158374c2936af48511.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
