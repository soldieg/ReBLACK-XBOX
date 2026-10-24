# sub_000BABC0

- Function task: [#877](https://github.com/soldieg/ReBLACK-XBOX/issues/877).
- Function range: 0xbabc0–0x000BABEF inclusive, contiguous, 48 bytes; local Ghidra 12.1.4 body FUN_000babc0 covers the same exact range.
- Candidate dashboard entry: sub_000BABC0, 48 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BABC0.obj, SHA-256 39b3fb469844b6fec93eadf7f0affbd8ae8a30a430ffcad291ae423caf681f85; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAABC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xA9F40.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 1af702b66be0e5936960d3c8a057ff2a42a1724d7252fe178ceac61d7c8cb349.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 48/48 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 1ac770c9b6bbf54e299a24c6321172bcfe304251427064446e51f7b8f54328f2; compiled .text$mn SHA-256: 347d5041ad6737d53869a9f33638594e6dd15f0b7b2b1e9dcb0a34a4f55de014.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
