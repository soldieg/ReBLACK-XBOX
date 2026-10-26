# sub_000BC3A0

- Function task: [#883](https://github.com/soldieg/ReBLACK-XBOX/issues/883).
- Function range: 0xbc3a0–0x000BC49A inclusive, contiguous, 251 bytes; local Ghidra 12.1.4 body FUN_000bc3a0 covers the same exact range.
- Candidate dashboard entry: sub_000BC3A0, 251 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BC3A0.obj, SHA-256 3c9d64f47a7063b44b439b234a873ddf120445cfef256d9e65b84480d37b073a; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAC3A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAB720.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 8e6127219510b8e38a1f01e0bc94daf6a7f9606743c1800291dc883e22247081.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 251/251 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 310686154b75f457cac182ce11f7f14617786c27f784cf013169b161e7dae84d; compiled .text$mn SHA-256: 5d7612c62d8af909c241bb4f8402f1059554c1923365ab810440c59082eeeaaa.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
