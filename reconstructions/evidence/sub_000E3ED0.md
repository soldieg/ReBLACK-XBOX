# sub_000E3ED0

- Function task: [#243](https://github.com/soldieg/ReBLACK-XBOX/issues/243).
- Function range: 0xe3ed0–0x000E3F2B inclusive, contiguous, 92 bytes; local Ghidra 12.1.4 body FUN_000e3ed0 covers the same exact range.
- Candidate dashboard entry: sub_000E3ED0, 92 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (2026-10-24).
- Local Ghidra 12.1.4 direct callees: FUN_0001cc00 (0x0001cc00) at 0x000e3ee2; unresolved direct calls: none observed. Callee sources are present in the base checkout where applicable.
- Target candidate object: candidate/sub_000E3ED0.obj, SHA-256 b193a97ff3f614082db7209156d97b087cf4251b5221f70578a0a8189d83f82c; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; static source span offset 0xD3ED0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw span offset 0xD3250.
- Byte provenance: static read from the original XBE raw span. REA byte-read API was unavailable; no REA byte-read claim is made.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- Source SHA-256: 4d9eb149ffeb8e5f5de71fc5270ebe6798875b2570074d6d4c698222e8b2b616.
- ObjDiff 3.8.2 against the identified candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 92/92 bytes.
- Candidate and compiled COFF relocations: 0/0; compiled object SHA-256: 1a8bb38597f9b22ef04025c307da838175a6bf00a5e182a4fa043fc355cc63fa; compiled .text$mn SHA-256: 240a8d857660c5522f1f66c1329fe0077c0a3717b95ccbfb887e8da48411b7a9.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 92 static revalidation

- Function task: [#243](https://github.com/soldieg/ReBLACK-XBOX/issues/243).
- Function range: 0x000E3ED0–0x000E3F2B inclusive, contiguous, 92 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 92 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_b6b72fe2d09b992ad12c53e2fbf2b320064a94739275b61305d9d7c840c93103`; REA `ev_04eed0d6d6b4ed18a01cefe4cf187f4a60d293bef6046fb8418772e0cc99790b`.
- Relationship coverage: partial for callers. Ghidra diagnostic: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body. No unresolved direct calls were reported. Caller inventory is not complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 92/92 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `edcf8520d43986159e8d67f0c7dfbda3971777a32a206aeca834c958f8579b67`; candidate COFF SHA-256: `b193a97ff3f614082db7209156d97b087cf4251b5221f70578a0a8189d83f82c`; compiled COFF SHA-256: `271a472a366baeb059d1b83d336936a2f5ca58efa44824c4b0384e8fb8542d69`; ObjDiff report SHA-256: `372579775dba1f8c6cd349be1c57bc8e5497e3a1d46b5410d31bdb0e4a86362b`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
