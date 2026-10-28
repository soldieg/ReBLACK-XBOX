# sub_0005CAF0

- Function task: [#1822](https://github.com/soldieg/ReBLACK-XBOX/issues/1822).
- Function range: 0x5caf0–0x0005CBC0 inclusive, contiguous, 209 bytes; local Ghidra 12.1.4 body FUN_0005caf0 covers the same exact range.
- Candidate dashboard entry: sub_0005CAF0, 209 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: _atexit (0x000a1c7a) at 0x0005cb27; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0005CAF0.obj, SHA-256 6edbfdbecee6e0cd455dc4ea40d0c2b1b370f32cd52e798ceda43dbd27f8fa4d; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x4CAF0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x4BE70.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 5d3729317683c8503782e59d7c7c05b85e0665ef1b1093f964e42cbee5f494f7.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 209/209 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 77102bd5e0d121ce0ba4bee536ad941cb1f932c0b84d81541a0f2780a21cb52f; compiled .text$mn SHA-256: d84d4265e13ba89db5fe923f79d365178a391a57f19ae2499a4acc805646f5b0.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 87 fresh revalidation (2026-10-28)

- GitHub Issue: [#1822](https://github.com/soldieg/ReBLACK-XBOX/issues/1822); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_e90bf906e3b3ae569d6e2fc45598d6c6ab76eb076eb6d2594b34726b81cd8c36`; complete REA byte-read Evidence: `ev_fa335930212f277c8e862ff5e4a42117e0c8e3b9052efdc49d33201ca6b4ef57`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 209 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `729973cdf95f2f32e8a18c8d65df3f3617463ce838c97cddb35ca54092092b97`; candidate COFF SHA-256: `6edbfdbecee6e0cd455dc4ea40d0c2b1b370f32cd52e798ceda43dbd27f8fa4d`; compiled COFF SHA-256: `95689944f1766a3c425d4d983a4bb80b2a62cfa93422615d78cea1c9b4327143`; ObjDiff report SHA-256: `b5cc9251b60bd9de4604eafe5d1fd431e8f3c0732ad4058c9e26bc849f3f08e9`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
