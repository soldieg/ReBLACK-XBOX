# sub_0027E9DA

- Function task: [#3515](https://github.com/soldieg/ReBLACK-XBOX/issues/3515).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027E9DAâ€“0x0027EAB7 inclusive, contiguous, 222 bytes; evidence `ev_8fa00eb1a475148a7de7f10f023cd7815bf9c2879745da0fc1940138db168bc6`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027E9DA`, 222 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (222/222 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 222 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e9689eeca9a631a19f05a46983e95678ac17e74ae6a7cbe709260c5c942bd404`; candidate object SHA-256: `edbdfa86afbaaefd46fae995cd6b6c82f5350ccb7691485e5453e3e050aaa7a9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
