# sub_000A6CC4

- Function task: [#806](https://github.com/soldieg/ReBLACK-XBOX/issues/806).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000A6CC4-0x000A6D2A inclusive, contiguous, 103 bytes.
- Call graph dossier: ev_06f185a858717d60d5375b2a817588efa6799c97285fafbb5c926ec18a0ddd5e; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000A6CC4, 103 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000A6CC4.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x96CC4.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_5364bead2f07ef960ef3eae7c7e52f23ab70076c2ce6e54bd852973811afa48f; complete read 103/103 bytes.
- Source SHA-256: 9e5edf9b7428659775e4af497aaa30b047a724fad8c43e6317de96f9bcbbbd6a.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 103/103 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 7c472abd521e4c9fd56229234adefbb2fbfde90f1a41668b6d0a932ae6983e33.
- Compiled object SHA-256: 62922600b96a776928f32ed5f2ee173ca6bec388d2881a25c1fdffd851773df3.
- Compiled .text$mn SHA-256: 207efd7ae7fe9e25532c0b01a35424ae682ff33f3843f55b0ba371ef8131341d.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
