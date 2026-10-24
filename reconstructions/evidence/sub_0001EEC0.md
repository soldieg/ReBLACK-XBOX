# sub_0001EEC0

- Function task: [#1588](https://github.com/soldieg/ReBLACK-XBOX/issues/1588).
- Function range: 0x1eec0–0x0001EF0D inclusive, contiguous, 78 bytes; local Ghidra 12.1.4 body FUN_0001eec0 covers the same exact range.
- Candidate dashboard entry: sub_0001EEC0, 78 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000e5880 (0x000e5880) at 0x0001eef1; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0001EEC0.obj, SHA-256 1a8e8772d7aa03157db0ccb86a82097849a538960116ec4c2d969945a6963b09; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xEEC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xE240.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 45fbd8cc25d61389dba9237cf68c05ab3bc86ca9be6f07100f0a22ad0cbf92a5.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 78/78 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: ec333f60290f76cee12fdfb30a1c9b90a5cf1e8e29c08947a1525634d7bdd12b; compiled .text$mn SHA-256: 96f7da557e6aa26f1ebc85c9aee2e009dc0dc0d6279f550d9c5a42bb27de15cb.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
