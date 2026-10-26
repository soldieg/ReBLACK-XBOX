# sub_001E5EF0

- Function task: [#6201](https://github.com/soldieg/ReBLACK-XBOX/issues/6201).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001E5EF0-0x001E5F67 inclusive, contiguous, 120 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001E5F70`; callees: `sub_001819B0`, `sub_00195A00`, `sub_001A0BA0`, `sub_001BF430`, `sub_001D5A40`, `sub_001DEC20`, `sub_001E5DE0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001E5EF0`, 120 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (120/120 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 120 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `94d93f7ebbccb63dbd68cbaad1b677e1dcedb1c3286c6a0f036ec246f3e4de79`; candidate object SHA-256: `a9aee91fddee3df30adb23ee57df509a533e1801f6bc774fc98203a4ec808c35`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
