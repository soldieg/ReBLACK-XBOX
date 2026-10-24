# sub_000A32DA

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa32da–0x000A332E inclusive, contiguous, 85 bytes; local Ghidra 12.1.4 body __strnicmp covers the same exact range.
- Candidate dashboard entry: sub_000A32DA, 85 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: ___ascii_strnicmp (0x000a62f0) at 0x000a32ed, FUN_000a2373 (0x000a2373) at 0x000a32ff, FUN_000a2373 (0x000a2373) at 0x000a330b; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A32DA.obj, SHA-256 b9fcf05278e38cab936df80f3d240c687e0120ced2af2897586b72e2ec0a5fd2; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x932DA.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9265A.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 18ad85877381c812ed96d69c3eea3a332e471d87ba1c861e07ea93bf50886dc2.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 85/85 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 8ec034fcfc2997bde23b8464f12e646d3ae88651f24ea9efa94a7e132e2ae147; compiled .text$mn SHA-256: 290263bfded055343f47e8724b75196203a3cf9fa12b484f80e7f2db7d50ff9f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
