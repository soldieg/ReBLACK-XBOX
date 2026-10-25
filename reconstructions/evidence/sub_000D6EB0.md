# sub_000D6EB0

- Function task: [#4313](https://github.com/soldieg/ReBLACK-XBOX/issues/4313).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D6EB0-0x000D6F8B inclusive, contiguous, 220 bytes; evidence `ev_29bd4ebc56e79bf5ee652c5302ff829c8be3c2fcdba4cad7e44a11c72127397c`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D6EB0`, 220 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (220/220 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 220 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `df56fa01fc0f94599ce94203365fc0fb40160a99d7a56eb14ddf019a2bee3ac7`; candidate object SHA-256: `d186ccd40711493b2e15288fe7a034fb4fb8be2dec80b72fa11bf14ef28cdad9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
