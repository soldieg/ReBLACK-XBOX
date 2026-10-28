# sub_001BDC40

- Function task: [#1495](https://github.com/soldieg/ReBLACK-XBOX/issues/1495).
- Function range from REA/Ghidra dossier: 0x001BDC40-0x001BDCB3 inclusive, contiguous, 116 bytes.
- Function dossier evidence: ev_7d3b492a48644e9148a1387597001bccc6d8e22f62a41aeb6f076882ddd4ec15.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BDC40, 116 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BDC40.obj from the identified progress snapshot; SHA-256 eb0a0b10d2f4d4247ce88f61bb4bcbf1ff3310c39a410e72d7fe6a41677c31e1; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ADC40.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ACFC0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 8f02f6e9abbfeb140dc23df15800cb72817e789dff89c5a6d0675c55d39614ca.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 116/116 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 0cd5f00ed0cb2260c58ccd91aef04f2ea9ff4fcd531ce5ecac5bdfc55ff972b8.
- Compiled .text$mn SHA-256: 25f693c2241a7efd00f1096058641438674402b92f110436e5bc1caeafc641e5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1495](https://github.com/soldieg/ReBLACK-XBOX/issues/1495); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_795e00b27e1ed8dfdd22918233b41462da4bcb87a20566322b9398dd31d01cd8`; complete REA byte-read Evidence: `ev_f8deeacc483c15d1bd7c0d47cb5701458f41a5a8a51d8a241dc111dc942fd0ab`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 116 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `d04f92ef840200bc9ae106918487e913a31aa42f117053f7a1aaecf9a20a5117`; candidate COFF SHA-256: `eb0a0b10d2f4d4247ce88f61bb4bcbf1ff3310c39a410e72d7fe6a41677c31e1`; compiled COFF SHA-256: `b8820b16b962616774731be77f42fa41d93349c8269d161847e15dcaaf149eec`; ObjDiff report SHA-256: `4f5be47b79cc4e2d3b14eb41be7dcba2734946dfe8cc18892109af1cf18289ac`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
