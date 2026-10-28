# sub_000A99BB

- Function task: [#4141](https://github.com/soldieg/ReBLACK-XBOX/issues/4141).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A99BB-0x000A9A7F inclusive, contiguous, 197 bytes; evidence `ev_e939604252e898b29f40c2c4ee7766137ee832471f56a51b8e71a3014a9c641d`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A99BB`, 197 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (197/197 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 197 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ac994e7ad0e140f9ace36bdf34b1872bba88a09471fd542bc083f3edc734ae1d`; candidate object SHA-256: `9fe908e0c1df5a4fd723f30f1bdd6a4c5cc50e2d2883b15a1adb5d173aef4c18`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4141](https://github.com/soldieg/ReBLACK-XBOX/issues/4141).
- Fresh REA/Ghidra 12.1.3 body: 0xa99bb–0xa9a7f inclusive, contiguous, 197 bytes; analysis evidence `ev_e939604252e898b29f40c2c4ee7766137ee832471f56a51b8e71a3014a9c641d`.
- Fresh REA byte read: complete 197/197 bytes; SHA-256 matches the named candidate; evidence `ev_f97d53e6b985a68917bd9d44d08ec51cdb98704886519cbdb903ae2eb8397d6a`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 4 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
