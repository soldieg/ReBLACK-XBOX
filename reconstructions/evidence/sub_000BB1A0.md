# sub_000BB1A0

- Function task: [#879](https://github.com/soldieg/ReBLACK-XBOX/issues/879).
- Function range: 0xbb1a0–0x000BB2CC inclusive, contiguous, 301 bytes; local Ghidra 12.1.4 body FUN_000bb1a0 covers the same exact range.
- Candidate dashboard entry: sub_000BB1A0, 301 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BB1A0.obj, SHA-256 e3be742ded04aebdc085739254dad939197f183ddbfeb3ee8bb9cde8c64189aa; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAB1A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAA520.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: d10d8bff7ee6a1afac8ffacb8a44a87ebb2cf478163838546bc0428ba9d8bd41.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 301/301 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 16976a0ea34ca3c15b44e5c6e866e00f507eaa820a6b47de0b89674671cbbbf9; compiled .text$mn SHA-256: b97573c7383ac86651b0c3a272ee86cf63b05aec8553e64394daf29b09298b8a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
