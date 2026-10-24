# sub_000AA5FA

- Function task: [#827](https://github.com/soldieg/ReBLACK-XBOX/issues/827).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000AA5FA-0x000AA627 inclusive, contiguous, 46 bytes.
- Call graph dossier: ev_6d1cac8d638f2cde3228a763d754ad7a1f17a68b6e734ff8ca6b502cd409468b; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000AA5FA, 46 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000AA5FA.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x9A5FA.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_36ed7263ac1d651e7a042a1111c0dd27bf4233711c4702b286eb87c1bd4ef48f; complete read 46/46 bytes.
- Source SHA-256: a803fa0ae50c1d4871edcbef1a362b49161073d8d907df663cc4ddb8af2cef0c.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 46/46 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: df175a7924b8a18791b0e6625eaf5b6bf0bc4a2b2b9c57ab96f456e03263fd4b.
- Compiled object SHA-256: f9e489500adcbbd3a6889e18d3bb55ca24e369347481d2fed6e016af7c78f0b9.
- Compiled .text$mn SHA-256: 055c5c3f3720cff24d44a0bd7ab41f42689d7d25b857c5d38790d785029b022b.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
