# `sub_0002EED0`

- Issue: [#301](https://github.com/soldieg/ReBLACK-XBOX/issues/301).
- Range: `0x2eed0?0x2ef1c` inclusive, 77 bytes.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Candidate object: `candidate/sub_0002EED0.obj`, from the 2026-10-15 candidate snapshot (`complete=false`), SHA-256 `833b610be403789f0a1ae0bea03dee71f39bc86b606a75b6688b21d8f9a9738a`.
- REA/Ghidra 12.1.3 function dossier: `ev_61cbd179d83b63876a5651c280f7ff9d639a8149e3382f27a56def7e1d188287`.
- REA byte read: `ev_d18a9346d814b12206740c94f57f4f51ca9493e81cdfd890490449caf19dd3bf`.
- Observed machine behavior: Uses the observed stack value and shared command array to update the selector and cached table value; may append command 0x44.
- Calls/references: One resolved caller FUN_0002EFC0; no direct callees. Part of the shared-state group.
- Reconstruction source uses a naked MSVC x86 inline-assembly carrier; this does not assert the original source prototype or object type.
- Compiler: MSVC 19.51.36260.0, x86; `/TC /c /O2 /GS- /Zl /Gd /Gy`. Compile passed.
- ObjDiff 3.8.2: 100.00% against the named candidate object and 100.00% for the compiled symbol.
- Direct byte comparison: 77/77 compiled bytes equal REA loaded-PE bytes, XBE raw bytes at the mapped `.text` file offset, and candidate `.text$mn`; candidate and compiled COFF relocations: 0 and 0.
- Candidate object SHA-256: `833b610be403789f0a1ae0bea03dee71f39bc86b606a75b6688b21d8f9a9738a`.
- Compiled object SHA-256: `8c72cead3972f155ae40b8bb07c805aa477a4f8d93b426f851658039a3f17964`.
- Compiled `.text$mn` SHA-256: `557c797e5212e1d5bf9c061dd678b959f2aaa52f4fcdcbd65e865761dabc38c2`.
- Xbox full link, post-link XBE diff, and runtime: not run.
