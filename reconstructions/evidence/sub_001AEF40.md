# sub_001AEF40

- Function task: [#6140](https://github.com/soldieg/ReBLACK-XBOX/issues/6140).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001AEF40-0x001AF183 inclusive, contiguous, 580 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001AEF40`, 580 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (580/580 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 580 bytes.
- Source SHA-256: `7224d973aa50835f873cc20a1d0582775a0a10b0601ecaa191fdd3e20ccc8947`; candidate object SHA-256: `d4fcbaeaa81a516f2ae17203a8cc1e6eb741b1fb33377b1f585e590fdb758c40`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
