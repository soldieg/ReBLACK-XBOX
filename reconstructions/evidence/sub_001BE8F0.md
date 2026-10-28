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

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1509](https://github.com/soldieg/ReBLACK-XBOX/issues/1509); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_d257bf112fe6c86c2076cf1d9496d4a4971c2b23e9fc8cc27779c76d1c8de339`; complete REA byte-read Evidence: `ev_06099edf979c89fb6d78d6def5e23e85fd07f44cdc4cbf9396ba35f3cdf163d2`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 26 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `e1e763e1da88266ca5c16d48dd65a60872f7f1831cb6f9123d35180b23ca6911`; candidate COFF SHA-256: `b0083dba3e94b7afca9c0141c7e6de117174e710fb2e3abe052ee6a1c71a30db`; compiled COFF SHA-256: `c610b9853ab6784c20a30129cd60004f8086f130cff23d3f19f3d6de77eb5d19`; ObjDiff report SHA-256: `4d43a2f3d6757343f5ad3103d2fe9a9f931492a8e267e2ef25a51bb327e6068e`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
