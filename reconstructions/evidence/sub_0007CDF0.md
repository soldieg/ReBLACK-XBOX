# sub_0007CDF0

- Function task: [#3875](https://github.com/soldieg/ReBLACK-XBOX/issues/3875).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0007CDF0-0x0007CE6C inclusive, contiguous, 125 bytes; evidence `ev_ffd7cf080c0021e50be7536479fe046093e3177d60975e5cc1dcfe1b29ff1742`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0007CDF0`, 125 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (125/125 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 125 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `70e12f4f4fe0e03087ac68940d9a58cf269e1261499deb55646c149fd1e3729d`; candidate object SHA-256: `7f8bd598f4d2d6b98c77efa8d3a95b7e354deedc3b44b63482e3d3c6df4f7132`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 97 revalidation — 2026-10-28

- Task: [#3875](https://github.com/soldieg/ReBLACK-XBOX/issues/3875).
- Fresh REA/Ghidra 12.1.3 body: 0x7cdf0–0x7ce6c inclusive, contiguous, 125 bytes; analysis evidence `ev_ffd7cf080c0021e50be7536479fe046093e3177d60975e5cc1dcfe1b29ff1742`.
- Fresh REA byte read: complete 125/125 bytes; SHA-256 matches the named candidate; evidence `ev_8bf655bb582754fd6e68289b2d1122665f7532d56dc01dcaad6a2753ab5db1da`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
