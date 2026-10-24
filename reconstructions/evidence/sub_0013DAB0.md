# sub_0013DAB0

- Function task: [#1011](https://github.com/soldieg/ReBLACK-XBOX/issues/1011).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0013DAB0-0x0013DC9D inclusive, contiguous, 494 bytes.
- Call graph dossier: ev_3693ecd25a1b22003da17e4534c2bfb9556e5c609047fd34157d8e3877fb0e47; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0013DAB0, 494 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0013DAB0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x12DAB0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_30a857e4a75c4ae7edad89299cc4c14ed3e34d19a365bbdd5ba4c31b85f483c0; complete read 494/494 bytes.
- Source SHA-256: 31071130f606ee90d2f3109359487779ace5969ab05ec9e66ff83dbe535b804d.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 494/494 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 8d84e9064b702c2519ceb219d0751e0dd85cf7e9a34d2efe668dcd13f3fbb18d.
- Compiled object SHA-256: a05b20efab8cfce6e09d6289e08968152498ab6b55c4e381d2f6a69a13f2fc34.
- Compiled .text$mn SHA-256: d23b7f835381d647a563d46c5875b01dc5921dd672b206ae2ba9acbfe2d646f8.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
