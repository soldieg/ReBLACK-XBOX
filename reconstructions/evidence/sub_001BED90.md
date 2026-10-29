Candidate `sub_001BED90` - manifest lot 138, position 57; address `0x001BED90`; candidate span 114 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001bed90`; body 106 bytes in ranges `0x1bed90-0x1beda7; 0x1bedb0-0x1bee01`; 3 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_ff011acc667bab42e4fec41b5a6d3dc48f9b01000ef6138abb70f8d7de95eeff`.
- Non-body gaps included in the manifest span: `0x001beda8-0x001bedaf` = `8d a4 24 00 00 00 00 90`.
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1aed90` equal split `.s` bytes, 114/114; byte SHA-256 `1143bdaa5871cae78f68d418756d9d8478188eda68fac9a599ba24ca9a3e61ea`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `66ae851a485f06c3f6958ad0b95ba2c8868bf248ed914708020c4ba8fb2030a5`.
