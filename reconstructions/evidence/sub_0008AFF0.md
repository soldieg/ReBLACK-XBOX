# sub_0008AFF0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x8aff0–0x0008AFFD inclusive, contiguous, 14 bytes; local Ghidra 12.1.4 body FUN_0008aff0 covers the same exact range.
- Candidate dashboard entry: sub_0008AFF0, 14 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00084e40 (0x00084e40) at 0x0008aff5; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0008AFF0.obj, SHA-256 22a031fdf3ac239933e07a406e57b603db0d0b4960ed0d3a17502fe1e976bfb7; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x7AFF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x7A370.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: e648ddf18b328d5023979817d649ebae8c77782bcf8cea927bd822b922760b23.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 14/14 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: db22362d886baa2a13bccfffe68d62ceca18d7bd48cdc4b3795488102d266221; compiled .text$mn SHA-256: a01c4a6afb5017bffd8f1b0cc65ac69b875d340d6c915240de18edc2e4914768.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
