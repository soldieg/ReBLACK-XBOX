# sub_000E9EB0

- Manifest: lot 114, position 73; address order. Candidate span: 186 bytes (0x000E9EB0 to exclusive end 0x000E9F6A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD9EB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD9230. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 186 bytes. XBE raw = derived PE = split = REA; span SHA-256 6e05838a839adbdfaa416093fe096761d945f2534b717fe4163b2405433fe76c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 186 bytes.
- Source SHA-256 28f2c6c6fe625dac36a1609a0a8f8fd58cf68d7eb54e3cdb2399207cf9c71d8c; compiled object SHA-256 70e969fe444bd60516c92d8d5142cd4e4a06b79ed6526701176e91e92246ebf0; candidate object SHA-256 78f16b538aa172c8b12491ae4ea0e2433b44ff2f076e9614a14553d9c3b33978.
- GitHub Issue: #10576 (https://github.com/soldieg/ReBLACK-XBOX/issues/10576).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
