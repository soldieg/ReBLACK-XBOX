# sub_000CF5C0

- Function task: [#948](https://github.com/soldieg/ReBLACK-XBOX/issues/948).
- Function range: 0xcf5c0–0x000CF841 inclusive, contiguous, 642 bytes; local Ghidra 12.1.4 body FUN_000cf5c0 covers the same exact range.
- Candidate dashboard entry: sub_000CF5C0, 642 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000CF5C0.obj, SHA-256 d5a0f57e1331a4af9481df64903991227ea23887b925731534de416301837385; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xBF5C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xBE940.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 6121823ece0d8db205a5b318d12ca76e4fbe0786802cde340d10fe274b8cdd5e.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 642/642 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 07679a5d5c5be5d6f65af2a4fb7df8b1cef7ae1b63980079d2e3f22e3047eb0b; compiled .text$mn SHA-256: e0756508e403c3c755e362f30abb723c64cf9bedca17c6b2b81aebe47ed22742.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
