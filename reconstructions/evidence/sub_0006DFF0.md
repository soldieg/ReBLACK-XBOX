# sub_0006DFF0

- Function task: [#550](https://github.com/soldieg/ReBLACK-XBOX/issues/550).
- Confirmed REA/Ghidra 12.1.3 body: 0x0006DFF0-0x0006E132 inclusive, contiguous, 323 bytes.
- Call graph: 0 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: sub_0006DFF0, 323 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0006DFF0.obj from the 2026-10-15 snapshot (complete=false), SHA-256 02c8ed42a01d88c0ea389b02531499aaf7dd5a5c122cc375cedccc3d0514f4d4.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x5DFF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA/Ghidra dossier evidence: ev_874ca9b7660aa51ef4d65035c9ea5da49a2f469609b692b6a389515362f702cd.
- REA byte-read evidence: ev_657f0df6467fa465f093654278c1f21e0e36cfd51abefca7f0dd9e1304eb6111; complete read 323/323 bytes.
- Source SHA-256: e3c8fcbecac57f06d653d83a46a1a70566bcf536d855882237898eb962f91120.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 323/323 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 02c8ed42a01d88c0ea389b02531499aaf7dd5a5c122cc375cedccc3d0514f4d4.
- Compiled object SHA-256: 40967c0dec0739d5e312ce6961b194f885675cd3fd5eca8a5c04b123315ac9b4.
- Compiled .text$mn SHA-256: 92e3633444d591b166c559ae8028d568ad2a1714e86592cde265adcc26074003.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 88 fresh revalidation (2026-10-28)

- GitHub Issue: [#8675](https://github.com/soldieg/ReBLACK-XBOX/issues/8675); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_7753dcaaf192b7ca314a49a2ef6207796b53d97d0c9ba13950766e2fc1e75613`; complete REA byte-read Evidence: `ev_c5d0c2a473e5d2453bd0df468e74a65bbb71df2d0da98161819c85d6c9917360`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 323 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `fd59b9140775ed3efe1cf62e56b6e2ace3f23da17fd11ad782f3818c6349e7d2`; candidate COFF SHA-256: `02c8ed42a01d88c0ea389b02531499aaf7dd5a5c122cc375cedccc3d0514f4d4`; compiled COFF SHA-256: `bf014ebae46dd74bb2bdeb87b62fe7f11ba395a0c54119ad1860431d0cfc2dfd`; ObjDiff report SHA-256: `4adb60158da6924aa61af561ea3682c96a965e87319be58281ef432025d4664a`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
