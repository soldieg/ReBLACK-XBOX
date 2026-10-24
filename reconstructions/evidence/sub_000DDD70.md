# sub_000DDD70

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xddd70–0x000DE73E inclusive, contiguous, 2511 bytes; local Ghidra 12.1.4 body FUN_000ddd70 covers the same exact range.
- Candidate dashboard entry: sub_000DDD70, 2511 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00012450 (0x00012450) at 0x000ddf6b, FUN_00012450 (0x00012450) at 0x000de210, FUN_00012450 (0x00012450) at 0x000de295, FUN_00012450 (0x00012450) at 0x000de2b7, FUN_000150c0 (0x000150c0) at 0x000de355, FUN_00014de0 (0x00014de0) at 0x000de3d6, FUN_000150c0 (0x000150c0) at 0x000de40f, FUN_000150c0 (0x000150c0) at 0x000de428, FUN_00014f00 (0x00014f00) at 0x000de45e, FUN_00014f00 (0x00014f00) at 0x000de4ae, FUN_000126e0 (0x000126e0) at 0x000de4d0, FUN_00012500 (0x00012500) at 0x000de4da, FUN_00014f00 (0x00014f00) at 0x000de511, FUN_00014de0 (0x00014de0) at 0x000de583, FUN_00012500 (0x00012500) at 0x000de5af, FUN_00014de0 (0x00014de0) at 0x000de5c4, FUN_00012500 (0x00012500) at 0x000de5e0, FUN_00014de0 (0x00014de0) at 0x000de5f5, FUN_0001f910 (0x0001f910) at 0x000de646, FUN_0001f910 (0x0001f910) at 0x000de690, FUN_0001f910 (0x0001f910) at 0x000de6db; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DDD70.obj, SHA-256 80d4090fc3ab11e829cef7a872fe2e73527bc3122381681a5951f1ae2e4818df; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCDD70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCD0F0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: b119e035595182b8f644481eb1c4c6efff1318e89e83c888b692a843aa670043.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 2511/2511 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: cc89416d225925bd84b7a0254d3bd7f41bc716349a25614d84ff2f3d91b0b146; compiled .text$mn SHA-256: 1fd7468a4a6ce3bfbd32d9906d01b56b6ac91b590151b6472af9624c7aa76400.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
