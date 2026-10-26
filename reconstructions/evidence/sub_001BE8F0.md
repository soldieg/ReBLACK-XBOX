# sub_001BE8F0

- Function task: [#1509](https://github.com/soldieg/ReBLACK-XBOX/issues/1509).
- Function range from REA/Ghidra dossier: 0x001BE8F0-0x001BE909 inclusive, contiguous, 26 bytes.
- Function dossier evidence: ev_8c5053a647ae1c5854b36793719b5586963f60b01297e0596805db153bb27b1e.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BE8F0, 26 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BE8F0.obj from the identified progress snapshot; SHA-256 b0083dba3e94b7afca9c0141c7e6de117174e710fb2e3abe052ee6a1c71a30db; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AE8F0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ADC70.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: c8df572bf5b8a0469c465a0ba1dcd8edcd9ed409c3cae65a789530e32272dc8f.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 26/26 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 509f7b88e81b313af0048bd45bf57a4a9c8c6b9e3afdde1a15154fe61cdc3e0d.
- Compiled .text$mn SHA-256: ede6757d60f90a2b5ea955ad8744685082bce7a8423b78d92ecda4237e31b3f0.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
