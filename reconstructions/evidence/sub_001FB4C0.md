# sub_001FB4C0

- Function task: [#6220](https://github.com/soldieg/ReBLACK-XBOX/issues/6220).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001FB4C0-0x001FB55B inclusive, contiguous, 156 bytes.
- Static call review: 0 unresolved direct-call site(s), 2 unresolved computed-call site(s); callers: none observed; callees: `sub_00113130`, `sub_001F92F0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001FB4C0`, 156 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (156/156 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 156 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `542bf733638e99f6a4aec119a02afa4a859962025236fb4307a66d9bc692f8e3`; candidate object SHA-256: `e4ab0f4df055f404d3ce5a87bc39fa454700ad2692f313eb4369a948bfdb2493`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
