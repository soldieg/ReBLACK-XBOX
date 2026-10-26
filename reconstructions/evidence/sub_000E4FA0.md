# sub_000E4FA0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xe4fa0–0x000E5005 inclusive, contiguous, 102 bytes; local Ghidra 12.1.4 body FUN_000e4fa0 covers the same exact range.
- Candidate dashboard entry: sub_000E4FA0, 102 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000E4FA0.obj, SHA-256 11291ea0ffb94a57c7ad08a87f1c9206192d2558966bb19ae17d56edffabc652; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xD4FA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xD4320.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 4dd887e11215dfe72661f358be5b802244ed8b363f59ca3c86abb3c6d25f89b4.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 102/102 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 6ecf0412ad611403f2ad18f70bbde9dab5f4dc88fca5e63b84bf41cc6a46cd0c; compiled .text$mn SHA-256: 0d36e3e59034d8658c33742b4c4b54e0747dbf45dc2737f2a53f3f93eea2d945.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
