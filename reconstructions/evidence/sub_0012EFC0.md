# `sub_0012EFC0` — static exact-byte validation

- Live dashboard candidate: `unmatched`, expected 561-byte span; no prior exactification-map entry, source/evidence file, or Issue was found. Status/evidence Issue: [#8597](https://github.com/soldieg/ReBLACK-XBOX/issues/8597).
- Ghidra 12.1.3 confirms a 558-byte body in two ranges (`0x12EFC0–0x12F1AC`, `0x12F1B0–0x12F1F0`) across a 561-byte span. The 3-byte gap is `LEA ECX,[ECX]` at `0x12F1AD`, skipped by a `JMP` at `0x12F1AB`.
- Direct caller: `0x130830`. Direct callees: `0x2575B`, `_malloc` at `0xA1E2F`, and `0x1F3FC0`. Caller and callee relationship coverage is complete; each has a local source and evidence record. Ghidra evidence: body `ev_4488c64f75bf002b56b0d0c59e89704ead754d93f4d9b5919df0770a33deb261`, callers `ev_4157550d47de982aeb5b178860193037031d6842af65d6bad9debb5bc8b6a9b2`, callees `ev_0147458ca9b2286578a3d22d14b4569575628b38e48e72afec6bb5cac072888b`, bytes `ev_711a4452bc5bbeab4d828a7e1b9f98970769844522f4099c5a2af16a16d80384`, PE mapping `ev_9b627b38a7851c2c21b04d6246b0aac80bf3a1683507039e5b4b832171caf5fa`.

## Static and object validation

- Ghidra, original XBE raw offset `0x11EFC0`, derived PE file offset `0x11E340`, and XboxRecomp split agree byte-for-byte across 561/561 span bytes. The span occurs once in the original XBE. Span SHA-256: `598CDAD79C59C02880B470F13E9CD299E8D21BDAEC29ED0798BC31ECEC2DB35F`.
- MSVC 19.51.36260 x86 compiled with `/nologo /W4 /TC /c /O2 /GS- /GR- /Zl /Gd /Gy`, without diagnostics. Source SHA-256: `C5C519CC59B2A8BE1AF4D4A4A685C51AAE6873C9B3802B5E6887B44540F5DE07`; split SHA-256: `47865C85D36E5874F5EA37A2E98CA79E7007463534CBA63A3F266147106118D4`.
- ObjDiff 3.8.2 reports `_sub_0012EFC0` and compiled `.text$mn` at 100.00% (561 bytes) against the named candidate object. Compiled object SHA-256: `5720718E164A81738C561FE71BA227A5B5476BD0DB57F76BD68FCCE4F30E6BAF`; candidate object SHA-256: `A1FB470BEA0EA165544B2AB71449F242DF2DFA888EEC3E91774EE5C3D6958EE1`; raw report: `sub_0012EFC0.objdiff.json` (SHA-256 `B9ECC2784DC9836048EF47E1F11C7D625267FCB218DA39117B9A57A5599A2B53`).
- The candidate comes from a historical refresh inventory marked `complete=false`; this is not a complete Xbox build.

This is an address-pinned byte emitter, not semantic C or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending. It advances the supported lot 82 count from 87/100 to 88/100. The live dashboard and PR remain unchanged until all 100 functions are reconciled.