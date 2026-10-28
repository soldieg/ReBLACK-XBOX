# sub_001BDB20

- Function task: [#1498](https://github.com/soldieg/ReBLACK-XBOX/issues/1498).
- Function range from REA/Ghidra dossier: 0x001BDB20-0x001BDB85 inclusive, contiguous, 102 bytes.
- Function dossier evidence: ev_2bc208f3dbbf2954d72e32351b77dedf517f58bf440f6155ef72d804e588ea2d.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BDB20, 102 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BDB20.obj from the identified progress snapshot; SHA-256 6f372245bdc74d512af99935c5c2026b06667ae64cd28ff4b7e24954b4ce32aa; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ADB20.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ACEA0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: e4b341510394b6a2d0506fa446d12868bf7e35c1e7fce85c6ad36686808c2eb7.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 102/102 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: bc57a049bf56cbd1a7ce2707476280d4c60e825a4c6e686f9ed7b9b634f1d455.
- Compiled .text$mn SHA-256: a25ca9ffaf50862f17e2439ba1ee3a88c0600c611ca50649b9ebe63fe400a830.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1498](https://github.com/soldieg/ReBLACK-XBOX/issues/1498); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_3df6a254ccf2b4162a1f095a89a731ee71e5be40e0e9fcaf297cbdb6360e4c52`; complete REA byte-read Evidence: `ev_cadec57ad76b40f5a2fc6c30027d426aa3eee801adbe1414b76f171242249d81`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 102 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `7a43853aebabb83cda8469726cc0dec11ded466af5b7784f09eeaf1af0fd2080`; candidate COFF SHA-256: `6f372245bdc74d512af99935c5c2026b06667ae64cd28ff4b7e24954b4ce32aa`; compiled COFF SHA-256: `77b6e83743cf17a8421d7ee75fc044a0c1a90dce305d7de21fe4db6d94d7d2a1`; ObjDiff report SHA-256: `c0559dc0f100f9dcc6b3533dab7dc7a5daa8f6b8a4bc6b4802707596e9cff793`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
