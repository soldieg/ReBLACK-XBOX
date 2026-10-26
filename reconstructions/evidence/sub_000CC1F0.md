# sub_000CC1F0

- Function task: [#5847](https://github.com/soldieg/ReBLACK-XBOX/issues/5847).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xcc2ac, 0xcc38e; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000CC1F0-0x000CC3AD inclusive, contiguous, 446 bytes; evidence `ev_0f72299fdcb1126f9f409df821f6536067c1f7646291384cc2ee2de91fd2dbec`.
- Static Ghidra references: 5 caller sites, 1 resolved direct callees; call instructions without a resolved target: 2. These are not runtime observations.
- Resolved static callers: 0x1cdbb0 (FUN_001cdbb0), 0x1e0970 (FUN_001e0970), 0x1e2d80 (FUN_001e2d80), 0x1e5fa0 (FUN_001e5fa0), 0x1eaf40 (FUN_001eaf40).
- Resolved direct callees: 0xcc170 (FUN_000cc170).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 2 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000CC1F0`, 446 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (446/446 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 446 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `695219744c17a55f6f68b4eca1f41e2ee3d26645bead2ac14e874d768b72a939`; candidate object SHA-256: `3957c05f45fe73e5136de27f3c5ecd51d7ae0d74371275d5f36295567398ff4b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
