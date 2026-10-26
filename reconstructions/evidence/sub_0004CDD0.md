# sub_0004CDD0

- Function task: [#1723](https://github.com/soldieg/ReBLACK-XBOX/issues/1723).
- Function range: 0x4cdd0–0x0004CDFE inclusive, contiguous, 47 bytes; local Ghidra 12.1.4 body FUN_0004cdd0 covers the same exact range.
- Candidate dashboard entry: sub_0004CDD0, 47 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0004CDD0.obj, SHA-256 830b7058d9c137402d029cce2f746d54d0f5c074acfc7ef77935c3699f2bdbeb; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x3CDD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x3C150.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 6bb9f2703763eed07d603bc066cd672eac2376fbcbc50b7405097c7004893433.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 47/47 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 223dc430fc6e1552125e440a3e9633d4b4cff8b7b35b0379a6e5bcc4ecae7483; compiled .text$mn SHA-256: 63f58bb340e197c737752d07cfec565d0e0b95b2f72fead81f1199c0756523d6.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
