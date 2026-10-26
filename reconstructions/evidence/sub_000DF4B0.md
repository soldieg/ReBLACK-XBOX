# sub_000DF4B0

- Function task: [#4367](https://github.com/soldieg/ReBLACK-XBOX/issues/4367).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DF4B0-0x000E035D inclusive, contiguous, 3758 bytes; evidence `ev_cf19aeb3c6922d531cac766c5cdf89fc7b0e5c5d3e3ddb4290d828e9d33b6823`.
- Static Ghidra references: 1 caller sites, 16 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DF4B0`, 3758 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (3758/3758 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 3758 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d6f330f4d4f0d5067050a3310b7c33083cfcfe3ad26b6d6ed7f8e69c2cb61a2b`; candidate object SHA-256: `d38913b174cf5dec3a937222712f7a7cd47d7891147f852b4b31abed5810c610`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
