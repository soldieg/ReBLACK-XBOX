# sub_000A0CC0

- Function task: [#4057](https://github.com/soldieg/ReBLACK-XBOX/issues/4057).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A0CC0-0x000A0D04 inclusive, contiguous, 69 bytes; evidence `ev_12fb73ebdfee5e9698d7a65cc89307a2da437e7e084bceaf3061917916920d6a`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A0CC0`, 69 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (69/69 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 69 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a7b31dc410392ffe0d0366ab156eded6765a5ed491c910641c21f71cb2ee793f`; candidate object SHA-256: `9818ac111b2779b3320f894a0020f3d50ddbc48aaae2494cf47dedaf5077a4ce`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4057](https://github.com/soldieg/ReBLACK-XBOX/issues/4057).
- Fresh REA/Ghidra 12.1.3 body: 0xa0cc0–0xa0d04 inclusive, contiguous, 69 bytes; analysis evidence `ev_12fb73ebdfee5e9698d7a65cc89307a2da437e7e084bceaf3061917916920d6a`.
- Fresh REA byte read: complete 69/69 bytes; SHA-256 matches the named candidate; evidence `ev_c6339827eaa51969b4db1aace3c813ef854efce089bf3de2726276ce06862e43`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
