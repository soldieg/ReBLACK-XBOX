# sub_0009CF6A

- Function task: [#752](https://github.com/soldieg/ReBLACK-XBOX/issues/752).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0009CF6A-0x0009D010 inclusive, contiguous, 167 bytes.
- Call graph dossier: ev_e7cf2faca024eb1c3a571aa6cafc602bc25fa1fef3f1b739182d95324b788ebb; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0009CF6A, 167 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0009CF6A.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x8CF6A.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_19639b7dcc2c76439ae285ecb91cc711b37f5de94d90aab3d521966a5307bdf4; complete read 167/167 bytes.
- Source SHA-256: 7dc7cdfc33459198b5c5cab52a8cd114432e4f1961c2bb177476e9522ef65b66.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 167/167 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: c4d3b768419e96e8f01d0dab23a47a9bf37d9c55162608d460d581710c03b861.
- Compiled object SHA-256: 1d4078278a5b472f7a711f0e5a47dba58a7bc5580738d48b70324eb9f6b6c262.
- Compiled .text$mn SHA-256: 30cd559a56bfb3bf2db8c01544a88c710942a28b4611ff15bc1ccbd914802833.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
