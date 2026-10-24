# sub_000DC5B0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xdc5b0–0x000DC625 inclusive, contiguous, 118 bytes; local Ghidra 12.1.4 body FUN_000dc5b0 covers the same exact range.
- Candidate dashboard entry: sub_000DC5B0, 118 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0001f840 (0x0001f840) at 0x000dc5f0; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DC5B0.obj, SHA-256 b7de62e3ef019138ab9656228ef6c5bfa92e31064dee9a2e1d08f6f44738163f; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCC5B0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCB930.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: dab550dff9ab994126ef863a1545ec2b25b5ed10f7c03a38732e3f130e4f9f09.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 118/118 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 67d0542013f392393e56d10d77f8f767a642df78cea5b73e667784538dbccbfc; compiled .text$mn SHA-256: f121f4bcd24e657f18f7e56aab1ea6c65fdd800e589d92d11acab49fbe2d9f44.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
