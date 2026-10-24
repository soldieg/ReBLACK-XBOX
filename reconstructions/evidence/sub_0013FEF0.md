# sub_0013FEF0

- Function task: [#1036](https://github.com/soldieg/ReBLACK-XBOX/issues/1036).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0013FEF0-0x0013FF74 inclusive, contiguous, 133 bytes.
- Call graph dossier: ev_2b5307638723981f86e7b81a0a0d1c4fd66e4d8d2d228cb68dc431c4546b7508; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0013FEF0, 133 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0013FEF0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x12FEF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_127d9712c50b46fce0e029802e9fbafba93a8524773e5b3ead1ba034b8b0ae55; complete read 133/133 bytes.
- Source SHA-256: 9fdd39d7d5d82951aaee26bb8f4146becc1120c199465b7a13de72b9c9b65f64.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 133/133 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8fe0347fdd2a55234945ce897bea88b34f4830188c02588ef59f5426a21f0c47.
- Compiled object SHA-256: 81dbcdbfb2d06051ca6244f84e7cf217b5745824b16f5434008bad87417d76a1.
- Compiled .text$mn SHA-256: bf70909a4b064b69924dfecffe60c6e4518033175731cb2620e4302316604775.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
