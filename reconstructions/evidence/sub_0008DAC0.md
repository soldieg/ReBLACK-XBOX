# sub_0008DAC0

- Function task: [#657](https://github.com/soldieg/ReBLACK-XBOX/issues/657).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DAC0-0x0008DADB inclusive, contiguous, 28 bytes.
- Call graph dossier: ev_131a523bb8f0ce1dfe777048795510875a62d75fd15542d7c48c1d71c203967a; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DAC0, 28 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DAC0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DAC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_fc6098ec565a395c831b367a4d26597a4d23ae814827a54ef3491e225271800e; complete read 28/28 bytes.
- Source SHA-256: 84f69be61d9cbe2c731af3551c955a49f0bf1357f2eb0d815c6975626e26fe4a.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 28/28 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: b57f3f9cfa8cc45c5a52abef6470fc1af9f817a2b7cf8a8839965e47d35acaa8.
- Compiled object SHA-256: a3d3315ef2651fdc5ada2fbb3feb69188308e55d35fa8cf2c4986fd8981d74ed.
- Compiled .text$mn SHA-256: 0f9150aae4d4da49f402231c6f0f5c6ff6c6022116461510f54d899eaaac985f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

### Lot 94 static revalidation (2026-10-28)

Issue: [#657](https://github.com/soldieg/ReBLACK-XBOX/issues/657). Fresh Ghidra 12.1.3 confirms one contiguous 28-byte body at 0x0008DAC0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_c06dc6deea1bb48da9c8418fdaaa5bf88e19a8a196ee84765ec1eacca2aae013`, REA bytes `ev_c490373b99d7001c5e7a482313338662968e97a90173a486988e82daea046685`. Relationship coverage: partial; 0 resolved callers, 0 resolved callees, 0 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
