# sub_001DCE60

- Function task: [#6190](https://github.com/soldieg/ReBLACK-XBOX/issues/6190).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001DCE60-0x001DCFF1 inclusive, contiguous, 402 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001E06F0`, `sub_001E2B90`; callees: `sub_00169960`, `sub_001CE1F0`, `sub_001CE6C0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001DCE60`, 402 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (402/402 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 402 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `237c6343f55c6d3e9db5646930173b1bd577121f64cd0e0a3d627886ba20edae`; candidate object SHA-256: `a72d82363f58ebd823af475fc9e7908d1504f5fb0bb7e80562dd60ff1610462e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
