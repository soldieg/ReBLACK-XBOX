# sub_001CDDE0

- Function task: [#6173](https://github.com/soldieg/ReBLACK-XBOX/issues/6173).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001CDDE0-0x001CDF19 inclusive, contiguous, 314 bytes.
- Static call review: 0 unresolved direct-call site(s), 2 unresolved computed-call site(s); callers: none observed; callees: `sub_00015E10`, `sub_001CD0E0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001CDDE0`, 314 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (314/314 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 314 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `dc48877126b1bdcaf9c84bb124f8aa18b7d481246bb0cf0a54acb878203cb8d6`; candidate object SHA-256: `346288b858e3acaffb99b283c9e5b08f54fa3c14cd66edb66da5195d31e04571`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
