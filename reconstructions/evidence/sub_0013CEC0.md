# sub_0013CEC0

- Function task: [#1001](https://github.com/soldieg/ReBLACK-XBOX/issues/1001).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0013CEC0-0x0013CEEA inclusive, contiguous, 43 bytes.
- Call graph dossier: ev_bb40bc7037b94fb455106d96d54d3e6899adc2b68d8cd6f8470fbc818dd5272f; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0013CEC0, 43 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0013CEC0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x12CEC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_ca23bea7342b961f8250394af382aee36c87ba95a847f97bb0de1201405e0dd9; complete read 43/43 bytes.
- Source SHA-256: 6515000323cd65064fbc7ee6903720909512ece924fa1e9ddda3dce5caa8d6e1.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 43/43 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 586a1168fdddc267b5e44dc722da5f4704326f4a5774430b749fe65dea983749.
- Compiled object SHA-256: 4d6e766a5f6aa0113e05c633a83e9cc8c79654edf185cad21126ac59e7c925ad.
- Compiled .text$mn SHA-256: 1246db53ba54a67317d392d0a4c3200d8a09904d98662a0d71f3f080d5c697e2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
