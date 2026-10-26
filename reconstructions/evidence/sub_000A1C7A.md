# sub_000A1C7A

- Function task: issue omitted because GitHub content creation is temporarily rate-limited; no issue link is claimed.
- Function range: 0xa1c7a–0x000A1C8B inclusive, contiguous, 18 bytes; local Ghidra 12.1.4 body _atexit covers the same exact range.
- Candidate dashboard entry: sub_000A1C7A, 18 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: __onexit (0x000a1c42) at 0x000a1c7e; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000A1C7A.obj, SHA-256 a0fa88f23594a7255625b2792d650979fb4ff0427572adae5b676b2d99e406ca; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x91C7A.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x90FFA.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 60ef44a993c205ef43b937668f8984af10539278f247a32d8e3edaa25474d43b.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 18/18 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 80bf662bdfc7cdebad3f2730ddd3798fb6096aeeb7f4afc5f89fdd2a447ac2f0; compiled .text$mn SHA-256: e26840bcbd3b97895ffd5e9c994a73e054e4531ede72f93c35364d9990295c01.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
