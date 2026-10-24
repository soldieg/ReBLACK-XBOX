# sub_00022EAC

- Function task: [#1601](https://github.com/soldieg/ReBLACK-XBOX/issues/1601).
- Function range: 0x22eac–0x00022F0D inclusive, contiguous, 98 bytes; local Ghidra 12.1.4 body FUN_00022eac covers the same exact range.
- Candidate dashboard entry: sub_00022EAC, 98 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00029ece (0x00029ece) at 0x00022ef7, FUN_00029ec8 (0x00029ec8) at 0x00022f05; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_00022EAC.obj, SHA-256 90b365a45031088fb0a36455cad07f2025051d8e4fd768c99e3bbc3d4b48163e; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x12EAC.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x1222C.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: b2407e5ba281a3b749d1337bc3b972fe7a3a98abae0cfb79ce50c5c798d96bb8.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 98/98 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 1be1b114106deefdc94174fccca775d9483362a5876bda5943618528f6cfe745; compiled .text$mn SHA-256: 661819a9a2434bd62a7f3c8c055fcb78b955cb2149dd4ad01772c36720fa2d0e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
