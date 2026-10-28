# sub_000CAFA0

- Function task: [#4245](https://github.com/soldieg/ReBLACK-XBOX/issues/4245).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CAFA0-0x000CAFC6 inclusive, contiguous, 39 bytes; evidence `ev_2c0381e43f8b04f137f615db40a1f530b666dbf25de04c846be98e9e27c0c900`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CAFA0`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `af0b4af019574a63c650976dec02350b0ea9bc9ab9e512517300ec41db979502`; candidate object SHA-256: `86e1edec8d6d328e5ea6e9ed7a3efc66b2ada50804e1b777a43361315b423477`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4245](https://github.com/soldieg/ReBLACK-XBOX/issues/4245).
- Fresh Ghidra boundary/relationship evidence: `ev_765af32f1dd82803e0a7b111bf218baa16b79e6e86417773c73d4a73a55db9e6`; REA complete-byte evidence: `ev_aba49ca05f610013050f28ad2ff4d1ec97f79da4ea5581ce8bab232db6b2476d`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 39 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
