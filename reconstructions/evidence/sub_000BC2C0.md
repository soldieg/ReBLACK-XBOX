# sub_000BC2C0

- Function task: [#4194](https://github.com/soldieg/ReBLACK-XBOX/issues/4194).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BC2C0-0x000BC354 inclusive, contiguous, 149 bytes; evidence `ev_6dcbf23cbb9c50aa61604b3b9f5ba2cf17d2b7e6087706a20ad331c5a5c4ec75`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BC2C0`, 149 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (149/149 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 149 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8f975ef154054f85250c0bf79a83f880d0cd2faa34ec45dc89a806d0e925620c`; candidate object SHA-256: `c4ce5ab8ddd2eb7aa23400ec85b46ee02f1d7d3a432daba5c1fe892fec381ded`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4194](https://github.com/soldieg/ReBLACK-XBOX/issues/4194).
- Fresh Ghidra boundary/relationship evidence: `ev_aa609241af687d89e5f19d0c75d32c2c8e4b710bc178315082b7a91d08fc3353`; REA complete-byte evidence: `ev_1a54bed312004e914604c1ea30d27da0b717fb23da93feb583f4278d91b0e801`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 149 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.

## Lot 100 revalidation — 2026-10-28

- Task: [#4194](https://github.com/soldieg/ReBLACK-XBOX/issues/4194).
- Fresh REA/Ghidra 12.1.3 body: 0xbc2c0–0xbc354 inclusive, contiguous, 149 bytes; analysis evidence `ev_b6cb2f50d07fe9cb68d0b20a1469a3f23b589432d936f0099d5c87966e6ee69a`.
- Fresh REA byte read: complete 149/149 bytes; SHA-256 matches the named candidate; evidence `ev_44fa456adaf3e4a1870a9f4052ad6a49be02b48bfb3227b42e7f55c8ab711a56`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
