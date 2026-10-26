# sub_000BF9A0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xbf9a0–0x000BF9CC inclusive, contiguous, 45 bytes; local Ghidra 12.1.4 body FUN_000bf9a0 covers the same exact range.
- Candidate dashboard entry: sub_000BF9A0, 45 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BF9A0.obj, SHA-256 0c01f104aaa720b56920ce4dd3bb764920b905ef4de1c1d2b24a0dab61db800b; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAF9A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAED20.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 3a75a1db7e6a1dc9091e901b8d32f29fc0504a6384806f9941a72c8754db8097.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 45/45 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 78e11acb5b05010bb4eaa6df9ccecd200ae416fc87551fe98ac363fec8794c34; compiled .text$mn SHA-256: de42fd45e0d3c6a139e4e04128aceafa86c6090e03ff04b3f5df5c860d8fdf13.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
