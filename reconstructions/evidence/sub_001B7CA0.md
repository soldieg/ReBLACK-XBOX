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
