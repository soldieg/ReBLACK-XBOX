# sub_001BAF70

- Function task: [#1471](https://github.com/soldieg/ReBLACK-XBOX/issues/1471).
- Function range from REA/Ghidra dossier: 0x001BAF70-0x001BB002 inclusive, contiguous, 147 bytes.
- Function dossier evidence: ev_ee1b3c6d7c95ddc4378f7febb2645866b7bf01e5675dd58ae1631d9b7cc632a1.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BAF70, 147 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BAF70.obj from the identified progress snapshot; SHA-256 5707885031b14eaefe55d8ee76918355ea3f496d205d41cb6712331c54ba4e31; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AAF70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AA2F0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 0c0caab77cd306f32fb1e57f92bbc51dd1adc4faf2f1f15b52eebe2ace65a963.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 147/147 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 4619d0a80993cb41abca6b12f6130d56c532e262219c4a244dc96a91dd041142.
- Compiled .text$mn SHA-256: 1269b382a2c7cc3a84f7f3b78fda250190af62f357e34bd0b67c0c77fd92d8f2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
