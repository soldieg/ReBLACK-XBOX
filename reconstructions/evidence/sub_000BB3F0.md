# sub_000BB3F0

- Function task: [#5832](https://github.com/soldieg/ReBLACK-XBOX/issues/5832).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xbb428, 0xbb443; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000BB3F0-0x000BB605 inclusive, contiguous, 534 bytes; evidence `ev_d4189ec9e99c80e9560262d546a4f56aeb24072d7f71ce2a6e43c5b313006f29`.
- Static Ghidra references: 5 caller sites, 9 resolved direct callees; call instructions without a resolved target: 2. These are not runtime observations.
- Resolved static callers: 0xbb610 (FUN_000bb610), 0xbc050 (FUN_000bc050), 0x14acb0 (FUN_0014acb0), 0x14be80 (FUN_0014be80), 0x14cad0 (FUN_0014cad0).
- Resolved direct callees: 0x81da0 (FUN_00081da0), 0x8dd60 (FUN_0008dd60), 0x8de60 (FUN_0008de60), 0x8de90 (FUN_0008de90), 0x8e550 (FUN_0008e550), 0xb7c70 (FUN_000b7c70), 0xb7eb0 (FUN_000b7eb0), 0xb9810 (FUN_000b9810), 0xb9880 (FUN_000b9880).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 2 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000BB3F0`, 534 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (534/534 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 534 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0711f087c3ad29d365466081842df1a30659b1ac35b9299ef0ca9dcadfe24bf6`; candidate object SHA-256: `0a56d6f07a00ef9cd5ef6a272a8121443bebd59f881bca190abf972cee16f719`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
