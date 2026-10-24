# sub_001BABA0

- Function task: [#1465](https://github.com/soldieg/ReBLACK-XBOX/issues/1465).
- Function range from REA/Ghidra dossier: 0x001BABA0-0x001BABF6 inclusive, contiguous, 87 bytes.
- Function dossier evidence: ev_a468862049150a4bbd850a390fbbfa485dc4e5ff20b6cc498928ad2a2903f51c.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BABA0, 87 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BABA0.obj from the identified progress snapshot; SHA-256 60de54dede7652fbc8705b21111cefeef8add9cf346058bc4a75f58aefd2ab56; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AABA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A9F20.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 301180084ef916099788ebcbf147ff2ea621d06a535701c529cbc4005cb7102c.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 87/87 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: bec9410f0ed77b19c920447173c44122b06ea51892f9a522f89c11adc8680de0.
- Compiled .text$mn SHA-256: 2b0d0938ffd96d53b01b80e524c583a08e0897216047de8df4643b7c2c47cee8.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
