Candidate `sub_001DA2F0` - manifest lot 139, position 77; address `0x001DA2F0`; candidate span 169 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001da2f0`; body 161 bytes in 2 ranges: `0x001da2f0-0x001da367; 0x001da370-0x001da398`; 1 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_7691c0d9c2d45fe59912aa54bb301700974f0f2eaa15ea360e8bdca9ba2c4ba3`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001da368-0x001da36f` = `8d a4 24 00 00 00 00 90` (0x001da368 lea esp, [esp]; 0x001da36f nop).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1ca2f0` equal split `.s` bytes, 169/169; byte SHA-256 `9696067cb8cdad6335b6762e636f7b50e71d8a8bf05e2bfb5633f5cc2a4dab4a`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `09d0b5f934149f76d8161a655afa33adffc4c2ed3930f634e7f67d7be5eddc18`.
