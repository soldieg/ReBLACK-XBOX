# sub_000AA4CF

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaa4cf–0x000AA4D7 inclusive, contiguous, 9 bytes; local Ghidra 12.1.4 body FUN_000aa4cf covers the same exact range.
- Candidate dashboard entry: sub_000AA4CF, 9 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a7299 (0x000a7299) at 0x000aa4d1; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AA4CF.obj, SHA-256 d5bf4ccde7ac5b79dc81703a712b14eccf2a2ed7dbf261f4074d8381b18604c7; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9A4CF.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9984F.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f2853af0eb40fe7202920aaff18942ecc0cb1383cc31ca6fa6abb2ce44d7231a.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 9/9 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 5a89c3525411746593848763344d4c9d7e43b2df6688be74b1e92c147ca3041a; compiled .text$mn SHA-256: ca2ac81696774ff123370b376797a52ebf8d683efa3e78a009bf156aeed03123.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
