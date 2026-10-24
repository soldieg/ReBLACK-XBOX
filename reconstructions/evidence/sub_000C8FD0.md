# sub_000C8FD0

- Function task: [#935](https://github.com/soldieg/ReBLACK-XBOX/issues/935).
- Function range: 0xc8fd0–0x000C9043 inclusive, contiguous, 116 bytes; local Ghidra 12.1.4 body FUN_000c8fd0 covers the same exact range.
- Candidate dashboard entry: sub_000C8FD0, 116 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000C8FD0.obj, SHA-256 fef091ebf26b2c0aeacdcb3819b2161232760f1fb8ed24664020463e5cd1e444; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xB8FD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xB8350.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: c9a32745e3647d936fecd01db2a906613e3a6fd0d4986aedc442bc3d7ec18c1c.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 116/116 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: b5ef0f384a1f45205846acbf67506e7cfe1c944d829a38cb2474dc7289228b8f; compiled .text$mn SHA-256: 150257597a3c2210385485be60e5545c11052b2fda05e528b4d3b1b15b7f29a4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
