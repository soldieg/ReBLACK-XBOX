# sub_000DD3B0

- Function task: [#4359](https://github.com/soldieg/ReBLACK-XBOX/issues/4359).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DD3B0-0x000DD3E2 inclusive, contiguous, 51 bytes; evidence `ev_eb208636e73324aaecca3128fb168d7e9382d86d9e7aa34f7dd8cca0d3755c5c`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DD3B0`, 51 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (51/51 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 51 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4f140868b024188f108a7445551218f99be554595c5a3e44aaf70ddae349f50f`; candidate object SHA-256: `62260d4c237b262f03903087acf5497f97e26ada3d51a0228894e8085232d335`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
