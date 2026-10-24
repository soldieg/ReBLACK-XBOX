# sub_000BABC0

- Function task: [#877](https://github.com/soldieg/ReBLACK-XBOX/issues/877).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BABC0-0x000BABEF inclusive, contiguous, 48 bytes.
- Call graph dossier: ev_dccad234e64ece9956d1eb45770d11faac37bbb163c9bc36720186cddc7d089d; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BABC0, 48 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BABC0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAABC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_a5a4e77bb96c1c53ba51e26896178d8a332fcfff61aff53e153c6ca791e07051; complete read 48/48 bytes.
- Source SHA-256: 1af702b66be0e5936960d3c8a057ff2a42a1724d7252fe178ceac61d7c8cb349.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 48/48 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 39b3fb469844b6fec93eadf7f0affbd8ae8a30a430ffcad291ae423caf681f85.
- Compiled object SHA-256: 771e724efdae1f4d6c5698118fcee3998610f51ed1774d22855d14d8ae3440c0.
- Compiled .text$mn SHA-256: 347d5041ad6737d53869a9f33638594e6dd15f0b7b2b1e9dcb0a34a4f55de014.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
