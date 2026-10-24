# sub_000A2CF6

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa2cf6–0x000A2D0B inclusive, contiguous, 22 bytes; local Ghidra 12.1.4 body __controlfp covers the same exact range.
- Candidate dashboard entry: sub_000A2CF6, 22 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __control87 (0x000a2cc4) at 0x000a2d04; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A2CF6.obj, SHA-256 5dc479f531b2b33ccbf7758e304be912c5375375e015db3b86ecc2a0ab8de415; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x92CF6.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x92076.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 24fde1f866dc65ebfa0d58f187c3572ca1f4804c4966ab0e7949eb7bd68fbf4d.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 22/22 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 0d0f2c3ffe768f9169fa260e41ab29af8e2bb65688078577ffac500d28729b8d; compiled .text$mn SHA-256: 1fc9575fd9bdfa04df9457e129a1225fc270978e4413f0aafc90a917a9d60e8f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
