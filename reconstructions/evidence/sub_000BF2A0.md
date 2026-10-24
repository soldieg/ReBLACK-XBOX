# sub_000BF2A0

- Function task: [#888](https://github.com/soldieg/ReBLACK-XBOX/issues/888).
- Function range: 0xbf2a0–0x000BF2CF inclusive, contiguous, 48 bytes; local Ghidra 12.1.4 body FUN_000bf2a0 covers the same exact range.
- Candidate dashboard entry: sub_000BF2A0, 48 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BF2A0.obj, SHA-256 480f08543766ad4ddb64bbc18fc3ed6462b111b3e7484c9e45a56ce690e6e06b; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAF2A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAE620.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 7e7175e91ec1e170bab6f42af1d31a3dd109c7ec6f03b25bded78ecade35ad6d.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 48/48 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 40c5c69667d749824fcb933127c721e1956d7d77b41996c157c5099887961587; compiled .text$mn SHA-256: 18e908e459ecbc167dd7493ba0d3912862ed12b7b77606055fc22c3540c7ebb4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
