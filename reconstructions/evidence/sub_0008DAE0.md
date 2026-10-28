# sub_0008DAE0

- Function task: [#658](https://github.com/soldieg/ReBLACK-XBOX/issues/658).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DAE0-0x0008DB08 inclusive, contiguous, 41 bytes.
- Call graph dossier: ev_c4300d31162abf629add8edf4680b2693b1d3cfefcba213958446667f9c26f87; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DAE0, 41 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DAE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DAE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_01febb5256b15a913eb995b5bea972c5a6a8ed2272e2514e462cd0c520c121ab; complete read 41/41 bytes.
- Source SHA-256: 77f976e05dc1291a4178ebfad943e42df7b5a49e3373f00c4e48503588570c91.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 41/41 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 3e7f33a446f388887a782b4d689e6e34ce4edf2b25ed1b6e32d4f3fbcce914ff.
- Compiled object SHA-256: 38dedf035a2cdddd7f463c58a621d8ba58a2110c26a85faf19bd9c17bda16bb9.
- Compiled .text$mn SHA-256: 42d8a4dd0c7b5df63f7a32cd14e20622880c88f0dccfce80b387efc5f7118e20.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

### Lot 94 static revalidation (2026-10-28)

Issue: [#658](https://github.com/soldieg/ReBLACK-XBOX/issues/658). Fresh Ghidra 12.1.3 confirms one contiguous 41-byte body at 0x0008DAE0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_bd213b9fb7940a2f57f86e6b999b89ed38d06365c5304510f71403c6e25d6c54`, REA bytes `ev_fdeeee7b1bd118b5b6be5bde5c32320bef6eadb055d7f370cd570c099d246918`. Relationship coverage: partial; 0 resolved callers, 0 resolved callees, 0 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
