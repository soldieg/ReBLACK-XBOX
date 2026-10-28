# sub_00026CDE

- Function task: [#1624](https://github.com/soldieg/ReBLACK-XBOX/issues/1624).
- Function range: 0x26cde–0x00026D0B inclusive, contiguous, 46 bytes; local Ghidra 12.1.4 body FUN_00026cde covers the same exact range.
- Candidate dashboard entry: sub_00026CDE, 46 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_00026CDE.obj, SHA-256 adfb389eaeed0ea5fda31091099febb4a145e83ea5914e29370a4d82c2266742; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x16CDE.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x1605E.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f0a140cf23f51ddd5fe9d9a335f85d0a7af8e4bdcd9463d0520f282d9eb26221.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 46/46 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 4d5af592ceb5f6e5156a89af76e8c11e22428475379dfb12cb80ce0a0d7c59b2; compiled .text$mn SHA-256: d9be41a762e9193a3fec8f3f48a18a0b3652c224b7d79ec4ea4e131fa4a73b99.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 85 fresh revalidation (2026-10-28)

- GitHub Issue: [#1624](https://github.com/soldieg/ReBLACK-XBOX/issues/1624); the Issue was open and had no prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary and relationship Evidence: `ev_197473ae96ccbb9cee231ccf2daabde086e048fafcaa6d02859629ef3dc7c63b`; complete REA byte-read Evidence: `ev_e431fe1b42cf674a3f7e4c1a7ce74fbffaf872dee32cb1e17460c1e9c8a12274`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 46 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `b36429d2977c3e10f0ccd271b46d14e014fc8b8318a04d32e891525441f9c5b3`; candidate COFF SHA-256: `adfb389eaeed0ea5fda31091099febb4a145e83ea5914e29370a4d82c2266742`; compiled COFF SHA-256: `bd3689de5b715f64bb64ca14636775813b60dfb667a88820a02de4abe961e123`; ObjDiff report SHA-256: `4a82f20e6f315ac1e851f3ac12361da7e0556d050c06d1f22ade385b3697a35d`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
