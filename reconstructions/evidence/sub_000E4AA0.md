# sub_000E4AA0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xe4aa0–0x000E4BA1 inclusive, contiguous, 258 bytes; local Ghidra 12.1.4 body FUN_000e4aa0 covers the same exact range.
- Candidate dashboard entry: sub_000E4AA0, 258 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: _memmove (0x000a24e0) at 0x000e4b17, _memmove (0x000a24e0) at 0x000e4b63; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000E4AA0.obj, SHA-256 d76502dc9b3993432c64db38c400e94dbe25d19aff5fbe5b6b65f166984c7405; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xD4AA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xD3E20.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: abbfbead6db5ec9d62d811e151f64c95f4e356d1ef1b05af18021ec695c2aadb.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 258/258 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: b1b75b55134e8be63a217d841be1bb9e6934dbf1f67e69368625dabd2ff1b3dc; compiled .text$mn SHA-256: c9ff94b73103f3eb3a7a79ab46753ff91c5c94e45144017d020c50e4255efb99.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
