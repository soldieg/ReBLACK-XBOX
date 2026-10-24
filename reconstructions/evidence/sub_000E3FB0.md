# sub_000E3FB0

- Function task: [#245](https://github.com/soldieg/ReBLACK-XBOX/issues/245).
- Function range: 0xe3fb0–0x000E402C inclusive, contiguous, 125 bytes; local Ghidra 12.1.4 body FUN_000e3fb0 covers the same exact range.
- Candidate dashboard entry: sub_000E3FB0, 125 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0001c040 (0x0001c040) at 0x000e3fbe; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000E3FB0.obj, SHA-256 93c8eebc2a781ec45db442da59720004daf92fab158e02c53a28a6ca44ffbb6e; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xD3FB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xD3330.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 636ec7099b287f0b064f0b7ef5f785d603eab25e218427baab84c79a2c313c03.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 125/125 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: af1522a9f7fd5e501173e9e09e81f2d9e2dd80468dcaf6323f39a687a4eb52b2; compiled .text$mn SHA-256: 5f68ed9ff61a703c3f16857987336342dd2e769f22bc1ed392d47eec59d3c192.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
