# sub_000AA57B

- Function task: [#826](https://github.com/soldieg/ReBLACK-XBOX/issues/826).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000AA57B-0x000AA59B inclusive, contiguous, 33 bytes.
- Call graph dossier: ev_5e5c2f9d2d4d7db3dbad116037d19a07ebb461d5a83ef48ba4717a2ff6425925; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000AA57B, 33 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000AA57B.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x9A57B.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_8fc9231de6b9b2ba8011ea579e15a913907b9abf7bf72f32ebd2484bbdd00a76; complete read 33/33 bytes.
- Source SHA-256: 81e65d8551275c57ec47d6651bc51f59225a929abfae98199f833cf3d6def57e.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 33/33 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 6d91ded0f9508ca697cdbc55d48253c195f617efa2ddbe04c56204b1a2a39f8f.
- Compiled object SHA-256: 9e758cf4f378dd456a07615ea2b476c261b0d112f71ca0b7e1fc378acb7fda5c.
- Compiled .text$mn SHA-256: 9ad9cc8df8ebf35ebbe943dd8b812d655be7135aaacd923b81222838fc1c2ee2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
