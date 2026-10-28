# `sub_0003DEB0`

- Function range: `0x0003DEB0–not recorded` (268 bytes).
- Public source SHA-256: `8792FDD80B5D3C8687C126DE8F47B0414223F52DB8922CA121366220B9035E62`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `AC9A3F3B769EDAED6CC26D37D0ADB10134AFD00474BDF68CADB934234E66E65A`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_9aec59020dc74d4817efbac1490d0364351eb94214002397276a0893a40d285a, decompilacao/compilacao/REA/function-sub_00089660-REA-evidence-20261017.json, ev_b06fe02764dba5d65fce811101481181e76ae788038be03ee8ac234ad8a9d55b, ev_ae556c79d9c9368579c01338a4ba880193baea48bd66c72e23e25927fc2366fd, analyze_function.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

### Lot 94 static revalidation (2026-10-28)

Issue: [#9016](https://github.com/soldieg/ReBLACK-XBOX/issues/9016). Fresh Ghidra 12.1.3 confirms one contiguous 268-byte body at 0x0003DEB0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_a4e69bf8de1785d0346af76da5c1339843cd037954b0c512cd0195ade74c6db3`, REA bytes `ev_31da9221bd4be7991f7bafe8aa612c2264e6cef47fedb7e853a0c9f173a7711c`. Relationship coverage: partial; 4 resolved callers, 4 resolved callees, 3 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
