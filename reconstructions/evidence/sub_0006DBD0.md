# sub_0006DBD0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x6dbd0–0x0006DE86 inclusive, contiguous, 695 bytes; local Ghidra 12.1.4 body FUN_0006dbd0 covers the same exact range.
- Candidate dashboard entry: sub_0006DBD0, 695 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000692b0 (0x000692b0) at 0x0006dbeb, FUN_000692b0 (0x000692b0) at 0x0006dc02, FUN_000692b0 (0x000692b0) at 0x0006dc19, FUN_00069210 (0x00069210) at 0x0006dcc7; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0006DBD0.obj, SHA-256 0e38ed13c7f80ec88620cfd204102a10f2ca564d37261382d53c3eb007aa4ba2; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x5DBD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x5CF50.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: e201fb5c0495ed0f5fdc71728b0115ee5ea3c1fcf6c6f5afb87d38bb466a6110.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 695/695 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 2067f92536ef0eae39773b6d0f87166f162f6bdc754f2b0f8baa96f029c4a0c1; compiled .text$mn SHA-256: 9f136885a6a78699d7c76a21a44cfdc551e923d59e1b40863a4bfe99fd9a69dd.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
