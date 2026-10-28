# sub_0009FCE6

- Function task: [#4043](https://github.com/soldieg/ReBLACK-XBOX/issues/4043).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009FCE6-0x0009FD1F inclusive, contiguous, 58 bytes; evidence `ev_b9bd9df5261e97fc5a14e41bb6af96eb76175ba85e272b8f2fab738df615cc51`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009FCE6`, 58 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (58/58 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 58 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `83988b6918c9e9c9be17f0dff56cc89b9b68b85945d18769bf0e215ff0edd3f2`; candidate object SHA-256: `44f4e3645c21dfa992673b59b828c03c50a786815ddcaca2ba97d3d047900928`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4043](https://github.com/soldieg/ReBLACK-XBOX/issues/4043).
- Fresh REA/Ghidra 12.1.3 body: 0x9fce6–0x9fd1f inclusive, contiguous, 58 bytes; analysis evidence `ev_b9bd9df5261e97fc5a14e41bb6af96eb76175ba85e272b8f2fab738df615cc51`.
- Fresh REA byte read: complete 58/58 bytes; SHA-256 matches the named candidate; evidence `ev_0103b4eaf79544705100af7d5b64023ef8a906329b683c6b48ea7ab6399c4cde`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
