# sub_000BFBA0

- Function task: [#893](https://github.com/soldieg/ReBLACK-XBOX/issues/893).
- Function range: 0xbfba0–0x000BFBD2 inclusive, contiguous, 51 bytes; local Ghidra 12.1.4 body FUN_000bfba0 covers the same exact range.
- Candidate dashboard entry: sub_000BFBA0, 51 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BFBA0.obj, SHA-256 56cb70750ba9218d4cbed3dca9f04747c2ee862f6f95a465b10b04c6d8cbb8b0; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAFBA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xAEF20.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: adb3d19df956b75c125a73252abae98cc99a41157b602f467f699db402edc609.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 51/51 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 8f24256cc1230243dc9e9defbe778d716e49a06b0cbf9645408847fcdc203ae7; compiled .text$mn SHA-256: a5173ad2f6dadbd4ee67dd558eb1afb88877f1c6304a61efabb5625f3aeedf91.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
