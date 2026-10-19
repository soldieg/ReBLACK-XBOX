# `sub_0007EBA0`

- Function range: `0x0007EBA0–not recorded` (72 bytes).
- Public source SHA-256: `2aa37183a2ff57bcd88a6b78a5581a5151fadf21b4651d45b0af0b80f5f0d6cd`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `8190AD26CE1CBB43FF58B7F5AA7D520A8343A8D55570BB6101E5494D48A82314`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_cb5f46a0c70ca36b26365b6296b360ef8d2483804cc95a09ecc54d949fa4fc8e, ev_56ae82a88361efed6d5e776de87570b2724cea9254f8280b22e4eec682bc5a78, ev_9e9a4fc710273073233d1c42a01c9b167208c290195cddb49a1206744a3c224e, analyze_function.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..
