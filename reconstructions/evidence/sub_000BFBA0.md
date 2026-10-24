# sub_000BFBA0

- Function task: [#893](https://github.com/soldieg/ReBLACK-XBOX/issues/893).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BFBA0-0x000BFBD2 inclusive, contiguous, 51 bytes.
- Call graph dossier: ev_02f5eaf4729e19c01f8cb55d0301bcdd7feab946e1226f1533b40a2d842419ed; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BFBA0, 51 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BFBA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAFBA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_6a0ce4ec79c8575852c9158dea84aa2f63dd8fc3d2a45976548f920266770a85; complete read 51/51 bytes.
- Source SHA-256: adb3d19df956b75c125a73252abae98cc99a41157b602f467f699db402edc609.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 51/51 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 56cb70750ba9218d4cbed3dca9f04747c2ee862f6f95a465b10b04c6d8cbb8b0.
- Compiled object SHA-256: 7bf7c62220e16775679a63ed6dab939d0fabbfe3ac67409b71e6144d1fe07410.
- Compiled .text$mn SHA-256: a5173ad2f6dadbd4ee67dd558eb1afb88877f1c6304a61efabb5625f3aeedf91.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
