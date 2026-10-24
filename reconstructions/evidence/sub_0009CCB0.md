# sub_0009CCB0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x9ccb0–0x0009CD28 inclusive, contiguous, 121 bytes; local Ghidra 12.1.4 body FUN_0009ccb0 covers the same exact range.
- Candidate dashboard entry: sub_0009CCB0, 121 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0009ca70 (0x0009ca70) at 0x0009cd1d; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0009CCB0.obj, SHA-256 8b57e2ee48ccb98c91e209cc831834eac37032e01956342d9d289bafd5d540f4; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x8CCB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x8C030.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 678463eb6d7781c8ce8fbb804983cf0f66c0cf1d7c1490c2fc6ae65f20fa56ef.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 121/121 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 8f34dc5709819b8a777ccc8d0ade4621e8f8dde609522443ecdac3eebc6d0153; compiled .text$mn SHA-256: 0e3ab06f956d9974ce98d6b2ccfbb9995694ebeb3da5ea7f19edb74e589561c2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
