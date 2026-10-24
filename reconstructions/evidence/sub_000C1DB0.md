# sub_000C1DB0

- Function task: [#899](https://github.com/soldieg/ReBLACK-XBOX/issues/899).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000C1DB0-0x000C1E27 inclusive, contiguous, 120 bytes.
- Call graph dossier: ev_41819319be23556f30d1647051e6450522275c1e24f40e10d2a24dd7f9b1af02; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000C1DB0, 120 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000C1DB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xB1DB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_b2713441dd82b4e00338f2d7ffd1627dea195890d54f483335248df62aac76e2; complete read 120/120 bytes.
- Source SHA-256: 5ffa6bbece0d9ff8a67e74f95308d2da53f21c3a5e3df130b354afc899dd634f.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 120/120 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 0ae1bad2eea3124e8d12301dd1d83faee38833b0c9f79e00ed55f8f731820831.
- Compiled object SHA-256: d61fd55958dc8ea3c8b02eb6ba813e420cb5d8748c77746b29a58e3b150017c8.
- Compiled .text$mn SHA-256: 20ced68db6aed67116fd3fdb94f5d0a09c6c5076c8de7b592a39c822c20eb302.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
