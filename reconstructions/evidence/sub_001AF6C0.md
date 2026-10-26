# sub_001AF6C0

- Function task: [#2769](https://github.com/soldieg/ReBLACK-XBOX/issues/2769).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AF6C0–0x001AF7D4 inclusive, contiguous, 277 bytes; evidence `ev_d81f9f93b335fa4520b788a1c65b93f6cb1749f428b806335fc504590a1c12c4`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AF6C0`, 277 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (277/277 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 277 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `105cf2e12c0a45ef5942d9be4c732851a7fc07a3299920006de151efe107dfe9`; candidate object SHA-256: `bd95373f0ca997b3356325ce05e23819d573dbe82d4ec01f8c5ae4a5bae79f18`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
