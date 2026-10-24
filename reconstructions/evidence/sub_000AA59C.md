# sub_000AA59C

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaa59c–0x000AA5F9 inclusive, contiguous, 94 bytes; local Ghidra 12.1.4 body ___add_12 covers the same exact range.
- Candidate dashboard entry: sub_000AA59C, 94 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: ___addl (0x000aa57b) at 0x000aa5ab, ___addl (0x000aa57b) at 0x000aa5bf, ___addl (0x000aa57b) at 0x000aa5d7, ___addl (0x000aa57b) at 0x000aa5ef; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AA59C.obj, SHA-256 149417443b15a9d8b1249d5c683ddac21031224748a3b0b9515bbf6e9c5d7274; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9A59C.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9991C.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: e4b1939737f064b5f1bdb18ced7721283ee7a0a84b214c3406966fb8ffdb48fa.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 94/94 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: ac881146c5875824bd3b3d5840e1f6032ac7d1e677a5897f5b7c44ab3e1949aa; compiled .text$mn SHA-256: 030db63175797538237224cc3e40c4f096609dad22b499b67e3bce650f5b8789.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
