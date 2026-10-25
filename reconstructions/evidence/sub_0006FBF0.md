# sub_0006FBF0

- Function task: [#3857](https://github.com/soldieg/ReBLACK-XBOX/issues/3857).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0006FBF0-0x0006FC5A inclusive, contiguous, 107 bytes; evidence `ev_5c6a0d936fb0ff6ee0f7f187646f70035a2c692cfb79c0cc7e78637c415c1751`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0006FBF0`, 107 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (107/107 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 107 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `10976abba150372ceadd9d5e6345a830000fed89321b5debd40875be7f359ff0`; candidate object SHA-256: `c29209cdbcbb2fed942846d4051cd6108bb5dfe40c8d69aae8f3e93f381b4f73`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
