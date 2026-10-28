# sub_000BDCE0

- Function task: [#4201](https://github.com/soldieg/ReBLACK-XBOX/issues/4201).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BDCE0-0x000BDD5C inclusive, contiguous, 125 bytes; evidence `ev_7904710454805fb57f19f8a31cf75c9871bdaebdfb415bb09df973e1d91a5ab4`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BDCE0`, 125 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (125/125 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 125 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ffd38a3f9be2621917ee8e454e64863ccafd763ff208eec18fa4249d88973001`; candidate object SHA-256: `00331c310c4667fa45bd90127657619b44b939599735fff01120f9ef3894d408`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4201](https://github.com/soldieg/ReBLACK-XBOX/issues/4201).
- Fresh Ghidra boundary/relationship evidence: `ev_348a9baed0979e19dcd308a67fdd95e06e109964a68f02cbe3418873c0c9d0c6`; REA complete-byte evidence: `ev_58b5f3276ea6608370008a12250420d60852feb7bd6cfe47fba2b2db4dcb2f8c`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 125 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.

## Lot 100 revalidation — 2026-10-28

- Task: [#4201](https://github.com/soldieg/ReBLACK-XBOX/issues/4201).
- Fresh REA/Ghidra 12.1.3 body: 0xbdce0–0xbdd5c inclusive, contiguous, 125 bytes; analysis evidence `ev_1224e5a05b9e3c8ece962bc1c0b27c5f90ee635b604373a45ce1ea8ce1c4d1e0`.
- Fresh REA byte read: complete 125/125 bytes; SHA-256 matches the named candidate; evidence `ev_e78887dd2fb29da1c06de162c626d087c6e8f5ef532f3682dfa217f687676e98`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 6 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
