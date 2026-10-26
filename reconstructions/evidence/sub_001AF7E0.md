# sub_001AF7E0

- Function task: [#6142](https://github.com/soldieg/ReBLACK-XBOX/issues/6142).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001AF7E0-0x001AF840 inclusive, contiguous, 97 bytes.
- Static call review: 0 unresolved direct-call sites; 0 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001AF7E0`, 97 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (97/97 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 97 bytes.
- Source SHA-256: `d46bf2d9b7102e2eb87b3f16fc2e02d9b0832bea1bb60ce32463a93cd1d057a8`; candidate object SHA-256: `594b991497493e537791710a5186c789f0a43a8c10e291a6f3098809f2eafb98`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
