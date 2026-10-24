# sub_000C1CD0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xc1cd0–0x000C1CE5 inclusive, contiguous, 22 bytes; local Ghidra 12.1.4 body FUN_000c1cd0 covers the same exact range.
- Candidate dashboard entry: sub_000C1CD0, 22 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000C1CD0.obj, SHA-256 e81edae9cb644426bf21db7df1edfeaa43f9096ab15758d409ebc2737cd13085; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xB1CD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xB1050.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 330fb20b69ac289ba62f55c2d4d7bd6c71ebdda8d834eb3b1182eb3edfa62d95.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 22/22 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 63206fa3c1ad1b4b9798a815650babd78f972354532bf9a9149b310241d4add6; compiled .text$mn SHA-256: 05a4401e317b0f7f92a20468f593b456b8bdbe4c603f6fcce933029d1d00be25.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
