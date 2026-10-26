# sub_0022DF6E

- Function task: [#5609](https://github.com/soldieg/ReBLACK-XBOX/issues/5609).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022DF6E-0x0022E0A3 inclusive, contiguous, 310 bytes; evidence `ev_ef5083d55476d95762891d81213b905f2e841154177fac9fa7c92ebb171699ae`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022DF6E`, 310 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (310/310 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 310 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bcb0911d9e2f5a08f3a1d7a57d9ba2034d05c13dacb483ce56b4656c91639b19`; candidate object SHA-256: `fb8bb78cbed7fa631eee7e40d6f68a104997fe9067b4048e14d79a32eca6dcaf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
