# sub_0007FAA0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x7faa0–0x0007FAC3 inclusive, contiguous, 36 bytes; local Ghidra 12.1.4 body FUN_0007faa0 covers the same exact range.
- Candidate dashboard entry: sub_0007FAA0, 36 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000830d0 (0x000830d0) at 0x0007fabb; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0007FAA0.obj, SHA-256 e81c5a4d83a0608b7cd5cfc0bb404a16a2a92e3b96a9832cf67ad1c5a8c02c15; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x6FAA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x6EE20.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 1009103b8645f4db8df38d2f3b69b44601ede46ae0d080163551ee86714591ad.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 36/36 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 73225f4c53f538a472a3329951cdbdde810c36b864f0479b287c5dce152ecac7; compiled .text$mn SHA-256: 1fd721d4353f25866d9213dd1b558ff6933a0c480ed46f4f6d31855e908e9e56.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
