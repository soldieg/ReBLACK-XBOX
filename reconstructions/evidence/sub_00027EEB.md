# `sub_00027EEB`

- Function range: `0x00027EEB–0x00028194` (682 bytes).
- Public source SHA-256: `38C81F9A40CCA2F583B4FF6D359A5A355BC5EF45A89AEFF79C8976F441AE6CC0`.
- Target XBE SHA-256: `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Derived PE SHA-256: `AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD`.
- Split reference SHA-256: `ADA58779866337AAC8A66066174D441A91C003F29B48EA53E697F79516B5372B`.
- Toolchain: MSVC 19.51 x86; options: `/TC, /c, /O2, /GS-, /Zl, /Gd, /Gy`.
- ObjDiff: `3.8.2`; function match `100%`.
- Recorded byte checks: compiled body, target object, XBE, and split reference are equal (100% exact-byte result).
- Static review: `PASS`.
- REA evidence references: ev_1f33f623b897c2a791eed82f5cee5261f0cd65e335bc7f412338848ce3439392, ev_111636d51eeb89fac74d4069df8ef48bf35539188256f591d93cc033e58d7a78, ev_40a35cc8354c427ed6e132920e647cbf306a63c1077c405f0f768cb121398481.

## Validation scope

This record is for the function body bytes produced by the listed source and toolchain. It does not establish source-level semantic equivalence, a full Xbox link, or runtime behavior.
- Xbox full link: `NOT_RUN`.
- Runtime: `NOT_RUN`.
- Source form: Exact-byte source; source-level semantic equivalence is not inferred.

### Lot 94 static revalidation (2026-10-28)

Issue: [#9004](https://github.com/soldieg/ReBLACK-XBOX/issues/9004). Fresh Ghidra 12.1.3 confirms one contiguous 682-byte body at 0x00027EEB. The complete REA read matches XBE raw, the derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 `.text$mn` byte for byte; both COFF sections have zero relocations. ObjDiff 3.8.2: symbol 100.00%, `.text$mn` 100.00%. Private batch evidence IDs: Ghidra `ev_faa77aa40f0067a972fe0387df07b9e9ffada51d97fec4281d362b2ac0992bbb`, REA bytes `ev_96bfc0c60e30ba531d0296903178e1ea8ef267eb835b9f5281cdda03920a5fa8`. Relationship coverage: partial; 1 resolved callers, 4 resolved callees, 1 unresolved call sites. This is static byte/candidate evidence only; semantic C/ABI, Xbox link, post-link XBE diff, and runtime are not established.
