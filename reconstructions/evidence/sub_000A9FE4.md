# sub_000A9FE4

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa9fe4–0x000AA04F inclusive, contiguous, 108 bytes; local Ghidra 12.1.4 body FID_conflict:_ungetc covers the same exact range.
- Candidate dashboard entry: sub_000A9FE4, 108 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __getbuf (0x000a903f) at 0x000aa009; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A9FE4.obj, SHA-256 68376e54b6eb96c0f2b1061b10e22ccec67f6be927a4dd0ca400812923c3dfb4; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x99FE4.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x99364.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 008363e0f8091eedba150c365095244928475eeb364a33ab45d8927bc6c4ac53.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 108/108 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 56b91cc019daa6dc398b2e3a59e785e0509400b039f2eaa03268cdd1d5145b35; compiled .text$mn SHA-256: 8b49d8bf504e957e1482fbdaa9b24313a632b4871842b8b3657713fb6a3dab03.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
