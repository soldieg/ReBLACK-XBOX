# sub_000CF5C0

- Function task: [#948](https://github.com/soldieg/ReBLACK-XBOX/issues/948).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000CF5C0-0x000CF841 inclusive, contiguous, 642 bytes.
- Call graph dossier: ev_d989fcf9fe3540642007a65c9a9d886292f5a025c28e27183d50190ce6fec74b; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000CF5C0, 642 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000CF5C0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xBF5C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_d4122950708c81670bde4b20f2a07d4ca347aba794c683b0abae6f0e9e4a5f6d; complete read 642/642 bytes.
- Source SHA-256: 6121823ece0d8db205a5b318d12ca76e4fbe0786802cde340d10fe274b8cdd5e.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 642/642 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: d5a0f57e1331a4af9481df64903991227ea23887b925731534de416301837385.
- Compiled object SHA-256: 7661b4acca291f8156f037dacd904f9b8493d935e1614f7b1bd0d67921f040d3.
- Compiled .text$mn SHA-256: e0756508e403c3c755e362f30abb723c64cf9bedca17c6b2b81aebe47ed22742.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
