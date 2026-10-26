# sub_0004DCA0

- Function task: [#1724](https://github.com/soldieg/ReBLACK-XBOX/issues/1724).
- Function range: 0x4dca0–0x0004DCE5 inclusive, contiguous, 70 bytes; local Ghidra 12.1.4 body FUN_0004dca0 covers the same exact range.
- Candidate dashboard entry: sub_0004DCA0, 70 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: _atexit (0x000a1c7a) at 0x0004dcd8; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0004DCA0.obj, SHA-256 73c9f1d947be0f162c2d5e1c1c3460c7c6ae0764569de159bdd2eeaad3b0b5f7; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x3DCA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x3D020.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: c5740fa0314450f3807f3e4920cc8554adad8aa48fd7f263e50bd5bddccc8926.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 70/70 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: b732ff72017a28bf328f5552392b8f2c3346f622ccd5f2ecf1ec94e343281cf1; compiled .text$mn SHA-256: 7e0cb096ef722be9ed9e2f3199b25ba9630bbc09684668353b244f9381a91bd1.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
