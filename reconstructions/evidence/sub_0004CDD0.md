# sub_0004CDD0

- Function task: [#1723](https://github.com/soldieg/ReBLACK-XBOX/issues/1723).
- Function range: 0x4cdd0–0x0004CDFE inclusive, contiguous, 47 bytes; local Ghidra 12.1.4 body FUN_0004cdd0 covers the same exact range.
- Candidate dashboard entry: sub_0004CDD0, 47 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0004CDD0.obj, SHA-256 830b7058d9c137402d029cce2f746d54d0f5c074acfc7ef77935c3699f2bdbeb; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x3CDD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x3C150.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 6bb9f2703763eed07d603bc066cd672eac2376fbcbc50b7405097c7004893433.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 47/47 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 223dc430fc6e1552125e440a3e9633d4b4cff8b7b35b0379a6e5bcc4ecae7483; compiled .text$mn SHA-256: 63f58bb340e197c737752d07cfec565d0e0b95b2f72fead81f1199c0756523d6.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 93 static revalidation

- Function task: [#1723](https://github.com/soldieg/ReBLACK-XBOX/issues/1723).
- Function range: 0x0004CDD0–0x0004CDFE inclusive, contiguous, 47 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 47 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_bea0d078dde958829ff90c12dbecf92c685b4de9db337c96dc2144e56f7d3ad0`; REA `ev_0fe43b9b2295d3e1bb2eb25ac3f5736ef9419687bf5b2687bbae5825a80e91b8`.
- Relationship coverage: partial. Ghidra limitations: Ghidra's callee inventory omits targets of 2 call reference(s) or decoded call(s) without destinations.. Decoded calls without resolved destinations: 0x4cddd, 0x4cde6. Their targets remain unknown; direct versus indirect is not asserted. Caller/callee relationships are not marked complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 47/47 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `c9fbc292d5459c5700d687573fc1fc3ec676db79fcc0944ebc7d239b64ef96f9`; candidate COFF SHA-256: `830b7058d9c137402d029cce2f746d54d0f5c074acfc7ef77935c3699f2bdbeb`; compiled COFF SHA-256: `8c9b4a08a719a9161c423ce3430ba74bc259805bd6c371c9e8c42c68e40ffc30`; ObjDiff report SHA-256: `9b9d8bbfa4657418862c55cf8a9234462a25a41e522cb07b421b29d8b31fcfc6`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller/callee inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
