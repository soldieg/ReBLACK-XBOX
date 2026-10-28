# sub_001BAF70

- Function task: [#1471](https://github.com/soldieg/ReBLACK-XBOX/issues/1471).
- Function range from REA/Ghidra dossier: 0x001BAF70-0x001BB002 inclusive, contiguous, 147 bytes.
- Function dossier evidence: ev_ee1b3c6d7c95ddc4378f7febb2645866b7bf01e5675dd58ae1631d9b7cc632a1.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BAF70, 147 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BAF70.obj from the identified progress snapshot; SHA-256 5707885031b14eaefe55d8ee76918355ea3f496d205d41cb6712331c54ba4e31; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AAF70.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AA2F0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 0c0caab77cd306f32fb1e57f92bbc51dd1adc4faf2f1f15b52eebe2ace65a963.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 147/147 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 4619d0a80993cb41abca6b12f6130d56c532e262219c4a244dc96a91dd041142.
- Compiled .text$mn SHA-256: 1269b382a2c7cc3a84f7f3b78fda250190af62f357e34bd0b67c0c77fd92d8f2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 92 static revalidation

- Function task: [#1471](https://github.com/soldieg/ReBLACK-XBOX/issues/1471).
- Function range: 0x001BAF70–0x001BB002 inclusive, contiguous, 147 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 147 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_79c39a75469f453ec8c57f0b6f1e5b523551f13fa48b788253fef8f6dfbec465`; REA `ev_6e6589b41fdf0ef4313cefead0bb807ff1a63ce7c7c22d1f841c7294f99cb539`.
- Relationship coverage: partial for callers. Ghidra diagnostic: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body. No unresolved direct calls were reported. Caller inventory is not complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 147/147 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `3c858ca3301855484aa5277f70828d12bb7dbd463b0226f046767639f1f7901d`; candidate COFF SHA-256: `5707885031b14eaefe55d8ee76918355ea3f496d205d41cb6712331c54ba4e31`; compiled COFF SHA-256: `6bdd68d5a40633aebf6539c289ce087778435c704e60a38a32ec511ad53aa2ea`; ObjDiff report SHA-256: `cd97f785af0155203649c48de93b45d283472ccbf84ec8cac335440da818c5de`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
