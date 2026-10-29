Candidate `sub_001EBC30` - manifest lot 140, position 18; address `0x001EBC30`; candidate span 292 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001ebc30`; body 286 bytes in 2 ranges: `0x001ebc30-0x001ebc79; 0x001ebc80-0x001ebd53`; 1 direct callers, 4 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_5da95675ddfa4442b3c39233d1e2b06cf58ab76f2f2ecfaa94def6e8387150ad`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001ebc7a-0x001ebc7f` = `8d 9b 00 00 00 00` (0x001ebc7a lea ebx, [ebx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1dbc30` equal split `.s` bytes, 292/292; byte SHA-256 `aed6bac2811cb778c6ac83156f05c75b89ca202aac90a9373e3018ae8ff4534e`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `6c58ca0026fb22f6c48016b2794d500aa6a5f59fd109269e0e1ef451c13eb9a0`.
