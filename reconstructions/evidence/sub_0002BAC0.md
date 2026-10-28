# sub_0002BAC0

- Function task: [#3699](https://github.com/soldieg/ReBLACK-XBOX/issues/3699).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0002BAC0-0x0002C06D inclusive, contiguous, 1454 bytes; evidence `ev_a9e1e7f381d88f99089763bbd32c6445ab868834423c3b41ddaf94c4133f579d`.
- Static Ghidra references: 1 caller sites, 12 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0002BAC0`, 1454 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1454/1454 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1454 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `636dd62a22ded59a20cc142494b98f9f74ee8b08f6f335eaabf8a621fd6c8a5e`; candidate object SHA-256: `3de33264f72e23ed82e0a430f804b161ce8aafeac8fefc2f11040861151795fa`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 96 revalidation — 2026-10-28

- Task: [#3699](https://github.com/soldieg/ReBLACK-XBOX/issues/3699).
- Fresh REA/Ghidra 12.1.3 body: 0x2bac0–0x2c06d inclusive, contiguous, 1454 bytes; analysis evidence `ev_39106ac348e193334ca52700531f69ad2d821affb9dfbf572b98fe65e4c4f16d`.
- Fresh REA byte read: complete 1454/1454 bytes; SHA-256 matches the named candidate; evidence `ev_77158b9ff2170ff6c96424dc5af5c1ab36e425b7f1db362f8582b034d9fe7c8c`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 12 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
