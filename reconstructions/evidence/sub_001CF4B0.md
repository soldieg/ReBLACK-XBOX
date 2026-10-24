# sub_001CF4B0

- Function task: [#2924](https://github.com/soldieg/ReBLACK-XBOX/issues/2924).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CF4B0â€“0x001CF526 inclusive, contiguous, 119 bytes; evidence `ev_6387472b0ef322bf6ab64bdb7c428004a6f30290d00a9350ac8b489c51b31eab`.
- Static Ghidra references: 3 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CF4B0`, 119 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (119/119 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 119 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a4b58112f4150e9e78817295cd9ad0595fa4099efc2ef440a39fbb48e1dac050`; candidate object SHA-256: `52605dbba4ca965314da3215f2fbbc1679285c48044d1f1fa49ca7dce015b1de`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
