Candidate `sub_001CBAC0` - manifest lot 139, position 18; address `0x001CBAC0`; candidate span 414 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001cbac0`; body 407 bytes in 2 ranges: `0x001cbac0-0x001cbb38; 0x001cbb40-0x001cbc5d`; 1 direct callers, 5 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_33ea70564c126f91298edbc9c4f900fcc1eb6a8fe53714adcd099b899e09d78d`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cbb39-0x001cbb3f` = `8d a4 24 00 00 00 00` (0x001cbb39 lea esp, [esp]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1bbac0` equal split `.s` bytes, 414/414; byte SHA-256 `19b19401baffc9fc88a1e272132ef8105439ff2af355a6cb825872629c632b9d`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `f8a85720ff54e27d35e7809c748d9e7fa509b97d58e0f6627e81c149e2482a7b`.
