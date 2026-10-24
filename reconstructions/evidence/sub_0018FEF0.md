# sub_0018FEF0

- Function task: [#1295](https://github.com/soldieg/ReBLACK-XBOX/issues/1295).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0018FEF0-0x0018FFA0 inclusive, contiguous, 177 bytes.
- Call graph dossier: ev_1df0b836201f3b01837c1602c66b628b9dc738105a9495f423e1f01ecacadb81; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0018FEF0, 177 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0018FEF0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x17FEF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_b2b4b2357d12c953001c485c542449f37f32dd85a3142771e5f04cc490e9bf51; complete read 177/177 bytes.
- Source SHA-256: 817a9e7fbe2d1fe7ee7df3ba00b4a6d9cc0b4facbd3f72202724c7df10b9eb34.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 177/177 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 48d30e4fdc8d809d12b26763ff86a0614498f61f9730ef0c5eedbf0af2b9bfa8.
- Compiled object SHA-256: 0e523f834a491d803ee703eb07c2c4c05577fc41a4b4d655307ef30d1bcf1b7a.
- Compiled .text$mn SHA-256: b2e0df30ccdec83c2046e93323a5f85f7ad42a0134cde9bd2831582d09b89f5d.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
