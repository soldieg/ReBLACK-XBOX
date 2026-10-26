# sub_0019AFE0

- Function task: [#5062](https://github.com/soldieg/ReBLACK-XBOX/issues/5062).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019AFE0-0x0019B164 inclusive, contiguous, 389 bytes; evidence `ev_d79d971c5dad5cc8e3f7ab91c58af1d56892dc158a84c9ff96bc957c6b9ef062`.
- Static Ghidra references: 2 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body..
- Target candidate: `sub_0019AFE0`, 389 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (389/389 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 389 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c478ab0952ef2af4b6e78e353dd7b48b3d263620a08fa5b46dd99145ba86a982`; candidate object SHA-256: `cf82538da4f6e5838fdeda5781957a9ede621c5339a7e6d62053765563911368`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
