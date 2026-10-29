# sub_001B4AE0

- Manifest: lot 134, position 58; address order. Candidate span: 3 bytes (0x001B4AE0 to exclusive end 0x001B4AE3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4AE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3E60. REA read_bytes evidence ev_b548956d9f3d394ae6680a3c10d69b86bd8cca2a80e771035ed66d9fa156420b returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 462675ee2d544d950ea7a4ebf81a2a1f378b399b0e76b48be441b948b8308f1b; compiled object SHA-256 8735350db4dc09a4d1ccdb194eff0dc1fca42589895a26a2d0fcd62f10225a53; candidate object SHA-256 7d1f3186374360b2e80b511e7c0055f6dd2cacfcd374e346b80001fea5cc1daa.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
