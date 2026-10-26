# sub_0026BCE0

- Function task: [#3369](https://github.com/soldieg/ReBLACK-XBOX/issues/3369).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0026BCE0â€“0x0026BCFC inclusive, contiguous, 29 bytes; evidence `ev_c3721394f3c3d7e76e5183b53592279da8a8120133807a456cb8a0f43b5bb0ef`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0026BCE0`, 29 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (29/29 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 29 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `174f061c88f80801d4854a3606503fe4c4b2680615cc31fbc460b1d9073d0d2f`; candidate object SHA-256: `f553ab99b067b04620a8ee2e9cd938510761bb99eebdc0c06f72009f816b6539`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
