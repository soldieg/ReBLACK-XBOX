# sub_000BEFC0

- Manifest: lot 109, position 45; address order. Candidate span: 20 bytes (0x000BEFC0 to exclusive end 0x000BEFD4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEFC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE340. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 f0e5fb9ce064df0f048da821e08855fd667177b6f607c7516ee9660b366bbdbd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 0fb26e3d94f25f4e4be8b03daa70d8c04a33c3e44ab5ed581441d3e89c3f5e30; compiled object SHA-256 20aa2b7e725e3351370c9e8cb9a1a33cd4ffd98d8a4343b0a3303406465cc321; candidate object SHA-256 61dfc7625491d6ff5e3488f1106fac833cf0a847344cafb158b88d88319c7176.
- GitHub Issue: #10148 (https://github.com/soldieg/ReBLACK-XBOX/issues/10148).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
