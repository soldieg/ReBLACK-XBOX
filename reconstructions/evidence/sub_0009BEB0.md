# sub_0009BEB0

- Function task: [#4008](https://github.com/soldieg/ReBLACK-XBOX/issues/4008).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009BEB0-0x0009C0B9 inclusive, contiguous, 522 bytes; evidence `ev_3979b180e78c3611cace26e5f28baa7deb137ea0d9515b13594918e44589a124`.
- Static Ghidra references: 2 caller sites, 14 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009BEB0`, 522 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (522/522 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 522 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e73cd6ea9512ee5eca73f91328cad3a99919a2de7fabb0fa95b0fc3d3791192f`; candidate object SHA-256: `92f0e23ed5e9f0fad545297b6d2213f91fe1741f9c4954b2cd0e8e2aeac002c6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
