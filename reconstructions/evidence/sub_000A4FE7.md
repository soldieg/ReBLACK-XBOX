# sub_000A4FE7

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa4fe7–0x000A4FF4 inclusive, contiguous, 14 bytes; local Ghidra 12.1.4 body FUN_000a4fe7 covers the same exact range.
- Candidate dashboard entry: sub_000A4FE7, 14 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a7299 (0x000a7299) at 0x000a4fee; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A4FE7.obj, SHA-256 b202676ba9d93de9faf0b0369d865e5999259d87fa09be473faaa5f6119f9f05; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x94FE7.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x94367.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 5707139de556fb722d84998a0129b035673fd5b8293865e0877670a64e589eba.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 14/14 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: acf490121339b924f2d156e6f289c357c275aad5ba4cdf315f2be6487763abc7; compiled .text$mn SHA-256: a124f34f1da96a50f79e7a0be16394f3344d1620876b527452b3e67324b8ff0f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
