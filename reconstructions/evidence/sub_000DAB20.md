# sub_000DAB20

- Function task: [#959](https://github.com/soldieg/ReBLACK-XBOX/issues/959).
- Function range: 0xdab20–0x000DABAC inclusive, contiguous, 141 bytes; local Ghidra 12.1.4 body FUN_000dab20 covers the same exact range.
- Candidate dashboard entry: sub_000DAB20, 141 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DAB20.obj, SHA-256 574c0930704ce7f209e830790ceaa83beed8e5632d4ca26d696683916170512b; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCAB20.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xC9EA0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: aa7a28342f826fb926b2d1fdae0e06196702803f3eeac78af5d748c9fa3b98d0.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 141/141 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: b0b449f6c30a3a26ec7eb1dfa092885768f2dca32f1b4e0f39f63362a74b3587; compiled .text$mn SHA-256: 34063f785d4835277c7aef2f3b2afcd49e937562cafc9db4f6ee9deb57d488f6.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
