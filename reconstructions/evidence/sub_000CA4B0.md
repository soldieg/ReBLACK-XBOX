# sub_000CA4B0

- Function task: [#4244](https://github.com/soldieg/ReBLACK-XBOX/issues/4244).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CA4B0-0x000CA6FD inclusive, contiguous, 590 bytes; evidence `ev_57e712343c92a74b6ba160c96122cd2684107d71edd560834e99d5613b89b06e`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CA4B0`, 590 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (590/590 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 590 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `fdcdf837139ad86365dfa2fbb75f315da23c126eb75b77982ac3c28b8df4cd87`; candidate object SHA-256: `048e22f3f2f069e7ef6ddd4414c4b2e7bbaf2fad5955d15c490aec73d941574e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4244](https://github.com/soldieg/ReBLACK-XBOX/issues/4244).
- Fresh Ghidra boundary/relationship evidence: `ev_7314ac576c6caf187f941cb42befa61da79cf823457f8fcef2692753fe5a8aff`; REA complete-byte evidence: `ev_5eafe04f877df1669ba8d59bbd21c2d31213272d8afcb69e312e592a4509f696`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 590 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
