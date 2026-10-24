# sub_000ABCC0

- Function task: [#832](https://github.com/soldieg/ReBLACK-XBOX/issues/832).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000ABCC0-0x000ABD64 inclusive, contiguous, 165 bytes.
- Call graph dossier: ev_e389c1965fa909981f156d5385588ea0697be05d956b1556ad565df20a138f98; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000ABCC0, 165 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000ABCC0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x9BCC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_0e4bf902ec4f1857b44bb1b5b2e3451d2847de2d1d150b8b278898756b2975a4; complete read 165/165 bytes.
- Source SHA-256: e187ec3466d502c0ff5b5cbb00777201be3916843274e20a50867049c505c783.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 165/165 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 0d52978d2562184f2b834b43d34748af3a02f442cb7e203f566ee41a83bd03db.
- Compiled object SHA-256: 8a3cdfae9c246b77e469546529303d190a30c83499dedc5234e88cdcda1d1469.
- Compiled .text$mn SHA-256: f669072cd48e1add4711678f787cc87bf4a398115c9f90eb858ce9e4809378f6.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
