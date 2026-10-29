Candidate `sub_001CADE0` - manifest lot 139, position 14; address `0x001CADE0`; candidate span 228 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001cade0`; body 222 bytes in 2 ranges: `0x001cade0-0x001cae09; 0x001cae10-0x001caec3`; 1 direct callers, 0 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_e014befb65584945c5fa334fd3263281bed88dddb5264aae3d3acd18e74a3f9e`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cae0a-0x001cae0f` = `8d 9b 00 00 00 00` (0x001cae0a lea ebx, [ebx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1bade0` equal split `.s` bytes, 228/228; byte SHA-256 `ca84d3434faf357b12b22e7874961db1927fa4b8e5b25af4c365c5799e8f4616`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `d23f269ca4612ad4cf513727a2e8977827e28495678350988bd141a525337502`.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 14; address order. Candidate span: 228 bytes (0x001CADE0 to exclusive end 0x001CAEC4).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001d0485@001d0440. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BADE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BA160. REA read_bytes evidence ev_a6a33e111a21919fec0b481049fa2d872bbb08da82c31050eb8de6b580653d86 returned 228 bytes. XBE raw = derived PE = split = REA; span SHA-256 ca84d3434faf357b12b22e7874961db1927fa4b8e5b25af4c365c5799e8f4616.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 228 bytes.
- Source SHA-256 d23f269ca4612ad4cf513727a2e8977827e28495678350988bd141a525337502; compiled object SHA-256 442995a65188a8a45c455111d0164596b4ea26c643b33fe832dbd5b61e9cc014; candidate object SHA-256 c924c53692d0099095bd2d46feeb65218d718db1353401f68d1a577020826f01.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
