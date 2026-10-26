# sub_000BFA90

- Function task: [#892](https://github.com/soldieg/ReBLACK-XBOX/issues/892).
- Function range: 0xbfa90–0x000BFAE8 inclusive, contiguous, 89 bytes; local Ghidra 12.1.4 body FUN_000bfa90 covers the same exact range.
- Candidate dashboard entry: sub_000BFA90, 89 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BFA90.obj, SHA-256 f1bfb8ea68987f5a41f3ea0f3dbfeef70852477634effdf66acace41142b55f9; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAFA90.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAEE10.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: bb0b82461bfd6a3e860c44add348307634677eed34a0c6d014babf542fed311b.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 89/89 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 02eb4849b811ecd37a652864cb7563790abb1a6adcc4ff2db62371e6ddcf44e1; compiled .text$mn SHA-256: a52cf51f1d503e7251d534adc699dca6553ffc851e0e782abecc6ff07f1a2a1a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
