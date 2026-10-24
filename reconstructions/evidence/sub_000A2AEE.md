# sub_000A2AEE

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa2aee–0x000A2B1B inclusive, contiguous, 46 bytes; local Ghidra 12.1.4 body _isxdigit covers the same exact range.
- Candidate dashboard entry: sub_000A2AEE, 46 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000a5967 (0x000a5967) at 0x000a2b00; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A2AEE.obj, SHA-256 754bd34697c3ca0a3415728c8533dd0f311a00723321e22dd1118d2723de4f55; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x92AEE.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x91E6E.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 912754e2b913da079783309bac3d574d94bdd7e8c4f8a55c2820187abc769bfc.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 46/46 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: ed59a60f5a4319fd934c8886eec6abf64de157d7cf0a95ef5dfe38ed0f53a711; compiled .text$mn SHA-256: e52d154ca83fc6e50e841a2543bcddccd169fa40770918308bd712cea9129194.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
