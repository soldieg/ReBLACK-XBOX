# sub_000CF4D0

- Function task: [#946](https://github.com/soldieg/ReBLACK-XBOX/issues/946).
- Function range: 0xcf4d0–0x000CF5BC inclusive, contiguous, 237 bytes; local Ghidra 12.1.4 body FUN_000cf4d0 covers the same exact range.
- Candidate dashboard entry: sub_000CF4D0, 237 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000CF4D0.obj, SHA-256 875d30d1293683982b533ee84b3584a72dd197f1c824ff6bb760b714235563a4; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xBF4D0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xBE850.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 0e09290c2e250ed612412dfbe8c627b125c9ab43074fea28425654c5ad5f1f20.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 237/237 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 8447455e99d78ef97d93ba1eab55b9f456064d5d63d6b18c02f1fe8327823361; compiled .text$mn SHA-256: 1d9c22f7758a7c800c2c3df697967d58decc5855374d3f00a4c6ed11ebdba066.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
