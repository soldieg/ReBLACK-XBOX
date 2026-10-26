# sub_001DE2E0

- Function task: [#5262](https://github.com/soldieg/ReBLACK-XBOX/issues/5262).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DE2E0-0x001DE622 inclusive, contiguous, 835 bytes; evidence `ev_a010c1f514ea320f6b2dd4a089cea7d585a2c2da0bc1f42ec95ce0457c643152`.
- Static Ghidra references: 2 caller sites, 9 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DE2E0`, 835 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (835/835 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 835 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `18c155f7a5d35234e17db8fc69cd6e5ec72a8c90986fc8f198ca4dc68624b5fd`; candidate object SHA-256: `e85456f3efacc6b355a3a2e20839db075c22ba5b7d90608532b2c0955d75d6a7`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
