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

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1545](https://github.com/soldieg/ReBLACK-XBOX/issues/1545); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_0eb435ab954ac83aeb4ab586d431529afc56e06f29c214207ab35f8284099c24`; complete REA byte-read Evidence: `ev_6aa3b4c8ce3ba32a9218b4b55ce6770b86c00b0166dc9822b52b5c690283e187`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 147 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `2bd3f37551bcc8b8b2155e626c3a00e8cd91c93e177be77bf2ff97be59c043ea`; candidate COFF SHA-256: `f3a3909b4cc808563560ee2a007c5280f12ba675cf2320658408c0b8560cfc27`; compiled COFF SHA-256: `b8093f4c39bf0985ee907349d3392282d950aa531539c2da839335fbc0546389`; ObjDiff report SHA-256: `04b807b93dced6f56b1d1c7cb4c75825d69473841f533d255e5011c516586cf8`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
