# sub_0018BFF0

- Function task: [#6087](https://github.com/soldieg/ReBLACK-XBOX/issues/6087).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x0018BFF0-0x0018C0B0 inclusive, contiguous, 193 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_0018BFF0`, 193 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (193/193 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 193 bytes.
- Source SHA-256: `4d3c9f75ad7848cfc42383aadc44490d671322f81d51d3fddb8403eb9da290e4`; candidate object SHA-256: `bc3e929f99fc29c86dbeceb74f92ed1c15c6b2d94a80f0d33b972dcbf67e14e6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
