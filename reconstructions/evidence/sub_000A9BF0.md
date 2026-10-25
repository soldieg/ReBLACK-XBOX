# sub_000A9BF0

- Function task: [#4142](https://github.com/soldieg/ReBLACK-XBOX/issues/4142).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A9BF0-0x000A9C54 inclusive, contiguous, 101 bytes; evidence `ev_c8ccfda5e13dd9f4bc9084c52298cdb0d1bc1b1b06bbd56061161e19b9ac2061`.
- Static Ghidra references: 3 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A9BF0`, 101 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (101/101 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 101 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8fc95775ad4c8c6a96f7657e102d7491c297c31d990f13b206c64fcccc2521cd`; candidate object SHA-256: `baf984365aaefad9dd4f129a3f9afd50d27e719706302f710cdf649357184158`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
