# sub_000AEC90

- Function task: [#4971](https://github.com/soldieg/ReBLACK-XBOX/issues/4971).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AEC90-0x000AED10 inclusive, contiguous, 129 bytes; evidence `ev_3cb3515f1be916adbe1e17df254d22e0a4826ad292c5bc34641888106cb9774d`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AEC90`, 129 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (129/129 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 129 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8e1fc13e14fa4f976238f615d222f248de5d3d8490f92911f8fa3b752e2fade1`; candidate object SHA-256: `2b66ff1cc6091c180f625bb02e0b31e89f029c49322b451be58614dea86da1b2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
