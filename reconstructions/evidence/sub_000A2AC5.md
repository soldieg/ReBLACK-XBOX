# sub_000A2AC5

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa2ac5–0x000A2AED inclusive, contiguous, 41 bytes; local Ghidra 12.1.4 body _isdigit covers the same exact range.
- Candidate dashboard entry: sub_000A2AC5, 41 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a5967 (0x000a5967) at 0x000a2ad4; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A2AC5.obj, SHA-256 2e535fe3eeaf82b2d9a96586d833eae99a6d0860864b594ce77cd0b472d0e109; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x92AC5.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x91E45.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 1cfe77fed121064a5a8ef12e85688777849a78acc9781f02872c7428998f0087.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 41/41 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 4f63e5bbb126ec93331693fe313437a8f04317142e5f22a3761c7380db13ee1e; compiled .text$mn SHA-256: 6c4c0de40f3b19580e07d37cb59645edb3376ef792054cd8eb3a83249a582fd5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
