# sub_000ACC30

- Function task: [#4162](https://github.com/soldieg/ReBLACK-XBOX/issues/4162).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000ACC30-0x000ACD33 inclusive, contiguous, 260 bytes; evidence `ev_443601e148c927b0ac99a7ad4277ade3a957397f08e97097833a364fa3dbab34`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000ACC30`, 260 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (260/260 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 260 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c54a0795d63ee14b24a8de2c621e65d6a4404ab90ceb7342994b9014647ae4aa`; candidate object SHA-256: `137c16ed2e57dbe33e2e3837f9cd826c41bb54ddb1cf580fc4021288574b431b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4162](https://github.com/soldieg/ReBLACK-XBOX/issues/4162).
- Fresh REA/Ghidra 12.1.3 body: 0xacc30–0xacd33 inclusive, contiguous, 260 bytes; analysis evidence `ev_443601e148c927b0ac99a7ad4277ade3a957397f08e97097833a364fa3dbab34`.
- Fresh REA byte read: complete 260/260 bytes; SHA-256 matches the named candidate; evidence `ev_27ac1b25eb96a2327ff8a8742f89304191814b8516414c2e875a17dbc1c61248`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
