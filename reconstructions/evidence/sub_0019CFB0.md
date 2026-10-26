# sub_0019CFB0

- Function task: [#5078](https://github.com/soldieg/ReBLACK-XBOX/issues/5078).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019CFB0-0x0019CFEE inclusive, contiguous, 63 bytes; evidence `ev_bd6298bebd37eb17fa99db0d30a4c0f81d8a923734fd5ee2a0f3bee7e65a4352`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019CFB0`, 63 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (63/63 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 63 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `000b37326b8cfddcd2a1bffa22ff1423dd5d6beb2146e2acb0891d35448fc8bc`; candidate object SHA-256: `16d3bf30114602c08556ec0228ff6f3c234efa5cd42bb35aad9d90395208962e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
