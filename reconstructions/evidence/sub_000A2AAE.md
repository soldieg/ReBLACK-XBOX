# sub_000A2AAE

- Function task: [#4072](https://github.com/soldieg/ReBLACK-XBOX/issues/4072).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A2AAE-0x000A2AC4 inclusive, contiguous, 23 bytes; evidence `ev_937343b62e1e981995fb45df3244b4f1e845784f01256203362fbb0d933f4e0f`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A2AAE`, 23 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (23/23 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 23 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f8e8e9b8d42113c5df681f7aad6d4875e677a73f53d1e08c6364d26ddc2f8543`; candidate object SHA-256: `7b39558c0dca5fec5ea5ef4ccd39a8bcf4d8a282b4691dfdc2e68ed3e0c9094a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4072](https://github.com/soldieg/ReBLACK-XBOX/issues/4072).
- Fresh REA/Ghidra 12.1.3 body: 0xa2aae–0xa2ac4 inclusive, contiguous, 23 bytes; analysis evidence `ev_937343b62e1e981995fb45df3244b4f1e845784f01256203362fbb0d933f4e0f`.
- Fresh REA byte read: complete 23/23 bytes; SHA-256 matches the named candidate; evidence `ev_4c209483798e030e9a10f12bd8e540bdba213c4d953847287a98bad94e40dc58`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
