# sub_000BEC40

- Manifest: lot 109, position 30; address order. Candidate span: 23 bytes (0x000BEC40 to exclusive end 0x000BEC57).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEC40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADFC0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 7f5e895e5452f339414c85221842a6c557852935350df3ba9ddbd1a16fa7dbf3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 91dabb9425e4875fe8bbe264f39c6fe9646836416c68dde67f83acfa6b8fab5e; compiled object SHA-256 a132034a81844a93acd080f0f94345c8b4cf8f65fb5a5deed0fe485a2bdbfd69; candidate object SHA-256 8c2212debb62bdd729af8bb072033cba6c71172aa669369eb301923961ac18fb.
- GitHub Issue: #10136 (https://github.com/soldieg/ReBLACK-XBOX/issues/10136).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
