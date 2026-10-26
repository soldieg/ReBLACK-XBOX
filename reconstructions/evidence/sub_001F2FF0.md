# sub_001F2FF0

- Function task: [#2991](https://github.com/soldieg/ReBLACK-XBOX/issues/2991).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F2FF0â€“0x001F3014 inclusive, contiguous, 37 bytes; evidence `ev_0bdaa76da0acdf01f7c06215320987ad07c1cb099d9bd1e4912d926b0d992935`.
- Static Ghidra references: 3 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F2FF0`, 37 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (37/37 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 37 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `27732ea1ceccdfd24167a8790ebee2b66b8807cc89eb99cb624ea5f29c2a81ac`; candidate object SHA-256: `fac3d3803f6ed5e7e19999cf83a262fd998719ee11ab6c6891f235d127daf812`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
