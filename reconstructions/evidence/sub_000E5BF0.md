# sub_000E5BF0

- Function task: [#261](https://github.com/soldieg/ReBLACK-XBOX/issues/261).
- Function range: 0xe5bf0–0x000E5CAD inclusive, contiguous, 190 bytes; local Ghidra 12.1.4 body FUN_000e5bf0 covers the same exact range.
- Candidate dashboard entry: sub_000E5BF0, 190 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000E5BF0.obj, SHA-256 97d02ae89707eafd5c6a94264b9452936062820b10c8588d3417a23d51ff059d; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xD5BF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xD4F70.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 068ca820d12e4a8e6bc96fb58e08902cb100bddb3fea42febb9d6c3b6ed37dfa.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 190/190 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 7a17b6a6a9157b2e5b4e1029ec844f8fe62d99ae9b77eac3dba8df71711b6b3e; compiled .text$mn SHA-256: 855ac7d9a0df9e82f498995ee253864dd5f18387db1f975121ed5daf05b0ea46.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
