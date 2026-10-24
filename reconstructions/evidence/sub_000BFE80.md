# sub_000BFE80

- Function task: [#895](https://github.com/soldieg/ReBLACK-XBOX/issues/895).
- Function range: 0xbfe80–0x000BFEBF inclusive, contiguous, 64 bytes; local Ghidra 12.1.4 body FUN_000bfe80 covers the same exact range.
- Candidate dashboard entry: sub_000BFE80, 64 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BFE80.obj, SHA-256 d9c66a1bc80d658e7ac4264f7b71ec939464f9ecba6a10ea47e1de4a315dfedf; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAFE80.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAF200.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 50e51f1d485ebdab5160daf014d592f5296d6f37927cb5fc763b1adf84524f00.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 64/64 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 5c652806843617a79804364b01adfb27c2298380e5f46f30df00017f14900b6b; compiled .text$mn SHA-256: c88b64aaa7e5d9e8827f537b30d2c2005dc9415fb233ae850e191672c0de40bf.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
