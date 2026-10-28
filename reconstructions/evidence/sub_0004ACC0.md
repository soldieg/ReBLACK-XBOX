# sub_0004ACC0

- Function task: [#1712](https://github.com/soldieg/ReBLACK-XBOX/issues/1712).
- Function range: 0x4acc0–0x0004AD05 inclusive, contiguous, 70 bytes; local Ghidra 12.1.4 body FUN_0004acc0 covers the same exact range.
- Candidate dashboard entry: sub_0004ACC0, 70 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_000507a0 (0x000507a0) at 0x0004acc6; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0004ACC0.obj, SHA-256 98bdd5179d2ea4a679cbad6bbfff54fcfcde51605c8f78465ee4da6c6f1bcdf5; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x3ACC0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x3A040.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 78f3cc708014410e6251f0bfe2b13d8d25327773464a19f31d8a0b0d29d02022.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 70/70 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 68a7dfb0c6d383cae1bd28b7f85fb7c2f99a863d31698852ec41546fbb605f0d; compiled .text$mn SHA-256: 340eca06e460c4c133c24200562f2d1c3250fd106cffc3323045d05116cb2016.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 93 static revalidation

- Function task: [#1712](https://github.com/soldieg/ReBLACK-XBOX/issues/1712).
- Function range: 0x0004ACC0–0x0004AD05 inclusive, contiguous, 70 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 70 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_1a2bddb89a87851a9d87efb5bb0e3cc3573bf228187e1cca0ea1b0de3c1c946c`; REA `ev_c554e7d5da049844a706191cc07ef4eaa4017e5c739ab214c4d507d32b9c5598`.
- Relationship coverage: partial. Ghidra limitations: Ghidra's callee inventory omits targets of 3 call reference(s) or decoded call(s) without destinations.. Decoded calls without resolved destinations: 0x4accf, 0x4ace8, 0x4acfb. Their targets remain unknown; direct versus indirect is not asserted. Caller/callee relationships are not marked complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 70/70 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `164ee634d732ca6d6748af506645795d07b884a83a69a390f6f3fceb3620a434`; candidate COFF SHA-256: `98bdd5179d2ea4a679cbad6bbfff54fcfcde51605c8f78465ee4da6c6f1bcdf5`; compiled COFF SHA-256: `75545267edfac3e345b7cbb66dc1b35293e3eeb20b9b35ee8dfda82e322ed8d3`; ObjDiff report SHA-256: `c6fbf9a052835f8874c5adbcf580fef80758103e0af5249497122a9f37f54efd`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller/callee inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
