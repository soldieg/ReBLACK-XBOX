# sub_000CBF40

- Function task: [#4252](https://github.com/soldieg/ReBLACK-XBOX/issues/4252).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CBF40-0x000CC037 inclusive, contiguous, 248 bytes; evidence `ev_a3871e747478b101c666a69577fbb6ba79ac6bfcd59e71aa1bdee2412d8386fb`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CBF40`, 248 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (248/248 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 248 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f926f808b10632a1b87149722a193816700a03f1f75c6476b0c022c9538c58b0`; candidate object SHA-256: `6e414a777c5787ac9f952e3de6bca25b870ae4da6e78b11608d9e83e03d0bf61`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4252](https://github.com/soldieg/ReBLACK-XBOX/issues/4252).
- Fresh Ghidra boundary/relationship evidence: `ev_76f63ebb580934c138f1dd5c5a5eb48dec209cec8acae87c5cd21775113f2242`; REA complete-byte evidence: `ev_8dbcce09c6e17e644200e5a4a17ed4b00a206406e328344a01764125d3d15cf3`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 248 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
