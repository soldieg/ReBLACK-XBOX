# sub_000AA37C

- Function task: [#4148](https://github.com/soldieg/ReBLACK-XBOX/issues/4148).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AA37C-0x000AA396 inclusive, contiguous, 27 bytes; evidence `ev_a8bdfa5b3fc58a1a531e4aa7ac1f60a39c0de45d1eb3c7f38e926a6b6a4a9941`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AA37C`, 27 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (27/27 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 27 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2210d3100265313e2a76a34f559872b4968c04de92c5252ef6cc136ea2cfb62b`; candidate object SHA-256: `b77943860e12f761168f36e1386b83367b03e74304e74e728271faaa028fba67`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
