# sub_0021F3DA

- Function task: [#5421](https://github.com/soldieg/ReBLACK-XBOX/issues/5421).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021F3DA-0x0021F3F7 inclusive, contiguous, 30 bytes; evidence `ev_c784e125d57f6a2bc7de5c1c2432bfd5137e01959be44b63af5b9dd1216c1320`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021F3DA`, 30 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (30/30 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 30 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `22ad09e3b18993480159af2740a477ae216885bd073d88a196550421c1f91d60`; candidate object SHA-256: `7a6d72efc43be3148b4e5affc05cce745fd0168ae3523ba8056b25b388efb001`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
