# sub_000C1DB0

- Function task: [#899](https://github.com/soldieg/ReBLACK-XBOX/issues/899).
- Function range: 0xc1db0–0x000C1E27 inclusive, contiguous, 120 bytes; local Ghidra 12.1.4 body FUN_000c1db0 covers the same exact range.
- Candidate dashboard entry: sub_000C1DB0, 120 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000C1DB0.obj, SHA-256 0ae1bad2eea3124e8d12301dd1d83faee38833b0c9f79e00ed55f8f731820831; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xB1DB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xB1130.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 5ffa6bbece0d9ff8a67e74f95308d2da53f21c3a5e3df130b354afc899dd634f.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 120/120 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 1b68a5dc6d4af9bf3fc405f8fb85a52b29f5da35323cbe60dc419ce825ff5ea8; compiled .text$mn SHA-256: 20ced68db6aed67116fd3fdb94f5d0a09c6c5076c8de7b592a39c822c20eb302.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
