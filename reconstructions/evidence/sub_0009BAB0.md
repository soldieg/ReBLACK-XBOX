# sub_0009BAB0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x9bab0–0x0009BB2C inclusive, contiguous, 125 bytes; local Ghidra 12.1.4 body FUN_0009bab0 covers the same exact range.
- Candidate dashboard entry: sub_0009BAB0, 125 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00091ba0 (0x00091ba0) at 0x0009bace, FUN_00091ba0 (0x00091ba0) at 0x0009bad8, FUN_00091ba0 (0x00091ba0) at 0x0009bae2, FUN_00091ba0 (0x00091ba0) at 0x0009baea, FUN_00091ba0 (0x00091ba0) at 0x0009baf5, FUN_00091bf0 (0x00091bf0) at 0x0009bafb, FUN_00091bf0 (0x00091bf0) at 0x0009bb01, FUN_00091bf0 (0x00091bf0) at 0x0009bb07, FUN_00091bf0 (0x00091bf0) at 0x0009bb10, FUN_00091bf0 (0x00091bf0) at 0x0009bb1c; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0009BAB0.obj, SHA-256 66639d59de525028f7acc5d5871da003b83236dab0be2f2548164741ac315859; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x8BAB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x8AE30.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: ade91c865a446546ebdc0286587798d9f696b0e139684fa2511c4fb2ad21902a.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 125/125 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: f7c968d717a0d414799a5162515e611bdc912280fbb33329dc36db83bd4ae4a0; compiled .text$mn SHA-256: 5abd93e35b2d74afa6b6cbef5ef0d9b0c90bf1826ff6cf5ec3d35c70ff36e58b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
