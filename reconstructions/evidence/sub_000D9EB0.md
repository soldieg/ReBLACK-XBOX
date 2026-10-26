# sub_000D9EB0

- Function task: [#4332](https://github.com/soldieg/ReBLACK-XBOX/issues/4332).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D9EB0-0x000DA0B0 inclusive, contiguous, 513 bytes; evidence `ev_70db57f8e0bc9dca34d9e093e5ab4a4ccf8ebc35ed1bc09e489fd93c5cd0a1de`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D9EB0`, 513 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (513/513 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 513 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1e3ef1a9ddb2d3024933582124b1674cf044c56c32d903f53523ad3fdc9d19ec`; candidate object SHA-256: `26f3619df29aee070e9eae2528abe1af81f48eddd212568b010783d26ce36da6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
