# sub_000AE3B0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xae3b0–0x000AE42B inclusive, contiguous, 124 bytes; local Ghidra 12.1.4 body FUN_000ae3b0 covers the same exact range.
- Candidate dashboard entry: sub_000AE3B0, 124 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00085a70 (0x00085a70) at 0x000ae3ec; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AE3B0.obj, SHA-256 7023e20980069bb0e0ebf3762dad245bb127ca4a3e74dd8cc9b8a6c11fb68900; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9E3B0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9D730.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 7f9438cd36b47968e4790d07c2476ef677be561985979918eaa48abd3e9b33fb.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 124/124 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 24c5cccd9538676f5f3f1970057731160e3c148f9b4309647bfec6325382ec6a; compiled .text$mn SHA-256: dc157c93827243e114ba3925e91dbb17d62ba77cbc3f257ce6f7d3faad757192.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
