# sub_001A1AF0

- Function task: [#5133](https://github.com/soldieg/ReBLACK-XBOX/issues/5133).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001A1AF0-0x001A1C9C inclusive, contiguous, 429 bytes; evidence `ev_136df2cea2a4c17b95e9dc9992828959a9c612f127032a31187481c2da81519b`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001A1AF0`, 429 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (429/429 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 429 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3c98a57f4ff7dd71cc2a65aeac2dc82a052161e00c393ec8625cab24a7cc7d51`; candidate object SHA-256: `02ebcc7e38a112d036fccab4cbbf6c6c402e5d4cdcd1d5180327755dfccfcb53`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
