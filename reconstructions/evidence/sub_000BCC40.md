# sub_000BCC40

- Function task: [#4197](https://github.com/soldieg/ReBLACK-XBOX/issues/4197).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BCC40-0x000BCD0F inclusive, contiguous, 208 bytes; evidence `ev_711ccaf546b2e63139083b3f08754b37ddb5d8e534c253adc3c502b58e27f08c`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BCC40`, 208 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (208/208 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 208 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7c772b47634bc2a040135812877d3b13a9a2a454d516dcfe1eb75c3477e1e513`; candidate object SHA-256: `6afb263f32e6e0dd6054abe8137ca6b440b2387dd2e71ed8c8194226109c30fd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4197](https://github.com/soldieg/ReBLACK-XBOX/issues/4197).
- Fresh Ghidra boundary/relationship evidence: `ev_79fd25b55b70b749f2d404112755f4baf54b46e420f52faf9af53b7b260c161b`; REA complete-byte evidence: `ev_1aae5048708b489be38e223f66ac76625003a4d5cc4800342700a4956cc3e0fb`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 208 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.

## Lot 100 revalidation — 2026-10-28

- Task: [#4197](https://github.com/soldieg/ReBLACK-XBOX/issues/4197).
- Fresh REA/Ghidra 12.1.3 body: 0xbcc40–0xbcd0f inclusive, contiguous, 208 bytes; analysis evidence `ev_d09bbb7d80647d2b34b73bb9e47637fdbfaec734d8aeb36f7d2d34a885c48a9c`.
- Fresh REA byte read: complete 208/208 bytes; SHA-256 matches the named candidate; evidence `ev_551e0f32ac7b1f06a080d442fbc711a8cb18e8f0d95e96dea42ed9c8c49b15f5`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 2 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
