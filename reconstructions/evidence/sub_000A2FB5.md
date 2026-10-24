# sub_000A2FB5

- Function task: [#783](https://github.com/soldieg/ReBLACK-XBOX/issues/783).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A2FB5-0x000A2FBD inclusive, contiguous, 9 bytes.
- Call graph dossier: ev_79aac5c497c92ad7866953f5830d2ad6811425867b14ead06dcb2332eec31103; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A2FB5, 9 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A2FB5.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x92FB5.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_955c49378522aa8858729980ff61f24aa441ed5ea840bea9e635c01cd8277bf4; complete read 9/9 bytes.
- Source SHA-256: eb1fb11c33143a2c0b1d9a1414cd30a5e9aff5851f4597b13150545faa36f63f.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 9/9 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: c76fe23ce4d5337aac96f30f4b9e1ea51e551e3b80ffdd6e5e972b47904dba34.
- Compiled object SHA-256: 2389c1babd9c584279fb1bf83e12670b12889f3438034deb8e879c7b7acd6718.
- Compiled .text$mn SHA-256: 911be2b7419fc517d32a218b57427f54f2fa48d3f93cb6f9302124287331308e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
