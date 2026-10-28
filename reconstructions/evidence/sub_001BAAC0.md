# sub_001BAAC0

- Function task: [#1467](https://github.com/soldieg/ReBLACK-XBOX/issues/1467).
- Function range from REA/Ghidra dossier: 0x001BAAC0-0x001BAAED inclusive, contiguous, 46 bytes.
- Function dossier evidence: ev_902f720372eff585602b633febc044004118e6533aaa7ec4e48ea6fe220fd754.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BAAC0, 46 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BAAC0.obj from the identified progress snapshot; SHA-256 4defc8b7e2667a75543a1dd39ca0954b8599e8e4454f2b7df9f9dbbe49693e87; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AAAC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A9E40.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 0dc7bc8d118f3ca786b55ca92629d3e1b5e1f8935c02d298d7db3f0939bc4410.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 46/46 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: d75cb6b75b4f514c46e6784d3ad603964c14a2b8850c3bc1c3a8a7e0a77aef03.
- Compiled .text$mn SHA-256: d3146aab36a622f2f10a749e233fb9695677a5aba62e89d24cbaa5eab21476d4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1467](https://github.com/soldieg/ReBLACK-XBOX/issues/1467); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_0b34a138079864449d1f125feca87035d445181f7fb32e552c9914ebf28bf4f0`; complete REA byte-read Evidence: `ev_82b56eb6923be40f5624467ed58fde84b6b3aa7570f0bb2e0ca41bd590d34bb4`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 46 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `d0e43849c996ce61e1499ef37d109cee71515755b30e376ef2ba4a2dd0a26f28`; candidate COFF SHA-256: `4defc8b7e2667a75543a1dd39ca0954b8599e8e4454f2b7df9f9dbbe49693e87`; compiled COFF SHA-256: `3e288c799ee340a27ebeea5c39788435de6f9c23b676693cd0cfbf25e594ae6f`; ObjDiff report SHA-256: `44ed1fb38e90be9b15633039fdab920cd02c793dc90744d536adb464586681da`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
