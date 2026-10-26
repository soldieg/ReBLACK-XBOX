# sub_000AEB90

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaeb90–0x000AEC4E inclusive, contiguous, 191 bytes; local Ghidra 12.1.4 body FUN_000aeb90 covers the same exact range.
- Candidate dashboard entry: sub_000AEB90, 191 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00085a70 (0x00085a70) at 0x000aebea; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AEB90.obj, SHA-256 e3893b325cb5c2e6c3b957ed3d0eefbfef831337ceeaf702b385d7422ba7add5; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9EB90.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9DF10.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 9ce3e1e0b3dcab78107958f46606db94f9c027191f2b69ffbe325e65a4c1b0b9.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 191/191 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 560334f8bfdc0921c7c2801c7c0820bf8300139d6b09771b69e4416f68e37264; compiled .text$mn SHA-256: 636d3fb22188a4bfda3fdcc11b3c774e5bf8242bae3f13a4db0a7ff759efb9af.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
