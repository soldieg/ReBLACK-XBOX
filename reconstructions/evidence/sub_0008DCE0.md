# sub_0008DCE0

- Function task: [#664](https://github.com/soldieg/ReBLACK-XBOX/issues/664).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DCE0-0x0008DCFF inclusive, contiguous, 32 bytes.
- Call graph dossier: ev_abc6d62e5e95266d9487adc0f2b884bb9084ade1e02501a7f43383e7a29657b4; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DCE0, 32 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DCE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DCE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_16c045b0ea503ec4e41d25da52b4c0cdb4c4ebccb3a6e5b35761d1fd9bcc6e27; complete read 32/32 bytes.
- Source SHA-256: 4fa920f8cdf577d9d679e78160e8156cfab052741422768531a1a5dbdb207409.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 32/32 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 229fe803b6bafb4f2b8521d9e354c088ed257c2bdb864eab469789982427fd83.
- Compiled object SHA-256: c761206c8f2fdd802735818c2585d5e48a7859baa68393d74cd494002e0170de.
- Compiled .text$mn SHA-256: a21af4e594681c5cbb068488374cc677a92e5a8f3d677efc2c49fac01c3f12c3.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 90 fresh revalidation (2026-10-28)

- GitHub Issue: [#8821](https://github.com/soldieg/ReBLACK-XBOX/issues/8821); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_a6f2e160c5c3bed52890ba289a7f9f1086b7bfd350bf14276126378948b3ffee`; complete REA byte-read Evidence: `ev_8400f24844f7368ca02c2551c6b3992415f911fbeb662750336d03c918bff6d5`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 32 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `ff8553fea3263d4915296bdf5e3265b55fd1710ddac277a3f76c0502effd7c03`; candidate COFF SHA-256: `229fe803b6bafb4f2b8521d9e354c088ed257c2bdb864eab469789982427fd83`; compiled COFF SHA-256: `a717cb214e3c5000b14d2181a5fcb56ab908ed087d108edeb8a64aafd3169656`; ObjDiff report SHA-256: `5076e8d71c35775b9cae8148db9dcdac4e0357ca4532c08b96eee62ef4a09a5c`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
