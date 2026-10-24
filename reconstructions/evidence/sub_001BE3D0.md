# sub_001BE3D0

- Function task: [#1503](https://github.com/soldieg/ReBLACK-XBOX/issues/1503).
- Function range from REA/Ghidra dossier: 0x001BE3D0-0x001BE405 inclusive, contiguous, 54 bytes.
- Function dossier evidence: ev_6c24e85d6e8b7c2e8e54221e13d8e6bfd61b937f20f436a545fcdd49a944fa9e.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BE3D0, 54 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BE3D0.obj from the identified progress snapshot; SHA-256 a8e67484828210bfa75c9a4c31accb6c38211515e75a984c7dd4cdacee3fbd01; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AE3D0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AD750.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 7f64ae93ad75fc803997c404007af5467ad8c483b85d53f64f4651fa8d89262f.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 54/54 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: a2fccb9246a293565d4cca686615c03bd0b8d2cf9fa5db013eac35245e9b1383.
- Compiled .text$mn SHA-256: f33b4cee577a04d41300b62040a4ee78a741b88ae6eec1fef0344692f02096fb.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
