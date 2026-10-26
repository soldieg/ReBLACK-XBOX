# sub_000BAAB0

- Function task: [#5019](https://github.com/soldieg/ReBLACK-XBOX/issues/5019).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x000BAAB0-0x000BAB15 inclusive, contiguous, 102 bytes; evidence `ev_f56a7c17e27d7b0f6874b2d3742bd847dfa320495a0303b390459042de3e2908`.
- Static Ghidra references: 4 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body..
- Target candidate: `sub_000BAAB0`, 102 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (102/102 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 102 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `07440f317fa38adaab5a88970d90e29b5d4a6579037644a1de0bfc655b5936ac`; candidate object SHA-256: `c7065e04e1f2b0320c6839f96d6732a77beb0a51a2bd7317e77ff3969370b01a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
