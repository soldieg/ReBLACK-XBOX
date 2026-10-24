# sub_001BED00

- Function task: [#1514](https://github.com/soldieg/ReBLACK-XBOX/issues/1514).
- Function range from REA/Ghidra dossier: 0x001BED00-0x001BED85 inclusive, contiguous, 134 bytes.
- Function dossier evidence: ev_bc8e6ef02b0e36ac2c5ec7a08b14d39201528e62ede714ddb86b649ce8e3447e.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BED00, 134 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BED00.obj from the identified progress snapshot; SHA-256 7d3d00c1e82553e9be40c616b278442b34445a83264b13665b173f06dd842c26; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AED00.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AE080.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: cb10aed098eeb1b4dd2b84a75c6cc036df4bf4051ca5571ccf098b0698d0bbfa.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 134/134 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: fa4f307902b1debde318be3ec66aa38ce47b7079f6060ee137625b289c5b6d2b.
- Compiled .text$mn SHA-256: 34e264581fad0323fb6697d816cc7014d1979692f9beb57de2277336ee9412b2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
