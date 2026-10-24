# sub_000BBC70

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xbbc70–0x000BBCE1 inclusive, contiguous, 114 bytes; local Ghidra 12.1.4 body FUN_000bbc70 covers the same exact range.
- Candidate dashboard entry: sub_000BBC70, 114 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BBC70.obj, SHA-256 0a38904599da2660442262c74c623272cb6d1c9af2b800c2c87a69b745636305; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xABC70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAAFF0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 6fb9dd794a4511a37a8190d4445f1bc704ff8d6d6b62ad96893d05f9e3c4bea4.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 114/114 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 756b2227ce11bf3212c302a2aa682ebbc95562e029df8106a78f8ab6dd361276; compiled .text$mn SHA-256: b838f0b8c847f996d1cc9d09189f397c8ddaa058555e1faf49222e6348776231.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
