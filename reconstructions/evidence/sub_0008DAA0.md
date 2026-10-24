# sub_0008DAA0

- Function task: [#656](https://github.com/soldieg/ReBLACK-XBOX/issues/656).
- Confirmed REA/Ghidra 12.1.3 body: 0x0008DAA0-0x0008DABB inclusive, contiguous, 28 bytes.
- Call graph dossier: ev_a0c47e51f3191d1b18551aebb4531cdcd3da1464521db2d3e003000d598bd986; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0008DAA0, 28 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0008DAA0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x7DAA0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_cd9429e79a280f88276505ac867a68c22957bcd10bb0b625f3524ad4720622d0; complete read 28/28 bytes.
- Source SHA-256: 62bac07061c37649a1ff8ef2ca50d13d3942cbda9f82519fce13c65421d45183.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 28/28 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 867b6184f01329c156017bb04639164c6bac7ede2c108e2cb2bfe3f1b19fc59e.
- Compiled object SHA-256: 9824af26e9697eb01c00367b507610c5c1324c35eb12b72961842717637b9638.
- Compiled .text$mn SHA-256: 918328c34b3f36f29ab0eff79ef27ab9ea49c993683932ab73c83d225c896142.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
