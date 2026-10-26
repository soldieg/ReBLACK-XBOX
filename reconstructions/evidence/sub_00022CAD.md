# sub_00022CAD

- Function task: [#4651](https://github.com/soldieg/ReBLACK-XBOX/issues/4651).
- Batch: 45 (current 100-lot run: 45/100; 100 functions).
- Ghidra 12.1.3 body: 0x00022CAD-0x00022CF3 inclusive, contiguous, 71 bytes; evidence `ev_7bb4bd6a105f4934326efd3e8028c6ecd980ef8cf3e5067efd6d18056d4b6007`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 3 indirect call instructions and 0 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_00022CAD`, 71 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (71/71 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 71 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3ab278136cdd2f5a6aab37d34af1e08c4272d8963601fe15e1c4764aaf9deb2b`; candidate object SHA-256: `874a0659033f408060b6b824dc057fd998bcb918a48eef330cefd671983d909f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
