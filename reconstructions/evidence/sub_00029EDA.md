# `sub_00029EDA`

- Function task: [#367](https://github.com/soldieg/ReBLACK-XBOX/issues/367).
- Confirmed REA/Ghidra 12.1.3 body: `0x00029EDA–0x00029EDF` inclusive, contiguous, 6 bytes.
- Call graph: 1 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: `sub_00029EDA`, 6 bytes, category `unmatched` in live progress snapshot SHA-256 `79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c` (retrieved 2026-10-23).
- Candidate object: `candidate/sub_00029EDA.obj` from the 2026-10-15 snapshot (`complete=false`), SHA-256 `b83cef3b031e1922acf717bcff41664d186bdd236e402ad72c64751672cd4658`.
- Target Xbox XBE SHA-256: `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; compared raw file span at `0x19EDA`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`.
- REA/Ghidra dossier evidence: `ev_37f3a2f51e4c23670ad3ff83448d31cd5988266af802a58bc0899bc002bd6fdc`.
- REA byte-read evidence: `ev_913549c75e864a2517f6827172b48f2b4a0bda35c0b6506448e698e4b9eedb09`; complete read `6/6` bytes.
- Source SHA-256: `0be6b27ba675ff25bb6b8093fbd5a53efdea8f5489ba6569fb52c7709a7653ba`.
- Compiler: MSVC 19.51.36260.0 x86; `/TC /c /O2 /GS- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate `.text$mn` = compiled `.text$mn`, 6/6 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: `b83cef3b031e1922acf717bcff41664d186bdd236e402ad72c64751672cd4658`.
- Compiled object SHA-256: `b000e6980685d4204f49f864ebaf3e5c5a56d2e27067a7c2ee9ede76a8312ca8`.
- Compiled `.text$mn` SHA-256: `c6a2119142a3d6b68a61ebf945f8d85074f91bb9a2a5d908ece30dea167a69bf`.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
