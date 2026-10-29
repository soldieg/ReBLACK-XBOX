# sub_000ADA70

- Manifest: lot 107, position 11; address order. Candidate span: 24 bytes (0x000ADA70 to exclusive end 0x000ADA88).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9DA70; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9CDF0. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 8777e130a5de942a2eb3347a44f0d7737fe4d07d7c799eb13d3a29624e438706.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 92998bb1ec9a803978fdbf75a15516d9a5929957ab5f173473fbe62f404df2cb; compiled object SHA-256 97d0f591ee655bf9e017733410d5f010f42cb2495e863bd02bf8e9e4d6d6f025; candidate object SHA-256 7fe5409e2e534978cd210cde337e0aa7fdd4b8c6dcf598b7a9d7034c500e7146.
- GitHub Issue: #9937 (https://github.com/soldieg/ReBLACK-XBOX/issues/9937).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
