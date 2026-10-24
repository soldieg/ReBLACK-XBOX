# sub_0021AC4A

- Function task: [#3262](https://github.com/soldieg/ReBLACK-XBOX/issues/3262).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021AC4Aâ€“0x0021ACF3 inclusive, contiguous, 170 bytes; evidence `ev_ba6041af7f414b79e8b734713c79684cea4ff7660d854a6fd6f5af3b1f692afa`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021AC4A`, 170 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (170/170 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 170 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `44716a59d01500e87d87ff614a47b46ba0daa6f027f9e28d9887e79d83488b7d`; candidate object SHA-256: `ee38b67fb9386f823b453b90d4bc3b78793bb62340ac39aae29d428dd0b9874a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
