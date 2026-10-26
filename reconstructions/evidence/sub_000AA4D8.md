# sub_000AA4D8

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaa4d8–0x000AA4F9 inclusive, contiguous, 34 bytes; local Ghidra 12.1.4 body FUN_000aa4d8 covers the same exact range.
- Candidate dashboard entry: sub_000AA4D8, 34 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AA4D8.obj, SHA-256 ba1ae45e8c0f7be021e247b51b71ecc2dd9e373e92e099151d34e320418b9bbe; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9A4D8.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x99858.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 52e42f0b37198cf2142dff526d0fdb25f33e0f9b9896ee7e1e97cea5bdc6233c.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 34/34 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 64db3b367bb64d5fb5c9532ace82d5e1d4db271b36bae52f087fbc9fb4bdd057; compiled .text$mn SHA-256: 6d9b934a2dad973e67e5f82217398e3165a79dbc31601089398a625ac8d19e96.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
