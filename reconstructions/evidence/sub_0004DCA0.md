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

## Lot 86 fresh revalidation (2026-10-28)

- GitHub Issue: [#1724](https://github.com/soldieg/ReBLACK-XBOX/issues/1724); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_af4ef22b9546d4c34f001b70316a31b5bdb603cf7f9a02dde84ecd4d00386189`; complete REA byte-read Evidence: `ev_46ec6b926f1211f0534f3cdcad642a908390a5e56bcabe21a6475348a2c3530b`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 70 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `fa54693adaca3c38167849b6def9aadc061d698c64cb355bc4473cb0bfb6b214`; candidate COFF SHA-256: `73c9f1d947be0f162c2d5e1c1c3460c7c6ae0764569de159bdd2eeaad3b0b5f7`; compiled COFF SHA-256: `8c57243ad3438d1f1bfd4ade981b37cb64e439c0700fd2209d36b31f5d06d535`; ObjDiff report SHA-256: `e99c96cf94c413efd7da01dcdd646b0f0b45ea2df911115b9332d865b9c066f3`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
