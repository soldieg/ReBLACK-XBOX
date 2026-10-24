# sub_000A1C1A

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa1c1a–0x000A1C41 inclusive, contiguous, 40 bytes; local Ghidra 12.1.4 body ___onexitinit covers the same exact range.
- Candidate dashboard entry: sub_000A1C1A, 40 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: _malloc (0x000a1e2f) at 0x000a1c1f; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A1C1A.obj, SHA-256 8a7451b267c73152cc68994b73c1af2cea425d9ffd2bc87e9fddfc6204c04676; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x91C1A.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x90F9A.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 2f298f46b00ba9060db6f525713da7998bea5c48b30c14556b9c32fb1886eddd.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 40/40 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 07df87a3a270d5dd68e58dcc616480a8c8e64c3f0cebfd37d56b2a71c0d23d9b; compiled .text$mn SHA-256: 9fb4ed09d9ddb61906788f4744c855f99d476cb7aa81a91ffea5e451c0677c29.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
