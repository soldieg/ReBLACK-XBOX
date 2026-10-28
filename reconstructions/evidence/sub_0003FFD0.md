# sub_0003FFD0

- Function task: [#1687](https://github.com/soldieg/ReBLACK-XBOX/issues/1687).
- Function range: 0x3ffd0–0x0004000E inclusive, contiguous, 63 bytes; local Ghidra 12.1.4 body FUN_0003ffd0 covers the same exact range.
- Candidate dashboard entry: sub_0003FFD0, 63 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0003FFD0.obj, SHA-256 77664f82ca233d6b5606748156f327149c2f19ed7a2d9d2b4267406b620e1178; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x2FFD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x2F350.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: f92cf4391340d4d0602e4a85a41bb5fb9995388210f39241ef06964a8fa28e95.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 63/63 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: e90763656a19e3a48ca57fb66f35bbf70adbb6a6e61f3d89ffd7617c6338af3d; compiled .text$mn SHA-256: 50d33f05e1fec54c0683244ec0712b8c508a329dc6e0b579dbebd5770004f93a.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 93 static revalidation

- Function task: [#1687](https://github.com/soldieg/ReBLACK-XBOX/issues/1687).
- Function range: 0x0003FFD0–0x0004000E inclusive, contiguous, 63 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 63 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_928f43a7d678dd7a5390911efdef5bec3a23d0a10cfe7e740e062193c5dd961a`; REA `ev_ab946e80b649e0edff530b4d176979f75860b446474fe54b083488d121795571`.
- Relationship coverage: partial. Ghidra limitations: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations.. Decoded calls without resolved destinations: 0x3fff7. Their targets remain unknown; direct versus indirect is not asserted. Caller/callee relationships are not marked complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 63/63 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `3a8ffaae0c8963abbb08ac94f9e4fd0ae9bf14a9e85687f4ba626aa25184992e`; candidate COFF SHA-256: `77664f82ca233d6b5606748156f327149c2f19ed7a2d9d2b4267406b620e1178`; compiled COFF SHA-256: `b80d07b8fc79be04a11f5f431dd73a3d2f5a2e7f8f94000128d795897805b168`; ObjDiff report SHA-256: `20ce5e075c54059ce05eb34de3e0c3fba28958380f1043fe65e304fe7eb8e035`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller/callee inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
