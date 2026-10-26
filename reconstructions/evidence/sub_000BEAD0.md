# sub_000BEAD0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xbead0–0x000BEB03 inclusive, contiguous, 52 bytes; local Ghidra 12.1.4 body FUN_000bead0 covers the same exact range.
- Candidate dashboard entry: sub_000BEAD0, 52 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BEAD0.obj, SHA-256 6cd00dfb3385869e101ca0f30a3e7b5f0c2acab9a0f0f2a90d68c381f1a14854; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAEAD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xADE50.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: d5e11cf19b405cd1bed89d9ea565ab8253a472621944d1a1f2812e6a8f950cc0.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 52/52 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 0c392f6830ba1f3afeae337bc433c6dd263fd77753ce3a899c49e34010d8848f; compiled .text$mn SHA-256: 3edd0a29bcac9975d91bf942f64facc637573f3faa60947211174357c316b829.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
