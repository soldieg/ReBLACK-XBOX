# sub_0007CEF0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x7cef0–0x0007CFBD inclusive, contiguous, 206 bytes; local Ghidra 12.1.4 body FUN_0007cef0 covers the same exact range.
- Candidate dashboard entry: sub_0007CEF0, 206 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a0280 (0x000a0280) at 0x0007cf0c, FUN_000755c0 (0x000755c0) at 0x0007cf1e; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0007CEF0.obj, SHA-256 225911e5e575571ef9f756c1639e191654b6cbb32b792a2d365c9ccbd4083987; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x6CEF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x6C270.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 798da8b37205c74c6e2b03d0b5ef693e7d43e6ba9cb687d100386e94a8770a4e.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 206/206 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: c99d466652a12b9078742d870160fb2f61e7176c08ab4ec5e69d922ebbb68a9d; compiled .text$mn SHA-256: 65358ecd047e38cad796ec01289a9624329f629f696b0cb5c4faa1c92f72f3b4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
