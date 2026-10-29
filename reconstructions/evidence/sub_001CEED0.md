Candidate `sub_001CEED0` - manifest lot 139, position 35; address `0x001CEED0`; candidate span 109 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001ceed0`; body 103 bytes in 2 ranges: `0x001ceed0-0x001cef09; 0x001cef10-0x001cef3c`; 1 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_8798bcb2f150e2f8847e75b3838cb3242d432eb05ffd63bcd8683639cb9ffc38`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cef0a-0x001cef0f` = `8d 9b 00 00 00 00` (0x001cef0a lea ebx, [ebx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1beed0` equal split `.s` bytes, 109/109; byte SHA-256 `8960f7e2368050cc1657b00facc4bf135adb190ebbea48ff0f0a0f4110b66def`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `bf1207dac81163e094797e5cecca612b50ac208a1e85f81b4ba599083ab632c5`.
