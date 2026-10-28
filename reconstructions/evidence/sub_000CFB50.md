# sub_000CFB50

- Function task: [#4270](https://github.com/soldieg/ReBLACK-XBOX/issues/4270).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CFB50-0x000CFBDD inclusive, contiguous, 142 bytes; evidence `ev_c5d50c7b0e07fb78175337ab0dd2e0a0985c1b55d56d345488f45b776679fdeb`.
- Static Ghidra references: 6 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CFB50`, 142 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (142/142 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 142 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e69231de59bcd8ee088aa9341a19667dd26004fb1f4b1038390997ba6e4a8add`; candidate object SHA-256: `3e4083a4eaffcdb743f4570c52cbd3d3e83865140b5fa4f1f302ee7a679dd6bb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4270](https://github.com/soldieg/ReBLACK-XBOX/issues/4270).
- Fresh Ghidra boundary/relationship evidence: `ev_a30cda5db048e120eea1700e8eb94952e04648f9927acc2b3bba36bc9e567fb9`; REA complete-byte evidence: `ev_9e3ce93452f939c2c40c5850b10d5d5d1f1ea1c3f9575e5dcca1aa0135e0e723`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 142 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
