# sub_000AFBF0

- Function task: [#4977](https://github.com/soldieg/ReBLACK-XBOX/issues/4977).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AFBF0-0x000AFCD1 inclusive, contiguous, 226 bytes; evidence `ev_d56af828f32315a576905f7ad14d983def323e79663cba03760af3e04ba1c761`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AFBF0`, 226 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (226/226 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 226 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7afac8df3793a445daab14529e881d6698d840ff0c5388ff17ab57e70fb0d0be`; candidate object SHA-256: `ba47902b251275f8b5472a1a440fdf3f5e87542f7fb52588f843424753c6c65c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
