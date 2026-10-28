# sub_001BD9F0

- Function task: [#1491](https://github.com/soldieg/ReBLACK-XBOX/issues/1491).
- Function range from REA/Ghidra dossier: 0x001BD9F0-0x001BDA10 inclusive, contiguous, 33 bytes.
- Function dossier evidence: ev_1a1131a06d360d3e3c47f2b6becf134f2f7c24d36359cdcef5f1ffc5a4ab93e4.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BD9F0, 33 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BD9F0.obj from the identified progress snapshot; SHA-256 ef1837855586d5a0c13caeaafe28e769502bd448ed21d1dedda91ea0abf45aae; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AD9F0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ACD70.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 45ea4c5f085cb5a12abf5d85b910034dcf3ab29df2fcd2104b2a6206e7cb1aeb.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 33/33 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 9ad97ad2b368874193f6802ebb9a8a92bc715da84d6c128eddbe62feba9ef971.
- Compiled .text$mn SHA-256: eab1f67df9265b3c4f8864b2efbff24be7ca0e1e7cefab3f85a95b0979447f9a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1491](https://github.com/soldieg/ReBLACK-XBOX/issues/1491); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_a83e810e2c1ac533468e2f1c3e4c4e8e2985c0a1bdc0516895aa6c749e5929ef`; complete REA byte-read Evidence: `ev_40657c01c0b9e46a4c458b722791b407e6b5c6224a3a927f64ee49fe600de9aa`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 33 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `ce81445ae4ed8a9c37e9aeab920cab7d2ba38341ebe69cebafbe79a24dc3bebe`; candidate COFF SHA-256: `ef1837855586d5a0c13caeaafe28e769502bd448ed21d1dedda91ea0abf45aae`; compiled COFF SHA-256: `df5931a400454a900cbe8a01463825788bd562d7cacd3454d20d3c85c13e37d5`; ObjDiff report SHA-256: `4118fc46b0ac2c705c8d712b18c1df121d9ff18a7793d848f03df8060ca1e9cf`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
