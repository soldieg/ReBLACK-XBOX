Candidate `sub_001D3EE0` - manifest lot 139, position 57; address `0x001D3EE0`; candidate span 160 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001d3ee0`; body 150 bytes in 2 ranges: `0x001d3ee0-0x001d3f05; 0x001d3f10-0x001d3f7f`; 1 direct callers, 3 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_7f2bc7a6c33c3752151e7df7eaa4c01a88bae09a8ee61fd949bbb65857697e63`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001d3f06-0x001d3f0f` = `8d a4 24 00 00 00 00 8d 49 00` (0x001d3f06 lea esp, [esp]; 0x001d3f0d lea ecx, [ecx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1c3ee0` equal split `.s` bytes, 160/160; byte SHA-256 `b2b9c84078cd2027cb3e59a45662c58aa4362e60dc4f6df56f1a4e2568073b72`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `9e110e747db911bd32a47f84f7a9b617245164ad23b916e0ac0ad5f7dfb0c13d`.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 57; address order. Candidate span: 160 bytes (0x001D3EE0 to exclusive end 0x001D3F80).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001e7d9a@001e7ce0. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1C3EE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1C3260. REA read_bytes evidence ev_45f5927e6ee4028c0b490b6bb247710879fd9a330a32c21f877606f65b79c71b returned 160 bytes. XBE raw = derived PE = split = REA; span SHA-256 b2b9c84078cd2027cb3e59a45662c58aa4362e60dc4f6df56f1a4e2568073b72.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 160 bytes.
- Source SHA-256 9e110e747db911bd32a47f84f7a9b617245164ad23b916e0ac0ad5f7dfb0c13d; compiled object SHA-256 da87f71bb9fe59af10129da2781d1590d46cd0cb6f15846f533a53eeb77e05a1; candidate object SHA-256 a16b4dfc4cf31006393ebccd790f474444c87a97b6c64674edfe899a97d6dde4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
