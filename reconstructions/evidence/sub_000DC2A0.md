# sub_000DC2A0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xdc2a0–0x000DC305 inclusive, contiguous, 102 bytes; local Ghidra 12.1.4 body FUN_000dc2a0 covers the same exact range.
- Candidate dashboard entry: sub_000DC2A0, 102 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000dc200 (0x000dc200) at 0x000dc2d3; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DC2A0.obj, SHA-256 982a8ef6defc3d46e6de1e94f26d9d0734c35f70e354131e68e274605cee69a9; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCC2A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCB620.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: bcae37d1a4b1d0cf84600354e9388a7a9a8542cf5a6e6e6518d72171716ed22b.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 102/102 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: b6b241e99b216f9d813b1bd7441256fef7d6653c5ec26ffb04eae213437dcfb5; compiled .text$mn SHA-256: 5bd45d6381d25cb09356de15f72e151f3828d05ce9b18acc0ad57f363a7d9cc1.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
