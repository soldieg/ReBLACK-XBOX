# `sub_0002AEE0`

- Function range: `0x0002AEE0â€“not recorded` (44 bytes).
- Public source SHA-256: `341365CB32FDAA06F195CDB13B59D9FA1710AFF0ACC653191472781F305B12F9`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `0577B40143B1941582F801510921E5A2496B0A376CDC4D5205B05D6290B6B3BD`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_5515d31d11225db2da2b77fbe4c9fa451c88bee2278d9b0745376105c2634dff, decompilacao/compilacao/REA/function-sub_00089660-REA-evidence-20261017.json, ev_0f53762e8e9bfcb077d63e10cfbf63d0f0732417c96f27d28cdbaa69e9ad756a, ev_df346b90f9623ee2e3efae8f4dd673da05516e9285eff71eb8b39cbc9e3a5fc0, analyze_function.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

## Lot 92 static revalidation

- Function task: [#8957](https://github.com/soldieg/ReBLACK-XBOX/issues/8957).
- Function range: 0x0002AEE0–0x0002AF0B inclusive, contiguous, 44 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 44 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_9df56b0a3503a6a4133b4359c1909bd6e50e96893a8485543df43f7a90eac940`; REA `ev_2dc834fa712aba668c4f640df882a60cd92c42436f491e00fef3f63019abfe9c`.
- Relationship coverage: partial for callers. Ghidra diagnostic: Ghidra's caller inventory omits sources of 2 call reference(s) into this function's body. No unresolved direct calls were reported. Caller inventory is not complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 44/44 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `f13c3066124d9f72e25433acfad5176033c66b0da78bc26fab154c4664bc3282`; candidate COFF SHA-256: `a2a9b7362294b092388cf936c26f37bf1b3c134c90dfc4fc457bcc8c8ab60f17`; compiled COFF SHA-256: `3fba9e980d472d18eea2b3b2b1d580dc29ba504b0daf6592a247c320f5cb5466`; ObjDiff report SHA-256: `8eb807cd1eb60b533f6fbed7fad768a63108563a2cf2f22254881129a3a64cee`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
