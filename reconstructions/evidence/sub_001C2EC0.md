# sub_001C2EC0

- Function task: [#1521](https://github.com/soldieg/ReBLACK-XBOX/issues/1521).
- Function range from REA/Ghidra dossier: 0x001C2EC0-0x001C2EF4 inclusive, contiguous, 53 bytes.
- Function dossier evidence: ev_af6e2266aacb0f8a22eaad168a271fe34676a1e6169033966474ea0c8ffe00df.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001C2EC0, 53 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001C2EC0.obj from the identified progress snapshot; SHA-256 53b72c5ebe9e29cc53512ee109e45c4695ae48a8fda2e31cde43ae2da8c304c7; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1B2EC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1B2240.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 7991d6bdfe4d86b53daf596fc9c49d0c2e051e7824fa2261ca9878a5c4cfc99e.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 53/53 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 56b79ffcaea7914bfee70f11c14cab1852f4b6a0366a5d1d02a2fcebbe442f9e.
- Compiled .text$mn SHA-256: 53a24b7d32ed8d83ddf8a70f540f79bf3b282a62b1b1aef22cd968eefaeac537.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
