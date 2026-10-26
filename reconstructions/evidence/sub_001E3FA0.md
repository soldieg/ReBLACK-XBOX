# sub_001E3FA0

- Function task: [#5292](https://github.com/soldieg/ReBLACK-XBOX/issues/5292).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001E3FA0-0x001E4049 inclusive, contiguous, 170 bytes; evidence `ev_db863873cc5cfc0c37cbf8244b2d0079eb10b7df5f93ea119c8b9945d92d9efc`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001E3FA0`, 170 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (170/170 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 170 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `da8553dfe5ed8721de3f02f1446bde847699f3df2f59aca6402135657cd29dfe`; candidate object SHA-256: `1736366138585f4085eb558366c63bb70e72f8a3e3000f87d2d6d76bafae8c95`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
