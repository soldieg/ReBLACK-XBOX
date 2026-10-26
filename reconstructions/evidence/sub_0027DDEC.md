# sub_0027DDEC

- Function task: [#3504](https://github.com/soldieg/ReBLACK-XBOX/issues/3504).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027DDECâ€“0x0027DDF7 inclusive, contiguous, 12 bytes; evidence `ev_1b296849780543477c34b8d8d77b46a5fb054beb42f5c46aad60529e950a8e8c`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027DDEC`, 12 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (12/12 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 12 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `68261b09f68196bc0d56da691acbc7dddc3484273cd081cf1f33ed8366650072`; candidate object SHA-256: `23e64f13d518ec1560745e3334755db705e49de01a0cd10dfad961064efb3f11`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
