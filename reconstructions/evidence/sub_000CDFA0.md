# sub_000CDFA0

- Function task: [#4263](https://github.com/soldieg/ReBLACK-XBOX/issues/4263).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CDFA0-0x000CDFC6 inclusive, contiguous, 39 bytes; evidence `ev_072b9d00b0f72c7c2616068f1162b891aae2bef2acb78e78d4b93737f0f4b63b`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CDFA0`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `46ee9d44ce6d89efbc7a4c7a74b1a27d59ca41f0826a4165f0bed8786a832c0f`; candidate object SHA-256: `e8e06b90cf389b52949f2df3bd0164af3116974b0c0ff1471316e44057ca4402`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4263](https://github.com/soldieg/ReBLACK-XBOX/issues/4263).
- Fresh Ghidra boundary/relationship evidence: `ev_3bcff5dbcbe683b0a33487e9a59b1b92c9d7b6365b7c6ded0425701e16dc4dc1`; REA complete-byte evidence: `ev_9e3dfca6be1eaeca77f76d402fa50df449c27d3b77b379d2bf96956f216b784a`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 39 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
