# sub_001FB6C0

- Function task: [#5358](https://github.com/soldieg/ReBLACK-XBOX/issues/5358).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001FB6C0-0x001FB755 inclusive, contiguous, 150 bytes; evidence `ev_5fb58d9b659c077ff8a6beeb5b2b610d2e19a9447247a173487094cde7516daa`.
- Static Ghidra references: 9 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001FB6C0`, 150 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (150/150 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 150 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d9d7407334f3efe7b7dcdd9bdd74ae08f1371249eff77f60f2c336e565161a61`; candidate object SHA-256: `071c5055efa6220875eea1f66e39f0018e16423d277a2afd27261033125f1273`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
