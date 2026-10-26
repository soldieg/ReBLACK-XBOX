# sub_000ADF70

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xadf70–0x000ADF7D inclusive, contiguous, 14 bytes; local Ghidra 12.1.4 body FUN_000adf70 covers the same exact range.
- Candidate dashboard entry: sub_000ADF70, 14 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00084e40 (0x00084e40) at 0x000adf75; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000ADF70.obj, SHA-256 e81967524aad915c6ce0770a5c4a80daa120f319f9f2860e2a3fa8b4693107da; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9DF70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9D2F0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: d7fe67f2846aa4825b7035bd5e9b90327bdf336aab71a184044396fe326095f0.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 14/14 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 4e1502349a88005541147cc1d5c03d253c4356de6f3c6883d04a7a56258af297; compiled .text$mn SHA-256: bf55428dc459fb7c41cd30a8233033fd86a30dab67c217b7256e8cb28898e574.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
