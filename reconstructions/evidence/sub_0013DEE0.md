# sub_0013DEE0

- Function task: [#1013](https://github.com/soldieg/ReBLACK-XBOX/issues/1013).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x0013DEE0-0x0013DEFE inclusive, contiguous, 31 bytes.
- Call graph dossier: ev_d56a18223e230c3f21647b5c6110641676de4ac27170c8add3d471f7f803112a; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_0013DEE0, 31 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_0013DEE0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x12DEE0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_1f629a8777dd2e67f74bef2f5048329398781d3f5620d59fa35baa9520389c6a; complete read 31/31 bytes.
- Source SHA-256: 6852f198801a5f7108bfbf4626633f15329474c10106066fecf654cf9b48ee1c.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 31/31 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 5dbfd77f6856615a755f1e5c1678299df5808ae35046b1c124dae3e260a773bc.
- Compiled object SHA-256: ce9d311fdd934c310ee1593b41fdaaea3b6e539a642e4cb48f8421da2c0a6709.
- Compiled .text$mn SHA-256: 0f3f3d0d9ffec97f7cad30e5bc5ba4575046535a6fefb1fe462ff8ff3ad15e1c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
