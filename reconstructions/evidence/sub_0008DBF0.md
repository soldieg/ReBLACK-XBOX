# sub_0008DBF0

- Function task: [#659](https://github.com/soldieg/ReBLACK-XBOX/issues/659).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DBF0-0x0008DC02 inclusive, contiguous, 19 bytes.
- Call graph dossier: ev_c1ea6e6fc05cc58d19670168631016e0d66f9b726db8661cd35f12f0c54a6279; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DBF0, 19 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DBF0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DBF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_4ee5955c5cbafaa0c7793543caea43edbbd87e03b02ff695b66a52578c704270; complete read 19/19 bytes.
- Source SHA-256: 47eedeba3f2869cd90e01a12e4d0624e8ca5655356abe99b9fc426686ef6128c.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 19/19 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 62c5db76ba96cae54a84ae30d91908087ff349fdbae32348b7088fd4629b2393.
- Compiled object SHA-256: 9fed47b51692d05bca8bb972b042e480d4b76be51c06d898aec58829f2659354.
- Compiled .text$mn SHA-256: 1b58eed523ec63a2cec05e20dcca53667f6626493176f151e86a040aad40d138.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 90 fresh revalidation (2026-10-28)

- GitHub Issue: [#8816](https://github.com/soldieg/ReBLACK-XBOX/issues/8816); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_7505bab7cc417011934c034cfb4858d85689b9f091690ffa0c06f6c30ed7095d`; complete REA byte-read Evidence: `ev_1e104246a083d50caa9885ea6fe305dc8905fc00267e0d95b31a198fa3b3e092`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 19 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `369d861027005f54b9c8fbd5e66bd229d8b251820b1216d18cb6370f17d79351`; candidate COFF SHA-256: `62c5db76ba96cae54a84ae30d91908087ff349fdbae32348b7088fd4629b2393`; compiled COFF SHA-256: `2e0ba86f9885f90b72e39b1915980315ed39f36f634b988e7945058cc986e1c6`; ObjDiff report SHA-256: `8cdd1b96f2e11c8dd79e9f8f7ee26630f7fa7d2ceb95633a68f1000ad6703e87`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
