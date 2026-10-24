# sub_000DD2E0

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xdd2e0–0x000DD3A4 inclusive, contiguous, 197 bytes; local Ghidra 12.1.4 body FUN_000dd2e0 covers the same exact range.
- Candidate dashboard entry: sub_000DD2E0, 197 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0007c820 (0x0007c820) at 0x000dd2ff; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000DD2E0.obj, SHA-256 ae986d87229fab9885060a90c944b9fe17b19954f9827119063883e51c145513; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xCD2E0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xCC660.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: a01c2d2efe58b0df0ecbf0f78f50545429f339064f0f4bf95637c47380b8f2bf.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 197/197 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 601d0e1ca44ae101489d8d78ec532345e12d6be58b85fa05cf02cc7912772cd3; compiled .text$mn SHA-256: a18ff5391d4600b43635e62692e74965bc4c72a12762fed5df8d73b204f9d346.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
