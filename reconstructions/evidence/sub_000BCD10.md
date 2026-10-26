# sub_000BCD10

- Function task: [#884](https://github.com/soldieg/ReBLACK-XBOX/issues/884).
- Function range: 0xbcd10–0x000BD275 inclusive, contiguous, 1382 bytes; local Ghidra 12.1.4 body FUN_000bcd10 covers the same exact range.
- Candidate dashboard entry: sub_000BCD10, 1382 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BCD10.obj, SHA-256 d6719fdfb0a050f4fb58a92b7b82574480eaf537efdffdf4c5ebdd1597bd6500; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xACD10.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAC090.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f72ec77237839be8deac79225293899e603db34955319c81751044fe644fc6c3.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 1382/1382 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 7607431f461aa3b6fe8cea42ae2870a4466c18f0f54bd1b47cd51bcd6569338c; compiled .text$mn SHA-256: 5099fd00375cd13eb6175c137c53c4148589ac65fb30565cfb62e1452d0c675a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
