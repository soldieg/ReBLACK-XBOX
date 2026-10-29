# sub_000BF3E0

- Manifest: lot 109, position 69; address order. Candidate span: 21 bytes (0x000BF3E0 to exclusive end 0x000BF3F5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF3E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE760. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 5332a31d62b7487335f9bd6c3adc53ab786dcc44deb681c9914e6f9275fc135c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 e9b82dc1f7073ef583638bec46f6151597ecdc9b4d3252eed31f69b9cb2162b3; compiled object SHA-256 b24f7c2ba779de03d07cf69a921580e6307fbdd52d743f7324d68c16751f67ff; candidate object SHA-256 2e4b69700110feefddd850620241471d43d83875689dc1cc5c04401c1a4422f0.
- GitHub Issue: #10166 (https://github.com/soldieg/ReBLACK-XBOX/issues/10166).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
