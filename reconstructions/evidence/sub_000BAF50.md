# sub_000BAF50

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xbaf50–0x000BAFA4 inclusive, contiguous, 85 bytes; local Ghidra 12.1.4 body FUN_000baf50 covers the same exact range.
- Candidate dashboard entry: sub_000BAF50, 85 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __stricmp (0x000a1c8c) at 0x000baf78; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BAF50.obj, SHA-256 7a60390a4480ce2b89db1c3c955ffb466fbf45e63324464496e4b4d900ec7dec; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAAF50.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAA2D0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 15662bcf093355d2017254fe2822830df85ec9e0e8a95112c2fdd35d45d1a7ce.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 85/85 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: b9e449235f05313ca6e49d607913aae072e60a293fc3e2ee09b1709ba80579c3; compiled .text$mn SHA-256: aa1d6351ab6ac76cb641241da30daeda64863dae1eb1c8909197b4c9c164d07f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
