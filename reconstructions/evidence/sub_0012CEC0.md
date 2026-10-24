# sub_0012CEC0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x12cec0–0x0012CF49 inclusive, contiguous, 138 bytes; local Ghidra 12.1.4 body FUN_0012cec0 covers the same exact range.
- Candidate dashboard entry: sub_0012CEC0, 138 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000bfd30 (0x000bfd30) at 0x0012cf1d, _sprintf (0x000a1aeb) at 0x0012cf2e, FUN_000bfd30 (0x000bfd30) at 0x0012cf40; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0012CEC0.obj, SHA-256 4393a13138e427bb489eddd00b03f6de7687bd8d3e92527839599ac0e9170a82; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x11CEC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x11C240.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: d6f045000bf8032d928562e9c2bc2f6e6d0b56af0f401421769abfff2151525b.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 138/138 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 232a9d8682d17b57fde5ab51b21a68cf15b8f2b2761f889a67605b891fb463cf; compiled .text$mn SHA-256: ee53c3330b0eb2491f1f258a3dc2da8bd51aae2fa24785ddf4358bb8cc3778c7.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
