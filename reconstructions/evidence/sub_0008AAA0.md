# `sub_0008AAA0`

- Function range: `0x0008AAA0–not recorded` (49 bytes).
- Public source SHA-256: `7BCEE86A15520071EB2AD02ADAE415F1BFBA29F295C87A4C0C5144484EB1F9E0`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `EE3F74072F9CA2A4EA1DDF2B2AA36353239A55D6CCFF2581D76AEE5837EF4FBD`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_6461d0890a90b1df21a0afd346ba4f790622743f697956853e1ef69791e9a901, decompilacao/compilacao/REA/function-sub_0008AB20-dependency-group-evidence-20261017.json, ev_cc072a78e200966ff4da22a5159f0395da7e0785664283d55de305532af07223, ev_a8e7a382188776551725587e0be3e9e77923549f79c6bff866bf9fa73867c69f, analyze_function.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

## Lot 89 fresh revalidation (2026-10-28)

- GitHub Issue: [#8794](https://github.com/soldieg/ReBLACK-XBOX/issues/8794); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_2148956425b75e5d22f86678e1582b5edafd688a3935c799411f8cc556d39719`; complete REA byte-read Evidence: `ev_259dd761cd13b243048da753099636057be60cf9026d3eb964396925d44d0b2c`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 49 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `66053829b3f4552e17803e36729798416153836218f10a3098e7a3a084a9e2c5`; candidate COFF SHA-256: `0703565e4cc51cc4e4a1ec08dbbf9390f568bc513c69794d98f0d3ba4a470307`; compiled COFF SHA-256: `f41c3b5cdb25f1c155b3d49a5544ff6d171d28e918b2acab8a04944ac29946ab`; ObjDiff report SHA-256: `b19a27d818dcbb140943ff3569f5a8d6baf01855af10c54afd236948165bb950`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
