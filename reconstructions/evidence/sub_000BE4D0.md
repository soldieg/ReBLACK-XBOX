# sub_000BE4D0

- Function task: [#886](https://github.com/soldieg/ReBLACK-XBOX/issues/886).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BE4D0-0x000BE50B inclusive, contiguous, 60 bytes.
- Call graph dossier: ev_66db1b1db6675c1a8f3e4b62c167d5a75a2ccd72cb4d3e8ee5eb904aa653d000; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BE4D0, 60 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BE4D0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAE4D0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_162627bcda4c705929966926e4a33bb423bef59f86af61a9297b97f28334cbc2; complete read 60/60 bytes.
- Source SHA-256: d2f8519fbedfa54d70150cd73b8c0709db65f5986a8f356f3a6072037406619f.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 60/60 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 1fcbb5add4dcd130433930dc924ce396dc3782483b419de460ada34c4a6e2290.
- Compiled object SHA-256: 09929ff77b5f6b7182e560aa11d65318658038edc69068455b47b5577150d2b1.
- Compiled .text$mn SHA-256: 4310d446df64c51c205a2b0c4d9e748c2cfaaeb218eeb750ef45910bc9cfce45.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
