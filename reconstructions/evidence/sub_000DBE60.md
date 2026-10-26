# sub_000DBE60

- Function task: [#5864](https://github.com/soldieg/ReBLACK-XBOX/issues/5864).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xdbefd; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000DBE60-0x000DBF16 inclusive, contiguous, 183 bytes; evidence `ev_73a32abb8b966b6da55727f70b7cd2dec9786d1935fd876600e42f7cdc2e793b`.
- Static Ghidra references: 1 caller sites, 1 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: 0xdc3a0 (FUN_000dc3a0).
- Resolved direct callees: 0x7c530 (FUN_0007c530).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000DBE60`, 183 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (183/183 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 183 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f9fd64d352152912c318678fa85f6c8a8b48853dbea9617894e7a49fc5050135`; candidate object SHA-256: `6410434e280517aedb6c8c8d39da9ee6171ccf37bc7b1ee471fe67ac06f26720`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
