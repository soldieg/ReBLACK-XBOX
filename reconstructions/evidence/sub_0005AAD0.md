# sub_0005AAD0

- Function task: [#492](https://github.com/soldieg/ReBLACK-XBOX/issues/492).
- Confirmed REA/Ghidra 12.1.3 body: 0x0005AAD0-0x0005ABE2 inclusive, contiguous, 275 bytes.
- Call graph: 0 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: sub_0005AAD0, 275 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-23).
- Candidate object: candidate/sub_0005AAD0.obj from the 2026-10-15 snapshot (complete=false), SHA-256 7e4efde7154e4192e0d3d66f602b950643b2454fccbf76c79fe969ae3c71c9dd.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x4AAD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA/Ghidra dossier evidence: ev_e81c434ed5264bc2d252a4af9c851656240fd7a7dbe969a17b650b324d8a0fea.
- REA byte-read evidence: ev_2a280829427e008659a159d58b93525030fb68a40820ecb93671cdd00c3054ac; complete read 275/275 bytes.
- Source SHA-256: 3855a8153d69b99b4cc32622a067ca276170f6ae1be0cdcf0fc60823d2bf12f4.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 275/275 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 7e4efde7154e4192e0d3d66f602b950643b2454fccbf76c79fe969ae3c71c9dd.
- Compiled object SHA-256: 8567265f5cdbc0fdc298f7049cda1d8ab07e614a4e066717af3c82835a6aa09e.
- Compiled .text$mn SHA-256: 95f30946f2505544bdd2daa0f62a3db210a4e1185767f3f724308fe861a9d761.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
