# sub_001EA8A0

- Function task: [#5321](https://github.com/soldieg/ReBLACK-XBOX/issues/5321).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EA8A0-0x001EACC1 inclusive, contiguous, 1058 bytes; evidence `ev_7342a6981bef4ee437ef40f8df007a3aeb1540ac50556ac925b58bca0fee54f5`.
- Static Ghidra references: 1 caller sites, 12 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EA8A0`, 1058 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1058/1058 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1058 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a137e6832347eec19ef520965a439ca1a48da4f8ca6930f27dd5e02c3e17fad6`; candidate object SHA-256: `dda7da9692cdd510e93aa40cfe8a5540385df28748a9cd3b2c8c60c9455c03ac`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
