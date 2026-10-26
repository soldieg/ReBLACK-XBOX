# sub_0022B5EC

- Function task: [#5593](https://github.com/soldieg/ReBLACK-XBOX/issues/5593).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022B5EC-0x0022B66F inclusive, contiguous, 132 bytes; evidence `ev_7df64b633dc0807ddfb6e2b2ae59e4232cfcc80ee78050de6a6349bc963c789d`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022B5EC`, 132 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (132/132 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 132 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7b215402d26879162bdc3b3d4387e0cd9f0a704e61665e282c0693c5f19a99c9`; candidate object SHA-256: `3b225e8edeaa4cbddc600ed6486fbc1825cd519d45533dadd835260d85c062df`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
