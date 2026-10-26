# sub_000A1DDC

- Function task: [#4066](https://github.com/soldieg/ReBLACK-XBOX/issues/4066).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A1DDC-0x000A1E02 inclusive, contiguous, 39 bytes; evidence `ev_350bc924cc65adcd244e9070eb9e2a784692eaaa46bd77fb18b3e2e11cacda15`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A1DDC`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3142645b3b1ffaf9089dd7072ae6cb5d6506c763dff9779482a4ef092e336b6b`; candidate object SHA-256: `fc7a8a0677b592239a1048dc6cafcda479973de28493658bbcc95a5dbbd06e8e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
