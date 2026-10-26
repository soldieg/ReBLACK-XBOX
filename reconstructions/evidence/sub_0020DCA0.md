# sub_0020DCA0

- Function task: [#3169](https://github.com/soldieg/ReBLACK-XBOX/issues/3169).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x0020DCA0â€“0x0020DD58 inclusive, contiguous, 185 bytes; evidence `ev_72db463338cc8aa76b96d1c72c47c5f0e458d3351ff62a32b347915cb47c392c`.
- Static Ghidra references: 9 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0020DCA0`, 185 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (185/185 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 185 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aaa76e1703055c7929f3e9a002ecb59a377eb48540c5ac40694a2f2b67e7530c`; candidate object SHA-256: `87b626fce14e4fded15eaf038faec17aa0d70649042ee74f20811a85f0635715`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
