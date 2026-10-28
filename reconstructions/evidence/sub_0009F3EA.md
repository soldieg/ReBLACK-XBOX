# sub_0009F3EA

- Function task: [#4038](https://github.com/soldieg/ReBLACK-XBOX/issues/4038).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009F3EA-0x0009F67E inclusive, contiguous, 661 bytes; evidence `ev_88638ada817f480b1ec79258f706cf70caff5470cc9cfb65991e3c5702d9f98f`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009F3EA`, 661 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (661/661 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 661 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `72ead5c56c279ef6afad0cac0cfd7d428898c518f202f9d06960a64097c6ebb1`; candidate object SHA-256: `42d219880c6c80fe9482e29d1b777ce35f40547e460b5407d43f79cf4e2fab99`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4038](https://github.com/soldieg/ReBLACK-XBOX/issues/4038).
- Fresh REA/Ghidra 12.1.3 body: 0x9f3ea–0x9f67e inclusive, contiguous, 661 bytes; analysis evidence `ev_88638ada817f480b1ec79258f706cf70caff5470cc9cfb65991e3c5702d9f98f`.
- Fresh REA byte read: complete 661/661 bytes; SHA-256 matches the named candidate; evidence `ev_f61c8ad04de996ba9c70475ed3e98c49e7a3920dc9454280f6a5215373e58a66`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 5 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
