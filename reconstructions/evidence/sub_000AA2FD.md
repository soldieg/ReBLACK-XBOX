# sub_000AA2FD

- Function task: [#5803](https://github.com/soldieg/ReBLACK-XBOX/issues/5803).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xaa335; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000AA2FD-0x000AA342 inclusive, contiguous, 70 bytes; evidence `ev_a3d9dbe1899c1c38bbdd61011a786937bf7a8c150ea9678c05a341b1ccaeadac`.
- Static Ghidra references: 0 caller sites, 2 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_000AA2FD`, 70 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (70/70 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 70 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bf32796a4cdac26fbe0ab980a816d8fbd7e887bcf79ee289e14eac5edb386b94`; candidate object SHA-256: `9186552f89ee4100f5e3a38102bcef0c8e7633d7d59b4e858bdd7e4ed527aa99`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
