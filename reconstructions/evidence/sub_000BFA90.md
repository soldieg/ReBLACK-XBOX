# sub_000BFA90

- Function task: [#892](https://github.com/soldieg/ReBLACK-XBOX/issues/892).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BFA90-0x000BFAE8 inclusive, contiguous, 89 bytes.
- Call graph dossier: ev_617f09ede0948a227dfa7229beea179b3ce104ca8c7594ab7963d6fb32c525d0; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BFA90, 89 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BFA90.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAFA90.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_4717c7258d248e09a9cd61d65e81e131782f8f68d40e759410e3bda15047edd5; complete read 89/89 bytes.
- Source SHA-256: bb0b82461bfd6a3e860c44add348307634677eed34a0c6d014babf542fed311b.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 89/89 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: f1bfb8ea68987f5a41f3ea0f3dbfeef70852477634effdf66acace41142b55f9.
- Compiled object SHA-256: 70bba276e60c877b1c586efd5875e397752cec497a0db777999f02eca8435ca2.
- Compiled .text$mn SHA-256: a52cf51f1d503e7251d534adc699dca6553ffc851e0e782abecc6ff07f1a2a1a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
