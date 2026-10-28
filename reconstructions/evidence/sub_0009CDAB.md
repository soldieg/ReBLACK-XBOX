# `sub_0009CDAB`

- Function range: `0x0009CDAB–0x0009CDAE` (4 bytes).
- Public source SHA-256: `E0518D9BEB4F5E8D3DAAD06F851AD417BA7A29EC51C398E33F94945A4FAD6FD3`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `C61015D7A4DB7C0420A1ACD6A88BB96CE2CAEC7DB6A6C8A5648869EF550BAF9A`.
- Toolchain: MSVC 19.51.36260 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS`.
- REA evidence references: ev_d4da75ae7b7a8e824c764bea9438230b6654496fcce13c783a7dbab266e486cd, ev_39b5dec2d8d2e5701251397f7037839f62cc0c85057c26a68013f0220cda21fb, ev_72e6680bb026b739ade27b1d0d4b0438e0cd6bfd7dd95b9538ca63d29dbfc085, ev_612f4eecaa5645648a8be8b33d97a93c7bcda6777a84ffd7b08ff472f9a08086.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

## Lot 90 fresh revalidation (2026-10-28)

- GitHub Issue: [#8899](https://github.com/soldieg/ReBLACK-XBOX/issues/8899); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_7af69b87e2c20fc3c670fc9da2a6796e32f6be742664e8dd92d557d704b67003`; complete REA byte-read Evidence: `ev_76ee919d7124b9f8b5257b16f106132ecbd8e4371b84dc87a59ecfea5cfbf3c4`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 4 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `1575b46048273c3533d2380aaa2cecb011230c3198fdc924b336d4a242870479`; candidate COFF SHA-256: `f1a5fe6f274112201069a2f805325dd7ec19b9ddc2a07f592c0941cf23ddff38`; compiled COFF SHA-256: `ecea66e6e233cd159d835cdf8a9cd6a51ecea193ec5a0a9306061fd6a25e4c25`; ObjDiff report SHA-256: `036a96d3e52208413e25c38401991d8215171e417158a5b7d89c4573743fbd68`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
