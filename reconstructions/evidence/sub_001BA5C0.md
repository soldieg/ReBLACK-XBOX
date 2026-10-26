# sub_001BA5C0

- Function task: [#2783](https://github.com/soldieg/ReBLACK-XBOX/issues/2783).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BA5C0–0x001BA660 inclusive, contiguous, 161 bytes; evidence `ev_d9c031d134622e0e199d4490ebc9ef558894a2e49c3792e8e6606909279c3b98`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BA5C0`, 161 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (161/161 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 161 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5f937bac11ea5a7af6750f3f2ebbacdce9dd82275ada8d7f2815f895851a606f`; candidate object SHA-256: `a10ef7952ba50ba74209f3a8da07df35d50d685af1c3f492b2228c0b5a62ecf2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
