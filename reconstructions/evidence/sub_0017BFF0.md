# sub_0017BFF0

- Function task: [#2509](https://github.com/soldieg/ReBLACK-XBOX/issues/2509).
- Batch: 24 (current ten-batch run: 2/10; 100 functions).
- Ghidra 12.1.3 body: 0x0017BFF0–0x0017C0B1 inclusive, contiguous, 194 bytes; evidence `ev_6fcabd27415eaa8406bc6e8e84ec91d708f1c61d5796e0ff13dbd979fb61ec82`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0017BFF0`, 194 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (194/194 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 194 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `964d75e9891bc6e3189e320a8e8b171ee62e4cad84243384b2ba9600a886dddd`; candidate object SHA-256: `1582d7347f69ef61451853a1fe9ec8aff7e6beabdd1fcb59ca43472cdf6fae55`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
