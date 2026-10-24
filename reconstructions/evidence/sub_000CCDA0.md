# sub_000CCDA0

- Function task: [#942](https://github.com/soldieg/ReBLACK-XBOX/issues/942).
- Function range: 0xccda0–0x000CD035 inclusive, contiguous, 662 bytes; local Ghidra 12.1.4 body FUN_000ccda0 covers the same exact range.
- Candidate dashboard entry: sub_000CCDA0, 662 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000CCDA0.obj, SHA-256 0d9a2fab5b3dc9233c52aee05b664280bae1e8e6c32f45d3220f19e7efefb645; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xBCDA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xBC120.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 960b50bf48241323dda6bd9af910a24e1ac944370fa4831310ae8fcd25552a04.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 662/662 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: c6157e5c605aa926790d7af94752f027bee0d22d4c9676a230c49609991328e1; compiled .text$mn SHA-256: 851f5641aabc9514cf853bb36a92bb60c76234392be438bb6b2ece3d17745ef9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
