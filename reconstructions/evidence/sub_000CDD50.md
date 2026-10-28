# sub_000CDD50

- Function task: [#4262](https://github.com/soldieg/ReBLACK-XBOX/issues/4262).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CDD50-0x000CDF90 inclusive, contiguous, 577 bytes; evidence `ev_c243891bc1dcf1f52988f25420fa4705e68c6b5b3c0eaf4fbe2fcd9c5ea7cad4`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CDD50`, 577 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (577/577 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 577 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6127fb431eed07b4181ae53ae149095e2a0bfffa87bfe154902f21da874c9154`; candidate object SHA-256: `4481a7aac0f916e20f0958857107b4269e87aff20f24b5690cd2b378b54ff273`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4262](https://github.com/soldieg/ReBLACK-XBOX/issues/4262).
- Fresh Ghidra boundary/relationship evidence: `ev_d9013f1f65ba0317be528f1cacd9fb2782e374296267f35508b3077ed951c165`; REA complete-byte evidence: `ev_1f59d09c4d8ad26c302cf72ba86df007fba79edb32a8ae7d8460f809ff8e693a`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 577 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
