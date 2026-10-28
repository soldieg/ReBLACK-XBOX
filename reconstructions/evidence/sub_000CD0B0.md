# sub_000CD0B0

- Function task: [#4257](https://github.com/soldieg/ReBLACK-XBOX/issues/4257).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CD0B0-0x000CD357 inclusive, contiguous, 680 bytes; evidence `ev_d572eaf246bb49f57c90243df318d006e93ed04cce0a9e390c0e5ac1166908f6`.
- Static Ghidra references: 10 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CD0B0`, 680 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (680/680 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 680 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `30fca9d120dae7dcd1da9834fc62fabeca951fb0f49b8320a9acca1d432ec7eb`; candidate object SHA-256: `0a2a6b805439cc1c2e8e546e46b7b80de5c1b072d0fd3aa590924ef09666e66f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4257](https://github.com/soldieg/ReBLACK-XBOX/issues/4257).
- Fresh Ghidra boundary/relationship evidence: `ev_b3d3030a7a66154c2351cc7a00ff46427066f96bf72fd04fa25adebcde2cc306`; REA complete-byte evidence: `ev_6bcaae2eea5f86ecad4d4375b3ef8fa92b6bcab4319f329812d91aab051c518d`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 680 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
