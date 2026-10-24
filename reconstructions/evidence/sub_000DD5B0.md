# sub_000DD5B0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xdd5b0–0x000DD69B inclusive, contiguous, 236 bytes; local Ghidra 12.1.4 body FUN_000dd5b0 covers the same exact range.
- Candidate dashboard entry: sub_000DD5B0, 236 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00017100 (0x00017100) at 0x000dd66d; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DD5B0.obj, SHA-256 4d5e2ba563c2ed8419cbce8ada0066a0967fed767e82d2c486ead025719d07e3; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCD5B0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCC930.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: c7a8a9dd5080bb7e852be976c990ca79aa7c390175ba4c6ec24a63b5dc02c4d6.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 236/236 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 7a830a1decf1cf4f68281bbcdbaefa26adac1eb08a9f7267f2f21f976652d10e; compiled .text$mn SHA-256: e145878fd104074286d73e843956ceea2b38852e4fafb4a8544b16333299c93d.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
