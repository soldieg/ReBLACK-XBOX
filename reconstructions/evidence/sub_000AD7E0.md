# sub_000AD7E0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xad7e0–0x000AD80C inclusive, contiguous, 45 bytes; local Ghidra 12.1.4 body FUN_000ad7e0 covers the same exact range.
- Candidate dashboard entry: sub_000AD7E0, 45 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0008b420 (0x0008b420) at 0x000ad7ec; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AD7E0.obj, SHA-256 edbcf4863d063a3197e34050a7890c161a5730e506693f951483ba20e4c65cbf; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9D7E0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9CB60.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 9bf5df6abf43ceedd12e7c81577e4804f4e41d1512b6e9dc7916dab66584328c.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 45/45 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 8bbf86f3a1c5ae9dfd41271fae2d935c0c08db71a73b469938d985bfbb8c7c3a; compiled .text$mn SHA-256: 4ae3260fbe32eb82f33cb4971a0c148602264fe787f61828c45663d7efccb621.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
