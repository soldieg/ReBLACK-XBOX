# sub_001CDBB0

- Function task: [#6172](https://github.com/soldieg/ReBLACK-XBOX/issues/6172).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001CDBB0-0x001CDDD0 inclusive, contiguous, 545 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001A16A0`, `sub_001ADE70`, `sub_001D2950`, `sub_002079A0`; callees: `sub_00070C70`, `sub_000CC1F0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001CDBB0`, 545 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (545/545 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 545 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `97ca75f8e2d3360fabdf8045934baaa268dda72dcc84e14ec37ea2392afe120c`; candidate object SHA-256: `42695bf628efce4fb72383359dd5058b326d2db79494495021b318a6511dfa6d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
