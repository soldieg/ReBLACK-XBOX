# sub_000BE9D0

- Manifest: lot 109, position 18; address order. Candidate span: 34 bytes (0x000BE9D0 to exclusive end 0x000BE9F2).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE9D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADD50. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 34 bytes. XBE raw = derived PE = split = REA; span SHA-256 f7a9622f9c4e27f132bc7aea41e2fa74a0288abce85802f8806077eee7708001.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 34 bytes.
- Source SHA-256 d4c5c0d7a4837acbb25b88800f437e2de42575ea30535281465858832e07c4ac; compiled object SHA-256 69288d84b889eec0d93952d0ed6460576d0baa82404269b8b16aa4f6ef12b6c3; candidate object SHA-256 d86786e6677bf5a60aedcb6d0d1b047d682b6af842e8cdf35bfeec160bba7d5f.
- GitHub Issue: #10126 (https://github.com/soldieg/ReBLACK-XBOX/issues/10126).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
