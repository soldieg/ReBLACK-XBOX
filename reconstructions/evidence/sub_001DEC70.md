# sub_001DEC70

- Function task: [#6192](https://github.com/soldieg/ReBLACK-XBOX/issues/6192).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001DEC70-0x001DF2AF inclusive, contiguous, 1,600 bytes.
- Static call review: 0 unresolved direct-call site(s), 4 unresolved computed-call site(s); callers: `sub_001E0E40`; callees: `sub_00014090`, `sub_001B57F0`, `sub_001B7800`, `sub_001C2690`, `sub_001C58F0`, `sub_001C9F00`, `sub_001CBF40`, `sub_001CEE10`, `sub_001D4F30`, `sub_001D5180`, `sub_001D5D10`, `sub_001DA4F0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001DEC70`, 1,600 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1600/1600 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 1,600 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `d194430de88dbc9a31370381d80370d8b2b69e984cc5bdd7454e2a5ae5c599a1`; candidate object SHA-256: `a039115564b36d3000056094669a33fc17c52a167d579beac52b26b5332d1198`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
