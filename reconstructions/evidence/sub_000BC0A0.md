# sub_000BC0A0

- Function task: [#881](https://github.com/soldieg/ReBLACK-XBOX/issues/881).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BC0A0-0x000BC162 inclusive, contiguous, 195 bytes.
- Call graph dossier: ev_f91122e5e8c2b45cb216038c123a5955ee1b1214a6c8f9950173d0d82209dd66; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BC0A0, 195 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BC0A0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAC0A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_72fc3afcfe051fc2b412053d3ac5edd8fe83752d4752409cbb4830421ded799c; complete read 195/195 bytes.
- Source SHA-256: f5ff3f498403e0366bcb7668506874e8236e54cb406c224e8322c5a662de903f.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 195/195 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8470eea30653de3273ac2f39a61270409d82af76ad07471f20f61291d9153863.
- Compiled object SHA-256: 8b755796e33b1d2f10d6c104684d8464f50dee0d83d3189c0b8890229ebf467e.
- Compiled .text$mn SHA-256: cea0c9aa62705be1e8ac06fffc9f5c0abef6dd7d3c03c8eb14d5f39c43db6d1b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
