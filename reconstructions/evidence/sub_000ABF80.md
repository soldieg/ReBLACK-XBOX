# sub_000ABF80

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xabf80–0x000ABFB1 inclusive, contiguous, 50 bytes; local Ghidra 12.1.4 body FUN_000abf80 covers the same exact range.
- Candidate dashboard entry: sub_000ABF80, 50 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000abcc0 (0x000abcc0) at 0x000abfa7; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000ABF80.obj, SHA-256 3352af52adcb8df41b5018888f2c81f157f64f5ec4e7ef3da12c8f70f2c0074b; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9BF80.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9B300.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 66582a881eb080c8f1b03f3e2ad18877bbc159e2053fbe8d2417b191cab9e254.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 50/50 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: c4be6305bd037d4f3c1da94058f45ebe4e4e004b9cf589cb027615552b50e33f; compiled .text$mn SHA-256: 42d138c17c1c417953ea21d9b5e76ae7cbf9fde82bfef1dae255fd3bf92398fd.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
