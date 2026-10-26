# sub_0027D5FC

- Function task: [#3496](https://github.com/soldieg/ReBLACK-XBOX/issues/3496).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027D5FCâ€“0x0027D607 inclusive, contiguous, 12 bytes; evidence `ev_4d5abb4e2adccae1dee0bb810b74743d8ab2b6921f39dbb49d3220efeb16e341`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027D5FC`, 12 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (12/12 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 12 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aa073a82a3f4060f4157a4e2debe013b96a839a2e4c602d58f1a5ce2acf7c24d`; candidate object SHA-256: `ec4d906fb05ad3d8522cf59d0f0863b2f50d9370f578b661450853210c7d339a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
