# sub_000AEDF0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaedf0–0x000AEE5C inclusive, contiguous, 109 bytes; local Ghidra 12.1.4 body FUN_000aedf0 covers the same exact range.
- Candidate dashboard entry: sub_000AEDF0, 109 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00086590 (0x00086590) at 0x000aedfd; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AEDF0.obj, SHA-256 0e517838b44bd16787f0e0815a580e03e742a77ed7340f99b2b108531cad6bfb; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9EDF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9E170.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 4848897d7939b1076d48f6362d8ac683a4ddb6106195ba1ad47ee6b5f1f7cc38.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 109/109 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 4b2a9cb1d347fb0696cdf6341dd21b3bf97271c35a509abc774b62479743060c; compiled .text$mn SHA-256: a1481b309964ee3bbc82a70d79590b464a647cde53ce62d7470bb4ef8dd3933f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
