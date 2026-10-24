# sub_000CBDA0

- Function task: [#939](https://github.com/soldieg/ReBLACK-XBOX/issues/939).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000CBDA0-0x000CBDFF inclusive, contiguous, 96 bytes.
- Call graph dossier: ev_2a0574d72662d91fa8913af15e346a509d307f66123ee4aafde06cf7c0d2d7ae; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000CBDA0, 96 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000CBDA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xBBDA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_4db91988099c8f60e3d4aa68c9adb2e915af20eb248f6feb03822fdc128aff5d; complete read 96/96 bytes.
- Source SHA-256: 7e31de587f0307da750a401655901441665f50f33e74340579ee8cc83036b64b.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 96/96 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 94e02c7c585de2284269469430b9d9f0ff2a79c3e174d91c4ab9a8089d1fa983.
- Compiled object SHA-256: 4fcb770d228809ea84abe34f4c0af9cf642c37299d3e5d11a14fa2b429be2287.
- Compiled .text$mn SHA-256: 70ab4e6a8e03706ea7035086173150922a4bef9435be3405a1fb59a6089def8e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
