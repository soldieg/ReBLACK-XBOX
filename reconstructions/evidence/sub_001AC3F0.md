Candidate `sub_001AC3F0` - manifest lot 133, position 99; address `0x001AC3F0`; candidate span 867 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001ac3f0`; body 861 bytes in ranges `0x1ac3f0-0x1ac4d9; 0x1ac4e0-0x1ac752`; 1 direct callers, 4 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_ae29afc6d119f0bc4a6199cc7246a58c68fa1ba4517f9276ec646c88fe8a913b`.
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x19c3f0` equal split `.s` bytes, 867/867; byte SHA-256 `7b6c374aea4e54d550fd9f91f060ff7ceb22275e00b0de5b628230c0d006c873`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics.
- Source SHA-256 `82395c877a6987d20ce477d694552e4a4c1d0e316b2c622213f877d39de99e34`.
- Ghidra omitted gap `0x1ac4da-0x1ac4df`; split bytes are the alignment instruction `LEA EBX,[EBX]` (`8d 9b 00 00 00 00`).
