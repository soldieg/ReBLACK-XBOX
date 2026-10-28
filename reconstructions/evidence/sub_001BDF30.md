# sub_001BDF30

- Function task: [#1496](https://github.com/soldieg/ReBLACK-XBOX/issues/1496).
- Function range from REA/Ghidra dossier: 0x001BDF30-0x001BDF4C inclusive, contiguous, 29 bytes.
- Function dossier evidence: ev_65ea23e7777e1fd163ce8c7fd367e7a27016eba83c1bb50523e713c6747abfde.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BDF30, 29 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BDF30.obj from the identified progress snapshot; SHA-256 b7ceeb13d016db1e5d6f30274c848b887b21d9f84259c99820c51476f929776b; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1ADF30.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AD2B0.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 22687a57582bca4a3e7f5f57276bf26f518b2263ccd839f59a85f8db9ef13d06.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 29/29 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 2041d1e5ea3268912e9d68c8ac4425dae1e84891f0be84ebc5d7f1ffb665aa78.
- Compiled .text$mn SHA-256: fc0a121b4b759ee709d737ba65ad83821b3dfc3274d8e8d198f3ab257006dfc2.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.

## Lot 92 static revalidation

- Function task: [#1496](https://github.com/soldieg/ReBLACK-XBOX/issues/1496).
- Function range: 0x001BDF30–0x001BDF4C inclusive, contiguous, 29 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 29 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_370e57d70ea9c2647bb940a067190ce9e64572b772721d17413db18de198c4ea`; REA `ev_635037dd802cf3231b5df6f62f050bba59e2e914b148ffd47a6334ae7b401658`.
- Relationship coverage: partial for callers. Ghidra diagnostic: Ghidra's caller inventory omits sources of 5 call reference(s) into this function's body. No unresolved direct calls were reported. Caller inventory is not complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 29/29 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `36f0aa01d995b85f0a09bbbf48e936a39eeeede9eeb3a71d9c5e8070d8866171`; candidate COFF SHA-256: `b7ceeb13d016db1e5d6f30274c848b887b21d9f84259c99820c51476f929776b`; compiled COFF SHA-256: `183a8e337ed30a331110fcc88c95eb9e4ce7dffd8853a4dcc3757042528aed04`; ObjDiff report SHA-256: `54b67cb55b226e903cb3081864a58970f15c6cc4f5f100d1c3620627fa00cdde`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
