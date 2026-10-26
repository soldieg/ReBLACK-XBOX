# sub_000A6F8F

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa6f8f–0x000A6FB8 inclusive, contiguous, 42 bytes; local Ghidra 12.1.4 body __math_exit covers the same exact range.
- Candidate dashboard entry: sub_000A6F8F, 42 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __startOneArgErrorHandling (0x000a6ea7) at 0x000a6fad; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A6F8F.obj, SHA-256 4332349798cb9f03b027fd94423fd05e6721a595f45e1e0fef4344a0d16dcc2e; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x96F8F.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9630F.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 8a8e9733208869e3a30516ad95cc62571fecbcec6136c117e35505f0444be76d.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 42/42 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 090ed567b4c22fea51688a2491a8f88603e7d2555eb4c5b9969678b7d45c5f32; compiled .text$mn SHA-256: b07b48b08cf7d6d69eb0f1d69564cf93c7b16dbcc3efdb48be5c88b7f89c026a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
