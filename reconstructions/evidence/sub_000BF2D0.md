# sub_000BF2D0

- Function task: [#4208](https://github.com/soldieg/ReBLACK-XBOX/issues/4208).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BF2D0-0x000BF2E6 inclusive, contiguous, 23 bytes; evidence `ev_dfb5d63e7caf2f9f036617f4c44c353189bfb0d6188656d5411207ffdd71ede4`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BF2D0`, 23 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (23/23 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 23 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0f7e0c117f020bba834fc2e624a3a9a327872fa34b955dbe4ed2ccd2d16d93dd`; candidate object SHA-256: `f740b79ca5b34f5a7e16a3d4d0082fea3717d24677c1cab79144e35d215744f0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4208](https://github.com/soldieg/ReBLACK-XBOX/issues/4208).
- Fresh Ghidra boundary/relationship evidence: `ev_17ee0323ca1914d822f690ed7ba775c659b0871eb4fb6b5001d0b386245702e4`; REA complete-byte evidence: `ev_8c00b0a24658b947c0d94adc34e9f1e573a03fc41ca0f7837c78c72e2ab5feb7`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 23 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
