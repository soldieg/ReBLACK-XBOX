# sub_001EB7F0

- Function task: [#5325](https://github.com/soldieg/ReBLACK-XBOX/issues/5325).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EB7F0-0x001EBAD7 inclusive, contiguous, 744 bytes; evidence `ev_c69b65bb04cf24eaea19cb8787d399b19d154e7a16b3432f3ae341f5b5ebcc39`.
- Static Ghidra references: 3 caller sites, 12 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EB7F0`, 744 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (744/744 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 744 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9d0ecb9eaec08e41b8101b66bb6c1b261fac6be845f0f5dc1b58940cc63b62f0`; candidate object SHA-256: `68a82f34f59fc564b69f2439f01fc3367e916ec9a6df3202b88194a8d137803e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
