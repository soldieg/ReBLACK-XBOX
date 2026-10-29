# sub_000BFF40

- Manifest: lot 110, position 11; address order. Candidate span: 19 bytes (0x000BFF40 to exclusive end 0x000BFF53).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFF40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF2C0. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 19 bytes. XBE raw = derived PE = split = REA; span SHA-256 fcb6df6b23c70ba979a8622584c42847f99e4056d9c3c54ce0c2bbcdb0965e42.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 19 bytes.
- Source SHA-256 f8998ab0ebe4c7626884c037645e865f577edc155c57564784cd60e9fd46239d; compiled object SHA-256 48c729aaf40a7e384d63faf0ebb8ad00e568c86867649456ae9e6be2d1398638; candidate object SHA-256 599bd40313cf94be124342b3cc73cdc6b120958ecd48a07fb6b16dcbed81956e.
- GitHub Issue: #10205 (https://github.com/soldieg/ReBLACK-XBOX/issues/10205).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
