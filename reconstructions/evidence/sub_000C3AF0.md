# sub_000C3AF0

- Function task: [#915](https://github.com/soldieg/ReBLACK-XBOX/issues/915).
- Function range: 0xc3af0–0x000C3BA5 inclusive, contiguous, 182 bytes; local Ghidra 12.1.4 body FUN_000c3af0 covers the same exact range.
- Candidate dashboard entry: sub_000C3AF0, 182 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000C3AF0.obj, SHA-256 465415431f5af89e15f51f81f8cfdd8d979c9176b730530d91bf4ced28bfde43; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xB3AF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xB2E70.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: fd027d68733ab61beb325777c15048355e20b78d68fd27259b8f4c0c386595f0.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 182/182 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 46fb841294f9452efcbb77c43ad9db2b943443a94770a6e73fc1a39c06a9d5d6; compiled .text$mn SHA-256: 7fa65774f4d11dbd8f52fb1faa52c8489645e787e4d237f3146887c276931f16.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
