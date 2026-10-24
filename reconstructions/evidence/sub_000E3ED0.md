# sub_000E3ED0

- Function task: [#243](https://github.com/soldieg/ReBLACK-XBOX/issues/243).
- Function range: 0xe3ed0–0x000E3F2B inclusive, contiguous, 92 bytes; local Ghidra 12.1.4 body FUN_000e3ed0 covers the same exact range.
- Candidate dashboard entry: sub_000E3ED0, 92 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0001cc00 (0x0001cc00) at 0x000e3ee2; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000E3ED0.obj, SHA-256 b193a97ff3f614082db7209156d97b087cf4251b5221f70578a0a8189d83f82c; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xD3ED0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xD3250.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 4d9eb149ffeb8e5f5de71fc5270ebe6798875b2570074d6d4c698222e8b2b616.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 92/92 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 1a8bb38597f9b22ef04025c307da838175a6bf00a5e182a4fa043fc355cc63fa; compiled .text$mn SHA-256: 240a8d857660c5522f1f66c1329fe0077c0a3717b95ccbfb887e8da48411b7a9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
