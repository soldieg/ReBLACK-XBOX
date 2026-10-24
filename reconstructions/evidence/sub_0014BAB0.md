# sub_0014BAB0

- Function task: [#1065](https://github.com/soldieg/ReBLACK-XBOX/issues/1065).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0014BAB0-0x0014BB00 inclusive, contiguous, 81 bytes.
- Call graph dossier: ev_07473ecace23769ef231fc823e2069fdb535294716d2cfc4d291f454a7796b2a; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0014BAB0, 81 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0014BAB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x13BAB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_58aad85625f4fd53fcd7d4101fe4d077ed930215e64b40d47445881e3eed8e8c; complete read 81/81 bytes.
- Source SHA-256: dd9082c7d79d3fc35eaec29fc1300a05319c71b027656ce9cbf0565e5beaa0e9.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 81/81 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 0ab1e2827c56747a9fdd767b16c788a9904219c28dbc23f184c05c22717e2670.
- Compiled object SHA-256: 1ef7b6505c47670e57b97e8afabcb8ff023c3e0df003fc9a94b6b19302d7e61c.
- Compiled .text$mn SHA-256: ed8d2ca37d547b4d0745b47e80c40c8ef507bc1112126ec80646e5df58d70b7a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
