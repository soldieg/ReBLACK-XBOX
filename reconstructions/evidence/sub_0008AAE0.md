# `sub_0008AAE0`

- Function range: `0x0008AAE0–not recorded` (56 bytes).
- Public source SHA-256: `8ED6B91728BAAAE63413833869A1C2E58AAC3460A9E2FD9FC66BA47BD9C1F13D`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `49DE91F04201B404F6976BFBBDBAB98DC6DBB3A1C8CF9C3E2FDA6E437E78DE19`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_c102e5dc7d52ee47d292cc169e203dc3fa2c324889bae714e311a1f675e21ca3, ev_72d91058dbbcf12fd663f46d60680907a6badb2e2b4c7ce2a017203445434fe0, ev_11313b09716d0bf70b849ff0cc18751dca15dc4604bea99def33ed3c9843c94d, analyze_function.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

## Lot 89 fresh revalidation (2026-10-28)

- GitHub Issue: [#8795](https://github.com/soldieg/ReBLACK-XBOX/issues/8795); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_33c3ac02bc0c437938b61cdf8eafedeaa4a948e44b4e8877d4ad2520d31c652c`; complete REA byte-read Evidence: `ev_de430a34305035b367712cfc85457a502bdb46a4b85dff79c56577e71f95e24d`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 56 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `5ae0ed65e88e5f64b32d28dc31221fe84bbaedcc135fd31749ce7e2e30373049`; candidate COFF SHA-256: `4349cdfce9c7222a34586b2ce01add62f94650dc03094eced3657dfab58b2498`; compiled COFF SHA-256: `4941962f7fe03fe0e3688b14cd69888f08a513a178eff0863d04fe250e119bd1`; ObjDiff report SHA-256: `56636d4ce6382c3135050fc6402f70eee21d7f3dbc774d7f65858be10e042ded`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
