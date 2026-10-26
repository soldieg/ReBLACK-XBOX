# sub_001FB0D0

- Function task: [#6217](https://github.com/soldieg/ReBLACK-XBOX/issues/6217).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001FB0D0-0x001FB249 inclusive, contiguous, 378 bytes.
- Static call review: 0 unresolved direct-call site(s), 8 unresolved computed-call site(s); callers: `sub_001EBD60`; callees: `sub_00211300`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001FB0D0`, 378 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (378/378 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 378 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `298edeb53808b1d4e679e78d58e4bbc0ac248701fddd7d1963d4c564bf80076a`; candidate object SHA-256: `83de199025493a8b3a83f2a22b1e2b2bf1a1355e8f183a60936254d4402b2c66`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
