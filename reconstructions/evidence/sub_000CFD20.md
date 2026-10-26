# sub_000CFD20

- Function task: [#5850](https://github.com/soldieg/ReBLACK-XBOX/issues/5850).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xcfd64; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000CFD20-0x000CFD9D inclusive, contiguous, 126 bytes; evidence `ev_5898e28e54a1262756dab8b4a7b690c15cee6f8e5b8794439d929a1682367e54`.
- Static Ghidra references: 2 caller sites, 2 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: 0xcfd20 (FUN_000cfd20), 0xcfda0 (FUN_000cfda0).
- Resolved direct callees: 0xce970 (FUN_000ce970), 0xcfd20 (FUN_000cfd20).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000CFD20`, 126 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (126/126 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 126 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c5cdc0fa2ea1209560e3af378a46e022d4dc2d0f6a4b08308bd7f827c49fd854`; candidate object SHA-256: `0092abd88d335053b027e2c8ebf407c827e303c6aec5030b9831d2854ae12681`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
