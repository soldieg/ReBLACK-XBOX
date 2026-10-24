# sub_000A75CB

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa75cb–0x000A75FC inclusive, contiguous, 50 bytes; local Ghidra 12.1.4 body __hextodec covers the same exact range.
- Candidate dashboard entry: sub_000A75CB, 50 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a5967 (0x000a5967) at 0x000a75da; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A75CB.obj, SHA-256 79978e7ff6b40835c5f5e2417f2d2858e57fa481298c92ec6bfb99b2e1d38667; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x975CB.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9694B.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f2f27fc54175770f06684125aed23673a87b0b9887e6030ad5d21a4b40baf4c4.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 50/50 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 61ec85fc48ede17b439260c2b38f4cf0817ed385638efe3c8170fd8b7789d2af; compiled .text$mn SHA-256: 503d2d97ec472839ae73775e359ed284b910b14e17c3c568974c40e7da66b041.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
