# sub_000A75FD

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa75fd–0x000A7612 inclusive, contiguous, 22 bytes; local Ghidra 12.1.4 body __inc covers the same exact range.
- Candidate dashboard entry: sub_000A75FD, 22 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __filbuf (0x000a9f03) at 0x000a760c; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A75FD.obj, SHA-256 e51e0e5d6973246aef2df243dde3b6bbd6cd12e6fd2e7862037887906ae3ae0f; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x975FD.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9697D.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f276e4feb3d1ee76c155c60cff6649d4ced7dac3298c9e0dc19d0647118dbc23.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 22/22 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 9771f854f645155f8856b3413e656cbdc46c34fff76d4e235de2a48cd8687d4a; compiled .text$mn SHA-256: 7e266291f8554bc45b33e8a1b8d83e298b78d6cf0fcfecf1b0f9bf52489fd034.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
