# sub_000A0DA0

- Function task: [#769](https://github.com/soldieg/ReBLACK-XBOX/issues/769).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A0DA0-0x000A0E3A inclusive, contiguous, 155 bytes.
- Call graph dossier: ev_57f74b1738191f24c1c2a6e5867cc401b790d446da4bca748e9c087041ef0692; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A0DA0, 155 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A0DA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x90DA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_cf4e77daeda82a5b35d834393f51d37b44dd2e4017b8597fe984820fb1e0f6ad; complete read 155/155 bytes.
- Source SHA-256: bbd871f54b52b81f27df6e6cfdc8b37c684b9410f9ddee0fe08a433d68fe5849.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 155/155 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: db1d42ad4876b35f92b2f9645dcf4a589f5e3a3368c901bcabfa9372c08ca54a.
- Compiled object SHA-256: 5d5cc1f359acd0eba9552564771415bae8afc5dba965039cf57ef35c6aab953d.
- Compiled .text$mn SHA-256: 0f1a306609de351468000e68df8ae514adb71226a521da92acbcb9920b640fbd.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
