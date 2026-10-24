# sub_000A1F2E

- Function task: [#771](https://github.com/soldieg/ReBLACK-XBOX/issues/771).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A1F2E-0x000A1F32 inclusive, contiguous, 5 bytes.
- Call graph dossier: ev_435e27c127cc8cc1bf500156d9daecfea6f55d2f8898c5c77148e55c4f42091f; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A1F2E, 5 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A1F2E.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x91F2E.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_6b39d1665a2ca262473a81b435807cd04d244ee2dee6a0dbed24b326daa67d67; complete read 5/5 bytes.
- Source SHA-256: c21c71569289ad1a133721afff24623fe09aaa8e08087c9d3b6f4f177d04b415.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 5/5 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: c5c8a7d413557b3490ab452031dcf447eff8a4a5f942b56ba27b64f62280985e.
- Compiled object SHA-256: 22d332c014860c581ad7fe728a35906d85981dae11e3bd8f0d03768fae3ece7d.
- Compiled .text$mn SHA-256: 4addbdb4c21599ee3c45d87c74f068512f5e4245a6af19e2272ebcc87ff4dbfa.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
