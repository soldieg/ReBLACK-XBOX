Candidate `sub_001CEED0` - manifest lot 139, position 35; address `0x001CEED0`; candidate span 109 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001ceed0`; body 103 bytes in 2 ranges: `0x001ceed0-0x001cef09; 0x001cef10-0x001cef3c`; 1 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_8798bcb2f150e2f8847e75b3838cb3242d432eb05ffd63bcd8683639cb9ffc38`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cef0a-0x001cef0f` = `8d 9b 00 00 00 00` (0x001cef0a lea ebx, [ebx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1beed0` equal split `.s` bytes, 109/109; byte SHA-256 `8960f7e2368050cc1657b00facc4bf135adb190ebbea48ff0f0a0f4110b66def`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `bf1207dac81163e094797e5cecca612b50ac208a1e85f81b4ba599083ab632c5`.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 35; address order. Candidate span: 109 bytes (0x001CEED0 to exclusive end 0x001CEF3D).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001ede4c@001edc90. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BEED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BE250. REA read_bytes evidence ev_df485bc950ea550d636d1d2d1226c364d2389288a8a97d4bf73b427670522069 returned 109 bytes. XBE raw = derived PE = split = REA; span SHA-256 8960f7e2368050cc1657b00facc4bf135adb190ebbea48ff0f0a0f4110b66def.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 109 bytes.
- Source SHA-256 bf1207dac81163e094797e5cecca612b50ac208a1e85f81b4ba599083ab632c5; compiled object SHA-256 4c98da0ec92551ddff980fa5f799a7147e552d20b8ce8b542d53ef774bda4b20; candidate object SHA-256 2b6a711bf89e176665ac373dc1d8352f61886d7a0d4ab7a12b2a85241f9fc727.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
