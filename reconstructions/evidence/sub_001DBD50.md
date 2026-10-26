# sub_001DBD50

- Function task: [#6188](https://github.com/soldieg/ReBLACK-XBOX/issues/6188).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001DBD50-0x001DC90B inclusive, contiguous, 3,004 bytes.
- Static call review: 0 unresolved direct-call site(s), 4 unresolved computed-call site(s); callers: `sub_001EEFD0`; callees: `sub_00017FC0`, `sub_00146AD0`, `sub_001502A0`, `sub_00159CD0`, `sub_0015F180`, `sub_0015FB40`, `sub_00168E20`, `sub_00169960`, `sub_00198000`, `sub_001A22B0`, `sub_001BAA40`, `sub_001C5F40`, `sub_001C6060`, `sub_001CA170`, `sub_001CD6C0`, `sub_001CEF40`, `sub_001D89E0`, `sub_001D8D50`, `sub_001DAFF0`, `sub_001DB7B0`, `sub_001DB860`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001DBD50`, 3,004 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (3004/3004 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 3,004 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `35a289a68eed24a9e04a4a4804d7178c38ab350582e7d6a92a5608aee1688a9e`; candidate object SHA-256: `6f858b7463db489c06c625bbe45802cacc26774b972545a7d91b75434e46f499`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
