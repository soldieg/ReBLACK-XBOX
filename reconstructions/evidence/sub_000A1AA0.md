# sub_000A1AA0

- Function task: [#4060](https://github.com/soldieg/ReBLACK-XBOX/issues/4060).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A1AA0-0x000A1AEA inclusive, contiguous, 75 bytes; evidence `ev_6a8978dc6f64566ea48f8998afd1868adf3077be843f9b2fd1e35580128f1b97`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A1AA0`, 75 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (75/75 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 75 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `44a91f3ab647ed47462d3649a72be81123f934a5b2dcca06f547a4cf12668113`; candidate object SHA-256: `ff57fda91622b97319b2e78d7fcb601a198a6c5487ef411022e3ae16ddf36ba9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4060](https://github.com/soldieg/ReBLACK-XBOX/issues/4060).
- Fresh REA/Ghidra 12.1.3 body: 0xa1aa0–0xa1aea inclusive, contiguous, 75 bytes; analysis evidence `ev_6a8978dc6f64566ea48f8998afd1868adf3077be843f9b2fd1e35580128f1b97`.
- Fresh REA byte read: complete 75/75 bytes; SHA-256 matches the named candidate; evidence `ev_be7200d5c5b6baf8a0d44e0bccaa856e80a27219252a9ad5388c678c5e933a44`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
