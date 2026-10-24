# sub_000A2DDF

- Function task: [#781](https://github.com/soldieg/ReBLACK-XBOX/issues/781).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A2DDF-0x000A2DEF inclusive, contiguous, 17 bytes.
- Call graph dossier: ev_68dfabac73a7521b5fdd8ec0b469d87961914a66eb4246cf1011c9a39fc4a993; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A2DDF, 17 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A2DDF.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x92DDF.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_818eeafb916ffdd22f615910dc442f693ba62c8b33681e5506fe1811a825e12d; complete read 17/17 bytes.
- Source SHA-256: 199f424d4f4a9e1fec0dcc45e00fdd9fb38011edaa578eb7b8c9804976ad4347.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 17/17 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 99ef0a0216eab9aec4b49a6edb5281f0b2f0d7c5d2101649de9ad18915334e26.
- Compiled object SHA-256: d56387b8008ce21b3d5c0b8745e799be926be75ee04bfac5051d360245c6c34f.
- Compiled .text$mn SHA-256: 6e914ba12848b264526c84faf2e95ada281f321bd5b8e492879c17af034c76e2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
