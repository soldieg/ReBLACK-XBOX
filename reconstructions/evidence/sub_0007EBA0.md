# `sub_0007EBA0`

- Function range: `0x0007EBA0–not recorded` (72 bytes).
- Public source SHA-256: `2AA37183A2FF57BCD88A6B78A5581A5151FADF21B4651D45B0AF0B80F5F0D6CD`.
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

## Lot 91 fresh revalidation (2026-10-28)

- GitHub Issue: [#8933](https://github.com/soldieg/ReBLACK-XBOX/issues/8933); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_53ff84d07c865b9c49cb36cace5c7abe7a8317354154b70256f1cca842d2da2d`; complete REA byte-read Evidence: `ev_f73bdc58443b5699c168083a4fbf2a3f02ab4229319391c6b131e7ac8defc5df`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 72 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `b76b669d617e5bf6a5b63bce097eae2647e377e7b3792301a1ddf929d42d4f45`; candidate COFF SHA-256: `d7143d667d02b3f491db393a4ef0c2827ead72d2e474864ad4fdebeb3f373d27`; compiled COFF SHA-256: `660853a324073de2cba19c661c0e5fabe67498ff6910cc4c9c280e5a4edc6382`; ObjDiff report SHA-256: `744b1263c4f5ddd937b6caabc9e3aafdc26392662053f4b38609b25581d72788`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
