# sub_000CD8A0

- Function task: [#4261](https://github.com/soldieg/ReBLACK-XBOX/issues/4261).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CD8A0-0x000CDD4F inclusive, contiguous, 1200 bytes; evidence `ev_a91575dd27577f477d0cf4c537baf35b2351dac151db1d9ebe49ba49c56a52e3`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CD8A0`, 1200 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1200/1200 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1200 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `60854e15b3ec8f61a3c59cc96bac746c65429c5ce9f836c9a6e34fe1f1af6184`; candidate object SHA-256: `d46397b716704c4e882495c8eec845c959ce27d00e6c8531024f9aad910dee6a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4261](https://github.com/soldieg/ReBLACK-XBOX/issues/4261).
- Fresh Ghidra boundary/relationship evidence: `ev_90d0f44248504accdf21c14350b519ade5fa5c668952681226744985da879aeb`; REA complete-byte evidence: `ev_50e6632b712fef7e78bd7ee69f9785bc019284a89b42149e803775d1f0f724d4`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 1200 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
