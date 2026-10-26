# sub_000DBDA0

- Function task: [#5863](https://github.com/soldieg/ReBLACK-XBOX/issues/5863).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xdbe4c; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000DBDA0-0x000DBE56 inclusive, contiguous, 183 bytes; evidence `ev_5b97288654ad96de3c0ab9b974aa140cc1b9948636467722473d5368031e6d04`.
- Static Ghidra references: 2 caller sites, 1 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: 0x1d0be0 (FUN_001d0be0), 0x1d1390 (FUN_001d1390).
- Resolved direct callees: 0x6a890 (FUN_0006a890).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000DBDA0`, 183 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (183/183 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 183 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `99d83c537330d05351f2233f499607c75a07811703e8ebe4fc50af6169372502`; candidate object SHA-256: `287fa9b72bd44485ce7d98cf825584b913c7cc74aceffd9b97d80a1bec1fd064`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
