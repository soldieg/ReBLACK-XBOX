# sub_001DDC20

- Function task: [#5255](https://github.com/soldieg/ReBLACK-XBOX/issues/5255).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DDC20-0x001DDC92 inclusive, contiguous, 115 bytes; evidence `ev_ce8469f3cd5ff453667d96098c6dc3be1ff859c57e1879a3ffd8a0888421b3ed`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DDC20`, 115 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (115/115 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 115 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9cc2492aef530c474ea3610ac2131729c3524f2c281e01e664f01487b6efbaca`; candidate object SHA-256: `3986cf507240dffb5ec1dc5a9d8d9d3da8caf835b2839edddf63f558917ac1bf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
