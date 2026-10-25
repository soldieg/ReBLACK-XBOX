# sub_000A74BF

- Function task: [#4122](https://github.com/soldieg/ReBLACK-XBOX/issues/4122).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A74BF-0x000A74EC inclusive, contiguous, 46 bytes; evidence `ev_4415e96c1c04dc8836fac6e40f0e272340b74b8bf7d8427aec3c5c963b66be8a`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A74BF`, 46 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (46/46 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 46 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `650f3c46603bff1102066d0bba3fc7cd27bf83ed92741e23f49a29cbb0be8aa3`; candidate object SHA-256: `c9315ebfc345382ca02d275969882d7ce3b932b984951b329e398cd9a5e83d6b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
