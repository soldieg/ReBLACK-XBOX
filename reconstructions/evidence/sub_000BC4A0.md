# sub_000BC4A0

- Function task: [#4196](https://github.com/soldieg/ReBLACK-XBOX/issues/4196).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BC4A0-0x000BC4EB inclusive, contiguous, 76 bytes; evidence `ev_1ebb781c00f6dd68a15df5cdf7736c48601c1ded9b1f7eeb2b9c3cdd1fcf2b8b`.
- Static Ghidra references: 3 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BC4A0`, 76 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (76/76 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 76 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `105a597694b16160d139dfb3d880d149b5c6c4a2de0539074d0b1677c168bec4`; candidate object SHA-256: `dbb687a69c2a3d66c2252ce51059c63cf5ab2f7b1009cb1683a8531badaae0a0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4196](https://github.com/soldieg/ReBLACK-XBOX/issues/4196).
- Fresh Ghidra boundary/relationship evidence: `ev_72b48d02a3064c89ac95cd94a48bf0ebb044bbd942b5b518a5c9695c93041831`; REA complete-byte evidence: `ev_56c68b493c003753e5a2d7010d141f7af4ef6c2b5f9d72a7b8ec5e2c87cc695a`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 76 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.

## Lot 100 revalidation — 2026-10-28

- Task: [#4196](https://github.com/soldieg/ReBLACK-XBOX/issues/4196).
- Fresh REA/Ghidra 12.1.3 body: 0xbc4a0–0xbc4eb inclusive, contiguous, 76 bytes; analysis evidence `ev_aa8805e7afe20379d00f44489e2f44cefae019aa83ffd55615c102f5c1f34214`.
- Fresh REA byte read: complete 76/76 bytes; SHA-256 matches the named candidate; evidence `ev_20d2410c3afef0ff927ce51064f5122160389329adb5fcc6eec20137fa8912ec`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 3 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
