# sub_000A94EA

- Function task: [#4138](https://github.com/soldieg/ReBLACK-XBOX/issues/4138).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A94EA-0x000A9516 inclusive, contiguous, 45 bytes; evidence `ev_c06e84fbc7e8225118ffe07d663f6125e2924fad219bf64019ede9d09e5156c0`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A94EA`, 45 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (45/45 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 45 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `32fdd928bfff90cebd9ce0e2ed781d58e01232eef2089c7601b101cf016fc542`; candidate object SHA-256: `3d4d9c9fac1bba86e82baed4545277da36d498422a180525a53b7de701bbe52d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4138](https://github.com/soldieg/ReBLACK-XBOX/issues/4138).
- Fresh REA/Ghidra 12.1.3 body: 0xa94ea–0xa9516 inclusive, contiguous, 45 bytes; analysis evidence `ev_c06e84fbc7e8225118ffe07d663f6125e2924fad219bf64019ede9d09e5156c0`.
- Fresh REA byte read: complete 45/45 bytes; SHA-256 matches the named candidate; evidence `ev_67fb82315c63606784cf9f70171f9c4a3724bf5d4910eefbd64638f2dd7205cf`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
