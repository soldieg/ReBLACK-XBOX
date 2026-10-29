# sub_000E5CF0

- Manifest: lot 114, position 22; address order. Candidate span: 63 bytes (0x000E5CF0 to exclusive end 0x000E5D2F).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD5CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD5070. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 63 bytes. XBE raw = derived PE = split = REA; span SHA-256 cbda0fec8b998a7d27a701d98d0069272441fc126bb2a1a53c256085d807338c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 63 bytes.
- Source SHA-256 76fec20174ac593f6c4dd6c482036572131b6b597905b26531b01051a83a9adc; compiled object SHA-256 12d1b7cba7c4f2a9bd3b5536a7596a0050606be053d79ee085d3e61a963abf68; candidate object SHA-256 566967f6b7d321dcf632ebc9c5e8448d648a6891707499213791d64928ae203e.
- GitHub Issue: #10532 (https://github.com/soldieg/ReBLACK-XBOX/issues/10532).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
