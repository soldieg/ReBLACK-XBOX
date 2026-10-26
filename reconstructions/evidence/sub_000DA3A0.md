# sub_000DA3A0

- Function task: [#4336](https://github.com/soldieg/ReBLACK-XBOX/issues/4336).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DA3A0-0x000DA4AB inclusive, contiguous, 268 bytes; evidence `ev_9ec95a09cb8cad4b0e32b1baa376d9beee867ab2e71ee02bce3116316b12720e`.
- Static Ghidra references: 2 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DA3A0`, 268 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (268/268 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 268 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `76667f7bf6652dadbc7a477b1ecf7ef2890e8177eceeb11d0a5d3c6b29a98b10`; candidate object SHA-256: `c187952969dd08fa71bfc9bb26d398d1d4bff02c01be8efeeb343943cdd4a622`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
