# sub_001CE8C0

- Function task: [#6179](https://github.com/soldieg/ReBLACK-XBOX/issues/6179).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001CE8C0-0x001CE92A inclusive, contiguous, 107 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001B3C40`; callees: `sub_001C9990`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001CE8C0`, 107 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (107/107 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 107 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `fe27da61cbf3edc341583dd1a1df466cba496d4d9426ed40c8dde943b6d7fb9d`; candidate object SHA-256: `64ad2eae448c441ceddc71617e75f9289acc8411ff31f506ef03275fc1d36e40`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
