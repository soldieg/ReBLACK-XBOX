# sub_000BF2A0

- Function task: [#888](https://github.com/soldieg/ReBLACK-XBOX/issues/888).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BF2A0-0x000BF2CF inclusive, contiguous, 48 bytes.
- Call graph dossier: ev_7cf0ad26ef1e28dbe87e0ed30cf723f4741116adf7342491a96df922c13c7a55; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BF2A0, 48 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BF2A0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAF2A0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_ba125c847252242f281de90ecc2b2c15b9cafe8ab5b76a33a6b29a61adda250e; complete read 48/48 bytes.
- Source SHA-256: 7e7175e91ec1e170bab6f42af1d31a3dd109c7ec6f03b25bded78ecade35ad6d.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 48/48 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 480f08543766ad4ddb64bbc18fc3ed6462b111b3e7484c9e45a56ce690e6e06b.
- Compiled object SHA-256: 325c860b552abff352c9fca7a478c6ab3d36f62475038ed5257113bf727ae8f4.
- Compiled .text$mn SHA-256: 18e908e459ecbc167dd7493ba0d3912862ed12b7b77606055fc22c3540c7ebb4.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
