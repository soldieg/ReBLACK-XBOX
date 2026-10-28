# sub_000C5FB0

- Function task: [#4237](https://github.com/soldieg/ReBLACK-XBOX/issues/4237).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000C5FB0-0x000C600D inclusive, contiguous, 94 bytes; evidence `ev_775f071a761c132847b321907cde273c89fc683d06d6103ae3bee1324f5210d9`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000C5FB0`, 94 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (94/94 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 94 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ee658c79d132d1cf507420d340a05e7915d6347955bd896b6c6e863cbb35efb1`; candidate object SHA-256: `3264f4bf7fd39f32a555d911e14a31c7956164c9423ffd9c844f55814cd05f61`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 84 fresh revalidation (2026-10-28)

- GitHub Issue: [#4237](https://github.com/soldieg/ReBLACK-XBOX/issues/4237).
- Fresh Ghidra boundary/relationship evidence: `ev_ef19c603c785af7ec81f2ee7507686de105912c22f35a873016735a5c5a939a5`; REA complete-byte evidence: `ev_f4a28aaaad22fdeb407c97010e7bbd5fc0f38895d71440d9242d936a3eae5c2b`.
- REA bytes match XBE raw, derived PE, XboxRecomp split, named candidate COFF, and freshly compiled MSVC x86 COFF for 94 bytes.
- Candidate and compiled `.text$mn` bodies match byte for byte with zero relocations; ObjDiff 3.8.2: symbol and section 100.00%.
- Static byte-emitter validation only. Xbox full link, post-link XBE diff, runtime/gameplay, semantic behavior, and formal ABI remain separate and unverified.
