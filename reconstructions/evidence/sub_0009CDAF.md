# sub_0009CDAF

- Function task: [#749](https://github.com/soldieg/ReBLACK-XBOX/issues/749).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0009CDAF-0x0009CDCD inclusive, contiguous, 31 bytes.
- Call graph dossier: ev_14f46db274be852b4e327a614bbd06f7d1eea9bf10066b085187abbfd8e1e764; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0009CDAF, 31 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0009CDAF.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x8CDAF.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_0abf62631fcce032fc6ebf57fada7a2a6470aad4aebd6b9db88e9db0f0c686b5; complete read 31/31 bytes.
- Source SHA-256: 7c26a5b553069e7de8210324c84f009a12efbf11e23f9e5c12a45c3422a40daa.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 31/31 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: c32a02d629e23e1aacf9a4d15a53af8d721bdead5c2a06e8612bd051c1dc4e2d.
- Compiled object SHA-256: b88452c1c32ca13c8023d27bc5bc73990e9b0aaf13020c6f4a22890baac80a66.
- Compiled .text$mn SHA-256: f9d0581a4564f510ccdb63db22bb79c9b06d04de278cf3938432ee876d40a9d8.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
