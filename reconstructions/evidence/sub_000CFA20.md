# sub_000CFA20

- Function task: [#949](https://github.com/soldieg/ReBLACK-XBOX/issues/949).
- Function range: 0xcfa20–0x000CFA64 inclusive, contiguous, 69 bytes; local Ghidra 12.1.4 body FUN_000cfa20 covers the same exact range.
- Candidate dashboard entry: sub_000CFA20, 69 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000CFA20.obj, SHA-256 3e4122d6f043211f77ff52273fe38ca362eb605e7ab6d8bd6dd91fb41652c4ed; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xBFA20.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xBEDA0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: e5a76dd2ab0d94e34cff2dfcdadc26d252cef6bb02a0ec5c82ad9a4dc46733e3.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 69/69 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 87496bce78ba7a2a57c25fb9fba3e39385040983da76332e6899a10d1502143b; compiled .text$mn SHA-256: 16390ab6a9f7612e56cf854175ef565dfcc53ce83f2a671c4813cfbc858ea6d3.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
