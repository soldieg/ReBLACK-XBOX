# sub_000ABC90

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xabc90–0x000ABCBB inclusive, contiguous, 44 bytes; local Ghidra 12.1.4 body FUN_000abc90 covers the same exact range.
- Candidate dashboard entry: sub_000ABC90, 44 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000865e0 (0x000865e0) at 0x000abc9e, FUN_00086250 (0x00086250) at 0x000abcb2; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000ABC90.obj, SHA-256 130a4b3bc5505b3ec491ece6aa1bfea8d318435b73c2ab95e858dc159a59db21; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9BC90.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9B010.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 2293a920ae2916f2025f32eff7e3828d98a7bcfa67a3663df31d12bd549ce358.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 44/44 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: a85526e3fae525883292323c9c06152d826ee134c9d9bdb99ba40a9ff318fc0b; compiled .text$mn SHA-256: 4a6d565cd7b022c9a33fb8da9d941e811c73927959c279da320b0da66ebdba76.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
