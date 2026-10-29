Candidate `sub_001CFA50` - manifest lot 139, position 36; address `0x001CFA50`; candidate span 122 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001cfa50`; body 119 bytes in 2 ranges: `0x001cfa50-0x001cfa9c; 0x001cfaa0-0x001cfac9`; 1 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_195a7e886ae6feda4e514317058c4e7a12b578f0fd0bb546ad1295a53e24a584`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cfa9d-0x001cfa9f` = `8d 49 00` (0x001cfa9d lea ecx, [ecx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1bfa50` equal split `.s` bytes, 122/122; byte SHA-256 `ca790911a0f09f0a4e9ab6a5df9ece3a921e674198f4b31aec51a3f3b320427e`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `633cba4f9a921a816d6b3dde799214c9a0b1405e8e2b52acd17f20a6b504cee5`.
