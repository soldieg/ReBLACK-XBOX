# sub_000DAA50

- Function task: [#955](https://github.com/soldieg/ReBLACK-XBOX/issues/955).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000DAA50-0x000DAB11 inclusive, contiguous, 194 bytes.
- Call graph dossier: ev_9abae14fdb45ccfa2f443130eeccc165fd4fc12e1582d194172551232e0f7588; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000DAA50, 194 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000DAA50.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xCAA50.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_dcadf1174b854f43a8ae901af757b4c0b7da77c771159637d1ef9b230d820c49; complete read 194/194 bytes.
- Source SHA-256: 2a258cbee4ce652b86f8b268aac71d46680b2cc4c9704852aafcce3292a93149.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 194/194 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: c0fe94d532497649467cbd566a55622d9a9088eca4b1fb015e41a89ce3f3b440.
- Compiled object SHA-256: 46a3575557e908bd602916aeb8557fcb34c7125688a2f3b21a5e7abd2d136f26.
- Compiled .text$mn SHA-256: 75df91243216d3253968e12823bd4e77e61ccb772ffa933d22041e55c086b5ca.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
