# sub_000AEF20

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xaef20–0x000AEFEE inclusive, contiguous, 207 bytes; local Ghidra 12.1.4 body FUN_000aef20 covers the same exact range.
- Candidate dashboard entry: sub_000AEF20, 207 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0008b2d0 (0x0008b2d0) at 0x000aef2a, FUN_0008b2d0 (0x0008b2d0) at 0x000aef3f, FUN_0008b2d0 (0x0008b2d0) at 0x000aef54, FUN_000afee0 (0x000afee0) at 0x000aef72; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000AEF20.obj, SHA-256 eb42ed6931bed05640ba1d813963289e29dc23e17b2583a407033f3df37485d7; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9EF20.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9E2A0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 5df3c22a22db67dacedea6ef75cf495fd7158105957bbc908bd12175927e56b1.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 207/207 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 139c21b190291d5f5baded864024f963f093c0708225acdb228f96044c4ced2c; compiled .text$mn SHA-256: 6cf893785498ac68325a60dfd3de731ab4f98e6dcbbee71085bad873eec2333b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
