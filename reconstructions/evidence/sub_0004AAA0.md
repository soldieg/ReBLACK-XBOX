# sub_0004AAA0

- Function task: [#427](https://github.com/soldieg/ReBLACK-XBOX/issues/427).
- Confirmed REA/Ghidra 12.1.3 body: 0x0004AAA0-0x0004AAD8 inclusive, contiguous, 57 bytes.
- Call graph: 1 callers; direct callees: none observed; unresolved calls: 0 (none observed).
- Dashboard candidate: sub_0004AAA0, 57 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-23).
- Candidate object: candidate/sub_0004AAA0.obj from the 2026-10-15 snapshot (complete=false), SHA-256 7925d016a294be9197c56e55fa1f2cb413a9d2c9dc41ad698f343ef09b396380.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x3AAA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA/Ghidra dossier evidence: ev_b7562437e53ea529687b741d0f23241add81f138b377cd8e75f00613dd69fe84.
- REA byte-read evidence: ev_8d22935df2aa8a3bc24c3fc070cfafc1e57530cd83d8dc578dc8e67785166208; complete read 57/57 bytes.
- Source SHA-256: 8df24e59403aa948764559dd9ac17331daf258dcd04d48e04ebcdf36afc7079b.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 57/57 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 7925d016a294be9197c56e55fa1f2cb413a9d2c9dc41ad698f343ef09b396380.
- Compiled object SHA-256: c42483a5f29a11b38226441071ce06deeaecfdcc7efad1bb1e987d82beb3e1c0.
- Compiled .text$mn SHA-256: 5d66401f6da568b09f9c27c90240854b3d49b957d73b5b0fcef25064721dcce7.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
