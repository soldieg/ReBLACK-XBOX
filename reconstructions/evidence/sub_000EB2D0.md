# sub_000EB2D0

- Function task: [#5882](https://github.com/soldieg/ReBLACK-XBOX/issues/5882).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xeb42d; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EB2D0-0x000EB44B inclusive, contiguous, 380 bytes; evidence `ev_8eec8c55fdad45caa0ccf5590121851573219788b93c3f2626f055abc6f51128`.
- Static Ghidra references: 0 caller sites, 3 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe69b0 (FUN_000e69b0), 0x21132a (FUN_0021132a).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EB2D0`, 380 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (380/380 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 380 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bdd71dcacd9930886820b868f6a7578ae3c80a22aed62d27999b40ed925d3222`; candidate object SHA-256: `32563b2a35d67225b9e307eb07b633d3feb2e1c471e39a2bb769451be8526cd0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
