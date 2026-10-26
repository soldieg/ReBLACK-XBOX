# sub_0012AFD0

- Function task: [#976](https://github.com/soldieg/ReBLACK-XBOX/issues/976).
- Function range: 0x12afd0–0x0012B168 inclusive, contiguous, 409 bytes; local Ghidra 12.1.4 body FUN_0012afd0 covers the same exact range.
- Candidate dashboard entry: sub_0012AFD0, 409 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0012AFD0.obj, SHA-256 24a3db362f94e5211d517eed1f3cdfa9a440532407ff2f822f9d615293cbec23; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x11AFD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x11A350.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 17a898c90cb00356008d6be25a319ea3d3fdd614ace6efaa7cc7479318505b94.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 409/409 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 733c16ceb83c67294d782f0d78b3fa13b721ddb0e42214dd4c58114eb85f9313; compiled .text$mn SHA-256: 038a32f5971cf887f30161a36219aad3a834f4ebe76f051d1bf14154f4245f07.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
