# sub_000CEB20

- Function task: [#4266](https://github.com/soldieg/ReBLACK-XBOX/issues/4266).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CEB20-0x000CED02 inclusive, contiguous, 483 bytes; evidence `ev_cbb0313bdf3d5b6269145b186361aa4ff80e0faabcb431819c72e6ed30c51566`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CEB20`, 483 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (483/483 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 483 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bc5b9467bab16ffb0b11164143e47d7bae20db00993aa91502666518b74754e1`; candidate object SHA-256: `8b4131caab82dbf98df341fdc3b6aa74f0d0b694f4159690ff231aa54535f818`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
