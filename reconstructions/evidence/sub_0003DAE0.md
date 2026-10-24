# sub_0003DAE0

- Function task: [#1685](https://github.com/soldieg/ReBLACK-XBOX/issues/1685).
- Function range: 0x3dae0–0x0003DEA6 inclusive, contiguous, 967 bytes; local Ghidra 12.1.4 body FUN_0003dae0 covers the same exact range.
- Candidate dashboard entry: sub_0003DAE0, 967 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0003d280 (0x0003d280) at 0x0003db2b, FUN_0003d5d0 (0x0003d5d0) at 0x0003db72, FUN_0003d2f0 (0x0003d2f0) at 0x0003dba2, FUN_0003d9d0 (0x0003d9d0) at 0x0003dbc3, FUN_0003f550 (0x0003f550) at 0x0003dcc8, FUN_0003d2f0 (0x0003d2f0) at 0x0003dce2, FUN_0003d400 (0x0003d400) at 0x0003de1a, FUN_000816e0 (0x000816e0) at 0x0003de36, FUN_000331b0 (0x000331b0) at 0x0003de44, FUN_000816e0 (0x000816e0) at 0x0003de63, FUN_000331b0 (0x000331b0) at 0x0003de71, FUN_000816e0 (0x000816e0) at 0x0003de8a, FUN_000331b0 (0x000331b0) at 0x0003de98; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0003DAE0.obj, SHA-256 9d643e87b54a713e943d66643c56eec8b7e359e5fed3196d835cb7cca3ad0edc; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x2DAE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x2CE60.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: a4045f8aebbf576a90f4b66507d4ddef46c751bc8cf3a753e597d7f8c1846057.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 967/967 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: f5807bdf204c08ea65cb452cd08b098fbf58cf0e3f6d212078f29f0dd1af96f9; compiled .text$mn SHA-256: 242b2bb72c8d612afb4ad14326cf6b099e748aa3abc6bc671aff6196cb765740.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
