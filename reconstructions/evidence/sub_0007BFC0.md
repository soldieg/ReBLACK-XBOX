# sub_0007BFC0

- Function task: [#589](https://github.com/soldieg/ReBLACK-XBOX/issues/589).
- Confirmed REA/Ghidra 12.1.3 body: 0x0007BFC0-0x0007C031 inclusive, contiguous, 114 bytes.
- Call graph dossier: ev_daa18c86bf3f9aa2bf03b77624a1523216d855165a388c5e594801285b635245; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: sub_0007BFC0, 114 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0007BFC0.obj from the 2026-10-15 snapshot (complete=false), SHA-256 6dc826d8f26b288ee912cd303426a68a49bfdfd71b446a5fde49fabc9baaa2fe.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x6BFC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA/Ghidra dossier evidence: ev_daa18c86bf3f9aa2bf03b77624a1523216d855165a388c5e594801285b635245.
- REA byte-read evidence: ev_d95bbfce0cc8473af57aaf5967e8001146715ae9adb3512603e854a035d041de; complete read 114/114 bytes.
- Source SHA-256: 16022e0b03a1203c1378d9f0379a2dc1abb514e6621649912b42a9edd36559ec.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 114/114 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 6dc826d8f26b288ee912cd303426a68a49bfdfd71b446a5fde49fabc9baaa2fe.
- Compiled object SHA-256: 02747ef864f3e573034b00ee95ecfe1c6c39a8fa5ab33604b7d2f832238bdec8.
- Compiled .text$mn SHA-256: b4aab1cbed221549cb9cfb419e4b57b2360877b40175f8c8a18ff998f904f92c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
