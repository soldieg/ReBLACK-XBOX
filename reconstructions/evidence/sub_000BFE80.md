# sub_000BFE80

- Function task: [#895](https://github.com/soldieg/ReBLACK-XBOX/issues/895).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BFE80-0x000BFEBF inclusive, contiguous, 64 bytes.
- Call graph dossier: ev_2f01de6d97d0ef905b0c63ffed60682a44505750f149d919deb20cc2b9543464; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BFE80, 64 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BFE80.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAFE80.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_287ea0fb61a13f43ff6fdba40df09bcff1d12ba4d903e1f25977df5810a9fda7; complete read 64/64 bytes.
- Source SHA-256: 50e51f1d485ebdab5160daf014d592f5296d6f37927cb5fc763b1adf84524f00.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 64/64 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: d9c66a1bc80d658e7ac4264f7b71ec939464f9ecba6a10ea47e1de4a315dfedf.
- Compiled object SHA-256: b1d3be2afff2c4db7f39ace3c3623523813b472596cc6fbc7b55b0158799d86f.
- Compiled .text$mn SHA-256: c88b64aaa7e5d9e8827f537b30d2c2005dc9415fb233ae850e191672c0de40bf.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
