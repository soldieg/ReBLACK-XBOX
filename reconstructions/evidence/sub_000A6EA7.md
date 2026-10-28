# sub_000A6EA7

- Function task: [#4117](https://github.com/soldieg/ReBLACK-XBOX/issues/4117).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A6EA7-0x000A6EE2 inclusive, contiguous, 60 bytes; evidence `ev_6e11cd54d46b5984b160918b548f2910de529bb758705e820248dcc1f7b0986f`.
- Static Ghidra references: 4 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A6EA7`, 60 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (60/60 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 60 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `27c2806311056abc3841b706391f9ba4c0c14e641041f7d8c15fb3e79fe705e4`; candidate object SHA-256: `822b07e887a01785f6f199befc013548d235a29e2d03fb8e368bac3c5c09e935`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4117](https://github.com/soldieg/ReBLACK-XBOX/issues/4117).
- Fresh REA/Ghidra 12.1.3 body: 0xa6ea7–0xa6ee2 inclusive, contiguous, 60 bytes; analysis evidence `ev_6e11cd54d46b5984b160918b548f2910de529bb758705e820248dcc1f7b0986f`.
- Fresh REA byte read: complete 60/60 bytes; SHA-256 matches the named candidate; evidence `ev_0caa33e244c71268ec4143b705ce3e23958e4b7a6376069d90995089910e55bd`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 4 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
