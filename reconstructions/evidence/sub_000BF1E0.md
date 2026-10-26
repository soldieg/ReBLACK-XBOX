# sub_000BF1E0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xbf1e0–0x000BF26D inclusive, contiguous, 142 bytes; local Ghidra 12.1.4 body FUN_000bf1e0 covers the same exact range.
- Candidate dashboard entry: sub_000BF1E0, 142 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: _strncpy (0x000a1f40) at 0x000bf1ff, _sprintf (0x000a1aeb) at 0x000bf21b, _strncpy (0x000a1f40) at 0x000bf237; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BF1E0.obj, SHA-256 8f2a797520e6f84ad2b20b100f6f742d8ae7dca39d2a15b67acbfe0a9f481f62; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAF1E0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAE560.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 03730fa65368b111c75079f199a69cd796adbe3ac6ca246569f596f9fbef76f5.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 142/142 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 61f9b26378d366e4e0685ee75e849f80d1998d3d064a6ebbac9b64719d6e88ef; compiled .text$mn SHA-256: 8e948f0769337dc9f4c125dbb7faff941f65497297ca62d4312ad0491504cd28.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
