# sub_0018CBC0

- Function task: [#2585](https://github.com/soldieg/ReBLACK-XBOX/issues/2585).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018CBC0–0x0018CC65 inclusive, contiguous, 166 bytes; evidence `ev_5e191506df0521ae009fbbcb908c6d065688594c7e81c77c08eabd18fc360832`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018CBC0`, 166 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (166/166 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 166 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0f858f3f7719b022cdd6d8627ff59e2cdc8b0af7e0c59eb0af0a5a1f4c2aa8ec`; candidate object SHA-256: `816ec123856740b965e34240dd365a66ae84350648805096d4135d4c3edeaa96`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
