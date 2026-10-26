# sub_001ED1E0

- Function task: [#6208](https://github.com/soldieg/ReBLACK-XBOX/issues/6208).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001ED1E0-0x001ED2A2 inclusive, contiguous, 195 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_00177D40`, `sub_00177F00`; callees: `sub_0013A120`, `sub_001F6C40`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001ED1E0`, 195 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (195/195 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 195 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `4612bf1a750093930595e4460ac6c722a4d0984bb1925e7ea5ace2c6f88b41e3`; candidate object SHA-256: `2e08610f3fc26baa2d06f65ed734aac0417d7b29de7235e241f6cbdec423540c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
