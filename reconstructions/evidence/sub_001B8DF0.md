# sub_001B8DF0

- Function task: [#1454](https://github.com/soldieg/ReBLACK-XBOX/issues/1454).
- Function range from REA/Ghidra dossier: 0x001B8DF0-0x001B8E20 inclusive, contiguous, 49 bytes.
- Function dossier evidence: ev_fac5b3ff8bc5519a988cf16cc49bcbe06e8f18300a0c2022c5d80ff77c1bfed8.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001B8DF0, 49 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001B8DF0.obj from the identified progress snapshot; SHA-256 6d6e356085e77292c3b1a2898248f1e283329f42d82683ed2e96671880e06e38; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1A8DF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A8170.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 4c87129307f2b7373996668c8670e3c0ca71f912b03c2f50ae003920ba266dbc.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 49/49 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 28efe186b1842ab65bd13bfe308b363811de0246ef8e72344d578afdd7362867.
- Compiled .text$mn SHA-256: b226b8d20d34d1e144bca7809d1fafaf761103a42114c58ccc78f726808dda7f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1454](https://github.com/soldieg/ReBLACK-XBOX/issues/1454); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_8bad067b1f0cc7a15fb415ab846b9b41664b25e92f1358d2c5cf92d59ae51288`; complete REA byte-read Evidence: `ev_1602fc01eed83d3de75bfa06efd81e7630b36ccebf6603ffccce07ae127f1a3b`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 49 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `def3918752c792494453e7192a0d748337dda8ca87f0adb32cd837a9c3ff7214`; candidate COFF SHA-256: `6d6e356085e77292c3b1a2898248f1e283329f42d82683ed2e96671880e06e38`; compiled COFF SHA-256: `d4b6b2adbb52588ab8a5c82d801a0d865af126743466b179d28e9caf63b031a8`; ObjDiff report SHA-256: `13761bfa6301b09c6b5ab8479a8c20e76af26c03f02349eaed37e2a8acd8fca6`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
