# sub_0019EDC0

- Function task: [#6110](https://github.com/soldieg/ReBLACK-XBOX/issues/6110).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x0019EDC0-0x0019F2AC inclusive, contiguous, 1261 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_0019EDC0`, 1261 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1261/1261 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1261 bytes.
- Source SHA-256: `1f783e5af7b39993d28cc3bc34102c6d728bc4449f86f83f344ae807948d3897`; candidate object SHA-256: `4b345b608e0204e8894c58352a9dad47626355b759825e746c047462dea0da02`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
