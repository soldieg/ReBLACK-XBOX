# sub_000ABDF0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xabdf0–0x000ABF76 inclusive, contiguous, 391 bytes; local Ghidra 12.1.4 body FUN_000abdf0 covers the same exact range.
- Candidate dashboard entry: sub_000ABDF0, 391 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000abcc0 (0x000abcc0) at 0x000abf55; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000ABDF0.obj, SHA-256 b1ca2e6da61836d0663344c61ca488154446ddca77f408b1521b092330e6523d; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9BDF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9B170.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: c56f76f632f01bd1eb05d04acf6cc222703fef31afa58b27400237a5e948d584.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 391/391 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 1fbbc28d4e4600e55ce44d0ffd4f8ca482265e119b7401cf21cc8f72f18ac447; compiled .text$mn SHA-256: 12751b60d0b181397874e0d73e77d255e55774d2ac0dd37cc1ff110b0f71b928.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
