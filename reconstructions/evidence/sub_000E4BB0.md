# sub_000E4BB0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xe4bb0–0x000E4C0E inclusive, contiguous, 95 bytes; local Ghidra 12.1.4 body FUN_000e4bb0 covers the same exact range.
- Candidate dashboard entry: sub_000E4BB0, 95 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000E4BB0.obj, SHA-256 7c78c3e4bf6cb68ccc4689b8273a955aa3ea8eb723a618453dcbbf7b73060630; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xD4BB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xD3F30.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 4d70f00651432a9a8609071cc65ed5e3f60af40204d22882267998854501a905.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 95/95 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 4fc14d7bf095d3fcb934cb6ef20718c4018b1f9220c6d7db77b2cb0ec61a4428; compiled .text$mn SHA-256: 357553460623c1b8ac583accd9841bc573b260ac7e537cbf5ca11eff92b00564.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
