# sub_000BF4C0

- Function task: [#889](https://github.com/soldieg/ReBLACK-XBOX/issues/889).
- Function range: 0xbf4c0–0x000BF54C inclusive, contiguous, 141 bytes; local Ghidra 12.1.4 body FUN_000bf4c0 covers the same exact range.
- Candidate dashboard entry: sub_000BF4C0, 141 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BF4C0.obj, SHA-256 e03ff7f1a4b3697c8671d664f26566bddb852eea2c9df49f5ab26cf1d5fff34f; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAF4C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAE840.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: bb141eaf9cce413f8d376e8ee250498c7af40e0684d90164d352fd872d575a48.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 141/141 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: e6804000b0cf15b76af500d305d6b2a3a68aea6b2a540b4f7786dcc92a3a4414; compiled .text$mn SHA-256: a03dfbe66299ed1c934257fa924b996d9aae4421b3826e09b1deb3db80a3a8e5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
