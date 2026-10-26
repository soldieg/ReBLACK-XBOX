# sub_000BBFB0

- Function task: [#4189](https://github.com/soldieg/ReBLACK-XBOX/issues/4189).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BBFB0-0x000BBFE2 inclusive, contiguous, 51 bytes; evidence `ev_081bb3846531437b665c5b7a14790b5b5aced2271b69779a6e4843b17ad01e71`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BBFB0`, 51 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (51/51 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 51 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d0b80c96e6706a48c0f0ebf5ecdc7c33c18f4d94eaa15cf2722fb4caeaf81dc0`; candidate object SHA-256: `a62c21274c0375e82757c4ae3be6f78f330dc48ecbd3cf7fe33fb1c24fac6d57`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
