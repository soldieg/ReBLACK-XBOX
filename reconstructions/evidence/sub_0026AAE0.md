# sub_0026AAE0

- Function task: [#3359](https://github.com/soldieg/ReBLACK-XBOX/issues/3359).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0026AAE0â€“0x0026ABF7 inclusive, contiguous, 280 bytes; evidence `ev_a73c4e40491a4eb27b9191c6af159934edcf5b74594de6e378331c4f41725348`.
- Static Ghidra references: 4 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0026AAE0`, 280 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (280/280 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 280 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5e6a2e9242fde791d17d94e0f2155ca2c12142b3d88e6125c65e454904f224bc`; candidate object SHA-256: `404c0d311e7c2857cc87a05775321227374238198ce9ac12fe973d5e20705e39`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
