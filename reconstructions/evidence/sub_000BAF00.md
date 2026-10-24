# sub_000BAF00

- Function task: [#878](https://github.com/soldieg/ReBLACK-XBOX/issues/878).
- Function range: 0xbaf00–0x000BAF4B inclusive, contiguous, 76 bytes; local Ghidra 12.1.4 body FUN_000baf00 covers the same exact range.
- Candidate dashboard entry: sub_000BAF00, 76 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BAF00.obj, SHA-256 ea24c171fe4b90d1dd882c00be446ad378d75683cc207af9699e647f6bbe75c5; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAAF00.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAA280.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: a158330bfae3588deac2ea0d2606daf2daef780a74bb6d1294a3bbe90507ae63.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 76/76 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 4519b64b5136efcfa2bb514d2003f25fd0655f00029058cdf35b97bd8b919e04; compiled .text$mn SHA-256: 29939ee933f5f899f1022718972359b546cf09433bf83139eee15ef04fa4da6b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
