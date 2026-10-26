# sub_00220FAF

- Function task: [#5466](https://github.com/soldieg/ReBLACK-XBOX/issues/5466).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x00220FAF-0x00221059 inclusive, contiguous, 171 bytes; evidence `ev_bc3dbbd7372cd15a51698de8f8d4fc9073288d85edfb8bd7e99766f8239ae580`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_00220FAF`, 171 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (171/171 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 171 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0c850a027fc112b11e25746966364110cc3605e2f0784e4b62eeeb983fb895a3`; candidate object SHA-256: `24288e18cca3ad9fede8d9944849918e00006f1a21e7c96957f0ed509a80dd7d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
