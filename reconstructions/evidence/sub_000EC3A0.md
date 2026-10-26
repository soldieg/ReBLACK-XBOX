# sub_000EC3A0

- Function task: [#5889](https://github.com/soldieg/ReBLACK-XBOX/issues/5889).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xec5ef; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EC3A0-0x000EC60D inclusive, contiguous, 622 bytes; evidence `ev_4bcd8c5f77312f29f43525dd3086cf541e88c112689332520c0f5268d0e57d37`.
- Static Ghidra references: 0 caller sites, 2 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe69b0 (FUN_000e69b0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EC3A0`, 622 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (622/622 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 622 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a19b004f97b27549268fa007cb6c413482de0b8a29c5e6173ee299be9f6fe7dc`; candidate object SHA-256: `9308d898fe73c23dee6bef30b82c8775bd313eb994454bc498dde479b1ab9653`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
