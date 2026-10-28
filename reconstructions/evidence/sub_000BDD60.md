# sub_000BDD60

- Function task: [#4202](https://github.com/soldieg/ReBLACK-XBOX/issues/4202).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BDD60-0x000BE0AD inclusive, contiguous, 846 bytes; evidence `ev_91053f8202e7d6b9e626e5b7bd204696d20088beb9b76a3476d39e566ea7c576`.
- Static Ghidra references: 1 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BDD60`, 846 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (846/846 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 846 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7e4ba1aa9eb2a008144fa78a1a89f6c4dcb0f9bd84435d858384f0c9ecdd0ae1`; candidate object SHA-256: `dac94bf8adb6d7141eecb79cc592ce7d0f5d43d620d2f0d893baca2a008c5b22`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4202](https://github.com/soldieg/ReBLACK-XBOX/issues/4202).
- Fresh Ghidra boundary/relationship evidence: `ev_2b20d53d15e3906c9b95b4171886708d53b384c38cc2668216f57d5c6216e135`; REA complete-byte evidence: `ev_55538fbf648380ff431e73be358fa0a07578074d00a372997b6c10ae194990c9`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 846 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.

## Lot 100 revalidation — 2026-10-28

- Task: [#4202](https://github.com/soldieg/ReBLACK-XBOX/issues/4202).
- Fresh REA/Ghidra 12.1.3 body: 0xbdd60–0xbe0ad inclusive, contiguous, 846 bytes; analysis evidence `ev_8efe47aedbebd64286ea99db52482e1e764f3d651a8caf397df5ff0abea43f48`.
- Fresh REA byte read: complete 846/846 bytes; SHA-256 matches the named candidate; evidence `ev_ccaa516e08458556b9c146e139c621b6d121001534f416d54e72d042d34b7fbe`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 8 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
