# sub_000CED10

- Function task: [#4267](https://github.com/soldieg/ReBLACK-XBOX/issues/4267).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CED10-0x000CEDA0 inclusive, contiguous, 145 bytes; evidence `ev_91497d33958dc9bdb9e285ed360f3729c3e5015d2141988a93cc1175fbf4f80f`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CED10`, 145 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (145/145 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 145 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e282c7d2ae74c231ed79d04db017dea5354fb3174ad07a6afe36372d675826fa`; candidate object SHA-256: `ca697ded6c41e4669bbde192df8b2be59c4a9574aaf9a2b02126d357c61edbdc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4267](https://github.com/soldieg/ReBLACK-XBOX/issues/4267).
- Fresh Ghidra boundary/relationship evidence: `ev_7ca9c8bfe35640b5d4fe83f922fbac85a52fc6b99f3892d2bc9329c9a0df5dd0`; REA complete-byte evidence: `ev_36a2acbc8d27805cdf644b88ab347a6c416aeeb9740dc34ab8cf10acec6d8f9f`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 145 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
