# sub_0008DEC0

- Function task: [#676](https://github.com/soldieg/ReBLACK-XBOX/issues/676).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DEC0-0x0008DED7 inclusive, contiguous, 24 bytes.
- Call graph dossier: ev_fba4bc4689168ef76a4012836b87ccb0572f85fd8f967969f91b76eeaab25e77; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DEC0, 24 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DEC0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DEC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_3bb10910de22bb0f4576e534a8859e404110222e58ae0d31423c6a47bac57aa2; complete read 24/24 bytes.
- Source SHA-256: 44f4ff159de36e2d2318e6f608120bd95a39ab6696902ca37771317bdd4a262d.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 24/24 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 24650338ea3ed85185d67bce64b6dc79a9a019e125762f138bb0284a4c21e05c.
- Compiled object SHA-256: 118b43b96e2475c2a317a62ccb015be6200e0957dd66e3fa98f744c29163747b.
- Compiled .text$mn SHA-256: 27f883cb712fa509a4f3aea10015336813707a6ec9351c0c3ac0caf66e80754e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

### Lot 94 static revalidation (2026-10-28)

Issue: [#676](https://github.com/soldieg/ReBLACK-XBOX/issues/676). Fresh Ghidra 12.1.3 confirms one contiguous 24-byte body at 0x0008DEC0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_d70b525ea4c8ee06f0c02719f5a00e25f524c8a834c2f6a3e69768dbc554d782`, REA bytes `ev_e162e4587c09b46e082a244fd5759dc752bcccb4e3f964f13dc5094ff110f971`. Relationship coverage: partial; 1 resolved callers, 0 resolved callees, 0 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
