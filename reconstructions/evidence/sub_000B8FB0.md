# sub_000B8FB0

- Function task: [#4170](https://github.com/soldieg/ReBLACK-XBOX/issues/4170).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000B8FB0-0x000B90EB inclusive, contiguous, 316 bytes; evidence `ev_f2fb8d649649b025b972294908c367daac99ed5286ab00c113f2bcc2da3c66be`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000B8FB0`, 316 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (316/316 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 316 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d09aee289ffb5adda513ac6ab48da8e93f84f777b91d03d78036cb444e040e02`; candidate object SHA-256: `e1fcb43cba9d04eb5f8f4a159c2c51fdc77d579a9496f39a32c8e525f42fd685`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
