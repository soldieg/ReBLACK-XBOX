# sub_000D4DE0

- Function task: [#4295](https://github.com/soldieg/ReBLACK-XBOX/issues/4295).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D4DE0-0x000D4E74 inclusive, contiguous, 149 bytes; evidence `ev_15f749d307957ccd37dd6971faabdb6bb7ff530224fcb1234bde6a3e37955fcc`.
- Static Ghidra references: 4 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D4DE0`, 149 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (149/149 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 149 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e1fb8364295f64c84d664bd45adf3e310ff2783370f989b2c38079d79ce90e2a`; candidate object SHA-256: `e0d8fd29f2655b9fc947ff92cd084c5866b556ef754a0925adad2dc48d23ebe6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
