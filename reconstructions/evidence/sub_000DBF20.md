# sub_000DBF20

- Function task: [#4349](https://github.com/soldieg/ReBLACK-XBOX/issues/4349).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DBF20-0x000DBF49 inclusive, contiguous, 42 bytes; evidence `ev_c1d8f79bb2249c64b1e930dc36f44ca822340c68fe8d4f9f97415e4a8e34a07e`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DBF20`, 42 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (42/42 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 42 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `14e9df88e12b9134666281bfd1432f1c09ce34d390e914a0420850f56f69d612`; candidate object SHA-256: `9724101dab7d242816deac5c01e2e07b406f9dcda5b21471eea72fd865d57d05`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
