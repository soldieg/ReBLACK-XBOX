# sub_0021DFE9

- Function task: [#5397](https://github.com/soldieg/ReBLACK-XBOX/issues/5397).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021DFE9-0x0021E00F inclusive, contiguous, 39 bytes; evidence `ev_048b7d2f97b6e546a01c70ef1c9d047a490fff1061a8ffec50c44f51e85e2a19`.
- Static Ghidra references: 2 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021DFE9`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a2a08148ad0537e943769d82afa154374f8a1480b53687206b85b18cd53cd950`; candidate object SHA-256: `bdcba608e652a05d6f7d7f299c0a16040264f1561f42587ef5669e2a537c3795`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
