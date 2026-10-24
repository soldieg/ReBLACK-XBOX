# sub_0004FDD0

- Function task: [#1731](https://github.com/soldieg/ReBLACK-XBOX/issues/1731).
- Function range: 0x4fdd0–0x0004FE15 inclusive, contiguous, 70 bytes; local Ghidra 12.1.4 body FUN_0004fdd0 covers the same exact range.
- Candidate dashboard entry: sub_0004FDD0, 70 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: _atexit (0x000a1c7a) at 0x0004fe08; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0004FDD0.obj, SHA-256 2d32570eb28a3b51bfce0632097fbbd03a6aa0e45882b869717656a94ad964a2; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x3FDD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x3F150.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 4d28149135eb9db60f468c53d6dd3484b71073c5abe3c62a87ab9041af791a9b.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 70/70 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: e50ae6f691006bb7464a34ef8d85dee76af956f384aed8893ca3ae7e003bbb15; compiled .text$mn SHA-256: bea7a1dad620c01e4557781ee50ae9cf15a16e781b04bfac6192392aa978a492.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
