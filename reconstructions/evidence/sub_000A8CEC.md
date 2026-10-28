# sub_000A8CEC

- Function task: [#4132](https://github.com/soldieg/ReBLACK-XBOX/issues/4132).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A8CEC-0x000A8D5D inclusive, contiguous, 114 bytes; evidence `ev_2ca371aa8ac3f79d044e77f2ab391f05367d3327d6815f68e70c24d58b616f23`.
- Static Ghidra references: 2 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A8CEC`, 114 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (114/114 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 114 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `987cfd58970ca8e0439eb5734fd2eae18601dd34f4e55704590ce78f9e5433df`; candidate object SHA-256: `eb2fdd3013547c6f39151ccbe3524dd55d904dbb228ffa2e864a6bea361380b2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4132](https://github.com/soldieg/ReBLACK-XBOX/issues/4132).
- Fresh REA/Ghidra 12.1.3 body: 0xa8cec–0xa8d5d inclusive, contiguous, 114 bytes; analysis evidence `ev_2ca371aa8ac3f79d044e77f2ab391f05367d3327d6815f68e70c24d58b616f23`.
- Fresh REA byte read: complete 114/114 bytes; SHA-256 matches the named candidate; evidence `ev_e906e630fb83d0a7bd94169dea9cc53b134787c31bfdbc48cebcc7ed3397524f`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 2 caller sites, 5 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
