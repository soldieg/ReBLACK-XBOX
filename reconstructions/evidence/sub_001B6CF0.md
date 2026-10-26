# sub_001B6CF0

- Function task: [#6149](https://github.com/soldieg/ReBLACK-XBOX/issues/6149).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001B6CF0-0x001B6D14 inclusive, contiguous, 37 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001B6CF0`, 37 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (37/37 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 37 bytes.
- Source SHA-256: `3d6093fbd715105b086f7da030b631bc6e6bf58ac2958ee17396b56ff8bb19dd`; candidate object SHA-256: `bfb3b34836b67fbf2bc9a86200f1c39ac53ce23ba6c67a8d878660cac061a78d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
