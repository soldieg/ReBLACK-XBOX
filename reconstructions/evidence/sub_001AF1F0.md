# sub_001AF1F0

- Function task: [#2762](https://github.com/soldieg/ReBLACK-XBOX/issues/2762).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AF1F0–0x001AF216 inclusive, contiguous, 39 bytes; evidence `ev_dcc5003a23d40a4ae1836a7bf983ec237fd4b4257661f8dc371a8ff25de42e16`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AF1F0`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `514a5dc360a3868fbca40b2874bf89ae29d373c3210f2086672b1bc015db9aba`; candidate object SHA-256: `e8c1aa9d42da95960e4037f83e9bae6f14e59546caad2c11cf8ffd67dcbc2ccf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
