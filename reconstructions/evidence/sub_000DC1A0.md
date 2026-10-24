# sub_000DC1A0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xdc1a0–0x000DC1F8 inclusive, contiguous, 89 bytes; local Ghidra 12.1.4 body FUN_000dc1a0 covers the same exact range.
- Candidate dashboard entry: sub_000DC1A0, 89 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0007c1b0 (0x0007c1b0) at 0x000dc1d5; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DC1A0.obj, SHA-256 ebcae8ee19c13d998100899924b9fd5ad21a04d4b0074951a067e2b6682481db; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCC1A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCB520.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 20f71ddd40446bbe161eaead6b965c048f261b66ffd61c0e9bb9da13560f09ab.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 89/89 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 73d4510e3f8fc4507814842f18609d51606869e0638e8f1c7e4bbce3357c9a50; compiled .text$mn SHA-256: ac9c80378763240ff3823ff6476eb95f947b24209e2c1dbc7aeef6c5166725b7.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
