# sub_000A94BE

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa94be–0x000A94D3 inclusive, contiguous, 22 bytes; local Ghidra 12.1.4 body FID_conflict:__ld12tod covers the same exact range.
- Candidate dashboard entry: sub_000A94BE, 22 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __ld12cvt (0x000a9366) at 0x000a94cb; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A94BE.obj, SHA-256 f0624dfb7817775d03206c960526a864eed0b973e91e353a55cdd8c15f179932; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x994BE.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x9883E.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 824f41560ed4aa8f014c1e6965ecbd28993c438f3bd907557a84224a237640ce.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 22/22 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 0692325f102f9974c21db150285eb159e1f36d7dfba44ed80fb11c0129c4d14f; compiled .text$mn SHA-256: 6340a37d52515abf48f187631ab879d277d2d5887694d79cb4423040ea97a6aa.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
