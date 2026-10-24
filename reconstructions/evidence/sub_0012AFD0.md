# sub_0012AFD0

- Function task: [#976](https://github.com/soldieg/ReBLACK-XBOX/issues/976).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0012AFD0-0x0012B168 inclusive, contiguous, 409 bytes.
- Call graph dossier: ev_4796a18ee8f08be39326232e635b5985831633b816f8cccfe44a70aa52ec4255; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0012AFD0, 409 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0012AFD0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x11AFD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_0477ef7e78a6c2b80819c11321d9b07082e758e8e48fb5601825258f40ccbbf3; complete read 409/409 bytes.
- Source SHA-256: 17a898c90cb00356008d6be25a319ea3d3fdd614ace6efaa7cc7479318505b94.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 409/409 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 24a3db362f94e5211d517eed1f3cdfa9a440532407ff2f822f9d615293cbec23.
- Compiled object SHA-256: 94bfa41786b9cb8d6c4687e55ac2a3f005f607fff16bae845bfcfe87fc1ebdac.
- Compiled .text$mn SHA-256: 038a32f5971cf887f30161a36219aad3a834f4ebe76f051d1bf14154f4245f07.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
