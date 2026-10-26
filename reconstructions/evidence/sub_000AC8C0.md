# sub_000AC8C0

- Function task: [#4960](https://github.com/soldieg/ReBLACK-XBOX/issues/4960).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AC8C0-0x000ACB4F inclusive, contiguous, 656 bytes; evidence `ev_06bc502e99a013c35bfc0d3319a4986d642194a3118d7f8ff8fd0b67ebc85999`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AC8C0`, 656 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (656/656 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 656 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7eab77922995258544c85f0de4f5c647ab6b88dffe4176f3c381ca01550dbc92`; candidate object SHA-256: `b388754c294ed763f98b6265e7cf0a2804f9f5cb84177cfdeed2c6d358096ec5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
