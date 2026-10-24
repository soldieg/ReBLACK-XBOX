# sub_000A9D3B

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa9d3b–0x000A9D4A inclusive, contiguous, 16 bytes; local Ghidra 12.1.4 body FUN_000a9d3b covers the same exact range.
- Candidate dashboard entry: sub_000A9D3B, 16 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A9D3B.obj, SHA-256 8f5313d20ff3725b1e49056f9df1f4816442bf81b594c844242272362874461c; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x99D3B.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x990BB.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: dcaba3e05497aec57d713fbe84def3cb684e3322562b0d363ca2696fd0b6c9da.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 16/16 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 98fe42ff760bcb3ef7d2bd35116860cfb760f82b30ae4f8bef52465349b69da5; compiled .text$mn SHA-256: ef118dd151956381dc0bdbe207f25b3bf009edf2aa37ef9bce278d038bfb1579.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
