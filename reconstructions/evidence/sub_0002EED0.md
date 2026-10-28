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

## Lot 83 fresh revalidation (2026-10-28)

- GitHub Issue: [#301](https://github.com/soldieg/ReBLACK-XBOX/issues/301).
- Fresh Ghidra boundary and relationship evidence: `ev_a7b42cc4d4546d6c0fd8bfc818a4669f0c32d70e91bc468ec3b4f9a70a7e1261`; REA complete-byte read: `ev_e3a0fbdb56f6d0e260144c310c6d0461b295e252f2f1b4d730b1155a95bafdcb`.
- XBE, derived PE, XboxRecomp split, named candidate COFF body, and freshly compiled MSVC x86 body all match for 77 bytes; SHA-256: `557c797e5212e1d5bf9c061dd678b959f2aaa52f4fcdcbd65e865761dabc38c2`.
- Candidate and compiled COFF `.text$mn` sections match byte for byte; relocations: 0/0.
- MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /Zl /Gd /Gy`; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Static byte-emitter result only. Full Xbox link, post-link XBE diff, runtime, and gameplay remain pending; semantic behavior and formal ABI are not inferred.
