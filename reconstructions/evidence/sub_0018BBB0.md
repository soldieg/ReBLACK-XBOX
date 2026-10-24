# sub_0018BBB0

- Function task: [#1265](https://github.com/soldieg/ReBLACK-XBOX/issues/1265).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0018BBB0-0x0018BBEB inclusive, contiguous, 60 bytes.
- Call graph dossier: ev_4f650f00b77fa9a4e6e9c79fe1597c3678b450db77a2da12ab67e46ad8c7f1b2; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0018BBB0, 60 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0018BBB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x17BBB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_fd98502661000a0bdb8e14011d76138113c272a82dd470a1cfda3ea2b1f92236; complete read 60/60 bytes.
- Source SHA-256: 758a7161814277930a4a7ee2e7a21e59caf62730eb5a6a986e6288c5f66f7db2.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 60/60 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 4c8a4393b3c0d6569507c0387f613d3117771280c2fcee760675503fe9c20a16.
- Compiled object SHA-256: 363cf4be48486eea9cc03b77178e3a9babf05a0df8b1aa48c8a2ceda9081699e.
- Compiled .text$mn SHA-256: f6b4ef8366a7a32fd123c993ed7da1dedb15f0a573e2f1061c929f1f55fde2ad.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
