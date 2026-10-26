# sub_0013FEF0

- Function task: [#1036](https://github.com/soldieg/ReBLACK-XBOX/issues/1036). Reused the existing Issue; no duplicate was created.
- Counted for lot 57 of the current 100-lot run; the source and dossier are new in this checkout.
- Ghidra 12.1.3 body: `0x0013FEF0–0x0013FF74` inclusive, contiguous, 133 bytes; evidence `ev_ec0c300b21a303827befb0ded10ae956cdddb7a8f85647fce9eb6dfb79060a79`.
- Relationship coverage: complete. Resolved caller at `0x00155960`; no callees or unresolved direct calls reported.
- REA byte evidence: `ev_3bb9f31deb769b04d4e4d1709661342488b025d2b9e7b472e2c338ea6cc1aba3`, complete 133-byte read.
- Static equality: REA = original XBE raw = derived PE = XboxRecomp split = named candidate object `_sub_0013FEF0` = compiled `.text$mn` = source emitter, 133/133 bytes. SHA-256: `bf70909a4b064b69924dfecffe60c6e4518033175731cb2620e4302316604775`. XBE raw offset: `0x12FEF0`; derived PE raw offset: `0x12F270`.
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; succeeded with no diagnostics.
- ObjDiff 3.8.2: 100.00% for `_sub_0013FEF0` against the explicitly identified candidate object; 133-byte symbol. Static byte equality was checked independently.
- The source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link and post-link XBE diff remain pending; runtime/gameplay were not tested.
