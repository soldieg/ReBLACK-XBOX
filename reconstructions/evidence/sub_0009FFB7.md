# sub_0009FFB7

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x9ffb7–0x0009FFCB inclusive, contiguous, 21 bytes; local Ghidra 12.1.4 body FUN_0009ffb7 covers the same exact range.
- Candidate dashboard entry: sub_0009FFB7, 21 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0009FFB7.obj, SHA-256 f2a029ce6e349d5195d96b1d62b8f33ca3ac9da7af942feff34ea8ae0a6aa7d5; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x8FFB7.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x8F337.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: bda319f9cae1fe10ab04d24b71681b524d796221cd3fb3b302a50ba17c72135e.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 21/21 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 61f04461bf935e1b67af8cc2e145951db0ec23cc3fdf003e5769c57a1b415fc7; compiled .text$mn SHA-256: 64345ddea828dfc97ec392ad2fa5e1a4851e3ac9375245959ebe1beec2f96963.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
