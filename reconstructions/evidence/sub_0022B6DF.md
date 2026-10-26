# sub_0022B6DF

- Function task: [#5597](https://github.com/soldieg/ReBLACK-XBOX/issues/5597).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022B6DF-0x0022B750 inclusive, contiguous, 114 bytes; evidence `ev_f98cc949fc35d369f18a09406ff2a2d5f34694f0ecedbf6ad07ae77cfc85ec21`.
- Static Ghidra references: 4 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022B6DF`, 114 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (114/114 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 114 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `24eab4c045d0046ffdc394a405b3299e461676364883a8732416bca2b78f7e5a`; candidate object SHA-256: `02639389f479d61da916d09ee672e053e8b63c6ee766eddf23d88e99ead75ca9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
