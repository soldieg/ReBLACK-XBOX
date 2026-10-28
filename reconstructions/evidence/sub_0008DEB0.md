# sub_0008DEB0

- Function task: [#675](https://github.com/soldieg/ReBLACK-XBOX/issues/675).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DEB0-0x0008DEBA inclusive, contiguous, 11 bytes.
- Call graph dossier: ev_97374477c923c73857d90e7ea3a4af8a59d17c4ec2eea58252a58a2b25fbf2e9; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DEB0, 11 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DEB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DEB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_5a2b37dca4e6990f22d3a4a4b1f92a247de9742cf0f2b86c84d514d31add4957; complete read 11/11 bytes.
- Source SHA-256: 691e6d019fed41bb6a1c1986ff9edb524143023e2e7c38a35e7ff998396adc09.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 11/11 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 3bbca5a57b7264a2231d6da010e9a8d97d56748be2c4dd77274ed3040b96c3da.
- Compiled object SHA-256: 8b00bbdc2e70ef0d61b51254a635e970fe2406854398bf91a9e0472ee9d8e991.
- Compiled .text$mn SHA-256: e56e6ddc1ca9782bc9b2eff0729cfda08cdd14282163a8b6fe4c32c5e22e4b0c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

### Lot 94 static revalidation (2026-10-28)

Issue: [#675](https://github.com/soldieg/ReBLACK-XBOX/issues/675). Fresh Ghidra 12.1.3 confirms one contiguous 11-byte body at 0x0008DEB0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_baf93a720b1148d84b96006cae0bd7c1e46592a7a2900fec1c7bc45f359b809e`, REA bytes `ev_f630a250ef12170fd370824e7e4b90c043afa61494eaa2979f7a7813af519d71`. Relationship coverage: partial; 0 resolved callers, 0 resolved callees, 0 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
