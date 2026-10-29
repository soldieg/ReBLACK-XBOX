Candidate `sub_001AC3F0` - manifest lot 133, position 99; address `0x001AC3F0`; candidate span 867 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001ac3f0`; body 861 bytes in ranges `0x1ac3f0-0x1ac4d9; 0x1ac4e0-0x1ac752`; 1 direct callers, 4 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_ae29afc6d119f0bc4a6199cc7246a58c68fa1ba4517f9276ec646c88fe8a913b`.
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x19c3f0` equal split `.s` bytes, 867/867; byte SHA-256 `7b6c374aea4e54d550fd9f91f060ff7ceb22275e00b0de5b628230c0d006c873`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics.
- Source SHA-256 `82395c877a6987d20ce477d694552e4a4c1d0e316b2c622213f877d39de99e34`.
- Ghidra omitted gap `0x1ac4da-0x1ac4df`; split bytes are the alignment instruction `LEA EBX,[EBX]` (`8d 9b 00 00 00 00`).

## Lot 133 manifest candidate evidence (2026-10-29)

- Manifest: lot 133, position 99; address order. Candidate span: 867 bytes (0x001AC3F0 to exclusive end 0x001AC753).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001ac823@001ac760. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x19C3F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x19B770. REA read_bytes evidence ev_22445f1d5bdc1f6efc5d82f9a13b407417b819b821e81c9612e15ba3d4b9b848 returned 867 bytes. XBE raw = derived PE = split = REA; span SHA-256 7b6c374aea4e54d550fd9f91f060ff7ceb22275e00b0de5b628230c0d006c873.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 867 bytes.
- Source SHA-256 82395c877a6987d20ce477d694552e4a4c1d0e316b2c622213f877d39de99e34; compiled object SHA-256 72e657b333e86c1c2dc79ce7ae7570319e3a73b03e437ee76cbc9b787497052b; candidate object SHA-256 b8535824219ac292331d35bde85a8d4d13eb5b4231c2b7fde494bc333629d7e1.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
