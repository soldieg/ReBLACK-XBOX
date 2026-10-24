# sub_001BB9D0

- Function task: [#1481](https://github.com/soldieg/ReBLACK-XBOX/issues/1481).
- Function range from REA/Ghidra dossier: 0x001BB9D0-0x001BBAC3 inclusive, contiguous, 244 bytes.
- Function dossier evidence: ev_c90a46faf5cab36af54845acab644d9626058d14591c85963e47beed6c186efd.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BB9D0, 244 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BB9D0.obj from the identified progress snapshot; SHA-256 1bea8626f15ad1acf632db70d18be0083d22622e84ef33cb1dae75f19e7abda9; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AB9D0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AAD50.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 928fa8f3928121672c562ddc00cf80a73fbc9f8719a6e1c109122b661f7b61f2.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 244/244 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: ee15a0a1a00ee458b293cf55af7b8dca818031604132ed28d1d3f9acbb584aa6.
- Compiled .text$mn SHA-256: fb9b715a85b8e662c4a2d85cefe19a024fdb024f6ece06c163d76971b2651194.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
