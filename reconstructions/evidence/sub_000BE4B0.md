# sub_000BE4B0

- Function task: [#4207](https://github.com/soldieg/ReBLACK-XBOX/issues/4207).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BE4B0-0x000BE4C0 inclusive, contiguous, 17 bytes; evidence `ev_ada320251388cfd7becf3585eb983ab5185272d4f9b7a827d3a2330d702d3c5f`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BE4B0`, 17 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (17/17 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 17 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6e7687b13366d3797ad52b0096db5c61c58b89add5602a31c2d205f4cfc4837d`; candidate object SHA-256: `545a99b70d90b08136a3ea808f3ec9a49a81813daa0eb5a3d09ba0cfde0e4342`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4207](https://github.com/soldieg/ReBLACK-XBOX/issues/4207).
- Fresh Ghidra boundary/relationship evidence: `ev_955a7cb7f4e53f101d5fe808128d28cbabfc0042f992f1cf007effad81ec65c0`; REA complete-byte evidence: `ev_a312ed83c7ababe6364d0aed7327f1ce62696c0fce273b844b490d6523b57ea4`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 17 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
