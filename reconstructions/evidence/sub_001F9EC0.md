# sub_001F9EC0

- Function task: [#3079](https://github.com/soldieg/ReBLACK-XBOX/issues/3079).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F9EC0â€“0x001F9F42 inclusive, contiguous, 131 bytes; evidence `ev_ed55e473601569d0b87c57d28b4ee457fdedea11bfe8c449b7c537456f0d5d54`.
- Static Ghidra references: 3 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F9EC0`, 131 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (131/131 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 131 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dfa15b6a198f56edf7a18d1f42755d53b05e185636802a241d50d034a85f38b2`; candidate object SHA-256: `164bfa5a0f56fe497de7c9bbb3895aa87cd3279f201d52ca119e0c3894281482`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
