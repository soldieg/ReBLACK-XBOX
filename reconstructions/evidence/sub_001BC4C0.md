# sub_001BC4C0

- Function task: [#1545](https://github.com/soldieg/ReBLACK-XBOX/issues/1545).
- Function range from REA/Ghidra dossier: 0x001BC4C0-0x001BC552 inclusive, contiguous, 147 bytes.
- Function dossier evidence: ev_fe620caba3259d1ecd30c5862af8395a08ffb664d24a6879e3c65b32b5d23b32.
- Call analysis: Local Ghidra 12.1.4 direct-call inspection: _strncpy (0x000A1F40), at 0x001BC53D. Callee sources exist in the base checkout.
- Dashboard candidate: sub_001BC4C0, 147 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BC4C0.obj from the identified progress snapshot; SHA-256 f3a3909b4cc808563560ee2a007c5280f12ba675cf2320658408c0b8560cfc27; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AC4C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AB840.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 09e388f3ff425b64604dfbd636a59dafa01bee51294a341c05ab52e07a6feb85.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 147/147 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 6ef6b26075d6ad2b3be446add3523abdbc78a7ee318a6e4361c7c2ba3772c120.
- Compiled .text$mn SHA-256: 7da3a8e45f647825080604acb2f72113e996a444853e49ed08af2b3602f14388.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
