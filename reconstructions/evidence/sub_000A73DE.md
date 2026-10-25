# sub_000A73DE

- Function task: [#4121](https://github.com/soldieg/ReBLACK-XBOX/issues/4121).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A73DE-0x000A7458 inclusive, contiguous, 123 bytes; evidence `ev_c24f60b07c7b85226d8c5d27160a833c648d5ad6ed8f7c2b383873509d040ea9`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A73DE`, 123 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (123/123 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 123 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `30aa8308ba5d62bb7e4022c0728f88e46bc07c821c0a16f8617591065bd505d7`; candidate object SHA-256: `8237b376d84e9fc6dd8bc1e9293f35140dd3e1384605da75376fdcf8e9ed230f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
