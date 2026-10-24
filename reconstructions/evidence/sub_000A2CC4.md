# sub_000A2CC4

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa2cc4–0x000A2CF5 inclusive, contiguous, 50 bytes; local Ghidra 12.1.4 body __control87 covers the same exact range.
- Candidate dashboard entry: sub_000A2CC4, 50 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __abstract_cw (0x000a2ba4) at 0x000a2cd0, __hw_cw (0x000a2c36) at 0x000a2ce6; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A2CC4.obj, SHA-256 1decef9470c429710eeab318772fb8207e7661af3c0dd63471d495a11d518cad; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x92CC4.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x92044.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 7b575f57b400bd9198c11b8b659dbae4fe8186f7cfa0d103d42ff44094af69bf.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 50/50 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 9ff072080491e5833e10881ec3133425bcc02400c0f9ba391728fcd0293b91ca; compiled .text$mn SHA-256: afb6a904b023425afbf7511d4fa85aae65b7d9301bc666a37276ca58a7afba9a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
