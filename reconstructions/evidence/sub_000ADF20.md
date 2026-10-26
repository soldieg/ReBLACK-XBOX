# sub_000ADF20

- Function task: [#4961](https://github.com/soldieg/ReBLACK-XBOX/issues/4961).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000ADF20-0x000ADF63 inclusive, contiguous, 68 bytes; evidence `ev_3e95b4fed88a598b51fc703d6145ce05e5cc2ac2ba8b1dbb7a7075e3234db8b8`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000ADF20`, 68 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (68/68 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 68 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9884324d6ef0462ff48756b59675673c903e2306633579da9f7a7f423bc18489`; candidate object SHA-256: `962a68ab9a331ea9c366da5ad4d093e650487186db9f73576bad43a51211f37f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
