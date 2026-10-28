# sub_001B7CA0

- Function task: [#1446](https://github.com/soldieg/ReBLACK-XBOX/issues/1446).
- Function range from REA/Ghidra dossier: 0x001B7CA0-0x001B7CC3 inclusive, contiguous, 36 bytes.
- Function dossier evidence: ev_a18684fad159a0e61b1bffbdb183ec672d81781104a7bf083f054eeccf107847.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001B7CA0, 36 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001B7CA0.obj from the identified progress snapshot; SHA-256 8805e88539b809d3b0ca67ad5bd087d64ffd4012df3d81631acb1d74753a3649; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1A7CA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A7020.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: dc2144020ee133ac350cfb25762c3494f51b7ef658f231cfda5b14fca87771d7.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 36/36 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 28ed0f467700c4f686445909c43736977f4be4d4465e312add0bce1c872ea1e9.
- Compiled .text$mn SHA-256: fde1a2c8e5f8e7ec6fd8b1aafd217a03b39a03b1f36c790c0c06bea054e86eb4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1446](https://github.com/soldieg/ReBLACK-XBOX/issues/1446); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_f33b60aea88cede2803b288b692dbc3d022b79943351647dfb3de958ae3f9a58`; complete REA byte-read Evidence: `ev_1c8984ee67f77134bfb8abfa5ccc68c3994dbd731e630771a2f13b9e952b0f32`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 36 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `c805bc48df90ee9e871928b3222f46206ec12922fc34a4b3abc7edcc3592e62a`; candidate COFF SHA-256: `8805e88539b809d3b0ca67ad5bd087d64ffd4012df3d81631acb1d74753a3649`; compiled COFF SHA-256: `17b0d0e8ecfd8dc257fe5bd01bd69a4be5e3fca806ffb942911cb28877f40f51`; ObjDiff report SHA-256: `6f448db950477af4598011b6704c60f4a87b1f8137314986168ff7f6923d1307`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
