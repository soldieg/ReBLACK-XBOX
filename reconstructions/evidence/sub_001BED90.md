Candidate `sub_001BED90` - manifest lot 138, position 57; address `0x001BED90`; candidate span 114 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001bed90`; body 106 bytes in ranges `0x1bed90-0x1beda7; 0x1bedb0-0x1bee01`; 3 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_ff011acc667bab42e4fec41b5a6d3dc48f9b01000ef6138abb70f8d7de95eeff`.
- Non-body gaps included in the manifest span: `0x001beda8-0x001bedaf` = `8d a4 24 00 00 00 00 90`.
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1aed90` equal split `.s` bytes, 114/114; byte SHA-256 `1143bdaa5871cae78f68d418756d9d8478188eda68fac9a599ba24ca9a3e61ea`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `66ae851a485f06c3f6958ad0b95ba2c8868bf248ed914708020c4ba8fb2030a5`.

## Lot 138 manifest candidate evidence (2026-10-29)

- Manifest: lot 138, position 57; address order. Candidate span: 114 bytes (0x001BED90 to exclusive end 0x001BEE02).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 3 incoming call sites; callers: 001e454d@001e4530;001c9eb9@001c9dd0;001eaf18@001eacd0. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AED90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AE110. REA read_bytes evidence ev_ed5878bcff611de751095f0bc7b715f469f679e28dd52648dc42afe509af46d6 returned 114 bytes. XBE raw = derived PE = split = REA; span SHA-256 1143bdaa5871cae78f68d418756d9d8478188eda68fac9a599ba24ca9a3e61ea.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 114 bytes.
- Source SHA-256 66ae851a485f06c3f6958ad0b95ba2c8868bf248ed914708020c4ba8fb2030a5; compiled object SHA-256 4ea3e3d68ed02e97cdb3bdd92ef4a67fcba074896561291cfca80d1e93e4a78b; candidate object SHA-256 bae9c61884728ab4217aa89bfb0df55df34ce8d4aa688d0c25d25e90220d65d4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
