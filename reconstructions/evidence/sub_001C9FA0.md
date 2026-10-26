# sub_001C9FA0

- Function task: [#5227](https://github.com/soldieg/ReBLACK-XBOX/issues/5227).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001C9FA0-0x001CA090 inclusive, contiguous, 241 bytes; evidence `ev_3b2b00079c57541fc12d27686cc46398e3a06bff2e8045b519ca3c87724fad3c`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: none recorded.
- Target candidate: `sub_001C9FA0`, 241 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (241/241 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 241 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `67f9cb85cb45c743e36e890c2445c3e7b97f6ff4f71867f1ac223df49ef3c05d`; candidate object SHA-256: `5a1ba3b434fdafed2e71828abfbdfef9b436a6a0bbf710867e393c8f77330bee`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
