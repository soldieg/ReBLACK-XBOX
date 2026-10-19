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
