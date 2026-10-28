# `sub_0007EBF0`

- Function range: `0x0007EBF0–not recorded` (262 bytes).
- Public source SHA-256: `F1D4FEFAF9CB8E29DE9698AA700D26DB241DFBEEB4B713B0B4DF70668E99E9D8`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `C2D450C98C36774F4566AE7BDBA6058B79D05F6F021C868A17BA50EAF506B76B`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_81298bc909dd8aff091262fae59a3fb4d6afdeedc10d6fa0dd96e78f65fa7b92, decompilacao/compilacao/REA/function-sub_00089660-REA-evidence-20261017.json, ev_c844cc3e9bb250ffa19737c5cae054bfc70c5e4e66c5b5d0ed9b083b8aa5d8b5, ev_2f514a2791c06f2b2e94cde77bed12600cf9e3b1c56823863d48377ae8327003, analyze_function.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#8934](https://github.com/soldieg/ReBLACK-XBOX/issues/8934); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_9a4f8b489a7eb9cc9b082f1f06821cebf8d1ddb5a69fab6a88d73cedd0146f7c`; complete REA byte-read Evidence: `ev_ffc158aa6bc54e4ede890df827ce4b8b2211dbd5415ed4017cbf6c3de818c2db`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 262 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `3eb44ce9b9bf36b46ac695c80811ff31fe572b603872464c3942b887fcef13e1`; candidate COFF SHA-256: `f6373fa7ed3c796e22440a1dae397dee307d7d4460a1915187f1358774621d76`; compiled COFF SHA-256: `558e19ffbcca3b352db1e8d244dd11c975bb740fcaf61784d61e00863b04111c`; ObjDiff report SHA-256: `e037904ba420c1054a76ec7453d8c7c7ed26df0476667ad5a7ddb026d3ddbe69`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
