# `sub_0002ADB0`

- Function range: `0x0002ADB0–not recorded` (195 bytes).
- Public source SHA-256: `DDCE49CAFA68E6FA3324FFA3888A8378D8A75BBFDDDBDDAF32BB3F5FB6AE5129`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `4B7C9A9BC4D507B57EC624173A6F0DAEA7F9D10750EC48BDDAC667E99F46062F`.
- Toolchain: MSVC 19.51.36231 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100.0%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS_WITH_SCOPE_LIMIT`.
- REA evidence references: ev_752740a5ef0ffb40929a9e13342e0e9828ac261112fd2f9f8dfd17fb661dfd2a, decompilacao/compilacao/REA/function-sub_00089660-REA-evidence-20261017.json, ev_e028ee97a54cef9f6a4e247cb15580663c47e031fad635bad1bedf9e5539b6b8, ev_34b3a7c59e280209b1d67926f51a69221e3528e1874ecf3386d92deb938c598f, analyze_function.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred..

### Lot 94 static revalidation (2026-10-28)

Issue: [#9007](https://github.com/soldieg/ReBLACK-XBOX/issues/9007). Fresh Ghidra 12.1.3 confirms one contiguous 195-byte body at 0x0002ADB0. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_b92025e3032fd23bde89e7a90db883d36aa0a7823e1e0cfa869b7e4467c32888`, REA bytes `ev_d1baad47fa3df103b63e83a74a30040c32b379986fc01cd0ee57e47d4d28cbd9`. Relationship coverage: partial; 1 resolved callers, 4 resolved callees, 3 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
