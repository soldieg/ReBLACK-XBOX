# sub_0013CFE0

- Function task: [#1004](https://github.com/soldieg/ReBLACK-XBOX/issues/1004).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0013CFE0-0x0013D00C inclusive, contiguous, 45 bytes.
- Call graph dossier: ev_91af379eba5d49e056d1b1d025c2d518cd815bae3d20674ddb9a6bba03437b8d; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0013CFE0, 45 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0013CFE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x12CFE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_041ca359daa99da83709431cd58abb106be766862bd4ab949c3671a5d059e6c6; complete read 45/45 bytes.
- Source SHA-256: bb19f6a5445b5c06311da6e69718893b99286a804ea7e2c0cbcdfd3ddca97393.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 45/45 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 3e7212e0fd03dcb13ffd85419ddc1aeca83614c24b2f7d429f0cfaf90d2f4d07.
- Compiled object SHA-256: 68e034f73113cc716774c8e33a86db613cdfeac61f10b649ce991eb2f919946b.
- Compiled .text$mn SHA-256: 145e2039d29ed55bfc4a81f56df24d04fc51802f9120eed4bc6cde96a0681f89.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
