# sub_000BECA0

- Manifest: lot 109, position 34; address order. Candidate span: 6 bytes (0x000BECA0 to exclusive end 0x000BECA6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAECA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE020. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 7140f35dee6220b79b12aecc27acf5105bf3b77d1588e89fce345de7c16c72b7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 dc89d41ea38d761c7ea7523cd8bcc170456e0fa16f352618c5ab8007e77f15f0; compiled object SHA-256 b1b38202275ea82d25c8d2a0d8f8652e521395da5b2ccf4d951862cce35d3d2f; candidate object SHA-256 8fe765c1235ce61c1bcd61ff1898906b02c4bdf770654bd7041cb6987fb3f2b8.
- GitHub Issue: #10140 (https://github.com/soldieg/ReBLACK-XBOX/issues/10140).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
