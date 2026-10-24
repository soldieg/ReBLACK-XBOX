# sub_000ADC70

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xadc70–0x000ADEB6 inclusive, contiguous, 583 bytes; local Ghidra 12.1.4 body FUN_000adc70 covers the same exact range.
- Candidate dashboard entry: sub_000ADC70, 583 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_00081320 (0x00081320) at 0x000adc79, FUN_000877d0 (0x000877d0) at 0x000adc87, FUN_000877d0 (0x000877d0) at 0x000adc9f, FUN_000877d0 (0x000877d0) at 0x000adcc7, FUN_000877d0 (0x000877d0) at 0x000adcdf, FUN_000877d0 (0x000877d0) at 0x000add0b, FUN_000877d0 (0x000877d0) at 0x000add23, FUN_000877d0 (0x000877d0) at 0x000add66, FUN_000877d0 (0x000877d0) at 0x000add7e, FUN_000877d0 (0x000877d0) at 0x000addbd, FUN_000877d0 (0x000877d0) at 0x000addd5, FUN_000877d0 (0x000877d0) at 0x000addf7, FUN_000877d0 (0x000877d0) at 0x000ade0f, FUN_000877d0 (0x000877d0) at 0x000ade46, FUN_000877d0 (0x000877d0) at 0x000ade5e; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000ADC70.obj, SHA-256 3b7f4822aefd6f712a034011e6be6e06f267eb722ac716515860c03e10e1b4c5; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x9DC70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9CFF0.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 58f866ff52efaf89af4ea407fddf19695bd565048ecbf4c8314db74649c8bdfc.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 583/583 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 6dcbd44959381d1c72daec80aaa54f2c4cac02e3cb08bfac0e5d08a84cba8096; compiled .text$mn SHA-256: 0d2c9ac3913991fa6c54c19588453cec049b93ba26644e4fda46efb578c313c7.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
