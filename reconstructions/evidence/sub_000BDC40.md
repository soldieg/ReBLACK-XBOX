# sub_000BDC40

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xbdc40–0x000BDCD5 inclusive, contiguous, 150 bytes; local Ghidra 12.1.4 body FUN_000bdc40 covers the same exact range.
- Candidate dashboard entry: sub_000BDC40, 150 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00011ef0 (0x00011ef0) at 0x000bdca5; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BDC40.obj, SHA-256 f325d3d8834ac0c6e8c9c65f532506887fba1be1572711337f9089498ff552e3; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xADC40.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xACFC0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 9e9069b84513f91969b6fc08b100f9fd3d6c9821b2d3b33557f174b20ed14224.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 150/150 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 6b9c506339d2f92f2661dbc0ed8c2d424b905cfc259186e7c96907278f42983a; compiled .text$mn SHA-256: 7ce2a880280417bdbb07622dcc1baa7a5824d27aa8c90f385aaf4e9db5d27223.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
