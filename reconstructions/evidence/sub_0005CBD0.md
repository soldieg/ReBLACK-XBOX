# sub_0005CBD0

- Function task: [#4911](https://github.com/soldieg/ReBLACK-XBOX/issues/4911).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x0005CBD0-0x0005CC37 inclusive, contiguous, 104 bytes; evidence `ev_c09856832caace330654ba17e7bd76585848020ee0624a3304f084af492bef55`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_0005CBD0`, 104 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (104/104 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 104 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `57699e9129483c0db34134d7eb8023fa12e6ea884ff0cb28723033d80d3cb45b`; candidate object SHA-256: `346d4a14fb14ac87e1fe193e0a5f72a755523f403d05d2cc13237fead2605afc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
