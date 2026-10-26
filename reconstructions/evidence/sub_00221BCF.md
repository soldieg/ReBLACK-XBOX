# sub_00221BCF

- Function task: [#5479](https://github.com/soldieg/ReBLACK-XBOX/issues/5479).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x00221BCF-0x00221D72 inclusive, contiguous, 420 bytes; evidence `ev_51c6e5483906e496409ec1cfb4c843184b52bb67663493aef536931756ab25ab`.
- Static Ghidra references: 2 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_00221BCF`, 420 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (420/420 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 420 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `23d0cce7e535239e7c93140ed471d12896b8b7b3e3f8d83f6f2095b5ad684505`; candidate object SHA-256: `53e40bc3deb535d8eeb108fab6ba16a1f45b3dc238b0830a31c6722bf105d4a6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
