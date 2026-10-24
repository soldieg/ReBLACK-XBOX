# sub_000BF4C0

- Function task: [#889](https://github.com/soldieg/ReBLACK-XBOX/issues/889).
- Lot: 2/100 (100-function lots).
- Confirmed REA/Ghidra 12.1.3 body: 0x000BF4C0-0x000BF54C inclusive, contiguous, 141 bytes.
- Call graph dossier: ev_1360db21dcf7bcc58869e97824ce685b85236119ee981b2a317eeee9c6d98ca8; direct callees: none; unresolved calls: none in the observed analysis.
- Dashboard candidate: sub_000BF4C0, 141 bytes, category unmatched in live progress snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_000BF4C0.obj from the 2026-10-15 snapshot (complete=false).
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at 0xAF4C0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD.
- REA byte-read evidence: ev_15429cb4aa4ff258077acb107ad0c71e7127218165bd3c5c118ea8e70539b97f; complete read 141/141 bytes.
- Source SHA-256: bb141eaf9cce413f8d376e8ee250498c7af40e0684d90164d352fd872d575a48.
- Compiler: MSVC x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: REA read = raw XBE = candidate .text$mn = compiled .text$mn, 141/141 bytes.
- Candidate and compiled COFF relocations: 0/0.
- Candidate object SHA-256: e03ff7f1a4b3697c8671d664f26566bddb852eea2c9df49f5ab26cf1d5fff34f.
- Compiled object SHA-256: cba98a86168ee0cbeaac0f52dd6c561484ab34c8d3c9b5a531f8cc0819efaa76.
- Compiled .text$mn SHA-256: a03dfbe66299ed1c934257fa924b996d9aae4421b3826e09b1deb3db80a3a8e5.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
