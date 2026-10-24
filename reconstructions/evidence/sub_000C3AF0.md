# sub_000C3AF0

- Function task: [#915](https://github.com/soldieg/ReBLACK-XBOX/issues/915).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000C3AF0-0x000C3BA5 inclusive, contiguous, 182 bytes.
- Call graph dossier: ev_d37016beee0b2076004ff1ebe30f21d8502033d4a94332250c1a9d48d20ce483; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000C3AF0, 182 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000C3AF0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xB3AF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_acee64f2c52f1c013d3d36859da8f395df8576d8bd9d30fc7a4859fb7660b19d; complete read 182/182 bytes.
- Source SHA-256: fd027d68733ab61beb325777c15048355e20b78d68fd27259b8f4c0c386595f0.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 182/182 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 465415431f5af89e15f51f81f8cfdd8d979c9176b730530d91bf4ced28bfde43.
- Compiled object SHA-256: 8c59c50bf6f4b496057d0416f633ffa14e966888dc53dc81d969a7bb514773d7.
- Compiled .text$mn SHA-256: 7fa65774f4d11dbd8f52fb1faa52c8489645e787e4d237f3146887c276931f16.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
