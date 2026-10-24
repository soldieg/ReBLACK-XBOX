# sub_000C7BE0

- Function task: [#926](https://github.com/soldieg/ReBLACK-XBOX/issues/926).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000C7BE0-0x000C7E11 inclusive, contiguous, 562 bytes.
- Call graph dossier: ev_48e0753003ccc25a14910b0e5de81597557bac0bdfbf8d743a04565b41e8bb12; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000C7BE0, 562 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000C7BE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xB7BE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_0efee875beaf270ac479b029554ff0409dc23d1a880797539a243daad9ac8674; complete read 562/562 bytes.
- Source SHA-256: 9b214e533f71150306d46ec36139133611fdfd6426b88db8fdbf997608531c6f.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 562/562 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: e372c4f94bca9d75ee4f8015505884ddab47d9b650e46f3a488f863162dc97c1.
- Compiled object SHA-256: a5251f7ef2b51b928592addc79b1c2aececed5cfdf53a5fca2f6823347bce160.
- Compiled .text$mn SHA-256: 679fa001924330dec95f19a9009ea637193e9c9df846246a3925cb7289a68f5f.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
