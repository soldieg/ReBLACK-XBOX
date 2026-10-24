# sub_000BA3D0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xba3d0–0x000BA438 inclusive, contiguous, 105 bytes; local Ghidra 12.1.4 body FUN_000ba3d0 covers the same exact range.
- Candidate dashboard entry: sub_000BA3D0, 105 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BA3D0.obj, SHA-256 9fa0362629b53f45278eb3b32c334b5335711931150bae15f80dfa435f96a492; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAA3D0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xA9750.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 04c3f706e436d25cae20e84099ed0cbd40523bc18d7f29754e734c4d83427f4a.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 105/105 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 7a69663f1205567cb5543602859e3027f500861c8278dd13252df52656f0fa6d; compiled .text$mn SHA-256: 30d4deb6c6ec85c4fbcf1af76e4d2ddad4676d4af7ffa2ee1a0f3ab9746bbc4b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
