# sub_0002EFC0

- Function task: [#3709](https://github.com/soldieg/ReBLACK-XBOX/issues/3709).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0002EFC0-0x0002F381 inclusive, contiguous, 962 bytes; evidence `ev_d1598f6aa163d94bb7b6e797b8bb78207aef5192a31a82c822538a5d86f1dd06`.
- Static Ghidra references: 2 caller sites, 15 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0002EFC0`, 962 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (962/962 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 962 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `48396615213fbcfa79c4c0823f66b283ee411598fabf036df8f7b635698ea7b3`; candidate object SHA-256: `797b43cb51d92b04f71f418e399ab0c1c45692cfd7b85fa79b281768559c605b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 96 revalidation — 2026-10-28

- Task: [#3709](https://github.com/soldieg/ReBLACK-XBOX/issues/3709).
- Fresh REA/Ghidra 12.1.3 body: 0x2efc0–0x2f381 inclusive, contiguous, 962 bytes; analysis evidence `ev_185686d611caa6c90f3864eb4a777b476412354c7cfbd0e8ed26652bfe52ec9e`.
- Fresh REA byte read: complete 962/962 bytes; SHA-256 matches the named candidate; evidence `ev_a186ac56b3313164107b65c08668722b6cc5480cf88d3cc855d97784768f5a8a`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 2 caller sites, 15 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
