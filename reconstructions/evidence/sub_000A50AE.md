# sub_000A50AE

- Function task: [#4093](https://github.com/soldieg/ReBLACK-XBOX/issues/4093).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A50AE-0x000A5351 inclusive, contiguous, 676 bytes; evidence `ev_080fbeed75d9a601a89c2af81459dab07e0ae360a79fc09f204ff92b0b1da12d`.
- Static Ghidra references: 2 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A50AE`, 676 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (676/676 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 676 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `323306d66e5403ef98c9125dc611739f64a5b48bc2489465f2e693acb04420f8`; candidate object SHA-256: `3f5c47007ce6e2959457bc6129975a72c052a2121511fd5ec3ec30a632dd0925`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4093](https://github.com/soldieg/ReBLACK-XBOX/issues/4093).
- Fresh REA/Ghidra 12.1.3 body: 0xa50ae–0xa5351 inclusive, contiguous, 676 bytes; analysis evidence `ev_080fbeed75d9a601a89c2af81459dab07e0ae360a79fc09f204ff92b0b1da12d`.
- Fresh REA byte read: complete 676/676 bytes; SHA-256 matches the named candidate; evidence `ev_2c1d7c1d8e8811b1ea0ac75534999b25e6bf5b81caf19033c0a3d50bca125b39`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 2 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
