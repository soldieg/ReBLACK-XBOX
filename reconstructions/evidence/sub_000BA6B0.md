# sub_000BA6B0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xba6b0–0x000BA6ED inclusive, contiguous, 62 bytes; local Ghidra 12.1.4 body FUN_000ba6b0 covers the same exact range.
- Candidate dashboard entry: sub_000BA6B0, 62 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000BA6B0.obj, SHA-256 f7f086d938f615e4616ba9b6242daacf32b7b0b2621d07e8668a02ae14e78696; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xAA6B0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xA9A30.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: dc9fad8dbe04359c4cdca17f1b757605520464a1f8f419419f4f859b036f1eaf.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 62/62 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: d21876bc092c8737ffe82a048b54a3f6343f51862b64d5206a6d00314e1c021c; compiled .text$mn SHA-256: e1e948821a4e2b7ea05d00138430f40cd07951a612c90ad0014aea675694accb.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
