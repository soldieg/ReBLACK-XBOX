# sub_000BFA10

- Manifest: lot 109, position 98; address order. Candidate span: 13 bytes (0x000BFA10 to exclusive end 0x000BFA1D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFA10; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAED90. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 13 bytes. XBE raw = derived PE = split = REA; span SHA-256 8e29c0938f4d41157b22bcce627d157addf885466a07e6d0c00c1739b3ebf132.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 13 bytes.
- Source SHA-256 ea2a230939939e55f40a9b1b741ddf9c86b67b33a9245b069b136844d780fcbb; compiled object SHA-256 0dbaeba96d9cb53f35007458c3279fcd4e0fe88347f435e485bb3d22bfbc5f33; candidate object SHA-256 1d85d900483199f690decda9dc490bb27c75834ef0ee09a243e94065a8f0073c.
- GitHub Issue: #10194 (https://github.com/soldieg/ReBLACK-XBOX/issues/10194).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
