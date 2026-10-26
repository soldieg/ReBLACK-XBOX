# sub_0004BBF0

- Function task: [#3774](https://github.com/soldieg/ReBLACK-XBOX/issues/3774).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0004BBF0-0x0004BDC3 inclusive, contiguous, 468 bytes; evidence `ev_55e1af089694d5737dc892f25c29a2ff49a1052c0c8fcefea4bcbfc0bc038627`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0004BBF0`, 468 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (468/468 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 468 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7e9b95ec51f6d37422a2d906ee5ed1bdf2029dce5193694e4d493948409ca2da`; candidate object SHA-256: `72b6c85df6c584c198393c25c30ad2fb91406e77dc54fc3b135cced95262175b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
