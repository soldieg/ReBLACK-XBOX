# sub_0018EFA0

- Function task: [#2607](https://github.com/soldieg/ReBLACK-XBOX/issues/2607).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018EFA0–0x0018F069 inclusive, contiguous, 202 bytes; evidence `ev_f0faef98f09b2cc4eabcb73da1ab7376a1d8fc669a6eefaa44fdd30819862360`.
- Static Ghidra references: 5 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018EFA0`, 202 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (202/202 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 202 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `49f06ba0e86dcc932d017a2940b00f219e50a9c089f248c086ca98865a6b6acb`; candidate object SHA-256: `976608a599ac1df4665716b2b770b5a06af3000f1a3b3b367bd279e53b458beb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
