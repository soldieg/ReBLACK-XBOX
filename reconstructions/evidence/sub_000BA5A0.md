# sub_000BA5A0

- Function task: [#4178](https://github.com/soldieg/ReBLACK-XBOX/issues/4178).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BA5A0-0x000BA5C0 inclusive, contiguous, 33 bytes; evidence `ev_2346d324165e18f2d603dafbdc8adb0462bf947b0afdd7329cc19ee0cdc7bcdc`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BA5A0`, 33 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (33/33 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 33 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a1388ee5e29d33faa11d6ba2056e8c45430cf24296b99c9861201717cc13ab49`; candidate object SHA-256: `f98e65f374afad4986c6dba855226b5ebe300c1b0cbe4c1084e288aad5d70bcc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4178](https://github.com/soldieg/ReBLACK-XBOX/issues/4178).
- Fresh REA/Ghidra 12.1.3 body: 0xba5a0–0xba5c0 inclusive, contiguous, 33 bytes; analysis evidence `ev_aa6d0c64c719c816c6e8d77caf2a8a4865f2cf1f30574026a28f238dbbb89b6b`.
- Fresh REA byte read: complete 33/33 bytes; SHA-256 matches the named candidate; evidence `ev_d6062406da2791e27d0c513c18c5fa8ddf85caa605284bed534734e5e23fc777`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
