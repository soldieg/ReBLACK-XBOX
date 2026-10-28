# sub_000CFC40

- Function task: [#4272](https://github.com/soldieg/ReBLACK-XBOX/issues/4272).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CFC40-0x000CFC86 inclusive, contiguous, 71 bytes; evidence `ev_c9ef4440983e0317e36b85d99a647c68016be92ac9f6efc5c7d1db111a81d151`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CFC40`, 71 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (71/71 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 71 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f3fec0bdcd51ae4a21160d9b1d0fe7fe86cc37ce4dd9dfcc6f7c9205c6cd2045`; candidate object SHA-256: `9ffa51ce5c979a4d996d1eb27c4553abf7271b0712bf8b5727e0d396d5985300`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4272](https://github.com/soldieg/ReBLACK-XBOX/issues/4272).
- Fresh Ghidra boundary/relationship evidence: `ev_1e05ff3822a68b769f0c14ac94bd5670125d06894f6a7af64525b9ca0a6e2abf`; REA complete-byte evidence: `ev_f63c9e2236612d0830e4322d87f82f13103c2afdaaf58292ec9615b8b90a3173`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 71 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
