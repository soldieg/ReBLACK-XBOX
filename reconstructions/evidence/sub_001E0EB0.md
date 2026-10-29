Candidate `sub_001E0EB0` - manifest lot 139, position 90; address `0x001E0EB0`; candidate span 537 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001e0eb0`; body 530 bytes in 2 ranges: `0x001e0eb0-0x001e0ed8; 0x001e0ee0-0x001e10c8`; 2 direct callers, 7 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_bba3df07ecf99909922b6da9f2389342432c79868589e15593a55c0ab457455d`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001e0ed9-0x001e0edf` = `8d a4 24 00 00 00 00` (0x001e0ed9 lea esp, [esp]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1d0eb0` equal split `.s` bytes, 537/537; byte SHA-256 `6d0cca97ad5ce15e6ae389530aa03cd8751343068568eb876d22e1d01c25b9cf`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `9a1768f18b055207e089fa03bc69fb84b16c41fca0bcae3b920e1198a61a32da`.
