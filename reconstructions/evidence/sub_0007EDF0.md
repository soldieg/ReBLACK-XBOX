# `sub_0007EDF0`

- Function range: `0x0007EDF0â€“not recorded` (29 bytes).
- Public source SHA-256: `B6A78693B2A163336BAF4423B7DD033494CCBC9012CB52FCF96058A9FE3DC436`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `DDC6D5A1D88F8AB59077C997D843BC0D932B867E9EF690B754815016AEB57E42`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_2ce57b8706e1397d7396e9cb886ebde3cdf4641617e09c84b2639c0248c9f0c7, ev_4a2a4e61b14dd0d98c94d1ba2b2d0d2a7b2554b6ef2ea930eae6c63f27d7928f, ev_34bc6943e9d5b136262f7bf0b0271e70ceff3984887492bff16febce7a5b51a2.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

## Lot 92 static revalidation

- Function task: [#8973](https://github.com/soldieg/ReBLACK-XBOX/issues/8973).
- Function range: 0x0007EDF0–0x0007EE0C inclusive, contiguous, 29 bytes; fresh Ghidra 12.1.3 body and complete REA byte read agree on the span.
- Dashboard candidate: `current-exact`, 29 bytes; the function is already present in the 2026-10-28 exactification snapshot.
- Fresh evidence references: Ghidra `ev_c1045417867a50fd600801f53b307575ece68124f4ed928223e8bac66760e469`; REA `ev_b0c55efe82e32095279ea2be892e7e3a09ffb8281ad19e8144e4a30c30b8410c`.
- Relationship coverage: partial for callers. Ghidra diagnostic: Ghidra's caller inventory omits sources of 2 call reference(s) into this function's body. No unresolved direct calls were reported. Caller inventory is not complete.
- Static byte comparison: REA bytes = original XBE raw span = mapped derived PE = XboxRecomp split = named candidate COFF `.text$mn` = fresh MSVC x86 `.text$mn`, 29/29 bytes.
- Compiler: MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /GR- /Zl /Gd /Gy`; compile passed.
- ObjDiff 3.8.2 against the identified candidate: 100.00% for the named symbol and `.text$mn` section; candidate and compiled objects have zero relocations.
- Source SHA-256: `d6303ead369d5ec165ea68c8344273086a03792916f5add94d1d7ad205bea263`; candidate COFF SHA-256: `af71fabc167c027fa82eae3f184539a426c712fb50665495ca07b8c3c8dc760f`; compiled COFF SHA-256: `8362316ab2d5353c42d450ed54dd2ce6dfc0d80bb3ea9f79553a49dc24b43866`; ObjDiff report SHA-256: `e8497cda3707f6d02784b5e89854581966f64c4765051e50882eee26a667098a`.
- Source is an address-pinned byte emitter; semantic C, original types, complete caller inventory, and formal ABI are not claimed. Xbox full link, post-link XBE diff, runtime, and gameplay were not run.
