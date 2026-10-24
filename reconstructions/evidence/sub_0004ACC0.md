# sub_0004ACC0

- Function task: [#1712](https://github.com/soldieg/ReBLACK-XBOX/issues/1712).
- Function range: 0x4acc0–0x0004AD05 inclusive, contiguous, 70 bytes; local Ghidra 12.1.4 body FUN_0004acc0 covers the same exact range.
- Candidate dashboard entry: sub_0004ACC0, 70 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000507a0 (0x000507a0) at 0x0004acc6; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0004ACC0.obj, SHA-256 98bdd5179d2ea4a679cbad6bbfff54fcfcde51605c8f78465ee4da6c6f1bcdf5; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x3ACC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x3A040.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 78f3cc708014410e6251f0bfe2b13d8d25327773464a19f31d8a0b0d29d02022.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 70/70 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 68a7dfb0c6d383cae1bd28b7f85fb7c2f99a863d31698852ec41546fbb605f0d; compiled .text$mn SHA-256: 340eca06e460c4c133c24200562f2d1c3250fd106cffc3323045d05116cb2016.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
