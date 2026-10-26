# sub_000B6FF0

- Function task: [#5012](https://github.com/soldieg/ReBLACK-XBOX/issues/5012).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x000B6FF0-0x000B70AF inclusive, contiguous, 192 bytes; evidence `ev_c4b2a841727b564ca9f5cee827aa5ca4e82668939ab66c0cde545af2b02a2db9`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_000B6FF0`, 192 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (192/192 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 192 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `32a6b576950d84cce2670454111a18499b5a5b0847a14dc9fc091aeac71a9544`; candidate object SHA-256: `64b4360ac48ef4383b47b32106f67debe0bff43357e207ba4a6cab3278e14086`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
