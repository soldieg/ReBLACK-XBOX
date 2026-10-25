# sub_000BCC40

- Function task: [#4197](https://github.com/soldieg/ReBLACK-XBOX/issues/4197).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BCC40-0x000BCD0F inclusive, contiguous, 208 bytes; evidence `ev_711ccaf546b2e63139083b3f08754b37ddb5d8e534c253adc3c502b58e27f08c`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BCC40`, 208 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (208/208 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 208 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7c772b47634bc2a040135812877d3b13a9a2a454d516dcfe1eb75c3477e1e513`; candidate object SHA-256: `6afb263f32e6e0dd6054abe8137ca6b440b2387dd2e71ed8c8194226109c30fd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
