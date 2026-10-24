# sub_000CBDA0

- Function task: [#939](https://github.com/soldieg/ReBLACK-XBOX/issues/939).
- Function range: 0xcbda0–0x000CBDFF inclusive, contiguous, 96 bytes; local Ghidra 12.1.4 body FUN_000cbda0 covers the same exact range.
- Candidate dashboard entry: sub_000CBDA0, 96 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000CBDA0.obj, SHA-256 94e02c7c585de2284269469430b9d9f0ff2a79c3e174d91c4ab9a8089d1fa983; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xBBDA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xBB120.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 7e31de587f0307da750a401655901441665f50f33e74340579ee8cc83036b64b.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 96/96 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: f28104884c71cba43bdb55d03b9ec3fd54488d3d693d880e60c0414b9861b9ae; compiled .text$mn SHA-256: 70ab4e6a8e03706ea7035086173150922a4bef9435be3405a1fb59a6089def8e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
