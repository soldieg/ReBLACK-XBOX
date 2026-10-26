# sub_000BB8D0

- Function task: [#5830](https://github.com/soldieg/ReBLACK-XBOX/issues/5830).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xbba55, 0xbba65, 0xbba83, 0xbba8c, 0xbba97; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000BB8D0-0x000BBAB4 inclusive, contiguous, 485 bytes; evidence `ev_f6a875e8327e3e64194032b13ab262cf2718ff10a82fc343eea55e439401f82e`.
- Static Ghidra references: 1 caller sites, 1 resolved direct callees; call instructions without a resolved target: 5. These are not runtime observations.
- Resolved static callers: 0x1423b0 (FUN_001423b0).
- Resolved direct callees: 0xb82d0 (FUN_000b82d0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 5 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000BB8D0`, 485 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (485/485 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 485 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1b3665a3c89b174fea30c67e91545c75f9c2bc5106d89ef9f4f71cf1789c5fdb`; candidate object SHA-256: `de6cd9179d2a3080f989614c0f2624529313b081a19e7da2dfda99f73d0033ff`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
