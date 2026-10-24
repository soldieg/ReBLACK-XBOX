# sub_000CC6C0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xcc6c0–0x000CC828 inclusive, contiguous, 361 bytes; local Ghidra 12.1.4 body FUN_000cc6c0 covers the same exact range.
- Candidate dashboard entry: sub_000CC6C0, 361 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00011d40 (0x00011d40) at 0x000cc80a; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000CC6C0.obj, SHA-256 271e5f05b14b14efa25b8b07f82587da259d05f2773d80442aa5e47778704169; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xBC6C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xBBA40.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: dd4475b104cba73e6378300822c0d73fff1007a58e5cca17a42bbb620b5e536e.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 361/361 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: b9c3aa53b091cc4cec778b94d1edd2992ae47c5d8addac3629b7e5a4fc8873d5; compiled .text$mn SHA-256: 5e11fec860f479373a9b1bbb3dd9289d6dab999abfe72a3c89c43e24c83d645f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
