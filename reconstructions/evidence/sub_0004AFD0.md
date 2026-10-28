# sub_0004AFD0

- Function task: [#1714](https://github.com/soldieg/ReBLACK-XBOX/issues/1714).
- Function range: 0x4afd0–0x0004B00B inclusive, contiguous, 60 bytes; local Ghidra 12.1.4 body FUN_0004afd0 covers the same exact range.
- Candidate dashboard entry: sub_0004AFD0, 60 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: none observed; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_0004AFD0.obj, SHA-256 37e0446ce0ea74707110524a793b210272afc21198487802824c9f42d19f3fd4; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0x3AFD0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0x3A350.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 10919dfe27aad106b6c64d91c19d6f31e9c6ee11bdd98991b33853eafb9c1cd6.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 60/60 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 4edd3e45f7990b055e639a37bff045e967089c5924c6d59f71b8c40dd600dd7c; compiled .text$mn SHA-256: b83c65d75ebbf2a51775991177fde7e1099ffeb77c124030b9aec809d4c1ea30.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 93 static revalidation

- Function task: [#1714](https://github.com/soldieg/ReBLACK-XBOX/issues/1714).
- Function range: 0x0004AFD0–0x0004B00B inclusive, contiguous, 60 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 60 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_c633cffe40aca993bef3522eef35ef796a6c2e51d6719e82b193a8c4525961a8`; REA `ev_f1d3d50428f9f1769d20583c9cab20b69dab8e67c9d3d1b73d00d724ea961a35`.
- Relationship coverage: partial. Ghidra limitations: Ghidra's caller inventory omits sources of 3 call reference(s) into this function's body.; Ghidra's callee inventory omits targets of 2 call reference(s) or decoded call(s) without destinations.. Decoded calls without resolved destinations: 0x4afec, 0x4b000. Their targets remain unknown; direct versus indirect is not asserted. Caller/callee relationships are not marked complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 60/60 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `23cf8bf213dde0742076c583db05faff980db708e14a3c3fc1f6364cc44dd6da`; candidate COFF SHA-256: `37e0446ce0ea74707110524a793b210272afc21198487802824c9f42d19f3fd4`; compiled COFF SHA-256: `1d6aa3ce804eb26eda3ea7088c2b1a6d321695f51dfe5bae41c52fa706519690`; ObjDiff report SHA-256: `34b8e575f3f62b9186dacc4a23d6b3bc53e04ba25814c85ad8359b2758697240`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller/callee inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
