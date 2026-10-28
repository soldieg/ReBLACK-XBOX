# sub_000AA37C

- Function task: [#4148](https://github.com/soldieg/ReBLACK-XBOX/issues/4148).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AA37C-0x000AA396 inclusive, contiguous, 27 bytes; evidence `ev_a8bdfa5b3fc58a1a531e4aa7ac1f60a39c0de45d1eb3c7f38e926a6b6a4a9941`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AA37C`, 27 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (27/27 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 27 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2210d3100265313e2a76a34f559872b4968c04de92c5252ef6cc136ea2cfb62b`; candidate object SHA-256: `b77943860e12f761168f36e1386b83367b03e74304e74e728271faaa028fba67`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4148](https://github.com/soldieg/ReBLACK-XBOX/issues/4148).
- Fresh REA/Ghidra 12.1.3 body: 0xaa37c–0xaa396 inclusive, contiguous, 27 bytes; analysis evidence `ev_145b54999c3a70044d41d0dea1092b542a8af6f0e7e9944f2726ceb6e844e3fc`.
- Fresh REA byte read: complete 27/27 bytes; SHA-256 matches the named candidate; evidence `ev_1f114c04db2a4e1a663a0cfe342a9ad38720632647d16fc3d56673417e0efab4`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
