# sub_000EBFB0

- Manifest: lot 114, position 82; address order. Candidate span: 382 bytes (0x000EBFB0 to exclusive end 0x000EC12E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xDBFB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xDB330. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 382 bytes. XBE raw = derived PE = split = REA; span SHA-256 b6bc1b15da591bec88f0935b0882e932c135d7842ad8317a871a007e4f743f34.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 382 bytes.
- Source SHA-256 b9585d2c84bc6e5a4b3e68b10157554e47fe59b8fbb9a0f73a0ce86f31c2e763; compiled object SHA-256 39d16619dcfcac6692d58843308de33a557bff4deef851a0ed68c112b092c738; candidate object SHA-256 641ac4ba02cfeb5f167a4de7ccd7af9c84a3b4f97998076e02ff263225f6f983.
- GitHub Issue: #10585 (https://github.com/soldieg/ReBLACK-XBOX/issues/10585).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
