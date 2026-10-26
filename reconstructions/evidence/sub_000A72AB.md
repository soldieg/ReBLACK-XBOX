# sub_000A72AB

- Function task: [#4120](https://github.com/soldieg/ReBLACK-XBOX/issues/4120).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A72AB-0x000A7341 inclusive, contiguous, 151 bytes; evidence `ev_f6f07c28df5003d9bd32140b9ec253a0ca2026097e74bad9b7f9796e57754af9`.
- Static Ghidra references: 1 caller sites, 9 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A72AB`, 151 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (151/151 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 151 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f33ee4268882b39a26150bb0666e92f13f66d36a31aad5e0621b28070e8b7f20`; candidate object SHA-256: `932520c2c1bb3660ebfc547ab6704d79c7917cba7bc282c0a992b752f9765306`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
