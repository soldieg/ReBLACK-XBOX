# sub_000A2FD6

- Function task: [#4073](https://github.com/soldieg/ReBLACK-XBOX/issues/4073).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A2FD6-0x000A3043 inclusive, contiguous, 110 bytes; evidence `ev_fc9520a6d78c9c6a525fcbc6481f156fdf3765436bfa4e1edbe7b5d9215c8c92`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A2FD6`, 110 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (110/110 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 110 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d77887f1f72b7cff6e60d9e956593fc2180c168e207a35ed7ca0324317109c69`; candidate object SHA-256: `8b35464deada1ead494e2eec8648a382ce44a569b9b154fe4eea8cb88c9104b2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4073](https://github.com/soldieg/ReBLACK-XBOX/issues/4073).
- Fresh REA/Ghidra 12.1.3 body: 0xa2fd6–0xa3043 inclusive, contiguous, 110 bytes; analysis evidence `ev_fc9520a6d78c9c6a525fcbc6481f156fdf3765436bfa4e1edbe7b5d9215c8c92`.
- Fresh REA byte read: complete 110/110 bytes; SHA-256 matches the named candidate; evidence `ev_4cd65a18277c50aa0cb728689a3354d6a6546aa5c5a68a0e0ad3ea48ede34c06`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
