# sub_001AB9E0

- Function task: [#6133](https://github.com/soldieg/ReBLACK-XBOX/issues/6133).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001AB9E0-0x001ABA3A inclusive, contiguous, 91 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001AB9E0`, 91 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (91/91 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 91 bytes.
- Source SHA-256: `706d5a1f62d24faa36b9ff836c1cc45e358c17bda36a8148b8f2b82e732f4f24`; candidate object SHA-256: `879f9be64dc64ae223b73801377b68bc7357debca2754d4b49ad392602e0dbf5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
