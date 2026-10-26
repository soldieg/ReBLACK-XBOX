# sub_000D2BF0

- Function task: [#4283](https://github.com/soldieg/ReBLACK-XBOX/issues/4283).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D2BF0-0x000D2F32 inclusive, contiguous, 835 bytes; evidence `ev_98ad48c80b032fa0911d014704f251c27adbb097cc81e35a75ae53e534c866f0`.
- Static Ghidra references: 8 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D2BF0`, 835 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (835/835 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 835 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0ea7f3303e5fba32c5916a7808c61391b3ac6f4896dca419601db8b868135324`; candidate object SHA-256: `2ea65cdf42d67dd2fc4c61477ced62e04ce6cdfd598fcfdcf85f9508b6183b49`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
