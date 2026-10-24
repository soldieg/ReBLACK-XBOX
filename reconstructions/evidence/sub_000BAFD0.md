# sub_000BAFD0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xbafd0–0x000BAFFB inclusive, contiguous, 44 bytes; local Ghidra 12.1.4 body FUN_000bafd0 covers the same exact range.
- Candidate dashboard entry: sub_000BAFD0, 44 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BAFD0.obj, SHA-256 6356cfca7bf40e7d87a1b05ff7058c6d57d72861cb79ac91fd6e1c27c91e38fe; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAAFD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAA350.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 9bad2bf97da2ab371015b72c82537f8d857e5244adcf7106536ee469e48d5e61.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 44/44 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: cbe71cf221dbdd32cfdea1c0ed237e125eaf600bd5e8f531149fd8fdf7ca7f3a; compiled .text$mn SHA-256: 9252244b31d4d82bc7326308da2334a6dc127408c0a1bc829fad1aec95ad25fc.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
