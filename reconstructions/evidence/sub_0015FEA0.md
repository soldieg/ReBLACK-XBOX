# sub_0015FEA0

- Function task: [#1137](https://github.com/soldieg/ReBLACK-XBOX/issues/1137).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0015FEA0-0x00160005 inclusive, contiguous, 358 bytes.
- Call graph dossier: ev_5aa67405170acb6b0e4b9414a9616bf2e4a258de545c3d5570f0ac68e254a855; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0015FEA0, 358 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0015FEA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x14FEA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_233d810152265c84e0ba539be2c4d10f9f6bdfa3411ce1c6ef604c652e9edcc4; complete read 358/358 bytes.
- Source SHA-256: cf402fa5c699a1077422f5e0f4f01fd527a27834dadfe27ca4e9d522490130f8.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 358/358 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 88e57763b16c6c88d2e59a7fc2c45589ccddb2c45436ac133434b9d5898cf7a1.
- Compiled object SHA-256: cc1763b1f627c420d86151b215384ee08e2304d5dc40e72be2783f03b2732d3e.
- Compiled .text$mn SHA-256: fe0bc08e8e36695b26368fc1e4ec3aa4f48a2f2c3a27a604096af2043d3364ad.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
