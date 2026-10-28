# sub_000C4EC0

- Function task: [#4231](https://github.com/soldieg/ReBLACK-XBOX/issues/4231).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000C4EC0-0x000C4F26 inclusive, contiguous, 103 bytes; evidence `ev_813ee74fcfc48eebd2a79c06cb8445274192665e257e6ff431a284ec8d5ca6bc`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000C4EC0`, 103 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (103/103 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 103 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a6bcf886e8a018cec8341d1e5ff321b11b52e5280ee5522f4917ea6342a4f1bc`; candidate object SHA-256: `fd65beacff5b04d89826351a7f52aed930aa26c3111df114636729b9f249fe7c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4231](https://github.com/soldieg/ReBLACK-XBOX/issues/4231).
- Fresh Ghidra boundary/relationship evidence: `ev_bef0bee36c81767130501ec67345a45d239f0e8365e71ee76d7e898fe1669bf1`; REA complete-byte evidence: `ev_5de9185528b5f3e130ed1b6020a19ebd1ef254594db92a4902dde7072821424f`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 103 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
