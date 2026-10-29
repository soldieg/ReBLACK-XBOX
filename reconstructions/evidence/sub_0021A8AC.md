# sub_0021A8AC

- Manifest: lot 150, position 55; address order. Candidate span: 28 bytes (0x0021A8AC to exclusive end 0x0021A8C8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x20A8EC; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x209C2C. REA read_bytes evidence ev_54b2bbb03fe28624aa565db9608d3325bb35b12312aa221d8d29487b3807551f returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 3d9fd02c59c83251ecc6d7e4e41af3ed854fe5e73cc7838e0df9dbb1ffcfc2d5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 a64348abbb341887d1e2fb49e6898639a56db0c87c4a545d14011c0b85f6170f; compiled object SHA-256 217fd4f88d1c43dad07e4e64dbda765210c4950d4963f103556cca2ba8ab2a25; candidate object SHA-256 126800a2937f51b7504dc95c1aeb50ad7c99aae763f054d41657d59500673332.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
