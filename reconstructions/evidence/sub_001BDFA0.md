# sub_001BDFA0

- Function task: [#1500](https://github.com/soldieg/ReBLACK-XBOX/issues/1500).
- Function range from REA/Ghidra dossier: 0x001BDFA0-0x001BDFC2 inclusive, contiguous, 35 bytes.
- Function dossier evidence: ev_35b5cd2bd91eeb9b0df2bf658f2c722165a6f5adf981aeefabc2ebb4b17b79ea.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BDFA0, 35 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BDFA0.obj from the identified progress snapshot; SHA-256 c5593f3eb6ee2c660183332d22713b99ad987a5cf7be3820c135af8df2093fb9; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ADFA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AD320.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 6c7da7817cdfb21871e7d9fd59209fed13063bd444fb7c1432c213ef4fd2e56d.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 35/35 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 96482523db3694993a027724d0b69608aa24192f00e2a9ab986bb59da2e49710.
- Compiled .text$mn SHA-256: e520364d3c11883c6ac9f797955d1560ef1635e07e923e0e7691eb1eb22546d9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1500](https://github.com/soldieg/ReBLACK-XBOX/issues/1500); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_ce2b5f074b2fcff6757209477fb5a9d044bb7c1c2dc60e233064010754be3cbf`; complete REA byte-read Evidence: `ev_82f847d0acacb95e409b6fe90eddf77eefa76929962ce9b249e293711f20ec1f`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 35 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `2c1bd96e7e3453abdbe886489afb2aba9027513747f5b106066279a3fb069e0c`; candidate COFF SHA-256: `c5593f3eb6ee2c660183332d22713b99ad987a5cf7be3820c135af8df2093fb9`; compiled COFF SHA-256: `8b9f2d2ca48c6e600cff2989f8c608bc0f6d6d4d75ee8b8e671546e0712fecf5`; ObjDiff report SHA-256: `fc177d4d15ff90d688bbb286c9fc0ffd5aefed5c909086e6c4fbd0fc52ed80b4`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
