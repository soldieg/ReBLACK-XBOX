# sub_000E1FB0

- Manifest: lot 113, position 23; address order. Candidate span: 6 bytes (0x000E1FB0 to exclusive end 0x000E1FB6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1FB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1330. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 d1aaa6f9657e609073d3fcef9618523638ce6e1361c2befc5c167e2eba14d5e9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 d1d996c322f5401bb05573f4e60b79ad5c043f5eb2e473db2f959e66a91c3e55; compiled object SHA-256 3a046dcaa327b124e2ca259c79ed968758575430bd4933bcf0233ad35bcc3b7c; candidate object SHA-256 b76b13475683e1e6e0da37e5e4385e096260847e26df92abd49b150267585b52.
- GitHub Issue: #10436 (https://github.com/soldieg/ReBLACK-XBOX/issues/10436).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
