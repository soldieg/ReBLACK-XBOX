# sub_000BAF00

- Function task: [#878](https://github.com/soldieg/ReBLACK-XBOX/issues/878).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BAF00-0x000BAF4B inclusive, contiguous, 76 bytes.
- Call graph dossier: ev_5f466ec6615ddbaeced3805f7a951b41aa7b22ed5e5974ede42f4544c6d19d7e; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BAF00, 76 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BAF00.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAAF00.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_1cc69ab6b73a69b6257399aec158f56a83a053e9a3e300f72406948976f67955; complete read 76/76 bytes.
- Source SHA-256: a158330bfae3588deac2ea0d2606daf2daef780a74bb6d1294a3bbe90507ae63.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 76/76 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: ea24c171fe4b90d1dd882c00be446ad378d75683cc207af9699e647f6bbe75c5.
- Compiled object SHA-256: 7a7f8ba54a64d45575f196131e44bc2c8adcd862ffe8264419cdafad7f97eb00.
- Compiled .text$mn SHA-256: 29939ee933f5f899f1022718972359b546cf09433bf83139eee15ef04fa4da6b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
