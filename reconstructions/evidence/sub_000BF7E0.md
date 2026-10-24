# sub_000BF7E0

- Function task: [#891](https://github.com/soldieg/ReBLACK-XBOX/issues/891).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BF7E0-0x000BF81A inclusive, contiguous, 59 bytes.
- Call graph dossier: ev_f52ec3fbde611b27ff7d00cb2ccc98cf3f683329c767b8ea926316d2a5ea92c2; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BF7E0, 59 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BF7E0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAF7E0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_44aa134d267f03993acfb10339538b2bd370f189914517afc104b5ed385078b9; complete read 59/59 bytes.
- Source SHA-256: 68b43d2ddec4828acd36bac3b0938b374bf0c8d392081b2c1e2c8fc324556bfd.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 59/59 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: a147a6ee1222a78774a14d16352b36eef4c3dec704affd13a015794a163b24e4.
- Compiled object SHA-256: ac6006af6de43ba608789d9069333250703949c0d83ea58e188a79ac3638cc0f.
- Compiled .text$mn SHA-256: 720b04e29af778b035c68346fd7adbba51c33907de6bd02b014fbf7bb7131702.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
