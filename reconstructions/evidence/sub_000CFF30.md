# sub_000CFF30

- Function task: [#950](https://github.com/soldieg/ReBLACK-XBOX/issues/950).
- Function range: 0xcff30–0x000CFF98 inclusive, contiguous, 105 bytes; local Ghidra 12.1.4 body FUN_000cff30 covers the same exact range.
- Candidate dashboard entry: sub_000CFF30, 105 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000CFF30.obj, SHA-256 f3316d05ddf01002015d10f86ddb0cd979898cc4af67640b3e4e95001518e017; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xBFF30.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xBF2B0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 60d579f4b352f84db3e3f37af281ba4a79a0c43e3000fe2d96b9de5733156687.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 105/105 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: efd1deaa47c4f88d29d22c4f746cf5631a60bda4313c9bad6f6f0b173d39a179; compiled .text$mn SHA-256: d2c285b48c6b49b28798beb6dfddb86be1896e9b0f42da5fd5abf42e6e531c90.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
