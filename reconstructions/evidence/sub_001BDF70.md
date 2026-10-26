# sub_001BDF70

- Function task: [#1499](https://github.com/soldieg/ReBLACK-XBOX/issues/1499).
- Function range from REA/Ghidra dossier: 0x001BDF70-0x001BDF90 inclusive, contiguous, 33 bytes.
- Function dossier evidence: ev_a059ecc235f42af4d4be84e782922c0dee4c43e72f4db433bab79425639b6ede.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BDF70, 33 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BDF70.obj from the identified progress snapshot; SHA-256 b6c8d5271404e36b43f4ea396ac4aa279f749f1ddaa04ffa29a6b240a35724ef; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ADF70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AD2F0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: e91805787d1595c8560d29d4cf7b94a2915202b515af9001fcdd9b6050292c0e.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 33/33 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: b0e7608c10fcdf306a7f472ba33dc249da55688831304ebe89e9bfd1550150c5.
- Compiled .text$mn SHA-256: 1219c118eb13563172a57efbc06009957992e332839dce2ed8a1e11a3dd409d1.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
