# sub_000CAFA0

- Function task: [#4245](https://github.com/soldieg/ReBLACK-XBOX/issues/4245).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CAFA0-0x000CAFC6 inclusive, contiguous, 39 bytes; evidence `ev_2c0381e43f8b04f137f615db40a1f530b666dbf25de04c846be98e9e27c0c900`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CAFA0`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `af0b4af019574a63c650976dec02350b0ea9bc9ab9e512517300ec41db979502`; candidate object SHA-256: `86e1edec8d6d328e5ea6e9ed7a3efc66b2ada50804e1b777a43361315b423477`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
