# sub_001BEC00

- Function task: [#1512](https://github.com/soldieg/ReBLACK-XBOX/issues/1512).
- Function range from REA/Ghidra dossier: 0x001BEC00-0x001BEC45 inclusive, contiguous, 70 bytes.
- Function dossier evidence: ev_131def80c70d98d3ada6af990ce111b18973d729cca04586715c8231a6f21e2c.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BEC00, 70 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BEC00.obj from the identified progress snapshot; SHA-256 5e6af1b091f2ed09948105fee328eddf6167435c0d4cc39d8358f5771dcd87bb; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AEC00.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1ADF80.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 4bebde61d4833a17af1ebf587589a7ec59d40791b2af15ccbdce5a77cb9fbf07.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 70/70 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 4c5f2e803e421ef1aee8b0c2cf3f8ff05d9bee5f98228791836fe0ae2898d643.
- Compiled .text$mn SHA-256: b9c020424bed72d159f526b35c8dd527974bd46bc01ed72996b8ce25839d623c.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#1512](https://github.com/soldieg/ReBLACK-XBOX/issues/1512); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_84d4186cb833591c509ba7df4858273935963cb3b81c1313fa8858af46cff53e`; complete REA byte-read Evidence: `ev_5cff2f6b63409cb40d4694f00d8803ca33216f77b5eb0bd5b7c2e3b8c094a0b1`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 70 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `0b063417112f123d32a98f7eb41c4ea56764be2584f1cf3803534c6a23996705`; candidate COFF SHA-256: `5e6af1b091f2ed09948105fee328eddf6167435c0d4cc39d8358f5771dcd87bb`; compiled COFF SHA-256: `6c8b341d36b01878c10a0f120b23e421ecd1c9b5ba9a548471d067c558e2df2e`; ObjDiff report SHA-256: `a8bbced9096442480e2010b84fd51665bb0e8671c3746d151d8f032a3172ed5c`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
