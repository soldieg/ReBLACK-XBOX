# sub_0006BEB0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0x6beb0–0x0006C02D inclusive, contiguous, 382 bytes; local Ghidra 12.1.4 body FUN_0006beb0 covers the same exact range.
- Candidate dashboard entry: sub_0006BEB0, 382 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000692b0 (0x000692b0) at 0x0006becc, FUN_000692b0 (0x000692b0) at 0x0006bee3, FUN_000692b0 (0x000692b0) at 0x0006befa; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0006BEB0.obj, SHA-256 d985120bf929e540a9496e36d85eb623e239f2111ab05e7848be07ce4e6d1f5f; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x5BEB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x5B230.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: edaab0ba70943e0b275e7b438ac635b33e31797bda181d79400857152344b1e2.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 382/382 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: f282d80e7d10fb8ef2b3b87535239b01dd3cdf676b50f9af9922814e6b1a4e04; compiled .text$mn SHA-256: f0608e687f79248030b436c2b0e3959ee31319f5c634ce990d28f79abd39f33f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
