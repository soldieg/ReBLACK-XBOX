# sub_000A3FD5

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa3fd5–0x000A4082 inclusive, contiguous, 174 bytes; local Ghidra 12.1.4 body FUN_000a3fd5 covers the same exact range.
- Candidate dashboard entry: sub_000A3FD5, 174 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a6ef9 (0x000a6ef9) at 0x000a3fe4, __math_exit (0x000a6f8f) at 0x000a4018, FUN_000a6f10 (0x000a6f10) at 0x000a4042, __startOneArgErrorHandling (0x000a6ea7) at 0x000a407c; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A3FD5.obj, SHA-256 4d87e07274a46709cf87d9d0ad9f3b27c671bd613f90fcb5cd931acdd04abbb5; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x93FD5.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x93355.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 6990bb269b941e8a7b4ac86a323ecb2ab3df048fb946352ea4362343addbceab.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 174/174 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 91aa5b8d152d45125860a55cde1c382d40a1dce0d950a4016abfabc0b32640fa; compiled .text$mn SHA-256: 3502485311ff647fcb2f1d114fb53fda37d93e3fbb799b0ad2b886c1c8ecda3a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
