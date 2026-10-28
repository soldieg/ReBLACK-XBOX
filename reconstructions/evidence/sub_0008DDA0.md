# sub_0008DDA0

- Function task: [#670](https://github.com/soldieg/ReBLACK-XBOX/issues/670).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DDA0-0x0008DDC8 inclusive, contiguous, 41 bytes.
- Call graph dossier: ev_7f8c6b33ffa69750f5c519a94465e9da11a2462fa09005eb9f68b8e64d50afd0; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DDA0, 41 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DDA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DDA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_9a933a197785c6817ed0c7c965e44b4435ffde7277137e4f4f173d99dccb5c2e; complete read 41/41 bytes.
- Source SHA-256: 9724c281e7ed9818b5ec9beb58e9639c1cc05afa55d2e970c37b886ac30962fb.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 41/41 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 600a8549dd27027aaf425acecd50fe0658a5c391c4ce5e42aba82d32fd99e366.
- Compiled object SHA-256: c2dd2722ba9985b67bbd0a990e1de4c8bd89381e3153233c400d281930168c11.
- Compiled .text$mn SHA-256: 44fbf52b73668196038e31fe2382104d80971cfb36ab7dc8282447c56d01fae6.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

### Lot 94 static revalidation (2026-10-28)

Issue: [#670](https://github.com/soldieg/ReBLACK-XBOX/issues/670). Fresh Ghidra 12.1.3 confirms one contiguous 41-byte body at 0x0008DDA0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_e5fe76945ab1bb755e358ec95e4d159c322fac1af46dfe4cac5762ef67781255`, REA bytes `ev_882747ee02da112157934b2a7d05ff7eedf3a0aa23fe95815adc7bb9de80ae50`. Relationship coverage: partial; 0 resolved callers, 0 resolved callees, 0 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
