# sub_000AB6E0

- Function task: [#831](https://github.com/soldieg/ReBLACK-XBOX/issues/831).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000AB6E0-0x000AB77A inclusive, contiguous, 155 bytes.
- Call graph dossier: ev_7bedc37aa1c83185e727ff4234cc8b98bfe4b0fd19965b7fe31746c7dfe14841; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000AB6E0, 155 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000AB6E0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0x9B6E0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_0faf4d93912e8b773c018f6a98cb1659fa3a14695c28b9e94b2ae4008fbe22ba; complete read 155/155 bytes.
- Source SHA-256: f9574986b26b8123327fdee4f5a259f81842f873ff848a95a2ef4c5ab03059d5.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 155/155 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: 7413e1b9f4839daaff9cc183a9582759ec82da2537c806dd7bb98cfde494287b.
- Compiled object SHA-256: a12c03d13ff94071cd77d970c9ea7ac7fe740fc6769a7cd4fb13db1e90ac52c6.
- Compiled .text$mn SHA-256: f0932563f3ab1eccce9f2f954b52e5dda35b9584a5fd3e087bba251cafdebb4e.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
