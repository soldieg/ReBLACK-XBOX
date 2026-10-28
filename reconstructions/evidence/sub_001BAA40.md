# sub_001BAA40

- Function task: [#1466](https://github.com/soldieg/ReBLACK-XBOX/issues/1466).
- Function range from REA/Ghidra dossier: 0x001BAA40-0x001BAAB8 inclusive, contiguous, 121 bytes.
- Function dossier evidence: ev_4f7757c5fd266cc8ba682050a057d34d7ee96e0da9a80319ca547798fc3c2570.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BAA40, 121 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BAA40.obj from the identified progress snapshot; SHA-256 5fcf3c0c0a82f29a9840783ac034cf0a00367c1c57fef997898d68e516064d98; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AAA40.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1A9DC0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: f017b7e81cee54bd3add964ac28d6e0f0472c4b5cbdf5d54d0bf21fa3ab96f17.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 121/121 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 6998e98d9bee858318aa08f52c25d03e5ea023f4c8d9df16a28acb3af78931f1.
- Compiled .text$mn SHA-256: a66fe7e0af31eaa30dbaab51f02b6b795587d035e93ad6395e93b4445ae7ce6e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1466](https://github.com/soldieg/ReBLACK-XBOX/issues/1466); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_84efbda9e7e6e6f5102253834a6dc442d2abec6a2a189be10c67204d5783ad51`; complete REA byte-read Evidence: `ev_48c6b23d3ab3272209c0fc776e22ad3f9e26012790c10ae56be7b5418205d3b0`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 121 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `e2e483c35fd2fb2c4221f67b65a2edb2727f07e6ea23f7f34d0807face6d7a3f`; candidate COFF SHA-256: `5fcf3c0c0a82f29a9840783ac034cf0a00367c1c57fef997898d68e516064d98`; compiled COFF SHA-256: `beef7fa83eda2e5a660baf81beb9b0d92f75cbacca09f867f1a7ec58d9c88cc7`; ObjDiff report SHA-256: `08068ab92d0f48719d2d22ed1da700c3e918200e325637039169e53edebada1b`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
